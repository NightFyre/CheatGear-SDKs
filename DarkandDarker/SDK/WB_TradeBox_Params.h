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
	 * Function WB_TradeBox.WB_TradeBox_C.Get Trader Name Text Color
	 */
	struct UWB_TradeBox_C_GetTraderNameTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.Get Lock Timer Text
	 */
	struct UWB_TradeBox_C_GetLockTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.Get Lock Overlay Visibility
	 */
	struct UWB_TradeBox_C_GetLockOverlayVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.Get Gold Count
	 */
	struct UWB_TradeBox_C_GetGoldCount_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.BndEvt__v2_WB_TradeBox_TraderCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWB_TradeBox_C_BndEvt__v2_WB_TradeBox_TraderCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.ExecuteUbergraph_WB_TradeBox
	 */
	struct UWB_TradeBox_C_ExecuteUbergraph_WB_TradeBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TradeBox.WB_TradeBox_C.OnCheckStateChanged__DelegateSignature
	 */
	struct UWB_TradeBox_C_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
