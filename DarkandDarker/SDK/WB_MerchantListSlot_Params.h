#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MerchantListSlot_C_BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MerchantListSlot_C_BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_MerchantListSlot_C_BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_MerchantListSlot_C_BndEvt__WB_MerchantListSlot_Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.OnSetMerchantPortrait
	 */
	struct UWB_MerchantListSlot_C_OnSetMerchantPortrait_Params
	{
	public:
		class UTexture2D*                                          Portrait;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.OnSetMerchantName
	 */
	struct UWB_MerchantListSlot_C_OnSetMerchantName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.OnSetMerchantFaction
	 */
	struct UWB_MerchantListSlot_C_OnSetMerchantFaction_Params
	{
	public:
		int32_t                                                    InFaction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.OnSetMerchantRemainTime
	 */
	struct UWB_MerchantListSlot_C_OnSetMerchantRemainTime_Params
	{
	public:
		struct FTimespan                                           RemainTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantListSlot.WB_MerchantListSlot_C.ExecuteUbergraph_WB_MerchantListSlot
	 */
	struct UWB_MerchantListSlot_C_ExecuteUbergraph_WB_MerchantListSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9JOP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
