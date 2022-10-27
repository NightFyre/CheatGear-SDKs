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
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.Get_BtnInfoUnclickedHighlight_Visibility_1
	 */
	struct UBP_GametypeInfoButton_C_Get_BtnInfoUnclickedHighlight_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.Construct
	 */
	struct UBP_GametypeInfoButton_C_Construct_Params
	{	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.BndEvt__BtnInfo_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_GametypeInfoButton_C_BndEvt__BtnInfo_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.OnMouseEnter
	 */
	struct UBP_GametypeInfoButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.OnMouseLeave
	 */
	struct UBP_GametypeInfoButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.ExecuteUbergraph_BP_GametypeInfoButton
	 */
	struct UBP_GametypeInfoButton_C_ExecuteUbergraph_BP_GametypeInfoButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4AU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.OnUnHover__DelegateSignature
	 */
	struct UBP_GametypeInfoButton_C_OnUnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.OnHover__DelegateSignature
	 */
	struct UBP_GametypeInfoButton_C_OnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GametypeInfoButton.BP_GametypeInfoButton_C.OnPressed__DelegateSignature
	 */
	struct UBP_GametypeInfoButton_C_OnPressed__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
