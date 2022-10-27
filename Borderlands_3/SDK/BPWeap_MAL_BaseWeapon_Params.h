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
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.GetChargePercent
	 */
	struct ABPWeap_MAL_BaseWeapon_C_GetChargePercent_Params
	{
	public:
		float                                                      ChargePercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_MAL_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__FinishedFunc
	 */
	struct ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ElementalInterpolationTimeline__UpdateFunc
	 */
	struct ABPWeap_MAL_BaseWeapon_C_ElementalInterpolationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimaryElementalData
	 */
	struct ABPWeap_MAL_BaseWeapon_C_SetPrimaryElementalData_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToPrimary
	 */
	struct ABPWeap_MAL_BaseWeapon_C_OnSwitchToPrimary_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.OnSwitchToSecondary
	 */
	struct ABPWeap_MAL_BaseWeapon_C_OnSwitchToSecondary_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Initialize Elemental Emissive
	 */
	struct ABPWeap_MAL_BaseWeapon_C_Initialize_Elemental_Emissive_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetPrimary
	 */
	struct ABPWeap_MAL_BaseWeapon_C_SetPrimary_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondary
	 */
	struct ABPWeap_MAL_BaseWeapon_C_SetSecondary_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.K2_OnWeaponSkinApplied
	 */
	struct ABPWeap_MAL_BaseWeapon_C_K2_OnWeaponSkinApplied_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_MAL_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Notify_ReloadStarted
	 */
	struct ABPWeap_MAL_BaseWeapon_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Weapon_NotifyEquipped
	 */
	struct ABPWeap_MAL_BaseWeapon_C_Weapon_NotifyEquipped_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.Event_ModeSwitched
	 */
	struct ABPWeap_MAL_BaseWeapon_C_Event_ModeSwitched_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.SetSecondaryElementalData
	 */
	struct ABPWeap_MAL_BaseWeapon_C_SetSecondaryElementalData_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.PutDown_Event
	 */
	struct ABPWeap_MAL_BaseWeapon_C_PutDown_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.WeaponAttached
	 */
	struct ABPWeap_MAL_BaseWeapon_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C.ExecuteUbergraph_BPWeap_MAL_BaseWeapon
	 */
	struct ABPWeap_MAL_BaseWeapon_C_ExecuteUbergraph_BPWeap_MAL_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QHWE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
