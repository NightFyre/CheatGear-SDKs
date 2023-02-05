#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Sentry.SentryAttachment.InitializeWithPath
	 */
	struct USentryAttachment_InitializeWithPath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ContentType;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryAttachment.InitializeWithData
	 */
	struct USentryAttachment_InitializeWithData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ContentType;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryAttachment.GetPath
	 */
	struct USentryAttachment_GetPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryAttachment.GetFilename
	 */
	struct USentryAttachment_GetFilename_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryAttachment.GetData
	 */
	struct USentryAttachment_GetData_Params
	{
	public:
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryAttachment.GetContentType
	 */
	struct USentryAttachment_GetContentType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.SetType
	 */
	struct USentryBreadcrumb_SetType_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.SetMessage
	 */
	struct USentryBreadcrumb_SetMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.SetLevel
	 */
	struct USentryBreadcrumb_SetLevel_Params
	{
	public:
		ESentryLevel                                               Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.SetData
	 */
	struct USentryBreadcrumb_SetData_Params
	{
	public:
		TMap<class FString, class FString>                         Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.SetCategory
	 */
	struct USentryBreadcrumb_SetCategory_Params
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.GetType
	 */
	struct USentryBreadcrumb_GetType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.GetMessage
	 */
	struct USentryBreadcrumb_GetMessage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.GetLevel
	 */
	struct USentryBreadcrumb_GetLevel_Params
	{
	public:
		ESentryLevel                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.GetData
	 */
	struct USentryBreadcrumb_GetData_Params
	{
	public:
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryBreadcrumb.GetCategory
	 */
	struct USentryBreadcrumb_GetCategory_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryEvent.SetMessage
	 */
	struct USentryEvent_SetMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryEvent.SetLevel
	 */
	struct USentryEvent_SetLevel_Params
	{
	public:
		ESentryLevel                                               Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryEvent.GetMessage
	 */
	struct USentryEvent_GetMessage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryEvent.GetLevel
	 */
	struct USentryEvent_GetLevel_Params
	{
	public:
		ESentryLevel                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.StringToBytesArray
	 */
	struct USentryLibrary_StringToBytesArray_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.SaveStringToFile
	 */
	struct USentryLibrary_SaveStringToFile_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryUserFeedback
	 */
	struct USentryLibrary_CreateSentryUserFeedback_Params
	{
	public:
		class USentryId*                                           EventId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Email;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Comments;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USentryUserFeedback*                                 ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryUser
	 */
	struct USentryLibrary_CreateSentryUser_Params
	{
	public:
		class FString                                              Email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ID;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserName;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              IpAddress;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Data;                                                    // 0x0040(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class USentryUser*                                         ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryEvent
	 */
	struct USentryLibrary_CreateSentryEvent_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESentryLevel                                               Level;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TX0B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USentryEvent*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryBreadcrumb
	 */
	struct USentryLibrary_CreateSentryBreadcrumb_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Type;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Category;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Data;                                                    // 0x0030(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ESentryLevel                                               Level;                                                   // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7LKX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USentryBreadcrumb*                                   ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	 */
	struct USentryLibrary_CreateSentryAttachmentWithPath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ContentType;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USentryAttachment*                                   ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
	 */
	struct USentryLibrary_CreateSentryAttachmentWithData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ContentType;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USentryAttachment*                                   ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.Crash
	 */
	struct USentryLibrary_Crash_Params
	{	};

	/**
	 * Function Sentry.SentryLibrary.ByteArrayToString
	 */
	struct USentryLibrary_ByteArrayToString_Params
	{
	public:
		TArray<unsigned char>                                      Array;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryLibrary.Assert
	 */
	struct USentryLibrary_Assert_Params
	{	};

	/**
	 * Function Sentry.SentryScope.SetTagValue
	 */
	struct USentryScope_SetTagValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetTags
	 */
	struct USentryScope_SetTags_Params
	{
	public:
		TMap<class FString, class FString>                         Tags;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetLevel
	 */
	struct USentryScope_SetLevel_Params
	{
	public:
		ESentryLevel                                               Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetFingerprint
	 */
	struct USentryScope_SetFingerprint_Params
	{
	public:
		TArray<class FString>                                      Fingerprint;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetExtraValue
	 */
	struct USentryScope_SetExtraValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetExtras
	 */
	struct USentryScope_SetExtras_Params
	{
	public:
		TMap<class FString, class FString>                         Extras;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetEnvironment
	 */
	struct USentryScope_SetEnvironment_Params
	{
	public:
		class FString                                              Environment;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetDist
	 */
	struct USentryScope_SetDist_Params
	{
	public:
		class FString                                              Dist;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.SetContext
	 */
	struct USentryScope_SetContext_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Values;                                                  // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.RemoveTag
	 */
	struct USentryScope_RemoveTag_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.RemoveExtra
	 */
	struct USentryScope_RemoveExtra_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.RemoveContext
	 */
	struct USentryScope_RemoveContext_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetTagValue
	 */
	struct USentryScope_GetTagValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetTags
	 */
	struct USentryScope_GetTags_Params
	{
	public:
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetLevel
	 */
	struct USentryScope_GetLevel_Params
	{
	public:
		ESentryLevel                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetFingerprint
	 */
	struct USentryScope_GetFingerprint_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetExtraValue
	 */
	struct USentryScope_GetExtraValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetExtras
	 */
	struct USentryScope_GetExtras_Params
	{
	public:
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetEnvironment
	 */
	struct USentryScope_GetEnvironment_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.GetDist
	 */
	struct USentryScope_GetDist_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.ClearBreadcrumbs
	 */
	struct USentryScope_ClearBreadcrumbs_Params
	{	};

	/**
	 * Function Sentry.SentryScope.ClearAttachments
	 */
	struct USentryScope_ClearAttachments_Params
	{	};

	/**
	 * Function Sentry.SentryScope.Clear
	 */
	struct USentryScope_Clear_Params
	{	};

	/**
	 * Function Sentry.SentryScope.AddBreadcrumb
	 */
	struct USentryScope_AddBreadcrumb_Params
	{
	public:
		class USentryBreadcrumb*                                   Breadcrumb;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryScope.AddAttachment
	 */
	struct USentryScope_AddAttachment_Params
	{
	public:
		class USentryAttachment*                                   Attachment;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.SetUser
	 */
	struct USentrySubsystem_SetUser_Params
	{
	public:
		class USentryUser*                                         User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.SetTag
	 */
	struct USentrySubsystem_SetTag_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.SetLevel
	 */
	struct USentrySubsystem_SetLevel_Params
	{
	public:
		ESentryLevel                                               Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.SetContext
	 */
	struct USentrySubsystem_SetContext_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Values;                                                  // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.RemoveUser
	 */
	struct USentrySubsystem_RemoveUser_Params
	{	};

	/**
	 * Function Sentry.SentrySubsystem.RemoveTag
	 */
	struct USentrySubsystem_RemoveTag_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.Initialize
	 */
	struct USentrySubsystem_Initialize_Params
	{	};

	/**
	 * Function Sentry.SentrySubsystem.ConfigureScope
	 */
	struct USentrySubsystem_ConfigureScope_Params
	{
	public:
		class FScriptDelegate                                      OnConfigureScope;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.Close
	 */
	struct USentrySubsystem_Close_Params
	{	};

	/**
	 * Function Sentry.SentrySubsystem.ClearBreadcrumbs
	 */
	struct USentrySubsystem_ClearBreadcrumbs_Params
	{	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	 */
	struct USentrySubsystem_CaptureUserFeedbackWithParams_Params
	{
	public:
		class USentryId*                                           EventId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Email;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Comments;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureUserFeedback
	 */
	struct USentrySubsystem_CaptureUserFeedback_Params
	{
	public:
		class USentryUserFeedback*                                 UserFeedback;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureMessageWithScope
	 */
	struct USentrySubsystem_CaptureMessageWithScope_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnConfigureScope;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESentryLevel                                               Level;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IU9A[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USentryId*                                           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureMessage
	 */
	struct USentrySubsystem_CaptureMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESentryLevel                                               Level;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E7O5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USentryId*                                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureEventWithScope
	 */
	struct USentrySubsystem_CaptureEventWithScope_Params
	{
	public:
		class USentryEvent*                                        Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnConfigureScope;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USentryId*                                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.CaptureEvent
	 */
	struct USentrySubsystem_CaptureEvent_Params
	{
	public:
		class USentryEvent*                                        Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USentryId*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
	 */
	struct USentrySubsystem_AddBreadcrumbWithParams_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Category;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Type;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Data;                                                    // 0x0030(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ESentryLevel                                               Level;                                                   // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentrySubsystem.AddBreadcrumb
	 */
	struct USentrySubsystem_AddBreadcrumb_Params
	{
	public:
		class USentryBreadcrumb*                                   Breadcrumb;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.SetUsername
	 */
	struct USentryUser_SetUsername_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.SetIpAddress
	 */
	struct USentryUser_SetIpAddress_Params
	{
	public:
		class FString                                              IpAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.SetId
	 */
	struct USentryUser_SetId_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.SetEmail
	 */
	struct USentryUser_SetEmail_Params
	{
	public:
		class FString                                              Email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.SetData
	 */
	struct USentryUser_SetData_Params
	{
	public:
		TMap<class FString, class FString>                         Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.GetUsername
	 */
	struct USentryUser_GetUsername_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.GetIpAddress
	 */
	struct USentryUser_GetIpAddress_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.GetId
	 */
	struct USentryUser_GetId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.GetEmail
	 */
	struct USentryUser_GetEmail_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUser.GetData
	 */
	struct USentryUser_GetData_Params
	{
	public:
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.SetName
	 */
	struct USentryUserFeedback_SetName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.SetEmail
	 */
	struct USentryUserFeedback_SetEmail_Params
	{
	public:
		class FString                                              Email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.SetComment
	 */
	struct USentryUserFeedback_SetComment_Params
	{
	public:
		class FString                                              Comments;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.Initialize
	 */
	struct USentryUserFeedback_Initialize_Params
	{
	public:
		class USentryId*                                           EventId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.GetName
	 */
	struct USentryUserFeedback_GetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.GetEmail
	 */
	struct USentryUserFeedback_GetEmail_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sentry.SentryUserFeedback.GetComment
	 */
	struct USentryUserFeedback_GetComment_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
