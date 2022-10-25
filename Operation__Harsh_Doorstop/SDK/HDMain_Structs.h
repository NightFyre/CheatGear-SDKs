#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum HDMain.EHDTeam
	 */
	enum class EHDTeam : uint8_t
	{
		Red    = 0,
		Blue   = 1,
		NoTeam = 2,
		MAX    = 3
	};

	/**
	 * Enum HDMain.EHDWeaponAimStyle
	 */
	enum class EHDWeaponAimStyle : uint8_t
	{
		None       = 0,
		PointAim   = 1,
		OpticMode1 = 2,
		OpticMode2 = 3,
		OpticMode3 = 4,
		MAX        = 5
	};

	/**
	 * Enum HDMain.EHDAIThreatLevel
	 */
	enum class EHDAIThreatLevel : uint8_t
	{
		None   = 0,
		Safe   = 1,
		Aware  = 2,
		Combat = 3,
		Danger = 4,
		MAX    = 5
	};

	/**
	 * Enum HDMain.EHDAICaptureMode
	 */
	enum class EHDAICaptureMode : uint8_t
	{
		Attack = 0,
		Defend = 1,
		None   = 2,
		MAX    = 3
	};

	/**
	 * Enum HDMain.EHDPrimaryAssetType
	 */
	enum class EHDPrimaryAssetType : uint8_t
	{
		Faction  = 0,
		GameMode = 1,
		Map      = 2,
		Platoon  = 3,
		Ruleset  = 4,
		MAX      = 5
	};

	/**
	 * Enum HDMain.EHDAIVocalizationType
	 */
	enum class EHDAIVocalizationType : uint8_t
	{
		None             = 0,
		Contact          = 1,
		LostContact      = 2,
		Reloading        = 3,
		BeenHit          = 4,
		UnderSuppression = 5,
		Death            = 6,
		MAX              = 7
	};

	/**
	 * Enum HDMain.EHDControlPointObjectiveType
	 */
	enum class EHDControlPointObjectiveType : uint8_t
	{
		Offensive   = 0,
		Defensive   = 1,
		NoObjective = 2,
		MAX         = 3
	};

	/**
	 * Enum HDMain.EHDUICharacterStanceState
	 */
	enum class EHDUICharacterStanceState : uint8_t
	{
		Stand       = 0,
		StandAim    = 1,
		StandMount  = 2,
		Sprint      = 3,
		Crouch      = 4,
		CrouchAim   = 5,
		CrouchMount = 6,
		Prone       = 7,
		MAX         = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HDMain.AICharacterVocalProfile
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FAICharacterVocalProfile : public FTableRowBase
	{
	public:
		TArray<class USoundBase*>                                  ContactSounds;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  LostContactSounds;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  ReloadingSounds;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  BeenHitSounds;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  UnderSuppressionSounds;                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  DeathSounds;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.PTTKeyState
	 * Size -> 0x000C
	 */
	struct FPTTKeyState
	{
	public:
		unsigned char                                              UnknownData_X6IF[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDItemEntry
	 * Size -> 0x0010
	 */
	struct FHDItemEntry
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotNum;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9WU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDPrimaryAssetSearchPath
	 * Size -> 0x0018
	 */
	struct FHDPrimaryAssetSearchPath
	{
	public:
		EHDPrimaryAssetType                                        AssetType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15SD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Directory;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDPlatoonCreationParams
	 * Size -> 0x0010
	 */
	struct FHDPlatoonCreationParams
	{
	public:
		class UHDPlatoonInfo*                                      Info;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDTeamState*                                        OwnerTeam;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.HDSquadAssignmentInfo
	 * Size -> 0x0010
	 */
	struct FHDSquadAssignmentInfo
	{
	public:
		class AHDSquadState*                                       SquadState;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SquadAssignmentTime;                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P3Z2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.ControlPointRulesetSettings
	 * Size -> 0x0020
	 */
	struct FControlPointRulesetSettings
	{
	public:
		int32_t                                                    TicketsGainedForCapture;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsGainedForCaptureFromNeutral;                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnCapture;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForNeutralize;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForCapture;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForDefense;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsOnCaptureProgress;                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsOnDefenseProgress;                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.KillDeathRulesetSettings
	 * Size -> 0x0028
	 */
	struct FKillDeathRulesetSettings
	{
	public:
		int32_t                                                    TicketsGainedForKill;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnKill;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnTeamKill;                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnDeath;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TicketsLostOnSuicide;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForKill;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForAssist;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForTeamKill;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForDeath;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointsForSuicide;                                        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.TicketBleedRulesetSettings
	 * Size -> 0x000C
	 */
	struct FTicketBleedRulesetSettings
	{
	public:
		int32_t                                                    TicketBleed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MercyTicketBleed;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowMercyTicketBleed : 1;                              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U48B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDSquadCreationParams
	 * Size -> 0x0030
	 */
	struct FHDSquadCreationParams
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AHDPlatoonState*                                     OwnerPlatoon;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDPlayerState*                                      SquadLeader;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLocked : 1;                                             // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTO7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDUIWeaponAmmoState
	 * Size -> 0x0018
	 */
	struct FHDUIWeaponAmmoState
	{
	public:
		int32_t                                                    TotalFreeAmmo;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFreeAmmoClips;                                        // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentClipAmmo;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentClipMaxAmmo;                                      // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CurrentClipAmmoClass;                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HDMain.UniqueNetIdVoipWrapper
	 * Size -> 0x0018
	 */
	struct FUniqueNetIdVoipWrapper
	{
	public:
		unsigned char                                              UnknownData_2X5H[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDMain.HDCharacterVariationData
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FHDCharacterVariationData : public FDFCharacterVariationData
	{	};

	/**
	 * ScriptStruct HDMain.HDPlatoonAttributes
	 * Size -> 0x0020
	 */
	struct FHDPlatoonAttributes
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeamId;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDW0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
