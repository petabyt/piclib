// Main header file for Camlib
// Copyright 2022 by Daniel C (https://github.com/petabyt/camlib)
#ifndef PTP_LIB_H
#define PTP_LIB_H

#include <stdio.h>
#include <stdint.h>
#include <pthread.h>

#include "ptp.h"

// Max timeout for command read/writes
#define PTP_TIMEOUT 1000

// How much ms to wait for r->wait_for_response
#define CAMLIB_WAIT_MS 1000

// Conforms to POSIX 2001, some compilers may not have it
#ifndef CAMLIB_SLEEP
	#include <unistd.h>
	//int usleep(unsigned int usec);
	#define CAMLIB_SLEEP(ms) usleep(ms * 1000)
#endif

// Logging+panic mechanism, define it yourself or link in log.c
void ptp_verbose_log(char *fmt, ...);
void ptp_panic(char *fmt, ...);

// Optional, used by frontend in bindings
#ifndef CAMLIB_PLATFORM
	#ifdef WIN32
		#define CAMLIB_PLATFORM "windows"
	#else
		#define CAMLIB_PLATFORM "linux"
	#endif
#endif

// 4mb recommended default buffer size
#define CAMLIB_DEFAULT_SIZE 8000000

// Transparency pixel used in liveview processor. Will be packed as RGB uint32
// uncompressed array of pixels in little-endian. This will be used as the first byte.
#ifndef PTP_LV_TRANSPARENCY_PIXEL
	#define PTP_LV_TRANSPARENCY_PIXEL 0x0
#endif

// Camlib library errors, not PTP return codes
enum PtpGeneralError {
	PTP_OK = 0,
	PTP_NO_DEVICE = -1,
	PTP_NO_PERM = -2,
	PTP_OPEN_FAIL = -3,
	PTP_OUT_OF_MEM = -4,
	PTP_IO_ERR = -5,
	PTP_RUNTIME_ERR = -6,
	PTP_UNSUPPORTED = -7,
	PTP_CHECK_CODE = -8,
};

enum PtpLiveViewType {
	PTP_LV_NONE = 0,
	PTP_LV_EOS = 1,
	PTP_LV_CANON = 2,
	PTP_LV_ML = 3, // ptplv v1
	PTP_LV_EOS_ML_BMP = 4, // ptplv v2
};

// Unique camera types - each type should have similar opcodes and behavior
enum PtpVendors {
	PTP_DEV_EMPTY = 0,
	PTP_DEV_EOS = 1,
	PTP_DEV_CANON = 2,
	PTP_DEV_NIKON = 3,
	PTP_DEV_SONY = 4,
	PTP_DEV_FUJI = 5,
	PTP_DEV_PANASONIC = 6,
};

// Wrapper types for vendor specific capture modes
enum ImageFormats {
	IMG_FORMAT_ETC = 0,
	IMG_FORMAT_RAW = 1,
	IMG_FORMAT_STD = 2,
	IMG_FORMAT_HIGH = 3,
	IMG_FORMAT_RAW_JPEG = 4,
};

enum PtpConnType {
	PTP_IP = (1 << 0),
	PTP_IP_USB = (1 << 1), // TCP-based, but using USB-style packets (Fujifilm)
	PTP_USB = (1 << 2),
};

// Linked list to handle currently possible values for a property
struct PtpPropAvail {
	void *next;
	void *prev;
	int code;
	int memb_size;
	int memb_cnt;
	void *data;
};

struct PtpRuntime {
	// Set to 1 to kill all IO operations. By default, this is 1. When a valid connection
	// is achieved by libusb, libwpd, and tcp backends, it will be set to 0. On IO error, it
	// will be set to 1.
	// TODO: Should the IO backend toggle the IO kill switch
	uint8_t io_kill_switch;

	// Is set to USB by default
	uint8_t connection_type;

	// The transaction ID and session ID is managed by the
	// packet generator functions
	int transaction;
	int session;

