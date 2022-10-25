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
	 * 		RVA    -> 0x05036440
	 * 		Name   -> Function UMGExtensions.ComboBoxText.SetSelectedOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Option                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UComboBoxText::SetSelectedOption(const class FText& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.SetSelectedOption");
		
		UComboBoxText_SetSelectedOption_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050363C0
	 * 		Name   -> Function UMGExtensions.ComboBoxText.SetSelectedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxText::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.SetSelectedIndex");
		
		UComboBoxText_SetSelectedIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036250
	 * 		Name   -> Function UMGExtensions.ComboBoxText.RemoveOption
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Option                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UComboBoxText::RemoveOption(const class FText& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.RemoveOption");
		
		UComboBoxText_RemoveOption_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036230
	 * 		Name   -> Function UMGExtensions.ComboBoxText.RefreshOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UComboBoxText::RefreshOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.RefreshOptions");
		
		UComboBoxText_RefreshOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction UMGExtensions.ComboBoxText.OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FText                                        SelectedItem                                               (Parm, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxText::OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMGExtensions.ComboBoxText.OnSelectionChangedEvent__DelegateSignature");
		
		UComboBoxText_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction UMGExtensions.ComboBoxText.OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UComboBoxText::OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMGExtensions.ComboBoxText.OnOpeningEvent__DelegateSignature");
		
		UComboBoxText_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036170
	 * 		Name   -> Function UMGExtensions.ComboBoxText.GetSelectedOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UComboBoxText::GetSelectedOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.GetSelectedOption");
		
		UComboBoxText_GetSelectedOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036140
	 * 		Name   -> Function UMGExtensions.ComboBoxText.GetSelectedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UComboBoxText::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.GetSelectedIndex");
		
		UComboBoxText_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036110
	 * 		Name   -> Function UMGExtensions.ComboBoxText.GetOptionCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UComboBoxText::GetOptionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.GetOptionCount");
		
		UComboBoxText_GetOptionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036020
	 * 		Name   -> Function UMGExtensions.ComboBoxText.GetOptionAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UComboBoxText::GetOptionAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.GetOptionAtIndex");
		
		UComboBoxText_GetOptionAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035E40
	 * 		Name   -> Function UMGExtensions.ComboBoxText.FindOptionIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        Option                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UComboBoxText::FindOptionIndex(const class FText& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.FindOptionIndex");
		
		UComboBoxText_FindOptionIndex_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035E20
	 * 		Name   -> Function UMGExtensions.ComboBoxText.ClearSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UComboBoxText::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.ClearSelection");
		
		UComboBoxText_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035E00
	 * 		Name   -> Function UMGExtensions.ComboBoxText.ClearOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UComboBoxText::ClearOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.ClearOptions");
		
		UComboBoxText_ClearOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035D30
	 * 		Name   -> Function UMGExtensions.ComboBoxText.AddOption
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Option                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UComboBoxText::AddOption(const class FText& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.ComboBoxText.AddOption");
		
		UComboBoxText_AddOption_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboBoxText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMGExtensions.ComboBoxText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035F20
	 * 		Name   -> Function UMGExtensions.NWIUMGStatics.GetAllChildrenRecursive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UWidget*> UNWIUMGStatics::STATIC_GetAllChildrenRecursive(class UPanelWidget* Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.NWIUMGStatics.GetAllChildrenRecursive");
		
		UNWIUMGStatics_GetAllChildrenRecursive_Params params {};
		params.Panel = Panel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNWIUMGStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNWIUMGStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMGExtensions.NWIUMGStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036330
	 * 		Name   -> Function UMGExtensions.SaberInvalidationBox.SetCanCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               CanCache                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaberInvalidationBox::SetCanCache(bool CanCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.SaberInvalidationBox.SetCanCache");
		
		USaberInvalidationBox_SetCanCache_Params params {};
		params.CanCache = CanCache;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05036210
	 * 		Name   -> Function UMGExtensions.SaberInvalidationBox.InvalidateCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USaberInvalidationBox::InvalidateCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.SaberInvalidationBox.InvalidateCache");
		
		USaberInvalidationBox_InvalidateCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05035FF0
	 * 		Name   -> Function UMGExtensions.SaberInvalidationBox.GetCanCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USaberInvalidationBox::GetCanCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMGExtensions.SaberInvalidationBox.GetCanCache");
		
		USaberInvalidationBox_GetCanCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USaberInvalidationBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaberInvalidationBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMGExtensions.SaberInvalidationBox");
		return ptr;
	}

}


