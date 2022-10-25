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
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown
	 */
	struct UUI_CraftingRecipe_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass
	 */
	struct UUI_CraftingRecipe_C_SetTooltipFromClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct
	 */
	struct UUI_CraftingRecipe_C_Construct_Params
	{	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState
	 */
	struct UUI_CraftingRecipe_C_SetAvailabilityState_Params
	{
	public:
		ERecipeAvailabilityState                                   State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected
	 */
	struct UUI_CraftingRecipe_C_SetIsSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription
	 */
	struct UUI_CraftingRecipe_C_SetTooltipFromCaptionAndDescription_Params
	{
	public:
		class FText                                                Caption;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsHighlighted
	 */
	struct UUI_CraftingRecipe_C_SetIsHighlighted_Params
	{
	public:
		bool                                                       isHighligted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut
	 */
	struct UUI_CraftingRecipe_C_SetIsGrayedOut_Params
	{
	public:
		bool                                                       isGrayedOut;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe
	 */
	struct UUI_CraftingRecipe_C_ExecuteUbergraph_UI_CraftingRecipe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
