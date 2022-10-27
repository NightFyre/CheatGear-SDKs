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
	 * Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.OnActivated
	 */
	struct UAbility_Gunner_Reload_TerrorNova_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ReloadStarted
	 */
	struct UAbility_Gunner_Reload_TerrorNova_C_ReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova
	 */
	struct UAbility_Gunner_Reload_TerrorNova_C_ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
