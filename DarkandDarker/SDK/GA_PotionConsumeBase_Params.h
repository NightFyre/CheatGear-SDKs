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
	 * Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility
	 */
	struct UGA_PotionConsumeBase_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated
	 */
	struct UGA_PotionConsumeBase_C_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived
	 */
	struct UGA_PotionConsumeBase_C_OnConsumeStartEventReceived_Params
	{
	public:
		float                                                      ConsumeDuration;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeEndEventReceived
	 */
	struct UGA_PotionConsumeBase_C_OnConsumeEndEventReceived_Params
	{	};

	/**
	 * Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase
	 */
	struct UGA_PotionConsumeBase_C_ExecuteUbergraph_GA_PotionConsumeBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
