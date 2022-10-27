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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NVIDIAGfeSDK.EGfeSDKReturnCode
	 */
	enum class EGfeSDKReturnCode : uint8_t
	{
		Success                      = 0,
		SuccessIpcOldSdk             = 1,
		SuccessIpcOldGfe             = 2,
		Error                        = 3,
		ErrorGfeVersion              = 4,
		ErrorSdkVersion              = 5,
		ErrorModuleNotLoaded         = 6,
		ErrorWrongTimeRangeSet       = 7,
		ErrorGeneric                 = 8,
		ErrorNotImplemented          = 9,
		ErrorInvalidParameter        = 10,
		ErrorNotSet                  = 11,
		ErrorShadowplayIRDisabled    = 12,
		ErrorSDKInUse                = 13,
		ErrorGroupNotFound           = 14,
		ErrorFileNotFound            = 15,
		ErrorHighlightsSetupFailed   = 16,
		ErrorHighlightsNotConfigured = 17,
		ErrorHighlightSaveFailed     = 18,
		ErrorUnexpectedException     = 19,
		ErrorNoHighlights            = 20,
		ErrorNoConnection            = 21,
		ErrorPermissionNotGranted    = 22,
		ErrorPermissionDenied        = 23,
		ErrorInvalidHandle           = 24,
		ErrorUnhandledException      = 25,
		ErrorOutOfMemory             = 26,
		ErrorLoadLibrary             = 27,
		ErrorLibraryCallFailed       = 28,
		ErrorIPCFailed               = 29,
		ErrorConnection              = 30,
		ErrorLibCallTimeout          = 31,
		ErrorApplicationLookupFailed = 32,
		ErrorApplicationNotKnown     = 33,
		ErrorFeatureDisabled         = 34,
		ErrorAppNoOptimization       = 35,
		ErrorAppSettingsRead         = 36,
		ErrorAppSettingsWrite        = 37,
		MAX                          = 38
	};

	/**
	 * Enum NVIDIAGfeSDK.EGfeSDKScope
	 */
	enum class EGfeSDKScope : uint8_t
	{
		Highlights                 = 0,
		HighlightsRecordVideo      = 1,
		HighlightsRecordScreenshot = 2,
		MAX                        = 3
	};

	/**
	 * Enum NVIDIAGfeSDK.EGfeSDKPermission
	 */
	enum class EGfeSDKPermission : uint8_t
	{
		Granted = 0,
		Denied  = 1,
		MustAsk = 2,
		Unknown = 3,
		MAX     = 4
	};

	/**
	 * Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
	 */
	enum class EGfeSDKHighlightSignificance : uint8_t
	{
		NONE          = 0,
		ExtremelyBad  = 1,
		VeryBad       = 2,
		Bad           = 3,
		Neutral       = 4,
		Good          = 5,
		VeryGood      = 6,
		ExtremelyGood = 7,
		MAX           = 8
	};

	/**
	 * Enum NVIDIAGfeSDK.EGfeSDKHighlightType
	 */
	enum class EGfeSDKHighlightType : uint8_t
	{
		NONE        = 0,
		Milestone   = 1,
		Achievement = 2,
		Incident    = 3,
		StateChange = 4,
		Unannounced = 5,
		MAX         = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
	 * Size -> 0x0068
	 */
	struct FGfeSDKCreateResponse
	{
	public:
		uint16_t                                                   VersionMajor;                                            // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   VersionMinor;                                            // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BILC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NVIDIAGfeVersion;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EGfeSDKScope, EGfeSDKPermission>                      ScopePermissions;                                        // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
	 * Size -> 0x0018
	 */
	struct FGfeSDKHighlightGroupView
	{
	public:
		class FString                                              GroupId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGfeSDKHighlightType                                       TagsFilter;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGfeSDKHighlightSignificance                               SignificanceFilter;                                      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WJ4[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
	 * Size -> 0x0010
	 */
	struct FGfeSDKHighlightSummaryParams
	{
	public:
		TArray<struct FGfeSDKHighlightGroupView>                   GroupViews;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
	 * Size -> 0x0028
	 */
	struct FGfeSDKHighlightVideoParams
	{
	public:
		class FString                                              GroupId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HighlightId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartDelta;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndDelta;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
	 * Size -> 0x0020
	 */
	struct FGfeSDKHighlightScreenshotParams
	{
	public:
		class FString                                              GroupId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HighlightId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
	 * Size -> 0x0018
	 */
	struct FGfeSDKHighlightCloseGroupParams
	{
	public:
		class FString                                              GroupId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroyHighlights;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HZD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
	 * Size -> 0x0060
	 */
	struct FGfeSDKHighlightOpenGroupParams
	{
	public:
		class FString                                              GroupId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         GroupDescriptionTranslationTable;                        // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
	 * Size -> 0x0050
	 */
	struct FGfeSDKPermissionsChangedData
	{
	public:
		TMap<EGfeSDKScope, EGfeSDKPermission>                      ScopePermissions;                                        // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
	 * Size -> 0x0010
	 */
	struct FGfeSDKRequestPermissionsParams
	{
	public:
		TArray<EGfeSDKScope>                                       Scopes;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
	 * Size -> 0x0068
	 */
	struct FGfeSDKHighlightDefinition
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserDefaultInterest;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGfeSDKHighlightType                                       HighlightTags;                                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGfeSDKHighlightSignificance                               Significance;                                            // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V09M[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         NameTranslationTable;                                    // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
	 * Size -> 0x0020
	 */
	struct FGfeSDKHighlightConfigParams
	{
	public:
		TArray<struct FGfeSDKHighlightDefinition>                  HighlightDefinitions;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultLocale;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
	 * Size -> 0x0028
	 */
	struct FGfeSDKCreateInputParams
	{
	public:
		class FString                                              AppName;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EGfeSDKScope>                                       RequiredScopes;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PollForCallbacks;                                        // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JT97[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
