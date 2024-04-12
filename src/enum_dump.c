// autogenerated file
#include <cl_enum.h>
struct PtpEnum ptp_enums[] = {
{PTP_ENUM, 0, "PTP_PACKET_TYPE_COMMAND", 0x1},
{PTP_ENUM, 0, "PTP_PACKET_TYPE_DATA", 0x2},
{PTP_ENUM, 0, "PTP_PACKET_TYPE_RESPONSE", 0x3},
{PTP_ENUM, 0, "PTP_PACKET_TYPE_EVENT", 0x4},
{PTP_OC, 0, "PTP_OC_GetDeviceInfo", 0x1001},
{PTP_OC, 0, "PTP_OC_OpenSession", 0x1002},
{PTP_OC, 0, "PTP_OC_CloseSession", 0x1003},
{PTP_OC, 0, "PTP_OC_GetStorageIDs", 0x1004},
{PTP_OC, 0, "PTP_OC_GetStorageInfo", 0x1005},
{PTP_OC, 0, "PTP_OC_GetNumObjects", 0x1006},
{PTP_OC, 0, "PTP_OC_GetObjectHandles", 0x1007},
{PTP_OC, 0, "PTP_OC_GetObjectInfo", 0x1008},
{PTP_OC, 0, "PTP_OC_GetObject", 0x1009},
{PTP_OC, 0, "PTP_OC_GetThumb", 0x100A},
{PTP_OC, 0, "PTP_OC_DeleteObject", 0x100B},
{PTP_OC, 0, "PTP_OC_SendObjectInfo", 0x100C},
{PTP_OC, 0, "PTP_OC_SendObject", 0x100D},
{PTP_OC, 0, "PTP_OC_InitiateCapture", 0x100E},
{PTP_OC, 0, "PTP_OC_FormatStore", 0x100F},
{PTP_OC, 0, "PTP_OC_ResetDevice", 0x1010},
{PTP_OC, 0, "PTP_OC_SelfTest", 0x1011},
{PTP_OC, 0, "PTP_OC_SetObjectProtection", 0x1012},
{PTP_OC, 0, "PTP_OC_PowerDown", 0x1013},
{PTP_OC, 0, "PTP_OC_GetDevicePropDesc", 0x1014},
{PTP_OC, 0, "PTP_OC_GetDevicePropValue", 0x1015},
{PTP_OC, 0, "PTP_OC_SetDevicePropValue", 0x1016},
{PTP_OC, 0, "PTP_OC_ResetDevicePropValue", 0x1017},
{PTP_OC, 0, "PTP_OC_TerminateOpenCapture", 0x1018},
{PTP_OC, 0, "PTP_OC_MoveObject", 0x1019},
{PTP_OC, 0, "PTP_OC_CopyObject", 0x101A},
{PTP_OC, 0, "PTP_OC_GetPartialObject", 0x101B},
{PTP_OC, 0, "PTP_OC_InitiateOpenCapture", 0x101C},
{PTP_OC, 0, "PTP_OC_MTP_GetObjectPropsSupported", 0x9801},
{PTP_OC, 0, "PTP_OC_MTP_GetObjectPropDesc", 0x9802},
{PTP_OC, 0, "PTP_OC_MTP_GetObjectPropValue", 0x9803},
{PTP_OC, 0, "PTP_OC_MTP_SetObjectPropValue", 0x9804},
{PTP_OC, 0, "PTP_OC_MTP_GetObjPropList", 0x9805},
{PTP_OC, 0, "PTP_OC_MTP_SetObjPropList", 0x9806},
{PTP_OC, 0, "PTP_OC_MTP_SendObjectPropList", 0x9808},
{PTP_OC, 0, "PTP_OC_MTP_GetObjectReferences", 0x9810},
{PTP_OC, 0, "PTP_OC_MTP_SetObjectReferences", 0x9811},
{PTP_OC, 0, "PTP_OC_MTP_UpdateDeviceFirmware", 0x9812},
{PTP_OC, 0, "PTP_OC_MTP_Skip", 0x9820},
{PTP_OC, 3, "PTP_OC_NIKON_Capture", 0x90C0},
{PTP_OC, 3, "PTP_OC_NIKON_AfCaptureSDRAM", 0x90CB},
{PTP_OC, 3, "PTP_OC_NIKON_StartLiveView", 0x9201},
{PTP_OC, 3, "PTP_OC_NIKON_EndLiveView", 0x9202},
{PTP_OC, 3, "PTP_OC_NIKON_GetEvent", 0x90C7},
{PTP_OC, 2, "PTP_OC_CANON_ViewFinderOn", 0x900B},
{PTP_OC, 2, "PTP_OC_CANON_ViewFinderOff", 0x900C},
{PTP_OC, 2, "PTP_OC_CANON_InitCaptureInRAM", 0x901A},
{PTP_OC, 2, "PTP_OC_CANON_GetViewFinderImage", 0x901D},
{PTP_OC, 2, "PTP_OC_CANON_LockUI", 0x9004},
{PTP_OC, 2, "PTP_OC_CANON_UnlockUI", 0x9005},
{PTP_OC, 2, "PTP_OC_CANON_DoNothing", 0x902F},
{PTP_OC, 1, "PTP_OC_EOS_GetStorageIDs", 0x9101},
{PTP_OC, 1, "PTP_OC_EOS_GetStorageInfo", 0x9102},
{PTP_OC, 1, "PTP_OC_EOS_GetObjectInfoEx", 0x9109},
{PTP_OC, 1, "PTP_OC_EOS_SetDevicePropValueEx", 0x9110},
{PTP_OC, 1, "PTP_OC_EOS_SetRemoteMode", 0x9114},
{PTP_OC, 1, "PTP_OC_EOS_SetEventMode", 0x9115},
{PTP_OC, 1, "PTP_OC_EOS_GetEvent", 0x9116},
{PTP_OC, 1, "PTP_OC_EOS_PCHDDCapacity", 0x911A},
{PTP_OC, 1, "PTP_OC_EOS_SetUILock", 0x911B},
{PTP_OC, 1, "PTP_OC_EOS_ResetUILock", 0x911C},
{PTP_OC, 1, "PTP_OC_EOS_KeepDeviceOn", 0x911D},
{PTP_OC, 1, "PTP_OC_EOS_UpdateFirmware", 0x911F},
{PTP_OC, 1, "PTP_OC_EOS_BulbStart", 0x9125},
{PTP_OC, 1, "PTP_OC_EOS_BulbEnd", 0x9126},
{PTP_OC, 1, "PTP_OC_EOS_GetDevicePropValue", 0x9127},
{PTP_OC, 1, "PTP_OC_EOS_RemoteReleaseOn", 0x9128},
{PTP_OC, 1, "PTP_OC_EOS_RemoteReleaseOff", 0x9129},
{PTP_OC, 1, "PTP_OC_EOS_DriveLens", 0x9155},
{PTP_OC, 1, "PTP_OC_EOS_InitiateViewfinder", 0x9151},
{PTP_OC, 1, "PTP_OC_EOS_TerminateViewfinder", 0x9152},
{PTP_OC, 1, "PTP_OC_EOS_GetViewFinderData", 0x9153},
{PTP_OC, 1, "PTP_OC_EOS_DoAutoFocus", 0x9154},
{PTP_OC, 1, "PTP_OC_EOS_AfCancel", 0x9160},
{PTP_OC, 1, "PTP_OC_EOS_SetDefaultSetting", 0x91BE},
{PTP_OC, 1, "PTP_OC_EOS_EnableEventProc", 0x9050},
{PTP_OC, 1, "PTP_OC_EOS_ExecuteEventProc", 0x9052},
{PTP_OC, 1, "PTP_OC_EOS_GetEventProcReturnData", 0x9053},
{PTP_OC, 1, "PTP_OC_EOS_IsEventProcRunning", 0x9057},
{PTP_ENUM, 0, "EOS_DESTINATION_CAM", 0x2},
{PTP_ENUM, 0, "EOS_DESTINATION_PC", 0x4},
{PTP_ENUM, 0, "EOS_DESTINATION_BOTH", 0x6},
{PTP_RC, 0, "PTP_RC_Undefined", 0x2000},
{PTP_RC, 0, "PTP_RC_OK", 0x2001},
{PTP_RC, 0, "PTP_RC_GeneralError", 0x2002},
{PTP_RC, 0, "PTP_RC_SessionNotOpen", 0x2003},
{PTP_RC, 0, "PTP_RC_InvalidTransactionID", 0x2004},
{PTP_RC, 0, "PTP_RC_OperationNotSupported", 0x2005},
{PTP_RC, 0, "PTP_RC_ParameterNotSupported", 0x2006},
{PTP_RC, 0, "PTP_RC_IncompleteTransfer", 0x2007},
{PTP_RC, 0, "PTP_RC_InvalidStorageId", 0x2008},
{PTP_RC, 0, "PTP_RC_InvalidObjectHandle", 0x2009},
{PTP_RC, 0, "PTP_RC_DevicePropNotSupported", 0x200A},
{PTP_RC, 0, "PTP_RC_InvalidObjectFormatCode", 0x200B},
{PTP_RC, 0, "PTP_RC_StoreFull", 0x200C},
{PTP_RC, 0, "PTP_RC_ObjectWriteProtected", 0x200D},
{PTP_RC, 0, "PTP_RC_StoreReadOnly", 0x200E},
{PTP_RC, 0, "PTP_RC_AccessDenied", 0x200F},
{PTP_RC, 0, "PTP_RC_NoThumbnailPresent", 0x2010},
{PTP_RC, 0, "PTP_RC_SelfTestFailed", 0x2011},
{PTP_RC, 0, "PTP_RC_PartialDeletion", 0x2012},
{PTP_RC, 0, "PTP_RC_StoreNotAvailable", 0x2013},
{PTP_RC, 0, "PTP_RC_SpecByFormatUnsupported", 0x2014},
{PTP_RC, 0, "PTP_RC_NoValidObjectInfo", 0x2015},
{PTP_RC, 0, "PTP_RC_InvalidCodeFormat", 0x2016},
{PTP_RC, 0, "PTP_RC_UnknownVendorCode", 0x2017},
{PTP_RC, 0, "PTP_RC_CaptureAlreadyTerminated", 0x2018},
{PTP_RC, 0, "PTP_RC_DeviceBusy", 0x2019},
{PTP_RC, 0, "PTP_RC_InvalidParentObject", 0x201A},
{PTP_RC, 0, "PTP_RC_InvalidDevicePropFormat", 0x201B},
{PTP_RC, 0, "PTP_RC_InvalidDevicePropValue", 0x201C},
{PTP_RC, 0, "PTP_RC_InvalidParameter", 0x201D},
{PTP_RC, 0, "PTP_RC_SessionAlreadyOpened", 0x201E},
{PTP_RC, 0, "PTP_RC_TransactionCanceled", 0x201F},
{PTP_RC, 0, "PTP_RC_SpecOfDestinationUnsupported", 0x2020},
{PTP_RC, 2, "PTP_RC_CANON_Unknown", 0xA001},
{PTP_RC, 2, "PTP_RC_CANON_NotReady", 0xA102},
{PTP_RC, 2, "PTP_RC_CANON_BatteryLow", 0xA101},
{PTP_RC, 0, "PTP_RC_UndefinedMTP", 0xA800},
{PTP_RC, 0, "PTP_RC_InvalidObjPropCode", 0xA801},
{PTP_RC, 0, "PTP_RC_InvalidObjPropCodeFormat", 0xA802},
{PTP_RC, 0, "PTP_RC_InvalidObjPropCodeValue", 0xA803},
{PTP_RC, 0, "PTP_RC_InvalidObjReference", 0xA804},
{PTP_RC, 0, "PTP_RC_InvalidDataset", 0xA806},
{PTP_RC, 0, "PTP_RC_GroupSpecUnsupported", 0xA807},
{PTP_RC, 0, "PTP_RC_DepthSpecUnsupported", 0xA808},
{PTP_RC, 0, "PTP_RC_ObjectTooLarge", 0xA809},
{PTP_RC, 0, "PTP_RC_ObjectPropUnsupported", 0xA80A},
{PTP_EC, 0, "PTP_EC_Undefined", 0x4000},
{PTP_EC, 0, "PTP_EC_CancelTransaction", 0x4001},
{PTP_EC, 0, "PTP_EC_ObjectAdded", 0x4002},
{PTP_EC, 0, "PTP_EC_ObjectRemoved", 0x4003},
{PTP_EC, 0, "PTP_EC_StoreAdded", 0x4004},
{PTP_EC, 0, "PTP_EC_StoreRemoved", 0x4005},
{PTP_EC, 0, "PTP_EC_DevicePropChanged", 0x4006},
{PTP_EC, 0, "PTP_EC_ObjectInfoChanged", 0x4007},
{PTP_EC, 0, "PTP_EC_DeviceInfoChanged", 0x4008},
{PTP_EC, 0, "PTP_EC_RequestObjectTransfer", 0x4009},
{PTP_EC, 0, "PTP_EC_StoreFull", 0x400A},
{PTP_EC, 0, "PTP_EC_DeviceReset", 0x400B},
{PTP_EC, 0, "PTP_EC_StorageInfoChanged", 0x400C},
{PTP_EC, 0, "PTP_EC_CaptureComplete", 0x400D},
{PTP_EC, 0, "PTP_EC_UnreportedStatus", 0x400E},
{PTP_EC, 0, "PTP_EC_Canon_RequestObjectTransfer", 0xC009},
{PTP_EC, 1, "PTP_EC_EOS_RequestGetEvent", 0xC101},
{PTP_EC, 1, "PTP_EC_EOS_ObjectAddedEx", 0xC181},
{PTP_EC, 1, "PTP_EC_EOS_ObjectRemoved", 0xC182},
{PTP_EC, 1, "PTP_EC_EOS_RequestGetObjectInfoEx", 0xC183},
{PTP_EC, 1, "PTP_EC_EOS_StorageStatusChanged", 0xC184},
{PTP_EC, 1, "PTP_EC_EOS_StorageInfoChanged", 0xC185},
{PTP_EC, 1, "PTP_EC_EOS_RequestObjectTransfer", 0xc186},
{PTP_EC, 1, "PTP_EC_EOS_ObjectInfoChangedEx", 0xC187},
{PTP_EC, 1, "PTP_EC_EOS_ObjectContentChanged", 0xC188},
{PTP_EC, 1, "PTP_EC_EOS_PropValueChanged", 0xC189},
{PTP_EC, 1, "PTP_EC_EOS_AvailListChanged", 0xC18A},
{PTP_EC, 1, "PTP_EC_EOS_CameraStatusChanged", 0xC18B},
{PTP_EC, 1, "PTP_EC_EOS_WillSoonShutdown", 0xC18D},
{PTP_EC, 1, "PTP_EC_EOS_ShutdownTimerUpdated", 0xC18E},
{PTP_EC, 1, "PTP_EC_EOS_RequestCancelTransfer", 0xC18F},
{PTP_EC, 1, "PTP_EC_EOS_RequestObjectTransferDT", 0xC190},
{PTP_EC, 1, "PTP_EC_EOS_RequestCancelTransferDT", 0xC191},
{PTP_EC, 1, "PTP_EC_EOS_StoreAdded", 0xC192},
{PTP_EC, 1, "PTP_EC_EOS_StoreRemoved", 0xC193},
{PTP_EC, 1, "PTP_EC_EOS_BulbExposureTime", 0xC194},
{PTP_EC, 1, "PTP_EC_EOS_RecordingTime", 0xC195},
{PTP_EC, 1, "PTP_EC_EOS_RequestObjectTransferTS", 0xC1A2},
{PTP_EC, 1, "PTP_EC_EOS_AfResult", 0xC1A3},
{PTP_EC, 1, "PTP_EC_EOS_InfoCheckComplete", 0xC1A4},
{PTP_EC, 0, "PTP_EC_Nikon_ObjectAddedInSDRAM", 0xC101},
{PTP_EC, 0, "PTP_EC_Nikon_CaptureCompleteRecInSdram", 0xC102},
{PTP_OF, 0, "PTP_OF_Undefined", 0x3000},
{PTP_OF, 0, "PTP_OF_Association", 0x3001},
{PTP_OF, 0, "PTP_OF_Script", 0x3002},
{PTP_OF, 0, "PTP_OF_Executable", 0x3003},
{PTP_OF, 0, "PTP_OF_Text", 0x3004},
{PTP_OF, 0, "PTP_OF_HTML", 0x3005},
{PTP_OF, 0, "PTP_OF_DPOF", 0x3006},
{PTP_OF, 0, "PTP_OF_AIFF", 0x3007},
{PTP_OF, 0, "PTP_OF_WAV", 0x3008},
{PTP_OF, 0, "PTP_OF_MP3", 0x3009},
{PTP_OF, 0, "PTP_OF_AVI", 0x300A},
{PTP_OF, 0, "PTP_OF_MPEG", 0x300B},
{PTP_OF, 0, "PTP_OF_ASF", 0x300C},
{PTP_OF, 0, "PTP_OF_MOV", 0x300D},
{PTP_OF, 0, "PTP_OF_JPEG", 0x3801},
{PTP_OF, 0, "PTP_OF_TIFF_EP", 0x3802},
{PTP_OF, 0, "PTP_OF_FlashPix", 0x3803},
{PTP_OF, 0, "PTP_OF_BMP", 0x3804},
{PTP_OF, 0, "PTP_OF_CIFF", 0x3805},
{PTP_OF, 0, "PTP_OF_Reserved2", 0x3806},
{PTP_OF, 0, "PTP_OF_GIF", 0x3807},
{PTP_OF, 0, "PTP_OF_JFIF", 0x3808},
{PTP_OF, 0, "PTP_OF_PCD", 0x3809},
{PTP_OF, 0, "PTP_OF_PICT", 0x380A},
{PTP_OF, 0, "PTP_OF_PNG", 0x380B},
{PTP_OF, 0, "PTP_OF_Reserved1", 0x380C},
{PTP_OF, 0, "PTP_OF_TIFF", 0x380D},
{PTP_OF, 0, "PTP_OF_TIFF_IT", 0x380E},
{PTP_OF, 0, "PTP_OF_JP2", 0x380F},
{PTP_OF, 0, "PTP_OF_JPX", 0x3810},
{PTP_OF, 0, "PTP_OF_Firmware", 0xB802},
{PTP_OF, 0, "PTP_OF_WIF", 0xB881},
{PTP_OF, 0, "PTP_OF_Audio", 0xB900},
{PTP_OF, 0, "PTP_OF_WMA", 0xb901},
{PTP_OF, 0, "PTP_OF_OGG", 0xb902},
{PTP_OF, 0, "PTP_OF_AAC", 0xb903},
{PTP_OF, 0, "PTP_OF_Audible", 0xb904},
{PTP_OF, 0, "PTP_OF_FLAC", 0xb906},
{PTP_OF, 0, "PTP_OF_SamsungPlaylist", 0xb909},
{PTP_OF, 0, "PTP_OF_Video", 0xb980},
{PTP_OF, 0, "PTP_OF_WMV", 0xb981},
{PTP_OF, 0, "PTP_OF_MP4", 0xb982},
{PTP_OF, 0, "PTP_OF_3GP", 0xb984},
{PTP_OF, 0, "PTP_OF_MP2", 0xb983},
{PTP_ENUM, 0, "PTP_OPC_StorageID", 0xDC01},
{PTP_ENUM, 0, "PTP_OPC_ObjectFormat", 0xDC02},
{PTP_ENUM, 0, "PTP_OPC_ProtectionStatus", 0xDC03},
{PTP_ENUM, 0, "PTP_OPC_ObjectSize", 0xDC04},
{PTP_ENUM, 0, "PTP_OPC_AssociationType", 0xDC05},
{PTP_ENUM, 0, "PTP_OPC_AssociationDesc", 0xDC06},
{PTP_ENUM, 0, "PTP_OPC_ObjectFileName", 0xDC07},
{PTP_ENUM, 0, "PTP_OPC_DateCreated", 0xDC08},
{PTP_ENUM, 0, "PTP_OPC_DateModified", 0xDC09},
{PTP_ENUM, 0, "PTP_OPC_Keywords", 0xDC0A},
{PTP_ENUM, 0, "PTP_OPC_ParentObject", 0xDC0B},
{PTP_ENUM, 0, "PTP_OPC_AllowedFolderContents", 0xDC0C},
{PTP_ENUM, 0, "PTP_OPC_Hidden", 0xDC0D},
{PTP_ENUM, 0, "PTP_OPC_SystemObject", 0xDC0E},
{PTP_ENUM, 0, "PTP_OPC_PersistantUniqueObjectIdentifier", 0xDC41},
{PTP_ENUM, 0, "PTP_OPC_SyncID", 0xDC42},
{PTP_ENUM, 0, "PTP_OPC_PropertyBag", 0xDC43},
{PTP_ENUM, 0, "PTP_OPC_Name", 0xDC44},
{PTP_ENUM, 0, "PTP_OPC_CreatedBy", 0xDC45},
{PTP_ENUM, 0, "PTP_OPC_Artist", 0xDC46},
{PTP_ENUM, 0, "PTP_OPC_DateAuthored", 0xDC47},
{PTP_ENUM, 0, "PTP_OPC_Description", 0xDC48},
{PTP_ENUM, 0, "PTP_OPC_URLReference", 0xDC49},
{PTP_ENUM, 0, "PTP_OPC_LanguageLocale", 0xDC4A},
{PTP_ENUM, 0, "PTP_OPC_CopyrightInformation", 0xDC4B},
{PTP_ENUM, 0, "PTP_OPC_Source", 0xDC4C},
{PTP_ENUM, 0, "PTP_OPC_OriginLocation", 0xDC4D},
{PTP_ENUM, 0, "PTP_OPC_DateAdded", 0xDC4E},
{PTP_ENUM, 0, "PTP_OPC_NonConsumable", 0xDC4F},
{PTP_ENUM, 0, "PTP_OPC_CorruptOrUnplayable", 0xDC50},
{PTP_ENUM, 0, "PTP_OPC_ProducerSerialNumber", 0xDC51},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleFormat", 0xDC81},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleSize", 0xDC82},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleHeight", 0xDC83},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleWidth", 0xDC84},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleDuration", 0xDC85},
{PTP_ENUM, 0, "PTP_OPC_RepresentativeSampleData", 0xDC86},
{PTP_ENUM, 0, "PTP_OPC_Width", 0xDC87},
{PTP_ENUM, 0, "PTP_OPC_Height", 0xDC88},
{PTP_ENUM, 0, "PTP_OPC_Duration", 0xDC89},
{PTP_ENUM, 0, "PTP_OPC_Rating", 0xDC8A},
{PTP_ENUM, 0, "PTP_OPC_Track", 0xDC8B},
{PTP_ENUM, 0, "PTP_OPC_Genre", 0xDC8C},
{PTP_ENUM, 0, "PTP_OPC_Credits", 0xDC8D},
{PTP_ENUM, 0, "PTP_OPC_Lyrics", 0xDC8E},
{PTP_ENUM, 0, "PTP_OPC_SubscriptionContentID", 0xDC8F},
{PTP_ENUM, 0, "PTP_OPC_ProducedBy", 0xDC90},
{PTP_ENUM, 0, "PTP_OPC_UseCount", 0xDC91},
{PTP_ENUM, 0, "PTP_OPC_SkipCount", 0xDC92},
{PTP_ENUM, 0, "PTP_OPC_LastAccessed", 0xDC93},
{PTP_ENUM, 0, "PTP_OPC_ParentalRating", 0xDC94},
{PTP_ENUM, 0, "PTP_OPC_MetaGenre", 0xDC95},
{PTP_ENUM, 0, "PTP_OPC_Composer", 0xDC96},
{PTP_ENUM, 0, "PTP_OPC_EffectiveRating", 0xDC97},
{PTP_ENUM, 0, "PTP_OPC_Subtitle", 0xDC98},
{PTP_ENUM, 0, "PTP_OPC_OriginalReleaseDate", 0xDC99},
{PTP_ENUM, 0, "PTP_OPC_AlbumName", 0xDC9A},
{PTP_ENUM, 0, "PTP_OPC_AlbumArtist", 0xDC9B},
{PTP_ENUM, 0, "PTP_OPC_Mood", 0xDC9C},
{PTP_ENUM, 0, "PTP_OPC_DRMStatus", 0xDC9D},
{PTP_ENUM, 0, "PTP_OPC_SubDescription", 0xDC9E},
{PTP_ENUM, 0, "PTP_OPC_IsCropped", 0xDCD1},
{PTP_ENUM, 0, "PTP_OPC_IsColorCorrected", 0xDCD2},
{PTP_ENUM, 0, "PTP_OPC_ImageBitDepth", 0xDCD3},
{PTP_ENUM, 0, "PTP_OPC_Fnumber", 0xDCD4},
{PTP_ENUM, 0, "PTP_OPC_ExposureTime", 0xDCD5},
{PTP_ENUM, 0, "PTP_OPC_ExposureIndex", 0xDCD6},
{PTP_ENUM, 0, "PTP_OPC_DisplayName", 0xDCE0},
{PTP_ENUM, 0, "PTP_OPC_BodyText", 0xDCE1},
{PTP_ENUM, 0, "PTP_OPC_Subject", 0xDCE2},
{PTP_ENUM, 0, "PTP_OPC_Priority", 0xDCE3},
{PTP_ENUM, 0, "PTP_OPC_GivenName", 0xDD00},
{PTP_ENUM, 0, "PTP_OPC_MiddleNames", 0xDD01},
{PTP_ENUM, 0, "PTP_OPC_FamilyName", 0xDD02},
{PTP_ENUM, 0, "PTP_OPC_Prefix", 0xDD03},
{PTP_ENUM, 0, "PTP_OPC_Suffix", 0xDD04},
{PTP_ENUM, 0, "PTP_OPC_PhoneticGivenName", 0xDD05},
{PTP_ENUM, 0, "PTP_OPC_PhoneticFamilyName", 0xDD06},
{PTP_ENUM, 0, "PTP_OPC_EmailPrimary", 0xDD07},
{PTP_ENUM, 0, "PTP_OPC_EmailPersonal1", 0xDD08},
{PTP_ENUM, 0, "PTP_OPC_EmailPersonal2", 0xDD09},
{PTP_ENUM, 0, "PTP_OPC_EmailBusiness1", 0xDD0A},
{PTP_ENUM, 0, "PTP_OPC_EmailBusiness2", 0xDD0B},
{PTP_ENUM, 0, "PTP_OPC_EmailOthers", 0xDD0C},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberPrimary", 0xDD0D},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberPersonal", 0xDD0E},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberPersonal2", 0xDD0F},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberBusiness", 0xDD10},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberBusiness2", 0xDD11},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberMobile", 0xDD12},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberMobile2", 0xDD13},
{PTP_ENUM, 0, "PTP_OPC_FaxNumberPrimary", 0xDD14},
{PTP_ENUM, 0, "PTP_OPC_FaxNumberPersonal", 0xDD15},
{PTP_ENUM, 0, "PTP_OPC_FaxNumberBusiness", 0xDD16},
{PTP_ENUM, 0, "PTP_OPC_PagerNumber", 0xDD17},
{PTP_ENUM, 0, "PTP_OPC_PhoneNumberOthers", 0xDD18},
{PTP_ENUM, 0, "PTP_OPC_PrimaryWebAddress", 0xDD19},
{PTP_ENUM, 0, "PTP_OPC_PersonalWebAddress", 0xDD1A},
{PTP_ENUM, 0, "PTP_OPC_BusinessWebAddress", 0xDD1B},
{PTP_ENUM, 0, "PTP_OPC_InstantMessengerAddress", 0xDD1C},
{PTP_ENUM, 0, "PTP_OPC_InstantMessengerAddress2", 0xDD1D},
{PTP_ENUM, 0, "PTP_OPC_InstantMessengerAddress3", 0xDD1E},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFull", 0xDD1F},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullLine1", 0xDD20},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullLine2", 0xDD21},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullCity", 0xDD22},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullRegion", 0xDD23},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullPostalCode", 0xDD24},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressPersonalFullCountry", 0xDD25},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessFull", 0xDD26},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessLine1", 0xDD27},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessLine2", 0xDD28},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessCity", 0xDD29},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessRegion", 0xDD2A},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessPostalCode", 0xDD2B},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressBusinessCountry", 0xDD2C},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherFull", 0xDD2D},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherLine1", 0xDD2E},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherLine2", 0xDD2F},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherCity", 0xDD30},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherRegion", 0xDD31},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherPostalCode", 0xDD32},
{PTP_ENUM, 0, "PTP_OPC_PostalAddressOtherCountry", 0xDD33},
{PTP_ENUM, 0, "PTP_OPC_OrganizationName", 0xDD34},
{PTP_ENUM, 0, "PTP_OPC_PhoneticOrganizationName", 0xDD35},
{PTP_ENUM, 0, "PTP_OPC_Role", 0xDD36},
{PTP_ENUM, 0, "PTP_OPC_Birthdate", 0xDD37},
{PTP_ENUM, 0, "PTP_OPC_MessageTo", 0xDD40},
{PTP_ENUM, 0, "PTP_OPC_MessageCC", 0xDD41},
{PTP_ENUM, 0, "PTP_OPC_MessageBCC", 0xDD42},
{PTP_ENUM, 0, "PTP_OPC_MessageRead", 0xDD43},
{PTP_ENUM, 0, "PTP_OPC_MessageReceivedTime", 0xDD44},
{PTP_ENUM, 0, "PTP_OPC_MessageSender", 0xDD45},
{PTP_ENUM, 0, "PTP_OPC_ActivityBeginTime", 0xDD50},
{PTP_ENUM, 0, "PTP_OPC_ActivityEndTime", 0xDD51},
{PTP_ENUM, 0, "PTP_OPC_ActivityLocation", 0xDD52},
{PTP_ENUM, 0, "PTP_OPC_ActivityRequiredAttendees", 0xDD54},
{PTP_ENUM, 0, "PTP_OPC_ActivityOptionalAttendees", 0xDD55},
{PTP_ENUM, 0, "PTP_OPC_ActivityResources", 0xDD56},
{PTP_ENUM, 0, "PTP_OPC_ActivityAccepted", 0xDD57},
{PTP_ENUM, 0, "PTP_OPC_Owner", 0xDD5D},
{PTP_ENUM, 0, "PTP_OPC_Editor", 0xDD5E},
{PTP_ENUM, 0, "PTP_OPC_Webmaster", 0xDD5F},
{PTP_ENUM, 0, "PTP_OPC_URLSource", 0xDD60},
{PTP_ENUM, 0, "PTP_OPC_URLDestination", 0xDD61},
{PTP_ENUM, 0, "PTP_OPC_TimeBookmark", 0xDD62},
{PTP_ENUM, 0, "PTP_OPC_ObjectBookmark", 0xDD63},
{PTP_ENUM, 0, "PTP_OPC_ByteBookmark", 0xDD64},
{PTP_ENUM, 0, "PTP_OPC_LastBuildDate", 0xDD70},
{PTP_ENUM, 0, "PTP_OPC_TimetoLive", 0xDD71},
{PTP_ENUM, 0, "PTP_OPC_MediaGUID", 0xDD72},
{PTP_ENUM, 0, "PTP_OPC_TotalBitRate", 0xDE91},
{PTP_ENUM, 0, "PTP_OPC_BitRateType", 0xDE92},
{PTP_ENUM, 0, "PTP_OPC_SampleRate", 0xDE93},
{PTP_ENUM, 0, "PTP_OPC_NumberOfChannels", 0xDE94},
{PTP_ENUM, 0, "PTP_OPC_AudioBitDepth", 0xDE95},
{PTP_ENUM, 0, "PTP_OPC_ScanDepth", 0xDE97},
{PTP_ENUM, 0, "PTP_OPC_AudioWAVECodec", 0xDE99},
{PTP_ENUM, 0, "PTP_OPC_AudioBitRate", 0xDE9A},
{PTP_ENUM, 0, "PTP_OPC_VideoFourCCCodec", 0xDE9B},
{PTP_ENUM, 0, "PTP_OPC_VideoBitRate", 0xDE9C},
{PTP_ENUM, 0, "PTP_OPC_FramesPerThousandSeconds", 0xDE9D},
{PTP_ENUM, 0, "PTP_OPC_KeyFrameDistance", 0xDE9E},
{PTP_ENUM, 0, "PTP_OPC_BufferSize", 0xDE9F},
{PTP_ENUM, 0, "PTP_OPC_EncodingQuality", 0xDEA0},
{PTP_ENUM, 0, "PTP_OPC_EncodingProfile", 0xDEA1},
{PTP_ENUM, 0, "PTP_OPC_BuyFlag", 0xD901},
{PTP_OF, 2, "PTP_OF_CANON_CRW", 0xb101},
{PTP_OF, 0, "PTP_OF_RAW", 0xb103},
{PTP_OF, 2, "PTP_OF_CANON_MOV", 0xb104},
{PTP_ENUM, 0, "PTP_AT_Folder", 0x1},
{PTP_ENUM, 0, "PTP_AT_Album", 0x1},
{PTP_PC, 0, "PTP_PC_BatteryLevel", 0x5001},
{PTP_PC, 0, "PTP_PC_FunctionalMode", 0x5002},
{PTP_PC, 0, "PTP_PC_ImageSize", 0x5003},
{PTP_PC, 0, "PTP_PC_CompressionSetting", 0x5004},
{PTP_PC, 0, "PTP_PC_WhiteBalance", 0x5005},
{PTP_PC, 0, "PTP_PC_RGBGain", 0x5006},
{PTP_PC, 0, "PTP_PC_FNumber", 0x5007},
{PTP_PC, 0, "PTP_PC_FocalLength", 0x5008},
{PTP_PC, 0, "PTP_PC_FocalDistance", 0x5009},
{PTP_PC, 0, "PTP_PC_FocusMode", 0x500A},
{PTP_PC, 0, "PTP_PC_ExposureMeteringMode", 0x500B},
{PTP_PC, 0, "PTP_PC_FlashMode", 0x500C},
{PTP_PC, 0, "PTP_PC_ExposureTime", 0x500D},
{PTP_PC, 0, "PTP_PC_ExposureProgramMode", 0x500E},
{PTP_PC, 0, "PTP_PC_ExposureIndex", 0x500F},
{PTP_PC, 0, "PTP_PC_ExposureBiasCompensation", 0x5010},
{PTP_PC, 0, "PTP_PC_DateTime", 0x5011},
{PTP_PC, 0, "PTP_PC_CaptureDelay", 0x5012},
{PTP_PC, 0, "PTP_PC_StillCaptureMode", 0x5013},
{PTP_PC, 0, "PTP_PC_Contrast", 0x5014},
{PTP_PC, 0, "PTP_PC_Sharpness", 0x5015},
{PTP_PC, 0, "PTP_PC_DigitalZoom", 0x5016},
{PTP_PC, 0, "PTP_PC_EffectMode", 0x5017},
{PTP_PC, 0, "PTP_PC_BurstNumber", 0x5018},
{PTP_PC, 0, "PTP_PC_BurstInterval", 0x5019},
{PTP_PC, 0, "PTP_PC_TimelapseNumber", 0x501A},
{PTP_PC, 0, "PTP_PC_TimelapseInterval", 0x501B},
{PTP_PC, 0, "PTP_PC_FocusMeteringMode", 0x501C},
{PTP_PC, 0, "PTP_PC_UploadURL", 0x501D},
{PTP_PC, 0, "PTP_PC_Artist", 0x501E},
{PTP_PC, 0, "PTP_PC_CopyrightInfo", 0x501F},
{PTP_PC, 0, "PTP_PC_SupportedStreams", 0x5020},
{PTP_PC, 0, "PTP_PC_EnabledStreams", 0x5021},
{PTP_PC, 0, "PTP_PC_VideoFormat", 0x5022},
{PTP_PC, 0, "PTP_PC_VideoResolution", 0x5023},
{PTP_PC, 0, "PTP_PC_VideoQuality", 0x5024},
{PTP_PC, 0, "PTP_PC_VideoFrameRate", 0x5025},
{PTP_PC, 0, "PTP_PC_VideoContrast", 0x5026},
{PTP_PC, 0, "PTP_PC_VideoBrightness", 0x5027},
{PTP_PC, 0, "PTP_PC_AudioFormat", 0x5028},
{PTP_PC, 0, "PTP_PC_AudioBitrate", 0x5029},
{PTP_PC, 0, "PTP_PC_AudioSamplingRate", 0x502A},
{PTP_PC, 0, "PTP_PC_AudioBitPerSample", 0x502B},
{PTP_PC, 0, "PTP_PC_AudioVolume", 0x502C},
{PTP_PC, 2, "PTP_PC_CANON_BeepCode", 0xD001},
{PTP_PC, 2, "PTP_PC_CANON_ViewFinderMode", 0xD003},
{PTP_PC, 2, "PTP_PC_CANON_ImageQuality", 0xD006},
{PTP_PC, 2, "PTP_PC_CANON_ImageSize", 0xD008},
{PTP_PC, 2, "PTP_PC_CANON_FlashMode", 0xD00a},
{PTP_PC, 2, "PTP_PC_CANON_TvAvSetting", 0xD00c},
{PTP_PC, 2, "PTP_PC_CANON_MeteringMode", 0xd010},
{PTP_PC, 2, "PTP_PC_CANON_MacroMode", 0xd011},
{PTP_PC, 2, "PTP_PC_CANON_FocusingPoint", 0xd012},
{PTP_PC, 2, "PTP_PC_CANON_WhiteBalance", 0xd013},
{PTP_PC, 2, "PTP_PC_CANON_AFMode", 0xD015},
{PTP_PC, 2, "PTP_PC_CANON_Contrast", 0xD017},
{PTP_PC, 2, "PTP_PC_CANON_ISOSpeed", 0xd01c},
{PTP_PC, 2, "PTP_PC_CANON_Aperture", 0xd01c},
{PTP_PC, 2, "PTP_PC_CANON_ShutterSpeed", 0xd01e},
{PTP_PC, 2, "PTP_PC_CANON_ExpComp", 0xd01f},
{PTP_PC, 2, "PTP_PC_CANON_Zoom", 0xd02a},
{PTP_PC, 2, "PTP_PC_CANON_SizeQuality", 0xd02c},
{PTP_PC, 2, "PTP_PC_CANON_FlashMemory", 0xd031},
{PTP_PC, 2, "PTP_PC_CANON_CameraModel", 0xd032},
{PTP_PC, 2, "PTP_PC_CANON_CameraOwner", 0xd033},
{PTP_PC, 2, "PTP_PC_CANON_UnixTime", 0xd032},
{PTP_PC, 2, "PTP_PC_CANON_ViewFinderOut", 0xD036},
{PTP_PC, 2, "PTP_PC_CANON_RealImageWidth", 0xD039},
{PTP_PC, 2, "PTP_PC_CANON_PhotoEffect", 0xD040},
{PTP_PC, 2, "PTP_PC_CANON_AssistLight", 0xD041},
{PTP_PC, 1, "PTP_PC_EOS_Aperture", 0xD101},
{PTP_PC, 1, "PTP_PC_EOS_ShutterSpeed", 0xD102},
{PTP_PC, 1, "PTP_PC_EOS_ISOSpeed", 0xD103},
{PTP_PC, 1, "PTP_PC_EOS_ExpCompensation", 0xD104},
{PTP_PC, 1, "PTP_PC_EOS_AutoExposureMode", 0xD105},
{PTP_PC, 1, "PTP_PC_EOS_DriveMode", 0xD106},
{PTP_PC, 1, "PTP_PC_EOS_MeteringMode", 0xD107},
{PTP_PC, 1, "PTP_PC_EOS_FocusMode", 0xD108},
{PTP_PC, 1, "PTP_PC_EOS_WhiteBalance", 0xD109},
{PTP_PC, 1, "PTP_PC_EOS_ColorTemperature", 0xD10A},
{PTP_PC, 1, "PTP_PC_EOS_WhiteBalanceAdjustA", 0xD10B},
{PTP_PC, 1, "PTP_PC_EOS_WhiteBalanceAdjustB", 0xD10C},
{PTP_PC, 1, "PTP_PC_EOS_WhiteBalanceXA", 0xD10D},
{PTP_PC, 1, "PTP_PC_EOS_WhiteBalanceXB", 0xD10E},
{PTP_PC, 1, "PTP_PC_EOS_ColorSpace", 0xD10F},
{PTP_PC, 1, "PTP_PC_EOS_PictureStyle", 0xD110},
{PTP_PC, 1, "PTP_PC_EOS_BatteryPower", 0xD111},
{PTP_PC, 1, "PTP_PC_EOS_BatterySelect", 0xD112},
{PTP_PC, 1, "PTP_PC_EOS_CameraTime", 0xD113},
{PTP_PC, 1, "PTP_PC_EOS_Owner", 0xD115},
{PTP_PC, 1, "PTP_PC_EOS_ModelID", 0xD116},
{PTP_PC, 1, "PTP_PC_EOS_PTPExtensionVersion", 0xD119},
{PTP_PC, 1, "PTP_PC_EOS_DPOFVersion", 0xD11A},
{PTP_PC, 1, "PTP_PC_EOS_AvailableShots", 0xD11B},
{PTP_PC, 1, "PTP_PC_EOS_CaptureDestination", 0xD11C},
{PTP_PC, 1, "PTP_PC_EOS_CurrentFolder", 0xD11F},
{PTP_PC, 1, "PTP_PC_EOS_ImageFormat", 0xD120},
{PTP_PC, 1, "PTP_PC_EOS_ImageFormatCF", 0xD121},
{PTP_PC, 1, "PTP_PC_EOS_ImageFormatSD", 0xD122},
{PTP_PC, 1, "PTP_PC_EOS_ImageFormatExtHD", 0xD123},
{PTP_PC, 1, "PTP_PC_EOS_AEModeDial", 0xD138},
{PTP_PC, 1, "PTP_PC_EOS_ShutterCounter", 0xD1AC},
{PTP_PC, 1, "PTP_PC_EOS_VF_Output", 0xD1B0},
{PTP_PC, 1, "PTP_PC_EOS_EVFMode", 0xD1B1},
{PTP_PC, 1, "PTP_PC_EOS_DOFPreview", 0xD1B2},
{PTP_PC, 1, "PTP_PC_EOS_VFSharp", 0xD1B3},
{PTP_PC, 1, "PTP_PC_EOS_EVFWBMode", 0xD1B4},
{PTP_PC, 1, "PTP_PC_EOS_FocusInfoEx", 0xD1D3},
{PTP_OC, 0, "PTP_OC_ML_LiveBmpRam", 0x9996},
{PTP_OC, 0, "PTP_OC_ML_Live360x240", 0x9997},
{PTP_OC, 0, "PTP_OC_MagicLantern", 0x9998},
{PTP_OC, 0, "PTP_OC_CHDK", 0x9999},
{PTP_ST, 0, "PTP_ST_Undefined", 0x0},
{PTP_ST, 0, "PTP_ST_FixedROM", 0x1},
{PTP_ST, 0, "PTP_ST_RemovableROM", 0x2},
{PTP_ST, 0, "PTP_ST_FixedRAM", 0x3},
{PTP_ST, 0, "PTP_ST_RemovableRAM", 0x4},
{PTP_FT, 0, "PTP_FT_Undefined", 0x0},
{PTP_FT, 0, "PTP_FT_GenericFlat", 0x1},
{PTP_FT, 0, "PTP_FT_GenericHei", 0x2},
{PTP_FT, 0, "PTP_FT_DCF", 0x3},
{PTP_AC, 0, "PTP_AC_ReadWrite", 0x0},
{PTP_AC, 0, "PTP_AC_Read", 0x1},
{PTP_AC, 0, "PTP_AC_ReadDelete", 0x2},
{PTP_ENUM, 0, "PTP_TC_UNDEF", 0x0},
{PTP_ENUM, 0, "PTP_TC_INT8", 0x1},
{PTP_ENUM, 0, "PTP_TC_UINT8", 0x2},
{PTP_ENUM, 0, "PTP_TC_INT16", 0x3},
{PTP_ENUM, 0, "PTP_TC_UINT16", 0x4},
{PTP_ENUM, 0, "PTP_TC_INT32", 0x5},
{PTP_ENUM, 0, "PTP_TC_UINT32", 0x6},
{PTP_ENUM, 0, "PTP_TC_INT64", 0x7},
{PTP_ENUM, 0, "PTP_TC_UINT64", 0x8},
{PTP_ENUM, 0, "PTP_TC_INT128", 0x9},
{PTP_ENUM, 0, "PTP_TC_UINT128", 0xA},
{PTP_ENUM, 0, "PTP_TC_UINT8ARRAY", 0x4002},
{PTP_ENUM, 0, "PTP_TC_UINT16ARRAY", 0x4004},
{PTP_ENUM, 0, "PTP_TC_UINT32ARRAY", 0x4006},
{PTP_ENUM, 0, "PTP_TC_UINT64ARRAY", 0x4008},
{PTP_ENUM, 0, "PTP_TC_STRING", 0xFFFF},
{PTP_ENUM, 0, "PTP_RangeForm", 0x1},
{PTP_ENUM, 0, "PTP_EnumerationForm", 0x2},
{PTP_ENUM, 0, "PTPIP_INIT_COMMAND_REQ", 0x1},
{PTP_ENUM, 0, "PTPIP_INIT_COMMAND_ACK", 0x2},
{PTP_ENUM, 0, "PTPIP_INIT_EVENT_REQ", 0x3},
{PTP_ENUM, 0, "PTPIP_INIT_EVENT_ACK", 0x4},
{PTP_ENUM, 0, "PTPIP_INIT_FAIL", 0x5},
{PTP_ENUM, 0, "PTPIP_COMMAND_REQUEST", 0x6},
{PTP_ENUM, 0, "PTPIP_COMMAND_RESPONSE", 0x7},
{PTP_ENUM, 0, "PTPIP_EVENT", 0x8},
{PTP_ENUM, 0, "PTPIP_DATA_PACKET_START", 0x9},
{PTP_ENUM, 0, "PTPIP_DATA_PACKET", 0xA},
{PTP_ENUM, 0, "PTPIP_CANCEL_TRANSACTION", 0xB},
{PTP_ENUM, 0, "PTPIP_DATA_PACKET_END", 0xC},
{PTP_ENUM, 0, "PTPIP_PING", 0xD},
{PTP_ENUM, 0, "PTPIP_PONG", 0xE},
{PTP_ENUM, 0, "USB_VENDOR_CANON", 0x4A9},
{PTP_ENUM, 0, "MTP_REQ_CANCEL", 0x64},
{PTP_ENUM, 0, "MTP_REQ_GET_EXT_EVENT_DATA", 0x65},
{PTP_ENUM, 0, "USB_REQ_RESET", 0x66},
{PTP_ENUM, 0, "USB_REQ_STATUS", 0x67},
{PTP_ENUM, 0, "USB_REQ_GET_STATUS", 0x00},
{PTP_ENUM, 0, "USB_REQ_CLEAR_FEATURE", 0x01},
{PTP_ENUM, 0, "USB_REQ_SET_FEATURE", 0x03},
{PTP_ENUM, 0, "USB_DP_HTD", 0x0},
{PTP_ENUM, 0, "USB_DP_DTH", 0x80},
{PTP_ENUM, 0, "USB_RECIP_DEVICE", 0x00},
{PTP_ENUM, 0, "USB_RECIP_INTERFACE", 0x01},
{PTP_ENUM, 0, "USB_RECIP_ENDPOINT", 0x02},
{PTP_ENUM, 0, "USB_TYPE_CLASS", 0x20},

};int ptp_enums_length = 560;
