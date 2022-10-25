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
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PrepareStringForCompare
	 */
	struct UBP_Widget_RandomHint_C_PrepareStringForCompare_Params
	{
	public:
		class FString                                              HintsValue;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CanHintBeShownOnConsole
	 */
	struct UBP_Widget_RandomHint_C_CanHintBeShownOnConsole_Params
	{
	public:
		class FText                                                HintText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHintIsOk;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6TA8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.UpdateWidgets
	 */
	struct UBP_Widget_RandomHint_C_UpdateWidgets_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PopulateRandomHints
	 */
	struct UBP_Widget_RandomHint_C_PopulateRandomHints_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleNextHint
	 */
	struct UBP_Widget_RandomHint_C_CycleNextHint_Params
	{
	public:
		bool                                                       bReverseDirection;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PWL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleRandomHint
	 */
	struct UBP_Widget_RandomHint_C_CycleRandomHint_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.Construct
	 */
	struct UBP_Widget_RandomHint_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_RandomHint_C_BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_RandomHint_C_BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.ExecuteUbergraph_BP_Widget_RandomHint
	 */
	struct UBP_Widget_RandomHint_C_ExecuteUbergraph_BP_Widget_RandomHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
