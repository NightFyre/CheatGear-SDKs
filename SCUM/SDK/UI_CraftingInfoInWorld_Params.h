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
	 * Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init
	 */
	struct UUI_CraftingInfoInWorld_C_Init_Params
	{
	public:
		class AItem*                                               itemCDO;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription
	 */
	struct UUI_CraftingInfoInWorld_C_SetCaptionAndDescription_Params
	{
	public:
		class FText                                                Caption;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld
	 */
	struct UUI_CraftingInfoInWorld_C_ExecuteUbergraph_UI_CraftingInfoInWorld_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8FX9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
