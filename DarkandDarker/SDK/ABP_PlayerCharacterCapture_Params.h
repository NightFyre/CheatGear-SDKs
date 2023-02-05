#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimGraph
	 */
	struct UABP_PlayerCharacterCapture_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_13B7D8DC4933DEA9CC67E9B6899A7B72
	 */
	struct UABP_PlayerCharacterCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_13B7D8DC4933DEA9CC67E9B6899A7B72_Params
	{	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_77039C684C830BD8EA19CD9467D2FE60
	 */
	struct UABP_PlayerCharacterCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_77039C684C830BD8EA19CD9467D2FE60_Params
	{	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_F687E8504BC5699DFC15BF8BD33D36BB
	 */
	struct UABP_PlayerCharacterCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_F687E8504BC5699DFC15BF8BD33D36BB_Params
	{	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_EF973B2C44DD253581F000A709F601E6
	 */
	struct UABP_PlayerCharacterCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_EF973B2C44DD253581F000A709F601E6_Params
	{	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.OnChangedStandIdle
	 */
	struct UABP_PlayerCharacterCapture_C_OnChangedStandIdle_Params
	{
	public:
		class UAnimSequence*                                       ItemStandIdleAnimation;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.ExecuteUbergraph_ABP_PlayerCharacterCapture
	 */
	struct UABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
