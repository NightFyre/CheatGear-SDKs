/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_CraftingRecipe_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown");
		
		UUI_CraftingRecipe_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UUI_CraftingRecipe_C::SetTooltipFromClass(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass");
		
		UUI_CraftingRecipe_C_SetTooltipFromClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CraftingRecipe_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct");
		
		UUI_CraftingRecipe_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERecipeAvailabilityState                           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRecipe_C::SetAvailabilityState(ERecipeAvailabilityState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState");
		
		UUI_CraftingRecipe_C_SetAvailabilityState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRecipe_C::SetIsSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected");
		
		UUI_CraftingRecipe_C_SetIsSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Caption                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CraftingRecipe_C::SetTooltipFromCaptionAndDescription(const class FText& Caption, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription");
		
		UUI_CraftingRecipe_C_SetTooltipFromCaptionAndDescription_Params params {};
		params.Caption = Caption;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsHighlighted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isHighligted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRecipe_C::SetIsHighlighted(bool isHighligted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsHighlighted");
		
		UUI_CraftingRecipe_C_SetIsHighlighted_Params params {};
		params.isHighligted = isHighligted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isGrayedOut                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CraftingRecipe_C::SetIsGrayedOut(bool isGrayedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut");
		
		UUI_CraftingRecipe_C_SetIsGrayedOut_Params params {};
		params.isGrayedOut = isGrayedOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingRecipe_C::ExecuteUbergraph_UI_CraftingRecipe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe");
		
		UUI_CraftingRecipe_C_ExecuteUbergraph_UI_CraftingRecipe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingRecipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingRecipe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingRecipe.UI_CraftingRecipe_C");
		return ptr;
	}

}


