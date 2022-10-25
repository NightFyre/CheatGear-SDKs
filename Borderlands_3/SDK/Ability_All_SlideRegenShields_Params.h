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
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated
	 */
	struct UAbility_All_SlideRegenShields_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated
	 */
	struct UAbility_All_SlideRegenShields_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy
	 */
	struct UAbility_All_SlideRegenShields_C_BuildEnergy_Params
	{	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy
	 */
	struct UAbility_All_SlideRegenShields_C_ReleaseEnergy_Params
	{	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart
	 */
	struct UAbility_All_SlideRegenShields_C_SlideStart_Params
	{	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd
	 */
	struct UAbility_All_SlideRegenShields_C_SlideEnd_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields
	 */
	struct UAbility_All_SlideRegenShields_C_ExecuteUbergraph_Ability_All_SlideRegenShields_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
