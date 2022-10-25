#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class InvasionFramework.InvasionServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInvasionServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.EnvQueryGenerator_AggressiveAggressiveSpawnLocations
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_AggressiveAggressiveSpawnLocations : public UEnvQueryGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.GetInvasionShipsStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UGetInvasionShipsStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_FU4M[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.TaleQuestInvasionService
	 * Size -> 0x00C8 (FullSize[0x0128] - InheritedSize[0x0060])
	 */
	class UTaleQuestInvasionService : public UTaleQuestService
	{
	public:
		class UTaleQuestInvasionServiceDesc*                       ServiceDesc;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TCEZ[0xC0];                                  // 0x0068(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.TaleQuestInvasionServiceDesc
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UTaleQuestInvasionServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		class FText                                                OnCrewLeftServerMessage;                                 // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_YH32[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                OnCrewLeftFightMessage;                                  // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_CE18[0x20];                                  // 0x0078(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionGBannerTag;                                       // 0x0098(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_OQBR[0x20];                                  // 0x00B0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionBBannerTag;                                       // 0x00D0(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_KQ8F[0x20];                                  // 0x00E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.GetInvasionShipsStepDesc
	 * Size -> 0x0120 (FullSize[0x01A0] - InheritedSize[0x0080])
	 */
	class UGetInvasionShipsStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 AggressiveShip_1;                                        // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 AggressiveShip_2;                                        // 0x00A0(0x0020) Edit
		struct FQuestVariableActor                                 PassiveShip;                                             // 0x00C0(0x0020) Edit
		struct FQuestVariableGuid                                  AggressiveCrewId_1;                                      // 0x00E0(0x0020) Edit
		struct FQuestVariableGuid                                  AggressiveCrewId_2;                                      // 0x0100(0x0020) Edit
		struct FQuestVariableGuid                                  PassiveCrewId;                                           // 0x0120(0x0020) Edit
		struct FQuestVariableName                                  AggressiveFaction_1;                                     // 0x0140(0x0020) Edit
		struct FQuestVariableName                                  AggressiveFaction_2;                                     // 0x0160(0x0020) Edit
		struct FQuestVariableName                                  PassiveFaction;                                          // 0x0180(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.InvasionBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInvasionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ShouldEmergentBattleDisplayBanners();
		bool STATIC_ShouldAggressivePassiveTeleportUseEQS();
		float STATIC_GetAggressivePassiveTeleportOffsetDistance();
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.InvasionLocationsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInvasionLocationsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FVector2D>                                   AggressiveAggressiveLocations;                           // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.InvasionLocationsDataAssetGetterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInvasionLocationsDataAssetGetterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.InvasionServiceDataAsset
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInvasionServiceDataAsset : public UDataAsset
	{
	public:
		class UVoyageDescDataAsset*                                Matchmaking_VoyageDescDataAsset;                         // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVoyageDescDataAsset*                                Invasion_AggressivePassive_VoyageDescDataAsset;          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVoyageDescDataAsset*                                Invasion_AggressiveAggressive_VoyageDescDataAsset;       // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVoyageDescDataAsset*                                Invasion_Emergent_VoyageDescDataAsset;                   // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           AggressivePassive_EnvQueryTemplate;                      // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           AggressiveAggressive_InvasionLocation_EnvQueryTemplate;  // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           AggressiveAggressive_PrimaryShipLocation_EnvQueryTemplate; // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           AggressiveAggressive_SecondaryShipLocation_EnvQueryTemplate; // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVoyageDescDataAsset*                                Invasion_Debug_AggressivePassive_VoyageDescDataAsset;    // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVoyageDescDataAsset*                                Invasion_Debug_AggressiveAggressive_VoyageDescDataAsset; // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Emergent_DistanceBetweenShipsInMetres;                   // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S1O2[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.InvasionService
	 * Size -> 0x01E0 (FullSize[0x05A8] - InheritedSize[0x03C8])
	 */
	class AInvasionService : public AActor
	{
	public:
		unsigned char                                              UnknownData_YELN[0x40];                                  // 0x03C8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInvasionServiceDataAsset*                           InvasionServiceDataAsset;                                // 0x0408(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInvasionLocationsDataAsset*                         InvasionLocationsDataAsset;                              // 0x0410(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZP3X[0x100];                                 // 0x0418(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInvasionParticipatingCrewData>              MatchmakingCrews;                                        // 0x0518(0x0010) ZeroConstructor, Transient
		TArray<struct FInvasionParticipatingCrewData>              InvadingCrews;                                           // 0x0528(0x0010) ZeroConstructor, Transient
		TArray<struct FGuid>                                       MatchmakingCrewsReplicated;                              // 0x0538(0x0010) Net, ZeroConstructor
		TArray<struct FGuid>                                       InvadingCrewsReplicated;                                 // 0x0548(0x0010) Net, ZeroConstructor
		unsigned char                                              UnknownData_R08L[0x50];                                  // 0x0558(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.TaleQuestInvasionMatchmakingService
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UTaleQuestInvasionMatchmakingService : public UTaleQuestService
	{
	public:
		class UTaleQuestInvasionMatchmakingServiceDesc*            ServiceDesc;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2F8I[0xA8];                                  // 0x0068(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.TaleQuestInvasionMatchmakingServiceDesc
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UTaleQuestInvasionMatchmakingServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		class FText                                                OnCrewLeftServerMessage;                                 // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_80QX[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                OnCrewLeftFightMessage;                                  // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_7GVF[0x20];                                  // 0x0078(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.WaitForShipToBeDefeatedStep
	 * Size -> 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
	 */
	class UWaitForShipToBeDefeatedStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_AX51[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_6UP7[0x30];                                  // 0x0098(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InvasionFramework.WaitForShipToBeDefeatedStepDesc
	 * Size -> 0x0108 (FullSize[0x0188] - InheritedSize[0x0080])
	 */
	class UWaitForShipToBeDefeatedStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableActor                                 WinningShip;                                             // 0x0080(0x0020) Edit
		struct FQuestVariableActor                                 DefeatedShip;                                            // 0x00A0(0x0020) Edit
		struct FQuestVariableGuid                                  WinningCrewId;                                           // 0x00C0(0x0020) Edit
		struct FQuestVariableGuid                                  DefeatedCrewId;                                          // 0x00E0(0x0020) Edit
		struct FQuestVariableName                                  WinningFaction;                                          // 0x0100(0x0020) Edit
		struct FQuestVariableName                                  DefeatedFaction;                                         // 0x0120(0x0020) Edit
		float                                                      CheckProximityTimerInterval;                             // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CheckProximityDistanceInMetres;                          // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeoutTimerIntervalInMinutes;                           // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W01C[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FailMessage;                                             // 0x0150(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_X52S[0x20];                                  // 0x0168(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
