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
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.AnimGraph
	 */
	struct UABP_PlayerPartyCapture_Left_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_03C2D9AF4C1DC963BFB08E9CEF1CA8BC
	 */
	struct UABP_PlayerPartyCapture_Left_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_03C2D9AF4C1DC963BFB08E9CEF1CA8BC_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_9AAF87644B5DF305EFE5F4A36F57A835
	 */
	struct UABP_PlayerPartyCapture_Left_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_9AAF87644B5DF305EFE5F4A36F57A835_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_953E63FA4318535E61A38DA55936A9FF
	 */
	struct UABP_PlayerPartyCapture_Left_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_953E63FA4318535E61A38DA55936A9FF_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_47F40C8B431B932EDA7D8F9A95FF7BAE
	 */
	struct UABP_PlayerPartyCapture_Left_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_AnimGraphNode_TransitionResult_47F40C8B431B932EDA7D8F9A95FF7BAE_Params
	{	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.OnChangedStandIdle
	 */
	struct UABP_PlayerPartyCapture_Left_C_OnChangedStandIdle_Params
	{
	public:
		class UAnimSequence*                                       ItemStandIdleAnimation;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerPartyCapture_Left.ABP_PlayerPartyCapture_Left_C.ExecuteUbergraph_ABP_PlayerPartyCapture_Left
	 */
	struct UABP_PlayerPartyCapture_Left_C_ExecuteUbergraph_ABP_PlayerPartyCapture_Left_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
