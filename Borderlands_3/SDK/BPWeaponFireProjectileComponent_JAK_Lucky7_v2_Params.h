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
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_OnRep_ReelsBools_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadEnded_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadStarted_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsFX_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsBonuses_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SpinReels_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2
	 */
	struct UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DC8S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
