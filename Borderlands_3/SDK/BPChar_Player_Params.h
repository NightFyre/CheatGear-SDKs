#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BPChar_Player.BPChar_Player_C.GetTransfusionSpawnEndLocation
	 */
	struct ABPChar_Player_C_GetTransfusionSpawnEndLocation_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             res;                                                     // 0x0008(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.GetLevelUpFXAttachComponent
	 */
	struct ABPChar_Player_C_GetLevelUpFXAttachComponent_Params
	{
	public:
		class USceneComponent*                                     res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.PlayLevelUpFX
	 */
	struct ABPChar_Player_C_PlayLevelUpFX_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.GroundSlamEnd
	 */
	struct ABPChar_Player_C_GroundSlamEnd_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.BackupFriendlyTargeting
	 */
	struct ABPChar_Player_C_BackupFriendlyTargeting_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.GetHeadMesh
	 */
	struct ABPChar_Player_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMesh*                                       HeadMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.ClearTargetingTimers
	 */
	struct ABPChar_Player_C_ClearTargetingTimers_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.PreInventoryItemPickupCheck
	 */
	struct ABPChar_Player_C_PreInventoryItemPickupCheck_Params
	{
	public:
		class AActor*                                              PickupActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsedByInstigator;                                        // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K0BQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AInventoryItemPickup*                                WorldPickupActor;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75GQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.UserConstructionScript
	 */
	struct ABPChar_Player_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Player_HealthDepleted
	 */
	struct ABPChar_Player_C_Player_HealthDepleted_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStart
	 */
	struct ABPChar_Player_C_Enemy_OnPhaseLockStart_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStop
	 */
	struct ABPChar_Player_C_Enemy_OnPhaseLockStop_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStart
	 */
	struct ABPChar_Player_C_Enemy_OnThoughtLockStart_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStop
	 */
	struct ABPChar_Player_C_Enemy_OnThoughtLockStop_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.SetMissionDebugText
	 */
	struct ABPChar_Player_C_SetMissionDebugText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      TextSize;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        TextColor;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FacePlayer;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.OnInventoryEquipped
	 */
	struct ABPChar_Player_C_OnInventoryEquipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.OnInventoryUnequipped
	 */
	struct ABPChar_Player_C_OnInventoryUnequipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.OnInventoryPickedUp
	 */
	struct ABPChar_Player_C_OnInventoryPickedUp_Params
	{
	public:
		class AActor*                                              PickedUpActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.DoMelee
	 */
	struct ABPChar_Player_C_DoMelee_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.ReceiveBeginPlay
	 */
	struct ABPChar_Player_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.ReceiveTick
	 */
	struct ABPChar_Player_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.OnJumped
	 */
	struct ABPChar_Player_C_OnJumped_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.OnLanded
	 */
	struct ABPChar_Player_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player
	 */
	struct ABPChar_Player_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.GroundSlam_End
	 */
	struct ABPChar_Player_C_GroundSlam_End_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player
	 */
	struct ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player
	 */
	struct ABPChar_Player_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Multikill Reset
	 */
	struct ABPChar_Player_C_Multikill_Reset_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Player_LevelUp
	 */
	struct ABPChar_Player_C_Player_LevelUp_Params
	{
	public:
		int32_t                                                    Old_XP_Level;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_XP_Level;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player
	 */
	struct ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player_Params
	{
	public:
		int32_t                                                    OldExperienceLevel;                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewExperienceLevel;                                      // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.Player_SpawnTransfusionProjectile
	 */
	struct ABPChar_Player_C_Player_SpawnTransfusionProjectile_Params
	{
	public:
		class UClass*                                              DataBlueprint_Override;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType_Override;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SourceActor;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TargetActor;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J393[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Causer_Override;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.StartZeroG
	 */
	struct ABPChar_Player_C_StartZeroG_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.EndZeroG
	 */
	struct ABPChar_Player_C_EndZeroG_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.ServerStartZeroG
	 */
	struct ABPChar_Player_C_ServerStartZeroG_Params
	{	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.ExecuteUbergraph_BPChar_Player
	 */
	struct ABPChar_Player_C_ExecuteUbergraph_BPChar_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0GQO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Player.BPChar_Player_C.GroundSlam__DelegateSignature
	 */
	struct ABPChar_Player_C_GroundSlam__DelegateSignature_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
