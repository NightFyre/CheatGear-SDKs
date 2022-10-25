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
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Checkbox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.IsChecked
	 */
	struct UBP_OptionsRow_Checkbox_C_IsChecked_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.SetInitialValue
	 */
	struct UBP_OptionsRow_Checkbox_C_SetInitialValue_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.SetValue
	 */
	struct UBP_OptionsRow_Checkbox_C_SetValue_Params
	{
	public:
		bool                                                       Val;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.Construct
	 */
	struct UBP_OptionsRow_Checkbox_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Checkbox_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.BndEvt__CheckBox_94_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Checkbox_C_BndEvt__CheckBox_94_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.PreConstruct
	 */
	struct UBP_OptionsRow_Checkbox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.ExecuteUbergraph_BP_OptionsRow_Checkbox
	 */
	struct UBP_OptionsRow_Checkbox_C_ExecuteUbergraph_BP_OptionsRow_Checkbox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMDY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_Checkbox_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
