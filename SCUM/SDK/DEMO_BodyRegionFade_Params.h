#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas
	 */
	struct UDEMO_BodyRegionFade_C_GetCanvas_Params
	{
	public:
		class UCanvasPanel*                                        Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ResetTargets
	 */
	struct UDEMO_BodyRegionFade_C_ResetTargets_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Construct
	 */
	struct UDEMO_BodyRegionFade_C_Construct_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick
	 */
	struct UDEMO_BodyRegionFade_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDEMO_BodyRegionFade_C_BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade
	 */
	struct UDEMO_BodyRegionFade_C_ExecuteUbergraph_DEMO_BodyRegionFade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
