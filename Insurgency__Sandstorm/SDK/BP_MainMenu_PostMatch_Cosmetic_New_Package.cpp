/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_CreditsSymbol_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_Cosmetic_New_C::Get_CreditsSymbol_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_CreditsSymbol_Visibility_1");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_Get_CreditsSymbol_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.IsLinearColorAlmostEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEqualish                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::IsLinearColorAlmostEqual(const struct FLinearColor& Color1, const struct FLinearColor& Color2, bool* IsEqualish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.IsLinearColorAlmostEqual");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_IsLinearColorAlmostEqual_Params params {};
		params.Color1 = Color1;
		params.Color2 = Color2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEqualish != nullptr)
			*IsEqualish = params.IsEqualish;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForPattern
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForPattern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForPattern");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForPattern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForColorVariation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForColorVariation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForColorVariation");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForColorVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHeadgear
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForHeadgear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHeadgear");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForHeadgear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForSkin
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForSkin");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForEyes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForEyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForEyes");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ClearBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::ClearBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ClearBackground");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_ClearBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackground
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackground");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHairColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetBackgroundForHairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHairColor");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForHairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_Item_Style_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_Cosmetic_New_C::Get_Item_Style_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_Item_Style_Visibility_1");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_Get_Item_Style_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetColorForVariation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::GetColorForVariation(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetColorForVariation");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_GetColorForVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.VisibleIfCondensed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_Cosmetic_New_C::VisibleIfCondensed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.VisibleIfCondensed");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_VisibleIfCondensed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_Cosmetic_New_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetVisibility_1");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetRarityColor_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_MainMenu_PostMatch_Cosmetic_New_C::GetRarityColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetRarityColor_1");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_GetRarityColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.OnLoaded_BD7B753249EC362E967D70B801FBEC0B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::OnLoaded_BD7B753249EC362E967D70B801FBEC0B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.OnLoaded_BD7B753249EC362E967D70B801FBEC0B");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_OnLoaded_BD7B753249EC362E967D70B801FBEC0B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Construct");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.PreConstruct");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetFromItemDefId
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::SetFromItemDefId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetFromItemDefId");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_SetFromItemDefId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_Cosmetic_New_C::ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New");
		
		UBP_MainMenu_PostMatch_Cosmetic_New_C_ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_PostMatch_Cosmetic_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_PostMatch_Cosmetic_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C");
		return ptr;
	}

}


