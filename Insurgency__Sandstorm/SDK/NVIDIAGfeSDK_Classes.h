#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class NVIDIAGfeSDK.HighlightsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Poll();
		void STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.InitHighlights
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UInitHighlights : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCD6[0xB0];                                  // 0x0050(0x00B0) MISSED OFFSET (PADDING)

	public:
		class UInitHighlights* STATIC_InitHighlights(class UObject* WorldContextObject, const class FString& InGameName, bool Video, bool Screenshots);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsConfigureAsync
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34LU[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UHighlightsConfigureAsync* STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WM4[0x68];                                  // 0x0050(0x0068) MISSED OFFSET (PADDING)

	public:
		class UHighlightsOpenGroupAsync* STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZTF[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UHighlightsCloseGroupAsync* STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const class FString& GroupId, bool DestroyHighlights);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CD1[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSetScreenshotAsync* STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSetVideoAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCHA[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSetVideoAsync* STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const class FString& GroupId, const class FString& HighlightId, int32_t StartDelta, int32_t EndDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsSummaryAsync
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH2J[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UHighlightsSummaryAsync* STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.HighlightsGetNumberAsync
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBTD[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UHighlightsGetNumberAsync* STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const class FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter);
		static UClass* StaticClass();
	};

	/**
	 * Class NVIDIAGfeSDK.RequestPermissionsAsync
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class URequestPermissionsAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXM4[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class URequestPermissionsAsync* STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
