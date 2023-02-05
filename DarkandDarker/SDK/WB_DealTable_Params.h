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
	 * Function WB_DealTable.WB_DealTable_C.OnSetMerchantFaction
	 */
	struct UWB_DealTable_C_OnSetMerchantFaction_Params
	{
	public:
		int32_t                                                    InFaction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.OnSetMerchantName
	 */
	struct UWB_DealTable_C_OnSetMerchantName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.OnSetMerchantPortrait
	 */
	struct UWB_DealTable_C_OnSetMerchantPortrait_Params
	{
	public:
		class UTexture2D*                                          Portrait;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.OnSetMerchantRemainTime
	 */
	struct UWB_DealTable_C_OnSetMerchantRemainTime_Params
	{
	public:
		struct FTimespan                                           RemainTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.OnSetMerchantScript
	 */
	struct UWB_DealTable_C_OnSetMerchantScript_Params
	{
	public:
		class FText                                                InScript;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.OnMerchantServiceActiveNotify
	 */
	struct UWB_DealTable_C_OnMerchantServiceActiveNotify_Params
	{
	public:
		EWidgetMerchantServiceType                                 ActiveService;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTable.WB_DealTable_C.ExecuteUbergraph_WB_DealTable
	 */
	struct UWB_DealTable_C_ExecuteUbergraph_WB_DealTable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
