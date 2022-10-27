#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function AthenaCheat.AthenaCheatManager.WindTriggerChange
	 */
	struct UAthenaCheatManager_WindTriggerChange_Params
	{
	public:
		int32_t                                                    ChangeInstantly;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindSetVector
	 */
	struct UAthenaCheatManager_WindSetVector_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindSetMagnitude
	 */
	struct UAthenaCheatManager_WindSetMagnitude_Params
	{
	public:
		float                                                      Magnitude;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindSetDirection
	 */
	struct UAthenaCheatManager_WindSetDirection_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindReloadParams
	 */
	struct UAthenaCheatManager_WindReloadParams_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindPrintDirection
	 */
	struct UAthenaCheatManager_WindPrintDirection_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindEnableDebug
	 */
	struct UAthenaCheatManager_WindEnableDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindDisableDebug
	 */
	struct UAthenaCheatManager_WindDisableDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
	 */
	struct UAthenaCheatManager_WindAlignWithCamera_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Walk
	 */
	struct UAthenaCheatManager_Walk_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.VomitWithType
	 */
	struct UAthenaCheatManager_VomitWithType_Params
	{
	public:
		class FName                                                VomitType;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Vomit
	 */
	struct UAthenaCheatManager_Vomit_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance
	 */
	struct UAthenaCheatManager_ValidateNPCCullingDistance_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance
	 */
	struct UAthenaCheatManager_UpdateInvasionAggressivePassiveTeleportOffsetDistance_Params
	{
	public:
		class FString                                              InDistance;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
	 */
	struct UAthenaCheatManager_UnlockTradeRouteSelectionForMyCrew_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
	 */
	struct UAthenaCheatManager_UnlockTradeRouteSelectionForCrew_Params
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory
	 */
	struct UAthenaCheatManager_UnlockEntitlementCategory_Params
	{
	public:
		class FString                                              EntitlementMapToUnlock;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
	 */
	struct UAthenaCheatManager_UnlockEntitlement_Params
	{
	public:
		class FString                                              EntitlementId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse
	 */
	struct UAthenaCheatManager_UnlockAndEquipSkeletonCurse_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement
	 */
	struct UAthenaCheatManager_UnlockAndEquipItemFromEntitlement_Params
	{
	public:
		class FString                                              EntitlementId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse
	 */
	struct UAthenaCheatManager_UnlockAndEquipGhostCurse_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes
	 */
	struct UAthenaCheatManager_UnlockAllSkeletonClothes_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
	 */
	struct UAthenaCheatManager_UnlockAllEntitlements_Params
	{
	public:
		int32_t                                                    TrueFalse;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
	 */
	struct UAthenaCheatManager_UnlockAllEmblemsAndAchievements_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.UnBreakLeg
	 */
	struct UAthenaCheatManager_UnBreakLeg_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TutorialAction
	 */
	struct UAthenaCheatManager_TutorialAction_Params
	{
	public:
		class FString                                              ActionTypeString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
	 */
	struct UAthenaCheatManager_TriggerRewardNotification_Params
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
	 */
	struct UAthenaCheatManager_TriggerLandmarkReaction_Params
	{
	public:
		int32_t                                                    ActionType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
	 */
	struct UAthenaCheatManager_TriggerFogManagerAtNearestIsland_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerEmergentInvasion
	 */
	struct UAthenaCheatManager_TriggerEmergentInvasion_Params
	{
	public:
		class FString                                              InCrewId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
	 */
	struct UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params
	{
	public:
		class FString                                              EmblemFriendlyName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion
	 */
	struct UAthenaCheatManager_TriggerDebugAggressivePassiveInvasion_Params
	{
	public:
		class FString                                              InCrewId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion
	 */
	struct UAthenaCheatManager_TriggerDebugAggressiveAggressiveInvasion_Params
	{
	public:
		class FString                                              InCrewId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
	 */
	struct UAthenaCheatManager_TriggerControllerConnectionChange_Params
	{
	public:
		bool                                                       IsConnect;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXZQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserId;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ControllerId;                                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingPvPMigration
	 */
	struct UAthenaCheatManager_TriggerContestMatchmakingPvPMigration_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration
	 */
	struct UAthenaCheatManager_TriggerContestMatchmakingMigration_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
	 */
	struct UAthenaCheatManager_TriggerContestBannerUnfurl_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
	 */
	struct UAthenaCheatManager_TriggerAIShipTimerBattle_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
	 */
	struct UAthenaCheatManager_TriggerAIShipPassive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
	 */
	struct UAthenaCheatManager_TriggerAIShipEncounter_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
	 */
	struct UAthenaCheatManager_TriggerAIShipAggressive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
	 */
	struct UAthenaCheatManager_ToggleVideprinter_Params
	{
	public:
		class FString                                              Id;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
	 */
	struct UAthenaCheatManager_ToggleThirdPerson_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh
	 */
	struct UAthenaCheatManager_ToggleStoryRefresh_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter
	 */
	struct UAthenaCheatManager_ToggleStoryDisplayFilter_Params
	{
	public:
		bool                                                       IsIncludeFilter;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9CSO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Filter;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
	 */
	struct UAthenaCheatManager_ToggleSeaClueLocationQueryDebugDisplay_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
	 */
	struct UAthenaCheatManager_ToggleRetailDrawDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleNoClip
	 */
	struct UAthenaCheatManager_ToggleNoClip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
	 */
	struct UAthenaCheatManager_ToggleNearestSuperheatedWater_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
	 */
	struct UAthenaCheatManager_ToggleNearestLava_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
	 */
	struct UAthenaCheatManager_ToggleMigrationPointOfInterestChecks_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
	 */
	struct UAthenaCheatManager_ToggleIslandSelectionDebugDisplay_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleGlint
	 */
	struct UAthenaCheatManager_ToggleGlint_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
	 */
	struct UAthenaCheatManager_ToggleFastShipControls_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay
	 */
	struct UAthenaCheatManager_ToggleFactionDebugDisplay_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDrowning
	 */
	struct UAthenaCheatManager_ToggleDrowning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
	 */
	struct UAthenaCheatManager_ToggleDrawShipSpeed_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
	 */
	struct UAthenaCheatManager_ToggleDrawAboveIslandBounds_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories
	 */
	struct UAthenaCheatManager_ToggleDisplayStories_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners
	 */
	struct UAthenaCheatManager_ToggleDisplayEmergentBattleBanners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
	 */
	struct UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
	 */
	struct UAthenaCheatManager_ToggleDebugFlying_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
	 */
	struct UAthenaCheatManager_ToggleDeathCamera_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
	 */
	struct UAthenaCheatManager_ToggleDamageAllowedToPlayerShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded
	 */
	struct UAthenaCheatManager_ToggleCrewIdToBeBlockedFromBeingInvaded_Params
	{
	public:
		class FString                                              InCrewId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
	 */
	struct UAthenaCheatManager_ToggleContestScoreDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
	 */
	struct UAthenaCheatManager_ToggleCinematicCamera_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
	 */
	struct UAthenaCheatManager_ToggleAttributeOverride_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS
	 */
	struct UAthenaCheatManager_ToggleAggressivePassiveTeleportUseEQS_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash
	 */
	struct UAthenaCheatManager_TestForceArchiveAsyncPoolCanaryCrash_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
	 */
	struct UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
	 */
	struct UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToShip
	 */
	struct UAthenaCheatManager_TeleportToShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
	 */
	struct UAthenaCheatManager_TeleportToPlayerStart_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
	 */
	struct UAthenaCheatManager_TeleportToNearestTreasureLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToLocation
	 */
	struct UAthenaCheatManager_TeleportToLocation_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToHideout
	 */
	struct UAthenaCheatManager_TeleportToHideout_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation
	 */
	struct UAthenaCheatManager_TeleportToDebugDestinationLocation_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DestinationId;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
	 */
	struct UAthenaCheatManager_TeleportToAggressiveGhostShipEncounter_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportShip
	 */
	struct UAthenaCheatManager_TeleportShip_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation
	 */
	struct UAthenaCheatManager_TeleportPlayerToSpireLocation_Params
	{
	public:
		int32_t                                                    SpireIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
	 */
	struct UAthenaCheatManager_TeleportPlayerToSafety_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn
	 */
	struct UAthenaCheatManager_TeleportPlayerToOffsetAndReturn_Params
	{
	public:
		float                                                      OffsetX;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OffsetY;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OffsetZ;                                                 // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnTime;                                              // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
	 */
	struct UAthenaCheatManager_TeleportPlayerToKraken_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
	 */
	struct UAthenaCheatManager_TeleportPlayersCrewShipToPlayerLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
	 */
	struct UAthenaCheatManager_TeleportOutOfHideout_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
	 */
	struct UAthenaCheatManager_TeleportCrewToShip_Params
	{
	public:
		class FString                                              CrewId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
	 */
	struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CrewId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
	 */
	struct UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params
	{
	public:
		class FString                                              CrewId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
	 */
	struct UAthenaCheatManager_TeleportCrewMemberToShip_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
	 */
	struct UAthenaCheatManager_TeleportAllPlayersToShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
	 */
	struct UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
	 */
	struct UAthenaCheatManager_TeleportAllCrewsToShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
	 */
	struct UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
	 */
	struct UAthenaCheatManager_TeleportActorToTrackedActorType_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DestinationActorType;                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
	 */
	struct UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params
	{
	public:
		class FString                                              ControllerActorIdString;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              TeleportLocationActorIdString;                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite
	 */
	struct UAthenaCheatManager_TeleportActorToPlayerBuriedDigSite_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
	 */
	struct UAthenaCheatManager_TeleportActorToLocation_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      LocationX;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
	 */
	struct UAthenaCheatManager_TeleportActorToIsland_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              IslandName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
	 */
	struct UAthenaCheatManager_TeleportActorToDigSite_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       WasBuriedByPlayer;                                       // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
	 */
	struct UAthenaCheatManager_TeleportActorToActorWithOffset_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DestinationActorIdString;                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      OffsetX;                                                 // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OffsetY;                                                 // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OffsetZ;                                                 // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SwitchActiveStory
	 */
	struct UAthenaCheatManager_SwitchActiveStory_Params
	{
	public:
		class FString                                              StoryNameToRemove;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              StoryNameToAdd;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       AddIfNonExistentStory;                                   // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SuperShovel
	 */
	struct UAthenaCheatManager_SuperShovel_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SuperSailor
	 */
	struct UAthenaCheatManager_SuperSailor_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip
	 */
	struct UAthenaCheatManager_StraightenAllTrinketsOnOwnShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips
	 */
	struct UAthenaCheatManager_StraightenAllTrinketsOnAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
	 */
	struct UAthenaCheatManager_StoreWieldedItemInBootyStorageInCurrentIsland_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
	 */
	struct UAthenaCheatManager_StoreWieldedItemInBootyStorage_Params
	{
	public:
		class FString                                              IslandName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StoreShipLocation
	 */
	struct UAthenaCheatManager_StoreShipLocation_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StopShip
	 */
	struct UAthenaCheatManager_StopShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StopPetHangout
	 */
	struct UAthenaCheatManager_StopPetHangout_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StopLocalSequences
	 */
	struct UAthenaCheatManager_StopLocalSequences_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StopAllShips
	 */
	struct UAthenaCheatManager_StopAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
	 */
	struct UAthenaCheatManager_StopAllPetsHangout_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StockShip
	 */
	struct UAthenaCheatManager_StockShip_Params
	{
	public:
		class FString                                              EntitlementAndAmountString;                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartVoyage
	 */
	struct UAthenaCheatManager_StartVoyage_Params
	{
	public:
		class FString                                              SourceAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Development;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
	 */
	struct UAthenaCheatManager_StartSicknessOnPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
	 */
	struct UAthenaCheatManager_StartSelectedRomeVoyage_Params
	{
	public:
		class FString                                              RomeVoyageString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
	 */
	struct UAthenaCheatManager_StartNearestVolcano_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
	 */
	struct UAthenaCheatManager_StartNearestGeysers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
	 */
	struct UAthenaCheatManager_StartNearestEarthquake_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking
	 */
	struct UAthenaCheatManager_StartInvasionMatchmaking_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartDemoSession
	 */
	struct UAthenaCheatManager_StartDemoSession_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
	 */
	struct UAthenaCheatManager_StartCargoRunFromNearestNPC_Params
	{
	public:
		int32_t                                                    NumOfCrates;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew
	 */
	struct UAthenaCheatManager_StartCaptaincySessionAsNewCrew_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
	 */
	struct UAthenaCheatManager_StartAshenLordGeysers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
	 */
	struct UAthenaCheatManager_StartAllVolcanos_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
	 */
	struct UAthenaCheatManager_StartAllCrewVoyages_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpireStreamOut
	 */
	struct UAthenaCheatManager_SpireStreamOut_Params
	{
	public:
		int32_t                                                    SpireIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpireStreamIn
	 */
	struct UAthenaCheatManager_SpireStreamIn_Params
	{
	public:
		int32_t                                                    SpireIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpinShip
	 */
	struct UAthenaCheatManager_SpinShip_Params
	{
	public:
		float                                                      YawSpdInDegreesPerSecond;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
	 */
	struct UAthenaCheatManager_SpawnWatercraft_Params
	{
	public:
		class FString                                              WatercraftClassString;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
	 */
	struct UAthenaCheatManager_SpawnTreasureChestOfType_Params
	{
	public:
		class FString                                              ChestTypeString;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
	 */
	struct UAthenaCheatManager_SpawnTreasureArtifact_Params
	{
	public:
		class FString                                              TypeString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
	 */
	struct UAthenaCheatManager_SpawnTinySharkAtLocation_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartIndex;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
	 */
	struct UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params
	{
	public:
		int32_t                                                    ControllerParamIndex;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartIndex;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
	 */
	struct UAthenaCheatManager_SpawnStrongholdKeyFromGameEventType_Params
	{
	public:
		class FString                                              FortEventName;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
	 */
	struct UAthenaCheatManager_SpawnStrongholdKey_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
	 */
	struct UAthenaCheatManager_SpawnSmallShipAtIsland_Params
	{
	public:
		class FString                                              IslandName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnSmallShip
	 */
	struct UAthenaCheatManager_SpawnSmallShip_Params
	{
	public:
		float                                                      SpawnLocationX;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnYaw;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint
	 */
	struct UAthenaCheatManager_SpawnSkeletonAtNearestAISpawnPoint_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
	 */
	struct UAthenaCheatManager_SpawnShipOfType_Params
	{
	public:
		float                                                      SpawnLocationX;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnYaw;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TypeString;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
	 */
	struct UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params
	{
	public:
		float                                                      XProportion;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YProportion;                                             // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8JD7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TypeString;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
	 */
	struct UAthenaCheatManager_SpawnShipFromDesc_Params
	{
	public:
		class FString                                              InShipDescAssetString;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      SpawnLocationX;                                          // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnYaw;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
	 */
	struct UAthenaCheatManager_SpawnShipAtIsland_Params
	{
	public:
		class FString                                              IslandName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnShip
	 */
	struct UAthenaCheatManager_SpawnShip_Params
	{
	public:
		float                                                      SpawnLocationX;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnYaw;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnSeagull
	 */
	struct UAthenaCheatManager_SpawnSeagull_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
	 */
	struct UAthenaCheatManager_SpawnRomeTreasureChestOfType_Params
	{
	public:
		class FString                                              ChestTypeString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull
	 */
	struct UAthenaCheatManager_SpawnRandomSeagull_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip
	 */
	struct UAthenaCheatManager_SpawnOceanCrawlersOnShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
	 */
	struct UAthenaCheatManager_SpawnNumberOfAI_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    NumToSpawn;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
	 */
	struct UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersRandom_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
	 */
	struct UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersNearToPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
	 */
	struct UAthenaCheatManager_SpawnMultipleTreasureChestsOfType_Params
	{
	public:
		class FString                                              ChestTypeString;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
	 */
	struct UAthenaCheatManager_SpawnMessageInABottle_Params
	{
	public:
		class FString                                              MessageInABottleTypeString;                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMermaid
	 */
	struct UAthenaCheatManager_SpawnMermaid_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
	 */
	struct UAthenaCheatManager_SpawnMerchantFauna_Params
	{
	public:
		class FString                                              FaunaTypeString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
	 */
	struct UAthenaCheatManager_SpawnMerchantCrate_Params
	{
	public:
		class FString                                              MerchantCrateTypeString;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
	 */
	struct UAthenaCheatManager_SpawnMerchantCargo_Params
	{
	public:
		class FString                                              MerchantCargoTypeString;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
	 */
	struct UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params
	{
	public:
		uint32_t                                                   NumTentacles;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
	 */
	struct UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
	 */
	struct UAthenaCheatManager_SpawnItemOnFloor_Params
	{
	public:
		class FString                                              ItemString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
	 */
	struct UAthenaCheatManager_SpawnItemInHand_Params
	{
	public:
		class FString                                              ItemString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
	 */
	struct UAthenaCheatManager_SpawnGoldMound_Params
	{
	public:
		class FString                                              GoldMoundTypeString;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
	 */
	struct UAthenaCheatManager_SpawnGeyserAtPlayerLocationWithDormancy_Params
	{
	public:
		float                                                      Dormancy;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
	 */
	struct UAthenaCheatManager_SpawnGeyserAtPlayerLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation
	 */
	struct UAthenaCheatManager_SpawnGeyserAtLocation_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Dormancy;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition
	 */
	struct UAthenaCheatManager_SpawnFogAtPlayerPosition_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
	 */
	struct UAthenaCheatManager_SpawnFishAtPlayerLocation_Params
	{
	public:
		class FString                                              InBaitType;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnFirework
	 */
	struct UAthenaCheatManager_SpawnFirework_Params
	{
	public:
		class FString                                              FireworkItemString;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
	 */
	struct UAthenaCheatManager_SpawnCursedCannonball_Params
	{
	public:
		class FString                                              CannonballTypeString;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt
	 */
	struct UAthenaCheatManager_SpawnContextualPrompt_Params
	{
	public:
		class FString                                              PromptAccessKey;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
	 */
	struct UAthenaCheatManager_SpawnCollectorsChestOfType_Params
	{
	public:
		class FString                                              ChestTypeString;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
	 */
	struct UAthenaCheatManager_SpawnCargoRunCrate_Params
	{
	public:
		class FString                                              SpawnCargoRunCrateString;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer
	 */
	struct UAthenaCheatManager_SpawnCabinDoorInFrontOfPlayer_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
	 */
	struct UAthenaCheatManager_SpawnBountyReward_Params
	{
	public:
		class FString                                              BountyTypeString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
	 */
	struct UAthenaCheatManager_SpawnBootyPickupPoint_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
	 */
	struct UAthenaCheatManager_SpawnBarrelGroup_Params
	{
	public:
		bool                                                       ForcedCloseSpawn;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
	 */
	struct UAthenaCheatManager_SpawnAThousandTreasureChests_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
	 */
	struct UAthenaCheatManager_SpawnAndEquipDebugWieldable_Params
	{
	public:
		class FString                                              DebugWieldableTypeString;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
	 */
	struct UAthenaCheatManager_SpawnAINoTrigger_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
	 */
	struct UAthenaCheatManager_SpawnAIEncounter_Params
	{
	public:
		class FString                                              AIEncounterString;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
	 */
	struct UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
	 */
	struct UAthenaCheatManager_SpawnAIAtLocationDelayed_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      LocationX;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationZ;                                               // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
	 */
	struct UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAI
	 */
	struct UAthenaCheatManager_SpawnAI_Params
	{
	public:
		class FString                                              AIDescString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
	 */
	struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
	 */
	struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireFriendlyFormation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
	 */
	struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireEnemyFormation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
	 */
	struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpire_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
	 */
	struct UAthenaCheatManager_SpawnAggressiveGhostShipEncounter_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
	 */
	struct UAthenaCheatManager_SmoulderClosestShipFire_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
	 */
	struct UAthenaCheatManager_SmoulderAllShipFires_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
	 */
	struct UAthenaCheatManager_SlowMotionOverride_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
	 */
	struct UAthenaCheatManager_SkipToEndOfOnboarding_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
	 */
	struct UAthenaCheatManager_SinkShipWithKeelOverIndex_Params
	{
	public:
		int32_t                                                    KeelOverConfigIndex;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
	 */
	struct UAthenaCheatManager_SinkShipByActorId_Params
	{
	public:
		class FString                                              ShipActorIdString;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkShip
	 */
	struct UAthenaCheatManager_SinkShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
	 */
	struct UAthenaCheatManager_SinkClosestItemProxy_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
	 */
	struct UAthenaCheatManager_SinkAllBarrels_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
	 */
	struct UAthenaCheatManager_SinkAllAIShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SingleStickSwap
	 */
	struct UAthenaCheatManager_SingleStickSwap_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SingleStickRight
	 */
	struct UAthenaCheatManager_SingleStickRight_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SingleStickOff
	 */
	struct UAthenaCheatManager_SingleStickOff_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SingleStickLeft
	 */
	struct UAthenaCheatManager_SingleStickLeft_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
	 */
	struct UAthenaCheatManager_SimulateTunnelFailure_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
	 */
	struct UAthenaCheatManager_SimulatePetReactRequest_Params
	{
	public:
		class FString                                              Id;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
	 */
	struct UAthenaCheatManager_SimulatePetReactCancellation_Params
	{
	public:
		class FString                                              Id;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps
	 */
	struct UAthenaCheatManager_SignalActiveGlobalVoyageDelaySteps_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
	 */
	struct UAthenaCheatManager_ShowTavernBanners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables
	 */
	struct UAthenaCheatManager_ShowTaleDebug_WithVariables_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
	 */
	struct UAthenaCheatManager_ShowTaleDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast
	 */
	struct UAthenaCheatManager_ShowShipMilestoneToast_Params
	{
	public:
		class FString                                              MilestoneGuid;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MilestoneAlignment;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		uint64_t                                                   MilestoneLevel;                                          // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ShipName;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
	 */
	struct UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast
	 */
	struct UAthenaCheatManager_ShowPlayerMilestoneToast_Params
	{
	public:
		class FString                                              MilestoneGuid;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MilestoneAlignment;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		uint64_t                                                   MilestoneLevel;                                          // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
	 */
	struct UAthenaCheatManager_ShowEmissaryVoteIndicators_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowAllWelds
	 */
	struct UAthenaCheatManager_ShowAllWelds_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
	 */
	struct UAthenaCheatManager_ShowAllRomeBeacons_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
	 */
	struct UAthenaCheatManager_ShowAllianceStatus_Params
	{
	public:
		class FString                                              CrewId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
	 */
	struct UAthenaCheatManager_ShipwrecksSpawnOne_Params
	{
	public:
		float                                                      SpawnLocationX;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom
	 */
	struct UAthenaCheatManager_ShipwrecksSpawnCustom_Params
	{
	public:
		float                                                      SpawnLocationX;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationY;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpawnLocationZ;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W9AA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              WreckAsset;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom
	 */
	struct UAthenaCheatManager_ShipwrecksRemoveCustom_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
	 */
	struct UAthenaCheatManager_ShipwrecksRegen_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
	 */
	struct UAthenaCheatManager_ShipUpdateMassProperies_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipSurface
	 */
	struct UAthenaCheatManager_ShipSurface_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ShipDive
	 */
	struct UAthenaCheatManager_ShipDive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetWheelAngle
	 */
	struct UAthenaCheatManager_SetWheelAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut
	 */
	struct UAthenaCheatManager_SetWeaponsLockedOut_Params
	{
	public:
		bool                                                       WeaponsLockedOut;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetWaveFlag
	 */
	struct UAthenaCheatManager_SetWaveFlag_Params
	{
	public:
		int32_t                                                    InFlag;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams
	 */
	struct UAthenaCheatManager_SetWaterWaveParams_Params
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaveLength;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PropagationSpeed;                                        // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2
	 */
	struct UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
	 */
	struct UAthenaCheatManager_SetVoiceChatEndpointWwise_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
	 */
	struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
	 */
	struct UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled
	 */
	struct UAthenaCheatManager_SetTrinketsEnabled_Params
	{
	public:
		bool                                                       InTrinketsEnabled;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips
	 */
	struct UAthenaCheatManager_SetTrinketNudgeChanceMaxOnAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
	 */
	struct UAthenaCheatManager_SetTinySharkToOneHealth_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTimeScalar
	 */
	struct UAthenaCheatManager_SetTimeScalar_Params
	{
	public:
		float                                                      TimeScalar;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes
	 */
	struct UAthenaCheatManager_SetTimeHoursAndMinutes_Params
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTime
	 */
	struct UAthenaCheatManager_SetTime_Params
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed
	 */
	struct UAthenaCheatManager_SetTaleSelectorSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive
	 */
	struct UAthenaCheatManager_SetShroudbreakerActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipYaw
	 */
	struct UAthenaCheatManager_SetShipYaw_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
	 */
	struct UAthenaCheatManager_SetShipWheelFullyRepaired_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
	 */
	struct UAthenaCheatManager_SetShipWheelFullyDamaged_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipRoll
	 */
	struct UAthenaCheatManager_SetShipRoll_Params
	{
	public:
		float                                                      Roll;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipName
	 */
	struct UAthenaCheatManager_SetShipName_Params
	{
	public:
		class FString                                              InShipName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
	 */
	struct UAthenaCheatManager_SetShipFullyDamaged_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
	 */
	struct UAthenaCheatManager_SetShipCapstanFullyRepaired_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
	 */
	struct UAthenaCheatManager_SetShipCapstanFullyDamaged_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
	 */
	struct UAthenaCheatManager_SetShipBuoyancyBlend_Params
	{
	public:
		float                                                      UnaryBlend;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions
	 */
	struct UAthenaCheatManager_SetSailLoweredProportions_Params
	{
	public:
		float                                                      Proportion;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetSailAngles
	 */
	struct UAthenaCheatManager_SetSailAngles_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride
	 */
	struct UAthenaCheatManager_SetRitualTableRequiredPlayersOverride_Params
	{
	public:
		int32_t                                                    RequiredPlayerCount;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
	 */
	struct UAthenaCheatManager_SetPreventLeakingOnAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
	 */
	struct UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params
	{
	public:
		bool                                                       PreventLeaking;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
	 */
	struct UAthenaCheatManager_SetPlayerVisibleToAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks
	 */
	struct UAthenaCheatManager_SetPlayerMaxTicks_Params
	{
	public:
		int32_t                                                    InMaxTicksPerFrame;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
	 */
	struct UAthenaCheatManager_SetPlayerInvisibleToAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPlayerInert
	 */
	struct UAthenaCheatManager_SetPlayerInert_Params
	{
	public:
		bool                                                       IsInert;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPhotoMode
	 */
	struct UAthenaCheatManager_SetPhotoMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow
	 */
	struct UAthenaCheatManager_SetPetMovementTimeWindow_Params
	{
	public:
		float                                                      TimeWindow;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
	 */
	struct UAthenaCheatManager_SetNonCrewChatSpatialisation_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI
	 */
	struct UAthenaCheatManager_SetMaxNumOfSpawnedAI_Params
	{
	public:
		int32_t                                                    MaxNumOfSpawnedActors;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips
	 */
	struct UAthenaCheatManager_SetMaxMovingPetsOnShips_Params
	{
	public:
		int32_t                                                    MaxMovingPets;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer
	 */
	struct UAthenaCheatManager_SetMaxMovingPetsOnServer_Params
	{
	public:
		int32_t                                                    MaxMovingPets;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand
	 */
	struct UAthenaCheatManager_SetMaxMovingPetsOnLand_Params
	{
	public:
		int32_t                                                    MaxMovingPets;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
	 */
	struct UAthenaCheatManager_SetMastsFullyRepaired_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
	 */
	struct UAthenaCheatManager_SetMastsFullyDamaged_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
	 */
	struct UAthenaCheatManager_SetKnockbackDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetIsTinSession
	 */
	struct UAthenaCheatManager_SetIsTinSession_Params
	{
	public:
		bool                                                       InIsCaptainedSession;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly
	 */
	struct UAthenaCheatManager_SetIsShipCustomizationTinOnly_Params
	{
	public:
		bool                                                       InIsShipCustomizationCaptainOnly;                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetIsCaptain
	 */
	struct UAthenaCheatManager_SetIsCaptain_Params
	{
	public:
		bool                                                       InIsCaptain;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
	 */
	struct UAthenaCheatManager_SetIdleDisconnectEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride
	 */
	struct UAthenaCheatManager_SetHealthInfoReplicateOverride_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
	 */
	struct UAthenaCheatManager_SetGrogSecondary_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetGodMode
	 */
	struct UAthenaCheatManager_SetGodMode_Params
	{
	public:
		bool                                                       GodModeOn;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride
	 */
	struct UAthenaCheatManager_SetGlitterbeardRequiredPlayersOverride_Params
	{
	public:
		int32_t                                                    RequiredPlayerCount;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetFOV
	 */
	struct UAthenaCheatManager_SetFOV_Params
	{
	public:
		float                                                      InNewFOV;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance
	 */
	struct UAthenaCheatManager_SetForceLocalPlayerMoveForwardFlipDistance_Params
	{
	public:
		float                                                      FlipDistance;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour
	 */
	struct UAthenaCheatManager_SetFlameOfFateColour_Params
	{
	public:
		int32_t                                                    InFlameOfFateType;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetFactionStreak
	 */
	struct UAthenaCheatManager_SetFactionStreak_Params
	{
	public:
		int32_t                                                    InStreak;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
	 */
	struct UAthenaCheatManager_SetDebugItemSource_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage
	 */
	struct UAthenaCheatManager_SetDebugHealthStage_Params
	{
	public:
		int32_t                                                    InStage;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
	 */
	struct UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params
	{
	public:
		bool                                                       bUseProjectileChannel;                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer
	 */
	struct UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params
	{
	public:
		float                                                      InSpawnTimer;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes
	 */
	struct UAthenaCheatManager_SetDeathPenaltyCrewBasedRespawnTimes_Params
	{
	public:
		float                                                      CrewOfOne;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CrewOfTwo;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CrewOfThree;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CrewOfFour;                                              // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip
	 */
	struct UAthenaCheatManager_SetDamageAllowedToPlayerShip_Params
	{
	public:
		bool                                                       InAllowDamage;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug
	 */
	struct UAthenaCheatManager_SetCutsceneResponseCoordinatorDebug_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
	 */
	struct UAthenaCheatManager_SetCurrentCulture_Params
	{
	public:
		class FString                                              Culture;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility
	 */
	struct UAthenaCheatManager_SetCrestTextVisibility_Params
	{
	public:
		bool                                                       InShouldShowText;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset
	 */
	struct UAthenaCheatManager_SetCoordinatedKrakenPhaseAsset_Params
	{
	public:
		int32_t                                                    AssetIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
	 */
	struct UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetInactive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
	 */
	struct UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetActive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
	 */
	struct UAthenaCheatManager_SetCapstanPosition_Params
	{
	public:
		float                                                      Position;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAxisBinding
	 */
	struct UAthenaCheatManager_SetAxisBinding_Params
	{
	public:
		class FString                                              InBindingName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InKeyName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance
	 */
	struct UAthenaCheatManager_SetAllAIOverrideCannonShotHitChance_Params
	{
	public:
		float                                                      HitChance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
	 */
	struct UAthenaCheatManager_SetAITeamAttitude_Params
	{
	public:
		class FString                                              TeamAString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              TeamBString;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              AttitudeString;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
	 */
	struct UAthenaCheatManager_SetAIExclusiveAbility_Params
	{
	public:
		class FString                                              AIAbilityString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
	 */
	struct UAthenaCheatManager_SetAIAbilityTimeMultiplier_Params
	{
	public:
		class FString                                              AIAbilityString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      IntervalCooldownMultiplier;                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ActivationCooldownMultiplier;                            // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
	 */
	struct UAthenaCheatManager_SetAbilityAlwaysOn_Params
	{
	public:
		class FString                                              AIAbilityString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
	 */
	struct UAthenaCheatManager_SendUpdateVoyageProgressEvent_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SendStatEvent
	 */
	struct UAthenaCheatManager_SendStatEvent_Params
	{
	public:
		uint32_t                                                   StatId;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_68WN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint64_t                                                   StatValue;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
	 */
	struct UAthenaCheatManager_SendRewardRequestEvent_Params
	{
	public:
		class FString                                              CompanyNameAndRewardIdSeparatedByColon;                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
	 */
	struct UAthenaCheatManager_SendResetReaperLevelEvent_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ScuttleShip
	 */
	struct UAthenaCheatManager_ScuttleShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
	 */
	struct UAthenaCheatManager_ScreenFadeStart_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
	 */
	struct UAthenaCheatManager_ScreenFadeEnd_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
	 */
	struct UAthenaCheatManager_SchedulerToggleDebugDraw_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
	 */
	struct UAthenaCheatManager_SchedulerSkipToNext_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
	 */
	struct UAthenaCheatManager_SchedulerInitTinyShark_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
	 */
	struct UAthenaCheatManager_SchedulerInitSkellyFort_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
	 */
	struct UAthenaCheatManager_SchedulerInitKraken_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
	 */
	struct UAthenaCheatManager_SchedulerInitDefault_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
	 */
	struct UAthenaCheatManager_SchedulerInitAshenLord_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
	 */
	struct UAthenaCheatManager_SchedulerInitAIShipPassive_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
	 */
	struct UAthenaCheatManager_SchedulerInitAIShipBattle_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
	 */
	struct UAthenaCheatManager_SchedulerInitAIShipAggro_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
	 */
	struct UAthenaCheatManager_SchedulerInitAggroGhostShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
	 */
	struct UAthenaCheatManager_SchedulerAdvance_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SaveMyShip
	 */
	struct UAthenaCheatManager_SaveMyShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SailShip
	 */
	struct UAthenaCheatManager_SailShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.SailAllShips
	 */
	struct UAthenaCheatManager_SailAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
	 */
	struct UAthenaCheatManager_RewindPhysicsSceneBy_Params
	{
	public:
		float                                                      SecondsToRewindBy;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
	 */
	struct UAthenaCheatManager_ReviveLocalPlayerInstantly_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
	 */
	struct UAthenaCheatManager_ReviveLocalPlayerAccordingToReviveTime_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
	 */
	struct UAthenaCheatManager_RetrieveItemsFromBootyStorageInCurrentIsland_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
	 */
	struct UAthenaCheatManager_RetrieveItemsFromBootyStorage_Params
	{
	public:
		class FString                                              IslandName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
	 */
	struct UAthenaCheatManager_ResurfaceShipByActorId_Params
	{
	public:
		class FString                                              ShipActorIdString;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
	 */
	struct UAthenaCheatManager_RestoreAndRestockShipAndPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
	 */
	struct UAthenaCheatManager_RestockIslandBarrels_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
	 */
	struct UAthenaCheatManager_RestockAllReplenishables_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
	 */
	struct UAthenaCheatManager_RespawnAllIslandItemSpawners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
	 */
	struct UAthenaCheatManager_ResetTinySharkSpawnTimerWithTime_Params
	{
	public:
		float                                                      Timer;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
	 */
	struct UAthenaCheatManager_ResetTinySharkSpawnTimer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
	 */
	struct UAthenaCheatManager_ResetTaleSelectorSeed_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetStats
	 */
	struct UAthenaCheatManager_ResetStats_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetRitualTable
	 */
	struct UAthenaCheatManager_ResetRitualTable_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage
	 */
	struct UAthenaCheatManager_ResetRepairedShipDamage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetNearestVault
	 */
	struct UAthenaCheatManager_ResetNearestVault_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort
	 */
	struct UAthenaCheatManager_ResetNearestSeaFort_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
	 */
	struct UAthenaCheatManager_ResetNearestEventRoom_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
	 */
	struct UAthenaCheatManager_ResetMouseDelta_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
	 */
	struct UAthenaCheatManager_ResetMaxNumOfSpawnedAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
	 */
	struct UAthenaCheatManager_ResetMaxMovingPetsOnServerToDefault_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown
	 */
	struct UAthenaCheatManager_ResetInvasionMatchmakingCooldown_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown
	 */
	struct UAthenaCheatManager_ResetInitialMatchmakingCooldown_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
	 */
	struct UAthenaCheatManager_ResetGlitterbeardTree_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetDemoSession
	 */
	struct UAthenaCheatManager_ResetDemoSession_Params
	{
	public:
		bool                                                       StartNewSession;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage
	 */
	struct UAthenaCheatManager_ResetAllShipDamage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
	 */
	struct UAthenaCheatManager_ResetAllOverrideCannonShotHitChance_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
	 */
	struct UAthenaCheatManager_ResetAllMechanisms_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
	 */
	struct UAthenaCheatManager_ResetAITeamAttitudes_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
	 */
	struct UAthenaCheatManager_ResetAIExclusiveAbilities_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetActiveStories
	 */
	struct UAthenaCheatManager_ResetActiveStories_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
	 */
	struct UAthenaCheatManager_ResetAbilityAlwaysOn_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
	 */
	struct UAthenaCheatManager_RequestSmallPassiveAIShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
	 */
	struct UAthenaCheatManager_RequestSmallAggressiveAIShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
	 */
	struct UAthenaCheatManager_RequestMysteriousNotesForPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
	 */
	struct UAthenaCheatManager_RequestLargePassiveAIShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
	 */
	struct UAthenaCheatManager_RequestLargeAggressiveAIShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData
	 */
	struct UAthenaCheatManager_RequestCaptainedSessionCrewData_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
	 */
	struct UAthenaCheatManager_ReplenishShipWithDebugSpawner_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReplenishShip
	 */
	struct UAthenaCheatManager_ReplenishShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
	 */
	struct UAthenaCheatManager_ReplaceShipWithSmallShip_Params
	{
	public:
		class FString                                              ShipActorIdConsoleString;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
	 */
	struct UAthenaCheatManager_RepairShipAndClearInternalWater_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
	 */
	struct UAthenaCheatManager_RepairAndClearInternalWaterOnAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RenameTreasure
	 */
	struct UAthenaCheatManager_RenameTreasure_Params
	{
	public:
		class FString                                              InVendorName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip
	 */
	struct UAthenaCheatManager_RemoveVoyageFromShip_Params
	{
	public:
		class FString                                              SourceAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement
	 */
	struct UAthenaCheatManager_RemoveSkeletonCurseEntitlement_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
	 */
	struct UAthenaCheatManager_RemovePetsFromAllPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
	 */
	struct UAthenaCheatManager_RemovePetFromPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
	 */
	struct UAthenaCheatManager_RemoveLostShipmentsDebugging_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip
	 */
	struct UAthenaCheatManager_RemoveLastAddedVoyageFromShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
	 */
	struct UAthenaCheatManager_RemoveItemInSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement
	 */
	struct UAthenaCheatManager_RemoveGhostCurseEntitlement_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
	 */
	struct UAthenaCheatManager_RemoveDebugPetSpawners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
	 */
	struct UAthenaCheatManager_RemoveDebugHealthStage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveAllFog
	 */
	struct UAthenaCheatManager_RemoveAllFog_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
	 */
	struct UAthenaCheatManager_RemoveAISpawnContext_Params
	{
	public:
		class FString                                              ContextName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RemoveActiveStory
	 */
	struct UAthenaCheatManager_RemoveActiveStory_Params
	{
	public:
		class FString                                              StoryName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RefreshActiveStories
	 */
	struct UAthenaCheatManager_RefreshActiveStories_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed
	 */
	struct UAthenaCheatManager_RebuildPirateFromSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
	 */
	struct UAthenaCheatManager_ReallyScrambleMyGamertag_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.QueryShipStocks
	 */
	struct UAthenaCheatManager_QueryShipStocks_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex
	 */
	struct UAthenaCheatManager_Puzzle_UnlockLockByIndex_Params
	{
	public:
		class FString                                              TargetActor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    LockIndex;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock
	 */
	struct UAthenaCheatManager_Puzzle_UnlockLock_Params
	{
	public:
		class FString                                              TargetActor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FGuid                                               Guid;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks
	 */
	struct UAthenaCheatManager_Puzzle_UnlockAllLocks_Params
	{
	public:
		class FString                                              TargetActor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock
	 */
	struct UAthenaCheatManager_Puzzle_ResetUnlock_Params
	{
	public:
		class FString                                              TargetActor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks
	 */
	struct UAthenaCheatManager_Puzzle_ActivateAllLocks_Params
	{
	public:
		class FString                                              TargetActor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PushShip
	 */
	struct UAthenaCheatManager_PushShip_Params
	{
	public:
		float                                                      FwdSpdInMetersPerSecond;                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
	 */
	struct UAthenaCheatManager_PullLatestEmblemProgress_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip
	 */
	struct UAthenaCheatManager_ProposeVoyageFromShip_Params
	{
	public:
		class FString                                              SourceAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip
	 */
	struct UAthenaCheatManager_ProposeLastAddedVoyageFromShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
	 */
	struct UAthenaCheatManager_ProceedToNextContestState_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrintTime
	 */
	struct UAthenaCheatManager_PrintTime_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrintNPCs
	 */
	struct UAthenaCheatManager_PrintNPCs_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
	 */
	struct UAthenaCheatManager_PrintAllNetworkActors_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrintAISpawners
	 */
	struct UAthenaCheatManager_PrintAISpawners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
	 */
	struct UAthenaCheatManager_PrintAISpawnContexts_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PrimeRitualTable
	 */
	struct UAthenaCheatManager_PrimeRitualTable_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PreventShipMotion
	 */
	struct UAthenaCheatManager_PreventShipMotion_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
	 */
	struct UAthenaCheatManager_PlayWorldSequence_Params
	{
	public:
		class FString                                              InReference;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
	 */
	struct UAthenaCheatManager_PlayLocalSequences_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
	 */
	struct UAthenaCheatManager_PlayerAnimationOverride_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
	 */
	struct UAthenaCheatManager_OverrideShipPartFromCatalogue_Params
	{
	public:
		class FString                                              InShipActorIdConsoleString;                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InCataloguePartIndex;                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCataloguePartCustomisationIndex;                       // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
	 */
	struct UAthenaCheatManager_OpenSkeletonFortDoor_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip
	 */
	struct UAthenaCheatManager_NudgeAllTrinketsOnOwnShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips
	 */
	struct UAthenaCheatManager_NudgeAllTrinketsOnAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
	 */
	struct UAthenaCheatManager_MoveStormToPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MoveStormToLocation
	 */
	struct UAthenaCheatManager_MoveStormToLocation_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MoveStormToIsland
	 */
	struct UAthenaCheatManager_MoveStormToIsland_Params
	{
	public:
		class FString                                              IslandNameString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
	 */
	struct UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
	 */
	struct UAthenaCheatManager_MakeSharksBrainDead_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
	 */
	struct UAthenaCheatManager_MakeDebugPetSpawner_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
	 */
	struct UAthenaCheatManager_LogShipHierarchy_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
	 */
	struct UAthenaCheatManager_LogServerShipHierarchy_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
	 */
	struct UAthenaCheatManager_LogAITeamAttitudes_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
	 */
	struct UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForMyCrew_Params
	{
	public:
		class FString                                              RouteReferencePath;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
	 */
	struct UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForCrew_Params
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FString                                              RouteReferencePath;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
	 */
	struct UAthenaCheatManager_LocallyUnBreakLeg_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
	 */
	struct UAthenaCheatManager_LocallyDisableTutorial_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LoadMyShip
	 */
	struct UAthenaCheatManager_LoadMyShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
	 */
	struct UAthenaCheatManager_LightLocalBraziers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
	 */
	struct UAthenaCheatManager_LightBraziersInRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LeaveFaction
	 */
	struct UAthenaCheatManager_LeaveFaction_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LeaveAlliance
	 */
	struct UAthenaCheatManager_LeaveAlliance_Params
	{
	public:
		class FString                                              CrewId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LayerSpawn
	 */
	struct UAthenaCheatManager_LayerSpawn_Params
	{
	public:
		class FString                                              LayerAsset;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LayerClearAll
	 */
	struct UAthenaCheatManager_LayerClearAll_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LayerClear
	 */
	struct UAthenaCheatManager_LayerClear_Params
	{
	public:
		class FString                                              LayerAsset;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.LaunchPlayer
	 */
	struct UAthenaCheatManager_LaunchPlayer_Params
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
	 */
	struct UAthenaCheatManager_KrakenSetTentaclesToOneHealth_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleKill_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
	 */
	struct UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params
	{
	public:
		class FString                                              HoldState;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KindleClosestShip
	 */
	struct UAthenaCheatManager_KindleClosestShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
	 */
	struct UAthenaCheatManager_KindleAllShipFires_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillPlayer
	 */
	struct UAthenaCheatManager_KillPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillCrew
	 */
	struct UAthenaCheatManager_KillCrew_Params
	{
	public:
		class FString                                              CrewId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
	 */
	struct UAthenaCheatManager_KillAllSkeletons_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllPlayers
	 */
	struct UAthenaCheatManager_KillAllPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
	 */
	struct UAthenaCheatManager_KillAllOtherPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
	 */
	struct UAthenaCheatManager_KillAllOtherPlayerCharacters_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
	 */
	struct UAthenaCheatManager_KillAllDebugAISpawners_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllCrews
	 */
	struct UAthenaCheatManager_KillAllCrews_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllAI
	 */
	struct UAthenaCheatManager_KillAllAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
	 */
	struct UAthenaCheatManager_KillAllAggressiveGhostShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
	 */
	struct UAthenaCheatManager_KillAllAggressiveGhostShipEncounters_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.JoinFaction
	 */
	struct UAthenaCheatManager_JoinFaction_Params
	{
	public:
		class FString                                              FactionName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.JoinAlliance
	 */
	struct UAthenaCheatManager_JoinAlliance_Params
	{
	public:
		class FString                                              OfferingCrew;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              AcceptingCrew;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IPGOverride
	 */
	struct UAthenaCheatManager_IPGOverride_Params
	{
	public:
		class FName                                                BodyShape;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
	 */
	struct UAthenaCheatManager_IPGLoadWithoutClothing_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              path;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
	 */
	struct UAthenaCheatManager_IPGLoadWithClothing_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              path;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IPGLoad
	 */
	struct UAthenaCheatManager_IPGLoad_Params
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.InvincibleEverything
	 */
	struct UAthenaCheatManager_InvincibleEverything_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
	 */
	struct UAthenaCheatManager_InterruptSicknessOnPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
	 */
	struct UAthenaCheatManager_InfiniteGunAmmo_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IncrementTime
	 */
	struct UAthenaCheatManager_IncrementTime_Params
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak
	 */
	struct UAthenaCheatManager_IncrementFactionStreak_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
	 */
	struct UAthenaCheatManager_IncrementDebugHealthStage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
	 */
	struct UAthenaCheatManager_IncreaseEmissaryCount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
	 */
	struct UAthenaCheatManager_IgniteShipAtPlayerLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
	 */
	struct UAthenaCheatManager_IgniteLocalPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
	 */
	struct UAthenaCheatManager_IgniteClosestShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
	 */
	struct UAthenaCheatManager_IgniteAllShipFires_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess
	 */
	struct UAthenaCheatManager_HuntersCryForceRescueSuccess_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail
	 */
	struct UAthenaCheatManager_HuntersCryForceRescueFail_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail
	 */
	struct UAthenaCheatManager_HuntersCryDisableTimedFail_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus
	 */
	struct UAthenaCheatManager_HitRegSnapshotsToggleOnScreenStatus_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetShowPreCorrectedCapsules_Params
	{
	public:
		bool                                                       ShowPreCorrectedCapsules;                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetShowFullRewindData_Params
	{
	public:
		bool                                                       ShowFullRewindData;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisplaySnapshots_Params
	{
	public:
		bool                                                       ShowSnapshots;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisplayServerData_Params
	{
	public:
		bool                                                       ShowServerData;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisplayDetailedExplanations_Params
	{
	public:
		bool                                                       ShowExplanations;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisplayAttackingClientData_Params
	{
	public:
		bool                                                       ShowClientData;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AffectAllSnapshots;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToComponents_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToAllShots_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors
	 */
	struct UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToActors_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault
	 */
	struct UAthenaCheatManager_HitRegSnapshotsResetVisibilitySettingsToDefault_Params
	{
	public:
		bool                                                       AffectAllSnapshots;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalClientOnly;                                         // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem
	 */
	struct UAthenaCheatManager_HitRegSnapshotsEnableSystem_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem
	 */
	struct UAthenaCheatManager_HitRegSnapshotsDisableSystem_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll
	 */
	struct UAthenaCheatManager_HitRegSnapshotsDestroyAll_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan
	 */
	struct UAthenaCheatManager_HitRegSetPlayerProjectilesHitScan_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HideTaleDebug
	 */
	struct UAthenaCheatManager_HideTaleDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
	 */
	struct UAthenaCheatManager_HideEmissaryVoteIndicators_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
	 */
	struct UAthenaCheatManager_HideAllRomeBeacons_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthSet
	 */
	struct UAthenaCheatManager_HealthSet_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthReset
	 */
	struct UAthenaCheatManager_HealthReset_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
	 */
	struct UAthenaCheatManager_HealthRegenResetToEmpty_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
	 */
	struct UAthenaCheatManager_HealthRegenAdd_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
	 */
	struct UAthenaCheatManager_HealthContinuousStopWithTestReason_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
	 */
	struct UAthenaCheatManager_HealthContinuousStopWithReason_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason
	 */
	struct UAthenaCheatManager_HealthContinuousStartWithTestReason_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
	 */
	struct UAthenaCheatManager_HealthContinuousStartWithReason_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JPVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Reason;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HealthAdjust
	 */
	struct UAthenaCheatManager_HealthAdjust_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable
	 */
	struct UAthenaCheatManager_HandInMegalodonSoulToRitualTable_Params
	{
	public:
		int32_t                                                    SoulType;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.God
	 */
	struct UAthenaCheatManager_God_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
	 */
	struct UAthenaCheatManager_ForceStopAllPetsDanger_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
	 */
	struct UAthenaCheatManager_ForceStartAllPetsDangerWithChangingThreatLocation_Params
	{
	public:
		class FString                                              ResponseType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      UpdateThreatLocationTime;                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
	 */
	struct UAthenaCheatManager_ForceStartAllPetsDanger_Params
	{
	public:
		class FString                                              ResponseType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes
	 */
	struct UAthenaCheatManager_ForceSkipTallTaleSteps_WaitAndCutscenes_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
	 */
	struct UAthenaCheatManager_ForceRequestCampaignsFromServices_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForcePetHangout
	 */
	struct UAthenaCheatManager_ForcePetHangout_Params
	{
	public:
		class FName                                                HangoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PositionIndex;                                           // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceOpenShop
	 */
	struct UAthenaCheatManager_ForceOpenShop_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove
	 */
	struct UAthenaCheatManager_ForceNPCOnSurfaceToMove_Params
	{
	public:
		bool                                                       FastMove;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KeepCurrentLocation;                                     // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation
	 */
	struct UAthenaCheatManager_ForceNPCOnSurfaceLocation_Params
	{
	public:
		int32_t                                                    LoctationIndex;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LoctationPointIndex;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger
	 */
	struct UAthenaCheatManager_ForceNPCOnShipIsCurrentlyInDanger_Params
	{
	public:
		bool                                                       IsCurrentlyInDanger;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward
	 */
	struct UAthenaCheatManager_ForceLocalPlayerMoveForward_Params
	{
	public:
		float                                                      ScaleValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect
	 */
	struct UAthenaCheatManager_ForceGarbageCollect_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp
	 */
	struct UAthenaCheatManager_ForceEmoteWithEmoteProp_Params
	{
	public:
		class FName                                                EmoteIdentifier;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              EmotePropAssetLocation;                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp
	 */
	struct UAthenaCheatManager_ForceEmoteWithDescriptionAndEmoteProp_Params
	{
	public:
		class FName                                                EmoteIdentifier;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              AudioDescription;                                        // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EmotePropAssetLocation;                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
	 */
	struct UAthenaCheatManager_ForceEmoteWithDescription_Params
	{
	public:
		class FName                                                EmoteIdentifier;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              AudioDescription;                                        // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceEmote
	 */
	struct UAthenaCheatManager_ForceEmote_Params
	{
	public:
		class FName                                                EmoteIdentifier;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceCloseShop
	 */
	struct UAthenaCheatManager_ForceCloseShop_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
	 */
	struct UAthenaCheatManager_ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation_Params
	{
	public:
		class FString                                              ResponseType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      UpdateThreatLocationTime;                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
	 */
	struct UAthenaCheatManager_ForceAllPetsDangerWithNoiseEvent_Params
	{
	public:
		class FString                                              ResponseType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
	 */
	struct UAthenaCheatManager_ForceAggressiveGhostShipStartSinkingAnimation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
	 */
	struct UAthenaCheatManager_ForceAggressiveGhostShipStartDisappearAnimation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
	 */
	struct UAthenaCheatManager_ForceAggressiveGhostShipStartAppearAnimation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
	 */
	struct UAthenaCheatManager_ForceAggressiveGhostShipPortalJump_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.Fly
	 */
	struct UAthenaCheatManager_Fly_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex
	 */
	struct UAthenaCheatManager_FloodShipWithKeelOverIndex_Params
	{
	public:
		float                                                      NormalisedWaterAmount;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    KeelOverConfigIndex;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FloodShip
	 */
	struct UAthenaCheatManager_FloodShip_Params
	{
	public:
		float                                                      NormalisedWaterAmount;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent
	 */
	struct UAthenaCheatManager_FireStartedCaptainedSessionEvent_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage
	 */
	struct UAthenaCheatManager_FireSeasonRewardEarnedMessage_Params
	{
	public:
		int32_t                                                    InNumSeason;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRewardsLevel;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InMultipleRewards;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage
	 */
	struct UAthenaCheatManager_FireSeasonGoalProgressionMessage_Params
	{
	public:
		int32_t                                                    InNumSeason;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPreviousProgress;                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCurrentProgress;                                       // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCompletionTreshold;                                    // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InGoalType;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VNCE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InGoalCategory;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage
	 */
	struct UAthenaCheatManager_FireSeasonGoalCompletionMessage_Params
	{
	public:
		int32_t                                                    InNumSeason;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InGoalType;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InGoalCategory;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage
	 */
	struct UAthenaCheatManager_FireLevelCompletionMessage_Params
	{
	public:
		int32_t                                                    InNumSeason;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLevel;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTimeSpentInLevel;                                      // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTier;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTimeSpentInTier;                                       // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InTierCompleted;                                         // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InSeasonCompleted;                                       // 0x0015(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat
	 */
	struct UAthenaCheatManager_FireCreatorCrewSignedUpStat_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
	 */
	struct UAthenaCheatManager_FireCreatorCrewMinutesViewedStat_Params
	{
	public:
		int32_t                                                    InNumMinutes;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat
	 */
	struct UAthenaCheatManager_FireCreatorCrewMinutesStreamedStat_Params
	{
	public:
		int32_t                                                    InNumMinutes;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat
	 */
	struct UAthenaCheatManager_FireCreatorCrewCurrentViewersStat_Params
	{
	public:
		int32_t                                                    InNumViewers;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FindText
	 */
	struct UAthenaCheatManager_FindText_Params
	{
	public:
		class FString                                              Namespace;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets
	 */
	struct UAthenaCheatManager_FillNearestShipWithTrinkets_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
	 */
	struct UAthenaCheatManager_FakeMigrateBountyQuests_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent
	 */
	struct UAthenaCheatManager_ExitedStormShipEvent_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
	 */
	struct UAthenaCheatManager_EquipPirateTitle_Params
	{
	public:
		class FString                                              PirateTitleType;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
	 */
	struct UAthenaCheatManager_EquipCompassInLoadout_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent
	 */
	struct UAthenaCheatManager_EnteredStormShipEvent_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EndDemoSession
	 */
	struct UAthenaCheatManager_EndDemoSession_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession
	 */
	struct UAthenaCheatManager_EndCurrentCaptainedSession_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
	 */
	struct UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
	 */
	struct UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat
	 */
	struct UAthenaCheatManager_EnableStoryServiceCheat_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableStormEffects
	 */
	struct UAthenaCheatManager_EnableStormEffects_Params
	{
	public:
		unsigned char                                              LockReason;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
	 */
	struct UAthenaCheatManager_EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay_Params
	{
	public:
		int32_t                                                    TrueFalse;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableNTP
	 */
	struct UAthenaCheatManager_EnableNTP_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning
	 */
	struct UAthenaCheatManager_EnableMermaidSpawning_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion
	 */
	struct UAthenaCheatManager_EnableMermaidDeletion_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing
	 */
	struct UAthenaCheatManager_EnableHeadphoneMixing_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableFactionDebug
	 */
	struct UAthenaCheatManager_EnableFactionDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
	 */
	struct UAthenaCheatManager_EnableEmergentSirenSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
	 */
	struct UAthenaCheatManager_EnableEmergentSharkSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
	 */
	struct UAthenaCheatManager_EnableConsoleLogging_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
	 */
	struct UAthenaCheatManager_EnableCinematicCamera_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
	 */
	struct UAthenaCheatManager_EnableBeaconOnAllMermaids_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
	 */
	struct UAthenaCheatManager_EnableAllEmergentWaterSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
	 */
	struct UAthenaCheatManager_EnableAIBehaviour_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets
	 */
	struct UAthenaCheatManager_EmptyNearestShipOfTrinkets_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DrawVideprinter
	 */
	struct UAthenaCheatManager_DrawVideprinter_Params
	{
	public:
		class FString                                              Id;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Active;                                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug
	 */
	struct UAthenaCheatManager_DrawTreasureDebug_Params
	{
	public:
		int32_t                                                    Enabled;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug
	 */
	struct UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
	 */
	struct UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
	 */
	struct UAthenaCheatManager_DrawNearbyAISpawnPoints_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DownPlayer
	 */
	struct UAthenaCheatManager_DownPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DownAllPlayers
	 */
	struct UAthenaCheatManager_DownAllPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
	 */
	struct UAthenaCheatManager_DownAllOtherPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
	 */
	struct UAthenaCheatManager_DownAllOtherPlayerCharacters_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DouseClosestShip
	 */
	struct UAthenaCheatManager_DouseClosestShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
	 */
	struct UAthenaCheatManager_DouseAllShipFires_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
	 */
	struct UAthenaCheatManager_DiveShipByActorId_Params
	{
	public:
		class FString                                              ShipActorIdString;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug
	 */
	struct UAthenaCheatManager_DisplaySpireLocationsDebug_Params
	{
	public:
		int32_t                                                    Enabled;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
	 */
	struct UAthenaCheatManager_DisplaySingleEmblemProgress_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
	 */
	struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
	 */
	struct UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params
	{
	public:
		uint32_t                                                   NumSamplesPerDimension;                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistanceBetweenSamples;                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TestHeight;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayServerFPS
	 */
	struct UAthenaCheatManager_DisplayServerFPS_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
	 */
	struct UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
	 */
	struct UAthenaCheatManager_DisplayLoadingScreenTeleport_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
	 */
	struct UAthenaCheatManager_DisplayLoadingScreenBoot_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
	 */
	struct UAthenaCheatManager_DisplayLoadingScreenAdventure_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
	 */
	struct UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
	 */
	struct UAthenaCheatManager_DisplayLandmarkRegions_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
	 */
	struct UAthenaCheatManager_DisplayLandmarkNames_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
	 */
	struct UAthenaCheatManager_DisplayFallDamageDebug_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness
	 */
	struct UAthenaCheatManager_DisplayDrunkenness_Params
	{
	public:
		bool                                                       Flag;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
	 */
	struct UAthenaCheatManager_DismissAllPickupPoints_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableStormEffects
	 */
	struct UAthenaCheatManager_DisableStormEffects_Params
	{
	public:
		unsigned char                                              LockReason;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
	 */
	struct UAthenaCheatManager_DisableEmergentSirenSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
	 */
	struct UAthenaCheatManager_DisableEmergentSharkSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
	 */
	struct UAthenaCheatManager_DisableConsoleLogging_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
	 */
	struct UAthenaCheatManager_DisableCinematicCamera_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
	 */
	struct UAthenaCheatManager_DisableAllEmergentWaterSpawning_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
	 */
	struct UAthenaCheatManager_DisableAIBehaviour_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
	 */
	struct UAthenaCheatManager_DisableAIAbilities_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
	 */
	struct UAthenaCheatManager_DioramaStartNearest_Params
	{
	public:
		class FString                                              Spawner;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DioramaDesc;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DioramaStart
	 */
	struct UAthenaCheatManager_DioramaStart_Params
	{
	public:
		class FString                                              ActorName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Spawner;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DioramaDesc;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug
	 */
	struct UAthenaCheatManager_DioramaKillAllDebug_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyShip
	 */
	struct UAthenaCheatManager_DestroyShip_Params
	{
	public:
		class FString                                              ShipActorIdConsoleString;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
	 */
	struct UAthenaCheatManager_DestroyNearestDebugReapersChestMarker_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyMyShip
	 */
	struct UAthenaCheatManager_DestroyMyShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyKraken
	 */
	struct UAthenaCheatManager_DestroyKraken_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
	 */
	struct UAthenaCheatManager_DestroyAllTreasureChests_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
	 */
	struct UAthenaCheatManager_DestroyAllTinySharks_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues
	 */
	struct UAthenaCheatManager_DestroyAllSirenStatues_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DestroyAllShips
	 */
	struct UAthenaCheatManager_DestroyAllShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
	 */
	struct UAthenaCheatManager_DespawnNumberOfAI_Params
	{
	public:
		class FString                                              AITypeString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    NumToDespawn;                                            // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
	 */
	struct UAthenaCheatManager_DespawnFirstAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
	 */
	struct UAthenaCheatManager_DespawnAllAggressiveGhostShips_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DespawnAI
	 */
	struct UAthenaCheatManager_DespawnAI_Params
	{
	public:
		class FString                                              AITypeString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
	 */
	struct UAthenaCheatManager_DeleteVoyageHistory_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
	 */
	struct UAthenaCheatManager_DeleteAllMermaids_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak
	 */
	struct UAthenaCheatManager_DecrementFactionStreak_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
	 */
	struct UAthenaCheatManager_DecrementDebugHealthStage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
	 */
	struct UAthenaCheatManager_DebugIslandDelta_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
	 */
	struct UAthenaCheatManager_DeactivateSkellyFort_Params
	{
	public:
		class FString                                              FortName;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
	 */
	struct UAthenaCheatManager_DeactivateEmissaryFlagCompany_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
	 */
	struct UAthenaCheatManager_DeactivateDeathEffect_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
	 */
	struct UAthenaCheatManager_DamageShipFromRemoteActor_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Strength;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationX;                                         // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationY;                                         // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationZ;                                         // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionX;                                 // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionY;                                 // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionZ;                                 // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DamageShip
	 */
	struct UAthenaCheatManager_DamageShip_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
	 */
	struct UAthenaCheatManager_DamagePlayerFromRemoteActor_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Strength;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationX;                                         // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationY;                                         // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraLocationZ;                                         // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionX;                                 // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionY;                                 // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraForwardDirectionZ;                                 // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.DamagePlayer
	 */
	struct UAthenaCheatManager_DamagePlayer_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CureAllAilings
	 */
	struct UAthenaCheatManager_CureAllAilings_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
	 */
	struct UAthenaCheatManager_CreateDebugReapersChestMarkerAtPlayerLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
	 */
	struct UAthenaCheatManager_CreateDebugAISpawnerAt_Params
	{
	public:
		class FString                                              SpawnerAssetName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              LocationActorName;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
	 */
	struct UAthenaCheatManager_CreateDebugAISpawner_Params
	{
	public:
		class FString                                              SpawnerAssetName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew
	 */
	struct UAthenaCheatManager_CreateCaptainsLogForCrew_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
	 */
	struct UAthenaCheatManager_CoordinatedKrakenToggleAI_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
	 */
	struct UAthenaCheatManager_CoordinatedKrakenRequestAction_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging
	 */
	struct UAthenaCheatManager_CoordinatedKrakenEnableDebugging_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
	 */
	struct UAthenaCheatManager_ContextualPromptCountersToggleDebugDraw_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CompleteVoyage
	 */
	struct UAthenaCheatManager_CompleteVoyage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap
	 */
	struct UAthenaCheatManager_CompleteCurrentChecklistMap_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
	 */
	struct UAthenaCheatManager_CompleteAllActivePuzzleVaults_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
	 */
	struct UAthenaCheatManager_CompleteActiveQuests_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
	 */
	struct UAthenaCheatManager_CloseSkeletonFortDoor_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
	 */
	struct UAthenaCheatManager_CloseLoadingScreen_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
	 */
	struct UAthenaCheatManager_ClearWorldSequences_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
	 */
	struct UAthenaCheatManager_ClearVoiceChatMeters_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter
	 */
	struct UAthenaCheatManager_ClearStoryDisplayFilter_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
	 */
	struct UAthenaCheatManager_ClearSlowMotionOverride_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearShipVoyages
	 */
	struct UAthenaCheatManager_ClearShipVoyages_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride
	 */
	struct UAthenaCheatManager_ClearRitualTableRequiredPlayersOverride_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
	 */
	struct UAthenaCheatManager_ClearGrogSecondary_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
	 */
	struct UAthenaCheatManager_ClearGlitterbeardRequiredPlayersOverride_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
	 */
	struct UAthenaCheatManager_ClearDebugStormLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides
	 */
	struct UAthenaCheatManager_ClearCampaignOverrides_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
	 */
	struct UAthenaCheatManager_ClearAxisBinding_Params
	{
	public:
		class FString                                              InBindingName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
	 */
	struct UAthenaCheatManager_ClearAIAbilityTimeMultipliers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
	 */
	struct UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
	 */
	struct UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CapsizeShip
	 */
	struct UAthenaCheatManager_CapsizeShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelVoyage
	 */
	struct UAthenaCheatManager_CancelVoyage_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelTale
	 */
	struct UAthenaCheatManager_CancelTale_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown
	 */
	struct UAthenaCheatManager_CancelInvasionMatchmakingCooldown_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown
	 */
	struct UAthenaCheatManager_CancelInitialMatchmakingCooldown_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
	 */
	struct UAthenaCheatManager_CancelEmergentVoyages_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion
	 */
	struct UAthenaCheatManager_CancelDebugInvasion_Params
	{
	public:
		class FString                                              InCrewId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews
	 */
	struct UAthenaCheatManager_CancelCurrentMatchmakingCooldownForAllCrews_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions
	 */
	struct UAthenaCheatManager_CancelAllDebugInvasions_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
	 */
	struct UAthenaCheatManager_CancelAllCrewVoyages_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
	 */
	struct UAthenaCheatManager_CancelActiveAIShipEncounters_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable
	 */
	struct UAthenaCheatManager_BuryNearestBuriable_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.BuryItem
	 */
	struct UAthenaCheatManager_BuryItem_Params
	{
	public:
		class FString                                              NameOfItemToBury;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.BreakLeg
	 */
	struct UAthenaCheatManager_BreakLeg_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
	 */
	struct UAthenaCheatManager_BlockMigrationForPlayer_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
	 */
	struct UAthenaCheatManager_ApplyStatusToPlayer_Params
	{
	public:
		class FString                                              StatusIdentifier;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
	 */
	struct UAthenaCheatManager_ApplyDamageToAllDamageZones_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
	 */
	struct UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params
	{
	public:
		class FString                                              CannonballTypeString;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
	 */
	struct UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params
	{
	public:
		class FString                                              CannonballTypeString;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems
	 */
	struct UAthenaCheatManager_AllowTeleportWithItems_Params
	{
	public:
		bool                                                       CanTeleport;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AllowShipMotion
	 */
	struct UAthenaCheatManager_AllowShipMotion_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
	 */
	struct UAthenaCheatManager_AllocatePortalToTunnelOfTheDamned_Params
	{
	public:
		class FString                                              TunnelDescAssetPath;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
	 */
	struct UAthenaCheatManager_AllJoinAlliance_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AIPlayerShip
	 */
	struct UAthenaCheatManager_AIPlayerShip_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
	 */
	struct UAthenaCheatManager_AggressiveGhostShipRebuildSpline_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AdjustGhostShader
	 */
	struct UAthenaCheatManager_AdjustGhostShader_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSY7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InStartingAmount;                                        // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTargetAmount;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InVengeanceStartingAmount;                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InVengeanceTargetAmount;                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDelayBeforeStart;                                      // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InBlendDuration;                                         // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddVoyageToShip
	 */
	struct UAthenaCheatManager_AddVoyageToShip_Params
	{
	public:
		class FString                                              SourceAssetName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation
	 */
	struct UAthenaCheatManager_AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
	 */
	struct UAthenaCheatManager_AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
	 */
	struct UAthenaCheatManager_AddTradeRouteClueMarkToMapAtCurrentLocation_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
	 */
	struct UAthenaCheatManager_AddTornMapPiece_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddShipToCrew
	 */
	struct UAthenaCheatManager_AddShipToCrew_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CrewId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
	 */
	struct UAthenaCheatManager_AddRandomPetForAllPlayers_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
	 */
	struct UAthenaCheatManager_AddPlayerToCrew_Params
	{
	public:
		class FString                                              ActorIdString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CrewId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddPetForPlayer
	 */
	struct UAthenaCheatManager_AddPetForPlayer_Params
	{
	public:
		int32_t                                                    PetTypeIndex;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PetPartIndex;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers
	 */
	struct UAthenaCheatManager_AddPetForAllPlayers_Params
	{
	public:
		int32_t                                                    PetTypeIndex;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PetPartIndex;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog
	 */
	struct UAthenaCheatManager_AddNoParameterEventLogEntryToCaptainsLog_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
	 */
	struct UAthenaCheatManager_AddMysteriousNote_Params
	{
	public:
		class FString                                              NoteType;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NoteTitle;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NoteBody;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CompletionStrings;                                       // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog
	 */
	struct UAthenaCheatManager_AddLongEventLogEntryToCaptainsLog_Params
	{	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride
	 */
	struct UAthenaCheatManager_AddInactiveCampaignOverride_Params
	{
	public:
		class FString                                              CampaignName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddDrunkenness
	 */
	struct UAthenaCheatManager_AddDrunkenness_Params
	{
	public:
		int32_t                                                    DrunkennessType;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DrunkennessChange;                                       // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
	 */
	struct UAthenaCheatManager_AddAISpawnContext_Params
	{
	public:
		class FString                                              ContextName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddActiveStory
	 */
	struct UAthenaCheatManager_AddActiveStory_Params
	{
	public:
		class FString                                              StoryName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       AddIfNonExistentStory;                                   // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride
	 */
	struct UAthenaCheatManager_AddActiveCampaignOverride_Params
	{
	public:
		class FString                                              CampaignName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
	 */
	struct UAthenaCheatManager_ActivateSkellyFort_Params
	{
	public:
		class FString                                              FortEventName;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class FString                                              FortName;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
	 */
	struct UAthenaCheatManager_ActivateEmissaryFlagCompany_Params
	{
	public:
		class FString                                              CompanyId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService
	 */
	struct UAthenaCheatManager_ActivateDebugTeleportationDestinationService_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
