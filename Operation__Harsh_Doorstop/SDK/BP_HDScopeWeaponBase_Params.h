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
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ShouldUseScope
	 */
	struct ABP_HDScopeWeaponBase_C_ShouldUseScope_Params
	{
	public:
		bool                                                       bUseScope;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SaveOwnerDefaultValues
	 */
	struct ABP_HDScopeWeaponBase_C_SaveOwnerDefaultValues_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.RestoreOwnerDefaultValues
	 */
	struct ABP_HDScopeWeaponBase_C_RestoreOwnerDefaultValues_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ScopeEffects
	 */
	struct ABP_HDScopeWeaponBase_C_ScopeEffects_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimOut
	 */
	struct ABP_HDScopeWeaponBase_C_AimOut_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimIn
	 */
	struct ABP_HDScopeWeaponBase_C_AimIn_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasLocallyPlayerControlledOwner
	 */
	struct ABP_HDScopeWeaponBase_C_HasLocallyPlayerControlledOwner_Params
	{
	public:
		bool                                                       bLocalPlayerOwner;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasValidOwnerData
	 */
	struct ABP_HDScopeWeaponBase_C_HasValidOwnerData_Params
	{
	public:
		bool                                                       bCharAliveCheck;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValidOwnerData;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetDefaultValues
	 */
	struct ABP_HDScopeWeaponBase_C_ResetDefaultValues_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.CleanupOwnerData
	 */
	struct ABP_HDScopeWeaponBase_C_CleanupOwnerData_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetupOwnerData
	 */
	struct ABP_HDScopeWeaponBase_C_SetupOwnerData_Params
	{
	public:
		bool                                                       bValidOwnerData;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2CP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.UserConstructionScript
	 */
	struct ABP_HDScopeWeaponBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimInScope
	 */
	struct ABP_HDScopeWeaponBase_C_StartAimInScope_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimOutScope
	 */
	struct ABP_HDScopeWeaponBase_C_StartAimOutScope_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveTick
	 */
	struct ABP_HDScopeWeaponBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnEquipFinished
	 */
	struct ABP_HDScopeWeaponBase_C_ReceiveOnEquipFinished_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnUnEquip
	 */
	struct ABP_HDScopeWeaponBase_C_ReceiveOnUnEquip_Params
	{
	public:
		bool                                                       bPlayAnimAndWait;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeavingPawnInventory;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetAimOutGate
	 */
	struct ABP_HDScopeWeaponBase_C_ResetAimOutGate_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnLeaveInventory
	 */
	struct ABP_HDScopeWeaponBase_C_ReceiveOnLeaveInventory_Params
	{
	public:
		class ADFBaseCharacter*                                    LastOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetCurrentSight
	 */
	struct ABP_HDScopeWeaponBase_C_SetCurrentSight_Params
	{
	public:
		class USceneComponent*                                     Sight;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.OnBraceAimEnd
	 */
	struct ABP_HDScopeWeaponBase_C_OnBraceAimEnd_Params
	{	};

	/**
	 * Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ExecuteUbergraph_BP_HDScopeWeaponBase
	 */
	struct ABP_HDScopeWeaponBase_C_ExecuteUbergraph_BP_HDScopeWeaponBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
