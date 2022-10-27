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
	 * Enum OnlineSubsystemNWI.EReportCategoryEnum
	 */
	enum class EReportCategoryEnum : uint8_t
	{
		RE_None       = 0,
		RE_Harassment = 1,
		RE_Griefing   = 2,
		RE_Cheating   = 3,
		RE_Spam       = 4,
		RE_HateSpeech = 5,
		RE_MAX        = 6
	};

	/**
	 * Enum OnlineSubsystemNWI.EAccountStatusEnum
	 */
	enum class EAccountStatusEnum : uint8_t
	{
		RE_None           = 0,
		RE_Warned         = 1,
		RE_RestrictSocial = 2,
		RE_Suspended      = 3,
		RE_MAX            = 4
	};

	/**
	 * Enum OnlineSubsystemNWI.EBonusExperienceState
	 */
	enum class EBonusExperienceState : uint8_t
	{
		XPB_NoBonus      = 0,
		XPB_DoubleXP     = 1,
		XPB_TripleXP     = 2,
		XPB_GenericBonus = 3,
		XPB_Max          = 4
	};

	/**
	 * Enum OnlineSubsystemNWI.ESessionHostState
	 */
	enum class ESessionHostState : uint8_t
	{
		Invalid         = 0,
		WaitingOnMatch  = 1,
		LoadingMatch    = 2,
		MatchLoaded     = 3,
		ReadyForPlay    = 4,
		AwaitingMapVote = 5,
		MAX             = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemNWI.GetAccountStatusResult
	 * Size -> 0x0030
	 */
	struct FGetAccountStatusResult
	{
	public:
		unsigned char                                              UnknownData_AWKR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAccountStatusEnum                                         CurrentStatus;                                           // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74MW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StatusExpireyTime;                                       // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EReportCategoryEnum>                                Categories;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemNWI.SendReportResult
	 * Size -> 0x0008
	 */
	struct FSendReportResult
	{
	public:
		unsigned char                                              UnknownData_B8IC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemNWI.QueryOpenPoolsResultsEntry
	 * Size -> 0x0020
	 */
	struct FQueryOpenPoolsResultsEntry
	{
	public:
		struct FDateTime                                           StartTime;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasExpiry;                                              // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G78I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ExpiryTime;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRanked;                                               // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBonusExperienceState                                      BonusExperience;                                         // 0x0019(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQJJ[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemNWI.QueryOpenPoolsResults
	 * Size -> 0x0058
	 */
	struct FQueryOpenPoolsResults
	{
	public:
		unsigned char                                              UnknownData_QB4X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FQueryOpenPoolsResultsEntry>    Pools;                                                   // 0x0008(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemNWI.QueryPoolCountResults
	 * Size -> 0x0050
	 */
	struct FQueryPoolCountResults
	{
	public:
		TMap<class FString, int32_t>                               InPoolCount;                                             // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemNWI.MatchScoreChange
	 * Size -> 0x001C
	 */
	struct FMatchScoreChange
	{
	public:
		bool                                                       bPopulated;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN2D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NewTier;                                                 // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewDivision;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OldTier;                                                 // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OldDivision;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingPlacements;                                     // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasFinalPlacement;                                       // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F88R[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