	// Global buffer for data reading and writing
    uint8_t *data;
    int data_length;

	// For optimization on libusb, as many bytes as possible should be read at once. Generally this
	// is 512, but certain comm backends can manage more. For TCP, this isn't used.
	int max_packet_size;

	// Info about current connection, used to detect the vendor, supported opodes. Unless you are using
	// bindings, set these yourself.
	int device_type;
	struct PtpDeviceInfo *di;

	// For Windows compatibility, this is set to indicate lenth for a data packet
	// that will be sent after a command packet. Will be set to zero when ptp_send_bulk_packets is called.
	int data_phase_length;

	// For networking
	int fd;
	int evfd;

	// For session comm/io structures (holds libusb devices pointers)
	void *comm_backend;

	// Optional (see CAMLIB_DONT_USE_MUTEX)
	pthread_mutex_t *mutex;

	// For when the caller intends to do long-term processing on r->data,
	// setting this to 1 allows the caller to unlock the packet read/write mutex (and write thread-safe code)
	uint8_t caller_unlocks_mutex;

	// Optionally wait up to 256 seconds for a response. Some PTP operations require this, such as EOS capture.
	uint8_t wait_for_response;

	struct PtpPropAvail *avail;
};

// Generic event / property change
struct PtpGenericEvent {
	uint16_t code;
	const char *name;
	int value;
	const char *str_value;
};

// Generic PTP command structure - accepted by operation API
struct PtpCommand {
	uint16_t code;
	uint32_t params[5];
	int param_length;
	int data_length;
};

// Returns info from the response structure currently in the buffer - not thread safe
int ptp_get_return_code(struct PtpRuntime *r);

// Get number of parameters in packet in data buffer
int ptp_get_param_length(struct PtpRuntime *r);

// Get parameter at index i
uint32_t ptp_get_param(struct PtpRuntime *r, int index);

// Get transaction ID of last packet
int ptp_get_last_transaction_id(struct PtpRuntime *r);

// Get ptr of packet payload, after packet header
uint8_t *ptp_get_payload(struct PtpRuntime *r);
int ptp_get_payload_length(struct PtpRuntime *r);

// Allocate new PtpRuntime based on bitfield options - see PtpConnType
struct PtpRuntime *ptp_new(int options);

// Reset all session-specific fields of PtpRuntime - both libusb and libwpd backends call
// this before establishing connection, so this is not required
void ptp_reset(struct PtpRuntime *r);

// Init PtpRuntime locally - uses default recommended settings (USB)
void ptp_init(struct PtpRuntime *r);

// Frees PtpRuntime data buffer - doesn't free the actual structure, or device info (yet)
void ptp_close(struct PtpRuntime *r);

// Send a command request to the device with no data phase (thread safe)
int ptp_send(struct PtpRuntime *r, struct PtpCommand *cmd);

// Send a command request to the device with a data phase (thread safe)
int ptp_send_data(struct PtpRuntime *r, struct PtpCommand *cmd, void *data, int length);

// Try and get an event from the camera over int endpoint (USB-only)
int ptp_get_event(struct PtpRuntime *r, struct PtpEventContainer *ec);

// Lock the IO mutex - this will not do anything if ptp_mutex_keep_locked was previously called
void ptp_mutex_unlock(struct PtpRuntime *r);

// When calling a thread-safe function, this will garuntee the mutex locked, in the
// case that you want to continue using the buffer.
void ptp_mutex_keep_locked(struct PtpRuntime *r);

// Lock the IO mutex - this will always work
void ptp_mutex_lock(struct PtpRuntime *r);

// Check info on the device info structure currently in r->di - will return error
// if r->di is NULL
int ptp_device_type(struct PtpRuntime *r);
int ptp_check_opcode(struct PtpRuntime *r, int op);
int ptp_check_prop(struct PtpRuntime *r, int code);

// Mostly for internal use - realloc the data buffer
int ptp_buffer_resize(struct PtpRuntime *r, size_t size);

