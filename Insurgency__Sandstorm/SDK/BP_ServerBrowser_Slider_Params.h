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
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnFocusReceived
	 */
	struct UBP_ServerBrowser_Slider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.SetSliderValue
	 */
	struct UBP_ServerBrowser_Slider_C_SetSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipEvents;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGUR[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.GetSliderValueAsNumber
	 */
	struct UBP_ServerBrowser_Slider_C_GetSliderValueAsNumber_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.PreConstruct
	 */
	struct UBP_ServerBrowser_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnMouseEnter
	 */
	struct UBP_ServerBrowser_Slider_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnMouseLeave
	 */
	struct UBP_ServerBrowser_Slider_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.BndEvt__SliderInput_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_Slider_C_BndEvt__SliderInput_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.BndEvt__SliderInput_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_Slider_C_BndEvt__SliderInput_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnAddedToFocusPath
	 */
	struct UBP_ServerBrowser_Slider_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnRemovedFromFocusPath
	 */
	struct UBP_ServerBrowser_Slider_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.ExecuteUbergraph_BP_ServerBrowser_Slider
	 */
	struct UBP_ServerBrowser_Slider_C_ExecuteUbergraph_BP_ServerBrowser_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser_Slider.BP_ServerBrowser_Slider_C.OnValueChanged__DelegateSignature
	 */
	struct UBP_ServerBrowser_Slider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
