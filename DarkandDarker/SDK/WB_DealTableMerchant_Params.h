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
	 * Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetScript
	 */
	struct UWB_DealTableMerchant_C_SetScript_Params
	{
	public:
		class FText                                                InScriptText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetRemainTime
	 */
	struct UWB_DealTableMerchant_C_SetRemainTime_Params
	{
	public:
		struct FTimespan                                           InRemainTime;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetFaction
	 */
	struct UWB_DealTableMerchant_C_SetFaction_Params
	{
	public:
		int32_t                                                    InFaction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetName
	 */
	struct UWB_DealTableMerchant_C_SetName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetPortrait
	 */
	struct UWB_DealTableMerchant_C_SetPortrait_Params
	{
	public:
		class UTexture2D*                                          InPortraitTexture2d;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
