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
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Color_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.MoveOptions
	 */
	struct UBP_OptionsRow_Color_C_MoveOptions_Params
	{
	public:
		bool                                                       GoLeft;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.UpdateSelectedOption
	 */
	struct UBP_OptionsRow_Color_C_UpdateSelectedOption_Params
	{
	public:
		bool                                                       Decrement;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnCustomNavigation
	 */
	struct UBP_OptionsRow_Color_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.UpdateNavigation
	 */
	struct UBP_OptionsRow_Color_C_UpdateNavigation_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.UpdateSelectedStatus
	 */
	struct UBP_OptionsRow_Color_C_UpdateSelectedStatus_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnKeyUp
	 */
	struct UBP_OptionsRow_Color_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnKeyDown
	 */
	struct UBP_OptionsRow_Color_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.GetValue
	 */
	struct UBP_OptionsRow_Color_C_GetValue_Params
	{
	public:
		struct FLinearColor                                        OutColor;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.SetValue
	 */
	struct UBP_OptionsRow_Color_C_SetValue_Params
	{
	public:
		struct FLinearColor                                        InputColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.UpdateCurrentColor
	 */
	struct UBP_OptionsRow_Color_C_UpdateCurrentColor_Params
	{
	public:
		int32_t                                                    R;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    G;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    B;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.SetInitialValue
	 */
	struct UBP_OptionsRow_Color_C_SetInitialValue_Params
	{
	public:
		struct FLinearColor                                        InputColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.GetTextColor
	 */
	struct UBP_OptionsRow_Color_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.GetBackgroundBrushColor
	 */
	struct UBP_OptionsRow_Color_C_GetBackgroundBrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Color_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.PreConstruct
	 */
	struct UBP_OptionsRow_Color_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Color_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Color_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.Construct
	 */
	struct UBP_OptionsRow_Color_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnFocusLost
	 */
	struct UBP_OptionsRow_Color_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__RedSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__RedSlider_K2Node_ComponentBoundEvent_7_OnValueCommited__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_7_OnValueCommited__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__GreenSlider_K2Node_ComponentBoundEvent_8_OnValueCommited__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_8_OnValueCommited__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__GreenSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__BlueSlider_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.BndEvt__BlueSlider_K2Node_ComponentBoundEvent_11_OnValueCommited__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_11_OnValueCommited__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Color_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.ExecuteUbergraph_BP_OptionsRow_Color
	 */
	struct UBP_OptionsRow_Color_C_ExecuteUbergraph_BP_OptionsRow_Color_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XC4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnValueCommitted__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_OnValueCommitted__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color.BP_OptionsRow_Color_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
