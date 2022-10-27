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
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.CommitKeyUpdate
	 */
	struct UBP_OptionsRow_KeyInput_C_CommitKeyUpdate_Params
	{
	public:
		struct FInputChord                                         NewKey;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RebuildBindingIcon
	 */
	struct UBP_OptionsRow_KeyInput_C_RebuildBindingIcon_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.RevertKey
	 */
	struct UBP_OptionsRow_KeyInput_C_RevertKey_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ChangeKey
	 */
	struct UBP_OptionsRow_KeyInput_C_ChangeKey_Params
	{
	public:
		struct FKey                                                NewKey;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_RevertButton_Visibility_1
	 */
	struct UBP_OptionsRow_KeyInput_C_Get_RevertButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Get_ClearButton_Visibility_1
	 */
	struct UBP_OptionsRow_KeyInput_C_Get_ClearButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PopulateSettings
	 */
	struct UBP_OptionsRow_KeyInput_C_PopulateSettings_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.Construct
	 */
	struct UBP_OptionsRow_KeyInput_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_KeyInput_C_BndEvt__ButtonRebind_K2Node_ComponentBoundEvent_50_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnKeyBound
	 */
	struct UBP_OptionsRow_KeyInput_C_OnKeyBound_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_KeyInput_C_BndEvt__ButtonClear_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature
	 */
	struct UBP_OptionsRow_KeyInput_C_BndEvt__ButtonRevert_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.PreConstruct
	 */
	struct UBP_OptionsRow_KeyInput_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.ExecuteUbergraph_BP_OptionsRow_KeyInput
	 */
	struct UBP_OptionsRow_KeyInput_C_ExecuteUbergraph_BP_OptionsRow_KeyInput_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HL00[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_KeyInput.BP_OptionsRow_KeyInput_C.OnActionMappingUpdated__DelegateSignature
	 */
	struct UBP_OptionsRow_KeyInput_C_OnActionMappingUpdated__DelegateSignature_Params
	{
	public:
		struct FKeyBindingOption                                   BindingOption;                                           // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FInputChord                                         NewKey;                                                  // 0x0130(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UBP_OptionsRow_KeyInput_C*                           KeyWidget;                                               // 0x0150(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
