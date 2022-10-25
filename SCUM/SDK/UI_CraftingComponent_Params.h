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
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown
	 */
	struct UUI_CraftingComponent_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool
	 */
	struct UUI_CraftingComponent_C_SetIsTool_Params
	{
	public:
		bool                                                       IsTool;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount
	 */
	struct UUI_CraftingComponent_C_SetRequiredCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber
	 */
	struct UUI_CraftingComponent_C_SetOrderNumber_Params
	{
	public:
		int32_t                                                    orderNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional
	 */
	struct UUI_CraftingComponent_C_SetIsOptional_Params
	{
	public:
		bool                                                       isOptional;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip
	 */
	struct UUI_CraftingComponent_C_CreateTooltip_Params
	{	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable
	 */
	struct UUI_CraftingComponent_C_SetIsAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter
	 */
	struct UUI_CraftingComponent_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount
	 */
	struct UUI_CraftingComponent_C_SetSatisfiedAndRequiredCount_Params
	{
	public:
		int32_t                                                    Satisfied;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Required;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent
	 */
	struct UUI_CraftingComponent_C_ExecuteUbergraph_UI_CraftingComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NRH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
