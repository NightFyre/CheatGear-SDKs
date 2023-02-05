#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.OnFinish_17D93366455B3BE35432FCBE8DFC6E4D
	 */
	struct UGA_DrinkPotionActivateBase_C_OnFinish_17D93366455B3BE35432FCBE8DFC6E4D_Params
	{	};

	/**
	 * Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.Removed_B01C8A3D4B24EB4F232029A52296F212
	 */
	struct UGA_DrinkPotionActivateBase_C_Removed_B01C8A3D4B24EB4F232029A52296F212_Params
	{	};

	/**
	 * Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.K2_OnEndAbility
	 */
	struct UGA_DrinkPotionActivateBase_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.AbilityActivated
	 */
	struct UGA_DrinkPotionActivateBase_C_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.ExecuteUbergraph_GA_DrinkPotionActivateBase
	 */
	struct UGA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
