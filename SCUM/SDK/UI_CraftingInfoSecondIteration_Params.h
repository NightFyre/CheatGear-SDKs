#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init
	 */
	struct UUI_CraftingInfoSecondIteration_C_Init_Params
	{
	public:
		class AItem*                                               itemCDO;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription
	 */
	struct UUI_CraftingInfoSecondIteration_C_SetCaptionAndDescription_Params
	{
	public:
		class FText                                                Caption;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration
	 */
	struct UUI_CraftingInfoSecondIteration_C_ExecuteUbergraph_UI_CraftingInfoSecondIteration_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2QF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
