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
	 * Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties
	 */
	struct UUI_CraftingInfo_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_CraftingInfo.UI_CraftingInfo_C.Construct
	 */
	struct UUI_CraftingInfo_C_Construct_Params
	{	};

	/**
	 * Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CraftingInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CraftingInfo.UI_CraftingInfo_C.Init
	 */
	struct UUI_CraftingInfo_C_Init_Params
	{
	public:
		class AItem*                                               itemCDO;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo
	 */
	struct UUI_CraftingInfo_C_ExecuteUbergraph_UI_CraftingInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0K7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
