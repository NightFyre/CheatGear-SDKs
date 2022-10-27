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
	 * Function InputWidget.InputWidget_C.Check Key Blocker Bindings
	 */
	struct UInputWidget_C_Check_Key_Blocker_Bindings_Params
	{
	public:
		class UUI_KeyBinding_C*                                    CheckedKeyBinding;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                SetKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function InputWidget.InputWidget_C.CheckGroupedKeyBindings
	 */
	struct UInputWidget_C_CheckGroupedKeyBindings_Params
	{
	public:
		class UUI_KeyBinding_C*                                    KeyBinding;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                SetKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnMouseButtonDoubleClick
	 */
	struct UInputWidget_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnMouseButtonDown
	 */
	struct UInputWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnMouseWheel
	 */
	struct UInputWidget_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnPreviewKeyDown
	 */
	struct UInputWidget_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnPreviewMouseButtonDown
	 */
	struct UInputWidget_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function InputWidget.InputWidget_C.Construct
	 */
	struct UInputWidget_C_Construct_Params
	{	};

	/**
	 * Function InputWidget.InputWidget_C.OnKeyRebound
	 */
	struct UInputWidget_C_OnKeyRebound_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                actionKey;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnKeyRebindInitiated
	 */
	struct UInputWidget_C_OnKeyRebindInitiated_Params
	{
	public:
		class UUI_KeyBinding_C*                                    keyBindingWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputWidget.InputWidget_C.OnAxisRebound
	 */
	struct UInputWidget_C_OnAxisRebound_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                actionKey;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InputWidget.InputWidget_C.RefreshAllOptionSliders
	 */
	struct UInputWidget_C_RefreshAllOptionSliders_Params
	{	};

	/**
	 * Function InputWidget.InputWidget_C.InitKeyBindings
	 */
	struct UInputWidget_C_InitKeyBindings_Params
	{	};

	/**
	 * Function InputWidget.InputWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
	 */
	struct UInputWidget_C_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InputWidget.InputWidget_C.ExecuteUbergraph_InputWidget
	 */
	struct UInputWidget_C_ExecuteUbergraph_InputWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
