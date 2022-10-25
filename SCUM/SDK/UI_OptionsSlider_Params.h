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
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick
	 */
	struct UUI_OptionsSlider_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown
	 */
	struct UUI_OptionsSlider_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue
	 */
	struct UUI_OptionsSlider_C_GetValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue
	 */
	struct UUI_OptionsSlider_C_ChangeValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0T0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle
	 */
	struct UUI_OptionsSlider_C_SetTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers
	 */
	struct UUI_OptionsSlider_C_InitAsNumbers_Params
	{
	public:
		int32_t                                                    FirstIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LastIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag
	 */
	struct UUI_OptionsSlider_C_InitAsFlag_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair
	 */
	struct UUI_OptionsSlider_C_AddKeyValuePair_Params
	{
	public:
		class FText                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Value;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp
	 */
	struct UUI_OptionsSlider_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue
	 */
	struct UUI_OptionsSlider_C_AddValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues
	 */
	struct UUI_OptionsSlider_C_ClearValues_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue
	 */
	struct UUI_OptionsSlider_C_SetValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.Increase
	 */
	struct UUI_OptionsSlider_C_Increase_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease
	 */
	struct UUI_OptionsSlider_C_Decrease_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown
	 */
	struct UUI_OptionsSlider_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived
	 */
	struct UUI_OptionsSlider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher
	 */
	struct UUI_OptionsSlider_C_OnClickedHigher_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower
	 */
	struct UUI_OptionsSlider_C_OnClickedLower_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties
	 */
	struct UUI_OptionsSlider_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost
	 */
	struct UUI_OptionsSlider_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter
	 */
	struct UUI_OptionsSlider_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_OptionsSlider_C_BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_OptionsSlider_C_BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.Construct
	 */
	struct UUI_OptionsSlider_C_Construct_Params
	{	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider
	 */
	struct UUI_OptionsSlider_C_ExecuteUbergraph_UI_OptionsSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature
	 */
	struct UUI_OptionsSlider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
