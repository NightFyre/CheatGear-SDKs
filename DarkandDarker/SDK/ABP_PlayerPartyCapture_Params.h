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
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.AnimGraph
	 */
	struct UABP_PlayerPartyCapture_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_02F566904DB6622313DD60ADE589A1EB
	 */
	struct UABP_PlayerPartyCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_02F566904DB6622313DD60ADE589A1EB_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_2D3A5A7F4D5DC517C82E59B5CAB14DD2
	 */
	struct UABP_PlayerPartyCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_2D3A5A7F4D5DC517C82E59B5CAB14DD2_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_7F151C77406CFCE66438FD97FA547FB0
	 */
	struct UABP_PlayerPartyCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_7F151C77406CFCE66438FD97FA547FB0_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_1C8B595B420250701EAF35B5224CA995
	 */
	struct UABP_PlayerPartyCapture_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_AnimGraphNode_TransitionResult_1C8B595B420250701EAF35B5224CA995_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.OnChangedStandIdle
	 */
	struct UABP_PlayerPartyCapture_C_OnChangedStandIdle_Params
	{
	public:
		class UAnimSequence*                                       ItemStandIdleAnimation;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerPartyCapture.ABP_PlayerPartyCapture_C.ExecuteUbergraph_ABP_PlayerPartyCapture
	 */
	struct UABP_PlayerPartyCapture_C_ExecuteUbergraph_ABP_PlayerPartyCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
