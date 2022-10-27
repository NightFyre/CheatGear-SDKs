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
	 * Function BP_CreditVersionButton.BP_CreditVersionButton_C.Construct
	 */
	struct UBP_CreditVersionButton_C_Construct_Params
	{	};

	/**
	 * Function BP_CreditVersionButton.BP_CreditVersionButton_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_CreditVersionButton_C_BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CreditVersionButton.BP_CreditVersionButton_C.ExecuteUbergraph_BP_CreditVersionButton
	 */
	struct UBP_CreditVersionButton_C_ExecuteUbergraph_BP_CreditVersionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CreditVersionButton.BP_CreditVersionButton_C.OnCreditVersionSelected__DelegateSignature
	 */
	struct UBP_CreditVersionButton_C_OnCreditVersionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
