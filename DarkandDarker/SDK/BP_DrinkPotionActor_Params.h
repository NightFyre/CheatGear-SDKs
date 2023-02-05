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
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter
	 */
	struct ABP_DrinkPotionActor_C_SetHeightParameter_Params
	{
	public:
		double                                                     NewHeight;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.OnRep_CurrentLiquidAmount
	 */
	struct ABP_DrinkPotionActor_C_OnRep_CurrentLiquidAmount_Params
	{	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount
	 */
	struct ABP_DrinkPotionActor_C_CalculateLiquidAmount_Params
	{	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick
	 */
	struct ABP_DrinkPotionActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveBeginPlay
	 */
	struct ABP_DrinkPotionActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration
	 */
	struct ABP_DrinkPotionActor_C_SetDrinkingDuration_Params
	{
	public:
		double                                                     Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated
	 */
	struct ABP_DrinkPotionActor_C_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor
	 */
	struct ABP_DrinkPotionActor_C_ExecuteUbergraph_BP_DrinkPotionActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
