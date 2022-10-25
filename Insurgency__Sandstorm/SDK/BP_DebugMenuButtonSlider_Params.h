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
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Get_HoverBG_BrushColor_1
	 */
	struct UBP_DebugMenuButtonSlider_C_Get_HoverBG_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnFocusReceived
	 */
	struct UBP_DebugMenuButtonSlider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Execute
	 */
	struct UBP_DebugMenuButtonSlider_C_Execute_Params
	{	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_DebugMenuButtonSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.PreConstruct
	 */
	struct UBP_DebugMenuButtonSlider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnAddedToFocusPath
	 */
	struct UBP_DebugMenuButtonSlider_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnRemovedFromFocusPath
	 */
	struct UBP_DebugMenuButtonSlider_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseEnter
	 */
	struct UBP_DebugMenuButtonSlider_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseLeave
	 */
	struct UBP_DebugMenuButtonSlider_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBP_DebugMenuButtonSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Construct
	 */
	struct UBP_DebugMenuButtonSlider_C_Construct_Params
	{	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.ExecuteUbergraph_BP_DebugMenuButtonSlider
	 */
	struct UBP_DebugMenuButtonSlider_C_ExecuteUbergraph_BP_DebugMenuButtonSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnClicked__DelegateSignature
	 */
	struct UBP_DebugMenuButtonSlider_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_DebugMenuButtonSlider_C*                         Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
