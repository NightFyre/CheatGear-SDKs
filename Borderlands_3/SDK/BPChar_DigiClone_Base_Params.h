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
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Get Owners Grenade Projectile Class
	 */
	struct ABPChar_DigiClone_Base_C_Get_Owners_Grenade_Projectile_Class_Params
	{
	public:
		class UClass*                                              Grenade_Projectile_Class;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapEnd
	 */
	struct ABPChar_DigiClone_Base_C_HandleTeleportSwapEnd_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapStart
	 */
	struct ABPChar_DigiClone_Base_C_HandleTeleportSwapStart_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnLevelTwoWeapon
	 */
	struct ABPChar_DigiClone_Base_C_TrySpawnLevelTwoWeapon_Params
	{
	public:
		class AWeapon*                                             res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureMinMax
	 */
	struct ABPChar_DigiClone_Base_C_ConfigureMinMax_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnRep_bIsNotUsingMummersWeapon
	 */
	struct ABPChar_DigiClone_Base_C_OnRep_bIsNotUsingMummersWeapon_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ApplyOperativeWeaponMaterials
	 */
	struct ABPChar_DigiClone_Base_C_ApplyOperativeWeaponMaterials_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureTrapCard
	 */
	struct ABPChar_DigiClone_Base_C_TryConfigureTrapCard_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureShield
	 */
	struct ABPChar_DigiClone_Base_C_ConfigureShield_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDefaultWeapon
	 */
	struct ABPChar_DigiClone_Base_C_SpawnDefaultWeapon_Params
	{
	public:
		class AWeapon*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureAbstractGrenades
	 */
	struct ABPChar_DigiClone_Base_C_TryConfigureAbstractGrenades_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.RemoveProvokeFX
	 */
	struct ABPChar_DigiClone_Base_C_RemoveProvokeFX_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureProvoke
	 */
	struct ABPChar_DigiClone_Base_C_TryConfigureProvoke_Params
	{
	public:
		bool                                                       Provoke_equiped;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WU9P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnMummersWeapon
	 */
	struct ABPChar_DigiClone_Base_C_TrySpawnMummersWeapon_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.GetSizeIncreaseOperand
	 */
	struct ABPChar_DigiClone_Base_C_GetSizeIncreaseOperand_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UserConstructionScript
	 */
	struct ABPChar_DigiClone_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__FinishedFunc
	 */
	struct ABPChar_DigiClone_Base_C_ScaleDigiClone__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__UpdateFunc
	 */
	struct ABPChar_DigiClone_Base_C_ScaleDigiClone__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__FinishedFunc
	 */
	struct ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__UpdateFunc
	 */
	struct ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveBeginPlay
	 */
	struct ABPChar_DigiClone_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone
	 */
	struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone
	 */
	struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BeginScalingDigiClone
	 */
	struct ABPChar_DigiClone_Base_C_BeginScalingDigiClone_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StopScalingDigiClone
	 */
	struct ABPChar_DigiClone_Base_C_StopScalingDigiClone_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiClone
	 */
	struct ABPChar_DigiClone_Base_C_BlowUpDigiClone_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.KillDigiCloneNow
	 */
	struct ABPChar_DigiClone_Base_C_KillDigiCloneNow_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReleaseDigiclone
	 */
	struct ABPChar_DigiClone_Base_C_ReleaseDigiclone_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneDied
	 */
	struct ABPChar_DigiClone_Base_C_OnDigicloneDied_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DoExplode
	 */
	struct ABPChar_DigiClone_Base_C_DoExplode_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRegisterDamageOverride
	 */
	struct ABPChar_DigiClone_Base_C_AutomagicallyRegisterDamageOverride_Params
	{
	public:
		EOakElementalType                                          ElementalType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXWT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Grade;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRemoveDamageOverride
	 */
	struct ABPChar_DigiClone_Base_C_AutomagicallyRemoveDamageOverride_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Automagically Deal Bonus Damage
	 */
	struct ABPChar_DigiClone_Base_C_Automagically_Deal_Bonus_Damage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DigiCloneThrowGrenade
	 */
	struct ABPChar_DigiClone_Base_C_DigiCloneThrowGrenade_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDigiCloneGrenadeOnDeath
	 */
	struct ABPChar_DigiClone_Base_C_SpawnDigiCloneGrenadeOnDeath_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UpdateMaxTeleportRange
	 */
	struct ABPChar_DigiClone_Base_C_UpdateMaxTeleportRange_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneTeleport
	 */
	struct ABPChar_DigiClone_Base_C_OnDigicloneTeleport_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
	 */
	struct ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
	 */
	struct ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryEquipped
	 */
	struct ABPChar_DigiClone_Base_C_OnInventoryEquipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryUnequipped
	 */
	struct ABPChar_DigiClone_Base_C_OnInventoryUnequipped_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryPickedUp
	 */
	struct ABPChar_DigiClone_Base_C_OnInventoryPickedUp_Params
	{
	public:
		class AActor*                                              PickedUpActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531
	 */
	struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4OD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StartProvoke
	 */
	struct ABPChar_DigiClone_Base_C_StartProvoke_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Setup Lives of Others
	 */
	struct ABPChar_DigiClone_Base_C_Setup_Lives_of_Others_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BindDelegates
	 */
	struct ABPChar_DigiClone_Base_C_BindDelegates_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnWeaponEquipped
	 */
	struct ABPChar_DigiClone_Base_C_OnWeaponEquipped_Params
	{
	public:
		class AWeapon*                                             DetachedWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             AttachedWeapon;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWeaponSlotData*                                     AttachedSlot;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnClientWeaponChanged
	 */
	struct ABPChar_DigiClone_Base_C_OnClientWeaponChanged_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OpenTrapCardGate
	 */
	struct ABPChar_DigiClone_Base_C_OpenTrapCardGate_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveEndPlay
	 */
	struct ABPChar_DigiClone_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SetIsTeleporting
	 */
	struct ABPChar_DigiClone_Base_C_SetIsTeleporting_Params
	{
	public:
		bool                                                       bIsTeleporting;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.K2_OnMovementModeChanged
	 */
	struct ABPChar_DigiClone_Base_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.CheckIfStillFalling
	 */
	struct ABPChar_DigiClone_Base_C_CheckIfStillFalling_Params
	{	};

	/**
	 * Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ExecuteUbergraph_BPChar_DigiClone_Base
	 */
	struct ABPChar_DigiClone_Base_C_ExecuteUbergraph_BPChar_DigiClone_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVWE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
