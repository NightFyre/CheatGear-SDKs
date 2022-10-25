#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Function OptionsMenu.OptionsMenu_C.GetFPS
	 */
	struct UOptionsMenu_C_GetFPS_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.GetVsync
	 */
	struct UOptionsMenu_C_GetVsync_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.getAntiAilasing
	 */
	struct UOptionsMenu_C_getAntiAilasing_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.getTextureQ
	 */
	struct UOptionsMenu_C_getTextureQ_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.GetShadowQ
	 */
	struct UOptionsMenu_C_GetShadowQ_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.GetResolution
	 */
	struct UOptionsMenu_C_GetResolution_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.GetWindowMode
	 */
	struct UOptionsMenu_C_GetWindowMode_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality-_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__FPS+_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__FPS__K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__FPS-_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__FPS__K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution+_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__Resolution__K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__Resolution-_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__Resolution__K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality+_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowQuality-_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__ShadowQuality__K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality+_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__TextureQuality__K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__TextureQuality-_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__TextureQuality__K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__VsyncOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__VsyncOn_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode+_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__WindowMode__K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__WindowMode-_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__WindowMode__K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__Anti-AliasingQuality+_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__Anti_AliasingQuality__K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Construct
	 */
	struct UOptionsMenu_C_Construct_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
	 */
	struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQSU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
