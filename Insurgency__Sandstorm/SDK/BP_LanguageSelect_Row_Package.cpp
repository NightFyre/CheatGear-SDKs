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
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.UpdateTextColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_LanguageSelect_Row_C::UpdateTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.UpdateTextColor");
		
		UBP_LanguageSelect_Row_C_UpdateTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LanguageSelect_Row_C::SetSelected(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetSelected");
		
		UBP_LanguageSelect_Row_C_SetSelected_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LanguageSelect_Row_C::SetHovered(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.SetHovered");
		
		UBP_LanguageSelect_Row_C_SetHovered_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LanguageSelect_Row_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.PreConstruct");
		
		UBP_LanguageSelect_Row_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_LanguageSelect_Row_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.Construct");
		
		UBP_LanguageSelect_Row_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_LanguageSelect_Row_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnAddedToFocusPath");
		
		UBP_LanguageSelect_Row_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_LanguageSelect_Row_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnRemovedFromFocusPath");
		
		UBP_LanguageSelect_Row_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_LanguageSelect_Row_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseEnter");
		
		UBP_LanguageSelect_Row_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_LanguageSelect_Row_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnMouseLeave");
		
		UBP_LanguageSelect_Row_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_LanguageSelect_Row_C::BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UBP_LanguageSelect_Row_C_BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_LanguageSelect_Row_C::BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBP_LanguageSelect_Row_C_BndEvt__Button_43_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.ExecuteUbergraph_BP_LanguageSelect_Row
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LanguageSelect_Row_C::ExecuteUbergraph_BP_LanguageSelect_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.ExecuteUbergraph_BP_LanguageSelect_Row");
		
		UBP_LanguageSelect_Row_C_ExecuteUbergraph_BP_LanguageSelect_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LanguageTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        LanguageName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_LanguageSelect_Row_C::OnSelected__DelegateSignature(const class FString& LanguageTag, const class FText& LanguageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnSelected__DelegateSignature");
		
		UBP_LanguageSelect_Row_C_OnSelected__DelegateSignature_Params params {};
		params.LanguageTag = LanguageTag;
		params.LanguageName = LanguageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_LanguageSelect_Row_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LanguageSelect_Row.BP_LanguageSelect_Row_C.OnHovered__DelegateSignature");
		
		UBP_LanguageSelect_Row_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LanguageSelect_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LanguageSelect_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LanguageSelect_Row.BP_LanguageSelect_Row_C");
		return ptr;
	}

}


