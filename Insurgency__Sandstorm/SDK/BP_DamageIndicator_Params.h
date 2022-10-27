#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_DamageIndicator.BP_DamageIndicator_C.GetDebugText
	 */
	struct UBP_DamageIndicator_C_GetDebugText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DamageIndicator.BP_DamageIndicator_C.Construct
	 */
	struct UBP_DamageIndicator_C_Construct_Params
	{	};

	/**
	 * Function BP_DamageIndicator.BP_DamageIndicator_C.Tick
	 */
	struct UBP_DamageIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DamageIndicator.BP_DamageIndicator_C.WidgetAnimationEvt_Anim_Fade_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_DamageIndicator_C_WidgetAnimationEvt_Anim_Fade_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_DamageIndicator.BP_DamageIndicator_C.ExecuteUbergraph_BP_DamageIndicator
	 */
	struct UBP_DamageIndicator_C_ExecuteUbergraph_BP_DamageIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Y96[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
