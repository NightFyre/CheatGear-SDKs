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
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyUp
	 */
	struct UBP_GamepadLayoutDisplay_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnKeyDown
	 */
	struct UBP_GamepadLayoutDisplay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnFocusReceived
	 */
	struct UBP_GamepadLayoutDisplay_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.PopulateGamepadLayoutSettings
	 */
	struct UBP_GamepadLayoutDisplay_C_PopulateGamepadLayoutSettings_Params
	{
	public:
		class FName                                                Selection;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_GamepadLayoutDisplay_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
	 */
	struct UBP_GamepadLayoutDisplay_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NY91[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnCancel
	 */
	struct UBP_GamepadLayoutDisplay_C_OnCancel_Params
	{	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnApply
	 */
	struct UBP_GamepadLayoutDisplay_C_OnApply_Params
	{	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_GamepadLayoutDisplay_C_BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.Construct
	 */
	struct UBP_GamepadLayoutDisplay_C_Construct_Params
	{	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_GamepadLayoutDisplay
	 */
	struct UBP_GamepadLayoutDisplay_C_ExecuteUbergraph_BP_GamepadLayoutDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNP9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GamepadLayoutDisplay.BP_GamepadLayoutDisplay_C.OnGamepadLayoutApplied__DelegateSignature
	 */
	struct UBP_GamepadLayoutDisplay_C_OnGamepadLayoutApplied__DelegateSignature_Params
	{
	public:
		class FName                                                NewID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
