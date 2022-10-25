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
	 * Function BP_KitSelect_UpgradeHeader.BP_KitSelect_UpgradeHeader_C.SetSlotText
	 */
	struct UBP_KitSelect_UpgradeHeader_C_SetSlotText_Params
	{
	public:
		class FText                                                InSlotText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeHeader.BP_KitSelect_UpgradeHeader_C.GetText_1
	 */
	struct UBP_KitSelect_UpgradeHeader_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_UpgradeHeader.BP_KitSelect_UpgradeHeader_C.Construct
	 */
	struct UBP_KitSelect_UpgradeHeader_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_UpgradeHeader.BP_KitSelect_UpgradeHeader_C.ExecuteUbergraph_BP_KitSelect_UpgradeHeader
	 */
	struct UBP_KitSelect_UpgradeHeader_C_ExecuteUbergraph_BP_KitSelect_UpgradeHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q5C2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
