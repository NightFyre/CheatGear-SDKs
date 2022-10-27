#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventGetFocalPoint
	 */
	struct ABP_HDPlayerCharacterBase_C_EventGetFocalPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMesh
	 */
	struct ABP_HDPlayerCharacterBase_C_UpdateCharMesh_Params
	{
	public:
		class USkeletalMesh*                                       NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUpdateFPPMesh;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionCompIsActive
	 */
	struct ABP_HDPlayerCharacterBase_C_SetSuppressionCompIsActive_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewActive;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionActive
	 */
	struct ABP_HDPlayerCharacterBase_C_SetSuppressionActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostEnemiesNearbyRestriction
	 */
	struct ABP_HDPlayerCharacterBase_C_CalcOutpostEnemiesNearbyRestriction_Params
	{
	public:
		bool                                                       bAreEnemiesNearby;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B5FO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointEnemiesNearbyRestriction
	 */
	struct ABP_HDPlayerCharacterBase_C_CalcRallypointEnemiesNearbyRestriction_Params
	{
	public:
		bool                                                       bAreEnemiesNearby;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36IU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsOutpostNumberLimitReached
	 */
	struct ABP_HDPlayerCharacterBase_C_IsOutpostNumberLimitReached_Params
	{
	public:
		bool                                                       bNumberLimitReached;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsRallypointNumberLimitReached
	 */
	struct ABP_HDPlayerCharacterBase_C_IsRallypointNumberLimitReached_Params
	{
	public:
		bool                                                       bNumberLimitReached;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostDistanceRestriction
	 */
	struct ABP_HDPlayerCharacterBase_C_CalcOutpostDistanceRestriction_Params
	{
	public:
		bool                                                       bIsOutpostDistanceRestricted;                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5JU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointDistanceRestriction
	 */
	struct ABP_HDPlayerCharacterBase_C_CalcRallypointDistanceRestriction_Params
	{
	public:
		bool                                                       bIsRallypointDistanceRestricted;                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U7LU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedRallypointValid
	 */
	struct ABP_HDPlayerCharacterBase_C_GetIsSpawnedRallypointValid_Params
	{
	public:
		bool                                                       bIsSpawnedRallypointValid;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedOutpostValid
	 */
	struct ABP_HDPlayerCharacterBase_C_GetIsSpawnedOutpostValid_Params
	{
	public:
		bool                                                       bIsSpawnedOutpostValid;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetProneMountPosition
	 */
	struct ABP_HDPlayerCharacterBase_C_GetProneMountPosition_Params
	{
	public:
		struct FVector                                             BoxSize;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHeight;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinHeight;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinSpace;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCouldMount;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B49J[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MountPosition;                                           // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SVQ7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.AlignSights
	 */
	struct ABP_HDPlayerCharacterBase_C_AlignSights_Params
	{
	public:
		float                                                      MinSightDistance;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMountPosition
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMountPosition_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WallDistance;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TraceRadius;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CornerDistance;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CapsuleHeight;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCouldMount;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1SMT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Position;                                                // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O077[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnRep_bSpatializedVOIPTalker
	 */
	struct ABP_HDPlayerCharacterBase_C_OnRep_bSpatializedVOIPTalker_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HasSquadLeaderKit
	 */
	struct ABP_HDPlayerCharacterBase_C_HasSquadLeaderKit_Params
	{
	public:
		bool                                                       bRequireRallyPointAbility;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUsingSquadLeaderKit;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsSquadLeader
	 */
	struct ABP_HDPlayerCharacterBase_C_IsSquadLeader_Params
	{
	public:
		bool                                                       bSquadLeader;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9NV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetSquadState
	 */
	struct ABP_HDPlayerCharacterBase_C_GetSquadState_Params
	{
	public:
		class AHDSquadState*                                       SquadState;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CanSelectAnyRadialMenuOption
	 */
	struct ABP_HDPlayerCharacterBase_C_CanSelectAnyRadialMenuOption_Params
	{
	public:
		bool                                                       bSelectable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectOutpost
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectOutpost_Params
	{
	public:
		bool                                                       bSelectable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectRallypoint
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectRallypoint_Params
	{
	public:
		bool                                                       bSelectable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectSpot
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectSpot_Params
	{
	public:
		bool                                                       bSelectable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectOutpost
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuSelectOutpost_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectRallypoint
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuSelectRallypoint_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectSpot
	 */
	struct ABP_HDPlayerCharacterBase_C_RadialMenuSelectSpot_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectRadialMenuItem
	 */
	struct ABP_HDPlayerCharacterBase_C_SelectRadialMenuItem_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SubItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SpawnAndInitDeployableSPAtPawn
	 */
	struct ABP_HDPlayerCharacterBase_C_SpawnAndInitDeployableSPAtPawn_Params
	{
	public:
		class UClass*                                              SPDeployableClass;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnOffset;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UB0B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_HDProj_SPDeployableBase_C*                       SpawnedDeployableSP;                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LeanDebug
	 */
	struct ABP_HDPlayerCharacterBase_C_LeanDebug_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsMatchingTeam
	 */
	struct ABP_HDPlayerCharacterBase_C_IsMatchingTeam_Params
	{
	public:
		class AController*                                         LocalController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMatchingTeam;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetPlayerFactionInfoClass
	 */
	struct ABP_HDPlayerCharacterBase_C_GetPlayerFactionInfoClass_Params
	{
	public:
		EHDTeam                                                    PlayerTeam;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              FactionInfoClass;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ClearHealthRegenTimer
	 */
	struct ABP_HDPlayerCharacterBase_C_ClearHealthRegenTimer_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetHealthRegenTimerIfInvalid
	 */
	struct ABP_HDPlayerCharacterBase_C_SetHealthRegenTimerIfInvalid_Params
	{
	public:
		float                                                      NewHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HealthRegenTimerElapsed
	 */
	struct ABP_HDPlayerCharacterBase_C_HealthRegenTimerElapsed_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CleanupVOIPTalker
	 */
	struct ABP_HDPlayerCharacterBase_C_CleanupVOIPTalker_Params
	{
	public:
		bool                                                       bDestroyedComp;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetupVOIPTalker
	 */
	struct ABP_HDPlayerCharacterBase_C_SetupVOIPTalker_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EquipSelectedItemFromInventory
	 */
	struct ABP_HDPlayerCharacterBase_C_EquipSelectedItemFromInventory_Params
	{
	public:
		bool                                                       bSwitchFireModeForSelected;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B5WK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidLoadout
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMostValidLoadout_Params
	{
	public:
		class UHDKit*                                              PlayerLoadout;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamFactionInfo
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMostValidTeamFactionInfo_Params
	{
	public:
		class UClass*                                              FactionInfoClass;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamState
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMostValidTeamState_Params
	{
	public:
		class ADFTeamState*                                        TeamState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidPlayerState
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMostValidPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveGetDefaultPawnMesh1P
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveGetDefaultPawnMesh1P_Params
	{
	public:
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateEquipmentItems
	 */
	struct ABP_HDPlayerCharacterBase_C_UpdateEquipmentItems_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdatePOIState
	 */
	struct ABP_HDPlayerCharacterBase_C_UpdatePOIState_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMinimapWidget
	 */
	struct ABP_HDPlayerCharacterBase_C_GetMinimapWidget_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFMinimap*                                          MinimapWidget;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ApplyCharacterVariation
	 */
	struct ABP_HDPlayerCharacterBase_C_ApplyCharacterVariation_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     VariationHandle;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bApplyToFPP;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshes
	 */
	struct ABP_HDPlayerCharacterBase_C_UpdateCharMeshes_Params
	{
	public:
		class USkeletalMesh*                                       MeshFPP;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       MeshTPP;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshesFromFaction
	 */
	struct ABP_HDPlayerCharacterBase_C_UpdateCharMeshesFromFaction_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectEquipmentBySlotNum
	 */
	struct ABP_HDPlayerCharacterBase_C_SelectEquipmentBySlotNum_Params
	{
	public:
		int32_t                                                    EquipSlotNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEquipImmediately;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ID28[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetEquipmentTimer
	 */
	struct ABP_HDPlayerCharacterBase_C_SetEquipmentTimer_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.StartEquipmentTimer
	 */
	struct ABP_HDPlayerCharacterBase_C_StartEquipmentTimer_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FreeAiming
	 */
	struct ABP_HDPlayerCharacterBase_C_FreeAiming_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UserConstructionScript
	 */
	struct ABP_HDPlayerCharacterBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__FinishedFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_SuppressionTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__UpdateFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_SuppressionTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__FinishedFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_DamageEffectTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__UpdateFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_DamageEffectTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__FinishedFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_LerpTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__UpdateFunc
	 */
	struct ABP_HDPlayerCharacterBase_C_LerpTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_NextItem_K2Node_InputActionEvent_17
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_NextItem_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_PreviousItem_K2Node_InputActionEvent_16
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_PreviousItem_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_CameraToggle_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot0_K2Node_InputActionEvent_14
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot0_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot1_K2Node_InputActionEvent_13
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot1_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot2_K2Node_InputActionEvent_12
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot2_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot3_K2Node_InputActionEvent_11
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot3_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot4_K2Node_InputActionEvent_10
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot4_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot5_K2Node_InputActionEvent_9
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot5_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot6_K2Node_InputActionEvent_8
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot6_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot7_K2Node_InputActionEvent_7
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot7_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot8_K2Node_InputActionEvent_6
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot8_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot9_K2Node_InputActionEvent_5
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot9_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_4
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_RadialMenu_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_3
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_RadialMenu_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_BracedAim_K2Node_InputActionEvent_2
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_BracedAim_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1
	 */
	struct ABP_HDPlayerCharacterBase_C_InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectSpot
	 */
	struct ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectSpot_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectRallypoint
	 */
	struct ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectRallypoint_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectOutpost
	 */
	struct ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectOutpost_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.Hit Damage
	 */
	struct ABP_HDPlayerCharacterBase_C_Hit_Damage_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionEffect
	 */
	struct ABP_HDPlayerCharacterBase_C_SuppressionEffect_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 SuppressionVolume;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDFF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QJ33[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W08D[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O4WC[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EnterRadialMenu
	 */
	struct ABP_HDPlayerCharacterBase_C_EnterRadialMenu_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventResetHealthEffect
	 */
	struct ABP_HDPlayerCharacterBase_C_EventResetHealthEffect_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GenericDamageFeedback
	 */
	struct ABP_HDPlayerCharacterBase_C_GenericDamageFeedback_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveTick
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnDeath
	 */
	struct ABP_HDPlayerCharacterBase_C_OnDeath_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D12Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnEquipmentTimerElapsed
	 */
	struct ABP_HDPlayerCharacterBase_C_OnEquipmentTimerElapsed_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveCurrentLoadout
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveCurrentLoadout_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RetryLoadout
	 */
	struct ABP_HDPlayerCharacterBase_C_RetryLoadout_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePossessed
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFirePressed
	 */
	struct ABP_HDPlayerCharacterBase_C_OnPCFirePressed_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnLanded
	 */
	struct ABP_HDPlayerCharacterBase_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExitRadialMenu
	 */
	struct ABP_HDPlayerCharacterBase_C_ExitRadialMenu_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveRestart
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveRestart_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveDestroyed
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SubmenuCommited
	 */
	struct ABP_HDPlayerCharacterBase_C_SubmenuCommited_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SubItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamNumUpdated
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceivePawnTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveFreeAim
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveFreeAim_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.NotifyPlayerStateChanged
	 */
	struct ABP_HDPlayerCharacterBase_C_NotifyPlayerStateChanged_Params
	{
	public:
		class APlayerState*                                        NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        OldPlayerState;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveBeginPlay
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FirstPersonToggled
	 */
	struct ABP_HDPlayerCharacterBase_C_FirstPersonToggled_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFireReleased
	 */
	struct ABP_HDPlayerCharacterBase_C_OnPCFireReleased_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.PlayerNameChanged
	 */
	struct ABP_HDPlayerCharacterBase_C_PlayerNameChanged_Params
	{
	public:
		class APlayerState*                                        PS;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              NewPlayerName;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEndPlay
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveUnpossessed
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveAnyDamage
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamStateUpdated
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceivePawnTeamStateUpdated_Params
	{
	public:
		class ADFTeamState*                                        TeamStateBeforeUpdate;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFTeamState*                                        NewTeamState;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewTeamStateInit;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.K2_OnMovementModeChanged
	 */
	struct ABP_HDPlayerCharacterBase_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVoipTalkerMsgReceived
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveVoipTalkerMsgReceived_Params
	{
	public:
		class UDFCommChannel*                                      MsgTalkerChannel;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        MsgTalkerPS;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMsgIsTalking;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnStartAim
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveOnStartAim_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnEndAim
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveOnEndAim_Params
	{	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEquippedItemChanged
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveEquippedItemChanged_Params
	{
	public:
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePlayHit
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceivePlayHit_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZC6T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVariationDataChanged
	 */
	struct ABP_HDPlayerCharacterBase_C_ReceiveVariationDataChanged_Params
	{
	public:
		struct FDFCharacterVariationData                           NewVariation;                                            // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FDFCharacterVariationData                           PreviousVariation;                                       // 0x0068(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExecuteUbergraph_BP_HDPlayerCharacterBase
	 */
	struct ABP_HDPlayerCharacterBase_C_ExecuteUbergraph_BP_HDPlayerCharacterBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnHitDamage__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_OnHitDamage__DelegateSignature_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnSuppression__DelegateSignature
	 */
	struct ABP_HDPlayerCharacterBase_C_OnSuppression__DelegateSignature_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
