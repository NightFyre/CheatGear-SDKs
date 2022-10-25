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
	 * Function BP_RulesModal.BP_RulesModal_C.SetScrollHintOpacity
	 */
	struct UBP_RulesModal_C_SetScrollHintOpacity_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.OnAnalogValueChanged
	 */
	struct UBP_RulesModal_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.AnimateThenDestroy
	 */
	struct UBP_RulesModal_C_AnimateThenDestroy_Params
	{
	public:
		class UBP_RulesModalColumn_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.OnKeyDown
	 */
	struct UBP_RulesModal_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.NavigateDirection
	 */
	struct UBP_RulesModal_C_NavigateDirection_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.SelectFeature
	 */
	struct UBP_RulesModal_C_SelectFeature_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K12O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.SetData
	 */
	struct UBP_RulesModal_C_SetData_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.Construct
	 */
	struct UBP_RulesModal_C_Construct_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.Tick
	 */
	struct UBP_RulesModal_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.BndEvt__BP_KeyActionButton_C_1_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_RulesModal_C_BndEvt__BP_KeyActionButton_C_1_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_RulesModal_C_BndEvt__BP_KeyActionButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_RulesModal_C_BndEvt__BP_KeyActionButton_C_0_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.ExecuteUbergraph_BP_RulesModal
	 */
	struct UBP_RulesModal_C_ExecuteUbergraph_BP_RulesModal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RulesModal.BP_RulesModal_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_RulesModal_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
