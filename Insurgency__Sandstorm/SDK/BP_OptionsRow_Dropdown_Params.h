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
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetNewTitle
	 */
	struct UBP_OptionsRow_Dropdown_C_SetNewTitle_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Dropdown_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetForegroundColor_1
	 */
	struct UBP_OptionsRow_Dropdown_C_GetForegroundColor_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.CreateDefaultOptions
	 */
	struct UBP_OptionsRow_Dropdown_C_CreateDefaultOptions_Params
	{	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetDefaultOption
	 */
	struct UBP_OptionsRow_Dropdown_C_SetDefaultOption_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SelectOption
	 */
	struct UBP_OptionsRow_Dropdown_C_SelectOption_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExists;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OM0H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetSelectedOption
	 */
	struct UBP_OptionsRow_Dropdown_C_GetSelectedOption_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.AddOption
	 */
	struct UBP_OptionsRow_Dropdown_C_AddOption_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ClearOptions
	 */
	struct UBP_OptionsRow_Dropdown_C_ClearOptions_Params
	{	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.PreConstruct
	 */
	struct UBP_OptionsRow_Dropdown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.Construct
	 */
	struct UBP_OptionsRow_Dropdown_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Dropdown_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Dropdown_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Dropdown_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Dropdown_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Dropdown_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ExecuteUbergraph_BP_OptionsRow_Dropdown
	 */
	struct UBP_OptionsRow_Dropdown_C_ExecuteUbergraph_BP_OptionsRow_Dropdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_Dropdown_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YB9F[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
