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
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnActivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_NotifyReloadStarted_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_PlayEffect_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_StopEffect_Params
	{	};

	/**
	 * Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger
	 */
	struct UBPWeaponFireProjectileComponent_JAK_McSmugger_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LJCE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
