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
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.IsToggledOn
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_IsToggledOn_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.SetToggle
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_SetToggle_Params
	{
	public:
		bool                                                       bInToggle;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.PreConstruct
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.BndEvt__OptionToggle_K2Node_ComponentBoundEvent_2_ToggleStateChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_BndEvt__OptionToggle_K2Node_ComponentBoundEvent_2_ToggleStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.ExecuteUbergraph_WBP_OptionsMenuItem_Toggle
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_ExecuteUbergraph_WBP_OptionsMenuItem_Toggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C.ToggleStateChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Toggle_C_ToggleStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bToggledOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
