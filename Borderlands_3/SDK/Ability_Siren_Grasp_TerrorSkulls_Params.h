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
	 * Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated
	 */
	struct UAbility_Siren_Grasp_TerrorSkulls_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget
	 */
	struct UAbility_Siren_Grasp_TerrorSkulls_C_GraspedTarget_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhaseTranceElementalType                                  Element;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls
	 */
	struct UAbility_Siren_Grasp_TerrorSkulls_C_ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
