#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
	 */
	struct UHighlightsFunctionLibrary_Poll_Params
	{	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
	 */
	struct UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params
	{
	public:
		struct FGfeSDKCreateResponse                               InitProperties;                                          // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       VideoGranted;                                            // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ScreenshotsGranted;                                      // 0x0069(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGfeSDKPermission                                          Video;                                                   // 0x006A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGfeSDKPermission                                          Screenshots;                                             // 0x006B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.InitHighlights.InitHighlights
	 */
	struct UInitHighlights_InitHighlights_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InGameName;                                              // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Video;                                                   // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Screenshots;                                             // 0x0019(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IR8G[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInitHighlights*                                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
	 */
	struct UHighlightsConfigureAsync_HighlightsConfigure_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGfeSDKHighlightConfigParams                        ConfigParams;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UHighlightsConfigureAsync*                           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
	 */
	struct UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGfeSDKHighlightOpenGroupParams                     Params;                                                  // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UHighlightsOpenGroupAsync*                           ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
	 */
	struct UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GroupId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DestroyHighlights;                                       // 0x0018(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_45YQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHighlightsCloseGroupAsync*                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
	 */
	struct UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GroupId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HighlightId;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHighlightsSetScreenshotAsync*                       ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
	 */
	struct UHighlightsSetVideoAsync_HighlightsSetVideo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GroupId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HighlightId;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StartDelta;                                              // 0x0028(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndDelta;                                                // 0x002C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHighlightsSetVideoAsync*                            ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
	 */
	struct UHighlightsSummaryAsync_HighlightsOpenSummary_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGfeSDKHighlightSummaryParams                       Params;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UHighlightsSummaryAsync*                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
	 */
	struct UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GroupId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGfeSDKHighlightType                                       TagFilter;                                               // 0x0018(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGfeSDKHighlightSignificance                               SignificanceFilter;                                      // 0x0019(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JXSJ[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHighlightsGetNumberAsync*                           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
	 */
	struct URequestPermissionsAsync_GFERequestPermissions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Video;                                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Screenshots;                                             // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QSD3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URequestPermissionsAsync*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
