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
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.GetForegroundColor_1
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_GetForegroundColor_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.CreateDefaultOptions
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_CreateDefaultOptions_Params
	{	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.SetDefaultOption
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_SetDefaultOption_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.SelectOption
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_SelectOption_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExists;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XSUL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.GetSelectedOption
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_GetSelectedOption_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MIFA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.AddOption
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_AddOption_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.ClearOptions
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_ClearOptions_Params
	{	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.PreConstruct
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.Construct
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.ExecuteUbergraph_BP_OptionsRow_DropdownIndexed
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_ExecuteUbergraph_BP_OptionsRow_DropdownIndexed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_DropdownIndexed_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IIEQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