// Packet builder/unpacker helper functions. These accept a pointer-to-pointer
// and will advance the dereferenced pointer by amount read. Mostly for internal use.
// These functions accept (void *), but really wants (void **), but (void **) would require casting in every call
uint8_t ptp_read_uint8(void *dat);
uint16_t ptp_read_uint16(void *dat);
uint32_t ptp_read_uint32(void *dat);
void ptp_read_string(void *dat, char *string, int max);
int ptp_read_uint16_array(void *dat, uint16_t *buf, int max);
int ptp_read_uint32_array(void *dat, uint16_t *buf, int max);
int ptp_wide_string(char *buffer, int max, char *input);
void ptp_write_uint8(void *dat, uint8_t b);
int ptp_write_uint32(void *dat, uint32_t b);
int ptp_write_string(void *dat, char *string);
int ptp_write_utf8_string(void *dat, char *string);
int ptp_write_unicode_string(char *dat, char *string);
int ptp_read_unicode_string(char *buffer, char *dat, int max);
void ptp_read_utf8_string(void *dat, char *string, int max);

// Build a new PTP/IP or PTP/USB command packet in r->data
int ptp_new_cmd_packet(struct PtpRuntime *r, struct PtpCommand *cmd);

// Only for PTP_USB or PTP_USB_IP use
int ptp_new_data_packet(struct PtpRuntime *r, struct PtpCommand *cmd, void *data, int data_length);

// Only use for PTP_IP
int ptpip_data_start_packet(struct PtpRuntime *r, int data_length);
int ptpip_data_end_packet(struct PtpRuntime *r, void *data, int data_length);

// Used only by ptp_open_session
void ptp_update_transaction(struct PtpRuntime *r, int t);

// Set avail info for prop
void ptp_set_prop_avail_info(struct PtpRuntime *r, int code, int memb_size, int cnt, void *data);

// Duplicate array, return malloc'd buffer
// TODO: deprecate this
struct UintArray *ptp_dup_uint_array(struct UintArray *arr);

void *ptp_dup_payload(struct PtpRuntime *r);

// Write r->data to a file called DUMP
int ptp_dump(struct PtpRuntime *r);

#include "cl_data.h"
#include "cl_backend.h"
#include "cl_ops.h"
#include "cl_enum.h"
#include "cl_bind.h"

// Deprecated old functions
void ptp_generic_reset(struct PtpRuntime *r) __attribute__ ((deprecated));
struct PtpRuntime *ptp_generic_new() __attribute__ ((deprecated));
void ptp_generic_init(struct PtpRuntime *r) __attribute__ ((deprecated));
void ptp_generic_close(struct PtpRuntime *r) __attribute__ ((deprecated));
int ptp_generic_send(struct PtpRuntime *r, struct PtpCommand *cmd) __attribute__ ((deprecated));
int ptp_generic_send_data(struct PtpRuntime *r, struct PtpCommand *cmd, void *data, int length) __attribute__ ((deprecated));
int ptp_generic_send(struct PtpRuntime *r, struct PtpCommand *cmd) __attribute__ ((deprecated));
int ptp_generic_send_data(struct PtpRuntime *r, struct PtpCommand *cmd, void *data, int length) __attribute__ ((deprecated));

// Backwards compatibility (mostly renamed functions)
#ifndef CAMLIB_NO_COMPAT
	#define ptp_get_last_transaction(...) ptp_get_last_transaction_id(__VA_ARGS__)
	#define ptp_generic_new(...) ptp_new(__VA_ARGS__)
	#define ptp_generic_close(...) ptp_close(__VA_ARGS__)
	#define ptp_generic_reset(...) ptp_reset(__VA_ARGS__)
	#define ptp_generic_init(...) ptp_init(__VA_ARGS__)
	#define ptp_generic_send(...) ptp_send(__VA_ARGS__)
	#define ptp_generic_send_data(...) ptp_send_data(__VA_ARGS__)
#endif

#endif
