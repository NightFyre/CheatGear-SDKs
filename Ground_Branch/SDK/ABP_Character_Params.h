#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function ABP_Character.ABP_Character_C.OverlayLayer
	 */
	struct UABP_Character_C_OverlayLayer_Params
	{
	public:
		struct FPoseLink                                           OL_BasePoseInput;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           OverlayLayer;                                            // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.AimingLayer
	 */
	struct UABP_Character_C_AimingLayer_Params
	{
	public:
		struct FPoseLink                                           NoAimPose;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AimingLayer;                                             // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.BlendingLayer
	 */
	struct UABP_Character_C_BlendingLayer_Params
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Movement;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Overlay;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           BlendingLayer;                                           // 0x0030(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.MovementLayer
	 */
	struct UABP_Character_C_MovementLayer_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           MovementLayer;                                           // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimGraph
	 */
	struct UABP_Character_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.SetDynamicRightHandIKRoot
	 */
	struct UABP_Character_C_SetDynamicRightHandIKRoot_Params
	{
	public:
		class FName                                                NewDynamicRightHandIKRoot;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.SetDynamicLeftHandIKRoot
	 */
	struct UABP_Character_C_SetDynamicLeftHandIKRoot_Params
	{
	public:
		class FName                                                NewDynamicLeftHandIKRoot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdatePositionAlphas
	 */
	struct UABP_Character_C_UpdatePositionAlphas_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateMovementVars
	 */
	struct UABP_Character_C_UpdateMovementVars_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateTurnInPlace
	 */
	struct UABP_Character_C_UpdateTurnInPlace_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateCardinalDirection
	 */
	struct UABP_Character_C_UpdateCardinalDirection_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.DrawDebug
	 */
	struct UABP_Character_C_DrawDebug_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateAimingVars
	 */
	struct UABP_Character_C_UpdateAimingVars_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateStrideScale
	 */
	struct UABP_Character_C_UpdateStrideScale_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdatePreviewCharVars
	 */
	struct UABP_Character_C_UpdatePreviewCharVars_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateCharVars
	 */
	struct UABP_Character_C_UpdateCharVars_Params
	{
	public:
		class AGBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0B17B1BF418077B7F5372F93B57D51A9
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0B17B1BF418077B7F5372F93B57D51A9_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E545F9E49830136CA32F1845E07C0BA
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E545F9E49830136CA32F1845E07C0BA_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B9FA35C8444B6FB6A5726BB33933084A
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B9FA35C8444B6FB6A5726BB33933084A_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_598A72774BFF9A92607A1B9EBD4AE817
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_598A72774BFF9A92607A1B9EBD4AE817_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_C469456B4C2D89B4DDB10485A7C1DD72
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_C469456B4C2D89B4DDB10485A7C1DD72_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_FC5D21984C2307D60D63C6982DBCB3A0
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_FC5D21984C2307D60D63C6982DBCB3A0_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_5F0B4B004E25567F3A27AA895C0165D3
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_5F0B4B004E25567F3A27AA895C0165D3_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_398741FE45C7EA25495F878F6930BDCB
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_398741FE45C7EA25495F878F6930BDCB_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_90F85F90424D88C47F748D867F625E26
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_90F85F90424D88C47F748D867F625E26_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_330C525F43121A08DAA6709AC9F645E3
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_330C525F43121A08DAA6709AC9F645E3_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F5B86C0A40DD825D79852AB280857EC0
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F5B86C0A40DD825D79852AB280857EC0_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_DA06CDA84DE17D2BE8FB25B4BC16DDBD
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_DA06CDA84DE17D2BE8FB25B4BC16DDBD_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_507B3DC141B3DD917BB8BDA21E847766
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_507B3DC141B3DD917BB8BDA21E847766_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.BlueprintUpdateAnimation
	 */
	struct UABP_Character_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdatePreviewMontage
	 */
	struct UABP_Character_C_UpdatePreviewMontage_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdatePreviewOverlay
	 */
	struct UABP_Character_C_UpdatePreviewOverlay_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimNotify_RightFootDown
	 */
	struct UABP_Character_C_AnimNotify_RightFootDown_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimNotify_LeftFootDown
	 */
	struct UABP_Character_C_AnimNotify_LeftFootDown_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5E6FE1FA4C423D0C17C7249551533DDB
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5E6FE1FA4C423D0C17C7249551533DDB_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.BlueprintInitializeAnimation
	 */
	struct UABP_Character_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F10627DB4BE0DA414C8B3E88072C0E3C
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F10627DB4BE0DA414C8B3E88072C0E3C_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5110DBE24A5AABF8101B9187E74A0E8B
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5110DBE24A5AABF8101B9187E74A0E8B_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_9FB0D26C4B195BA1A75A07836DEBB1ED
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_9FB0D26C4B195BA1A75A07836DEBB1ED_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CD623C0A45909ECCD553E19EF0A7DEF0
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CD623C0A45909ECCD553E19EF0A7DEF0_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_D45752B148C7691A07CC2AA9CB277568
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_D45752B148C7691A07CC2AA9CB277568_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_C3541ED643CFADD6FFF6F784E5FD06CB
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_C3541ED643CFADD6FFF6F784E5FD06CB_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimNotify_LeftHandGrab
	 */
	struct UABP_Character_C_AnimNotify_LeftHandGrab_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimNotify_RightHandGrab
	 */
	struct UABP_Character_C_AnimNotify_RightHandGrab_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.HACKForBinosAndTablet
	 */
	struct UABP_Character_C_HACKForBinosAndTablet_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_AFEC06D64FD0644C4E761E86D4B4F932
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_AFEC06D64FD0644C4E761E86D4B4F932_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.ExecuteUbergraph_ABP_Character
	 */
	struct UABP_Character_C_ExecuteUbergraph_ABP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
