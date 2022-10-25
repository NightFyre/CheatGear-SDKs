#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum OakCS.EDialogEventEnum
	 */
	enum class EDialogEventEnum : uint8_t
	{
		DE_Introduction    = 0,
		DE_SubmittedPuzzle = 1,
		DE_IdleLine        = 2,
		DE_PuzzleComplete  = 3,
		DE_MAX             = 4
	};

	/**
	 * Enum OakCS.ECSScoreCondition
	 */
	enum class ECSScoreCondition : uint8_t
	{
		ParScore      = 0,
		HighestScore  = 1,
		UnderParScore = 2,
		MAX           = 3
	};

	/**
	 * Enum OakCS.ECSTweenEasingFunc
	 */
	enum class ECSTweenEasingFunc : uint8_t
	{
		Linear      = 0,
		SmoothStep  = 1,
		EaseInBack  = 2,
		EaseOutBack = 3,
		EaseInSine  = 4,
		EaseOutSine = 5,
		Sine        = 6,
		MAX         = 7
	};

	/**
	 * Enum OakCS.ECitizenScienceManagerState
	 */
	enum class ECitizenScienceManagerState : uint8_t
	{
		StreamingManager_Uninitialized = 0,
		StreamingManager_Initialized   = 1,
		StreamingManager_MAX           = 2
	};

	/**
	 * Enum OakCS.ECSTutorialElement
	 */
	enum class ECSTutorialElement : uint8_t
	{
		Guideline    = 0,
		SubmitButton = 1,
		ScoreBar     = 2,
		TokenPool    = 3,
		ScoreDisplay = 4,
		MAX          = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OakCS.CSLevelInfo
	 * Size -> 0x00E8
	 */
	struct FCSLevelInfo
	{
	public:
		class FName                                                NameId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardTextureName;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharaterTextureName;                                     // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomizationTextureName;                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterAnimName;                                       // 0x0038(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CharacterName;                                           // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                DifficultyLevel;                                         // 0x0060(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    Target;                                                  // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Reward;                                                  // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighestScoreMatchedModifier;                             // 0x0080(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighestScoreBeatenModifier;                              // 0x0084(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PuzzleGridHeight;                                        // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PuzzleGridWidth;                                         // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CosmeticRewardItemPoolData[0x28];                        // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty OakCS.CSLevelInfo.CosmeticRewardItemPoolData
		class FText                                                CosmeticRewardCongratulationMessageTitle;                // 0x00B8(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                CosmeticRewardCongratulationMessageBody;                 // 0x00D0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OakCS.CSPuzzleFeedbackSettings
	 * Size -> 0x0020
	 */
	struct FCSPuzzleFeedbackSettings
	{
	public:
		float                                                      DelayBeforeFirstFeedback;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBeforeProgressBarFeedback;                          // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToUpdateProgressBar;                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSpeed;                                               // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECSTweenEasingFunc                                         TileMovementEasingFunction;                              // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MENM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBetweenEachTileFlipped;                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelaytBetweenTileFlippingAndPerferctAlignmentAnim;       // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBetweenEachTilePerfectAlignmentAnim;                // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OakCS.CSPuzzleIntroSettings
	 * Size -> 0x0014
	 */
	struct FCSPuzzleIntroSettings
	{
	public:
		float                                                      DelayBeforeStartingIntro;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBetweenEachPuzzleColumn;                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBetweenEachPuzzleTile;                              // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECSTweenEasingFunc                                         EasingFunction;                                          // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SCT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallingSpeed;                                            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OakCS.GFxCSTileArray
	 * Size -> 0x0010
	 */
	struct FGFxCSTileArray
	{
	public:
		TArray<class UGFxCSPuzzleTile*>                            Tiles;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OakCS.DebugPuzzle
	 * Size -> 0x0038
	 */
	struct FDebugPuzzle
	{
	public:
		class FString                                              PuzzleLines;                                             // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PuzzleGuides;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfTokens;                                          // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringMatchingTile;                                     // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoringPerfectAlignment;                                 // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringParScore;                                         // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoringBestScore;                                        // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYXL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
