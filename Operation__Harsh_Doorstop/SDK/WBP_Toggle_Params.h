#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_Toggle.WBP_Toggle_C.UpdateDesignerView
	 */
	struct UWBP_Toggle_C_UpdateDesignerView_Params
	{	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.IsToggledOn
	 */
	struct UWBP_Toggle_C_IsToggledOn_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.SetToggle
	 */
	struct UWBP_Toggle_C_SetToggle_Params
	{
	public:
		bool                                                       bInToggle;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 */
	struct UWBP_Toggle_C_BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 */
	struct UWBP_Toggle_C_BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.PreConstruct
	 */
	struct UWBP_Toggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.ExecuteUbergraph_WBP_Toggle
	 */
	struct UWBP_Toggle_C_ExecuteUbergraph_WBP_Toggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Toggle.WBP_Toggle_C.ToggleStateChanged__DelegateSignature
	 */
	struct UWBP_Toggle_C_ToggleStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
