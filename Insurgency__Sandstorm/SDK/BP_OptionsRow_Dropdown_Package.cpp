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
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetNewTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_OptionsRow_Dropdown_C::SetNewTitle(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetNewTitle");
		
		UBP_OptionsRow_Dropdown_C_SetNewTitle_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_OptionsRow_Dropdown_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnFocusReceived");
		
		UBP_OptionsRow_Dropdown_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetForegroundColor_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_OptionsRow_Dropdown_C::GetForegroundColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetForegroundColor_1");
		
		UBP_OptionsRow_Dropdown_C_GetForegroundColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.CreateDefaultOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Dropdown_C::CreateDefaultOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.CreateDefaultOptions");
		
		UBP_OptionsRow_Dropdown_C_CreateDefaultOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetDefaultOption
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Dropdown_C::SetDefaultOption(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SetDefaultOption");
		
		UBP_OptionsRow_Dropdown_C_SetDefaultOption_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SelectOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExists                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Dropdown_C::SelectOption(const class FName& ID, bool* bExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.SelectOption");
		
		UBP_OptionsRow_Dropdown_C_SelectOption_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExists != nullptr)
			*bExists = params.bExists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetSelectedOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_OptionsRow_Dropdown_C::GetSelectedOption(class FName* ID, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.GetSelectedOption");
		
		UBP_OptionsRow_Dropdown_C_GetSelectedOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.AddOption
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_OptionsRow_Dropdown_C::AddOption(const class FName& ID, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.AddOption");
		
		UBP_OptionsRow_Dropdown_C_AddOption_Params params {};
		params.ID = ID;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ClearOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_Dropdown_C::ClearOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ClearOptions");
		
		UBP_OptionsRow_Dropdown_C_ClearOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_Dropdown_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.PreConstruct");
		
		UBP_OptionsRow_Dropdown_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OptionsRow_Dropdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.Construct");
		
		UBP_OptionsRow_Dropdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Dropdown_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseEnter");
		
		UBP_OptionsRow_Dropdown_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_Dropdown_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnMouseLeave");
		
		UBP_OptionsRow_Dropdown_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Dropdown_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnAddedToFocusPath");
		
		UBP_OptionsRow_Dropdown_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_Dropdown_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnRemovedFromFocusPath");
		
		UBP_OptionsRow_Dropdown_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Dropdown_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UBP_OptionsRow_Dropdown_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ExecuteUbergraph_BP_OptionsRow_Dropdown
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Dropdown_C::ExecuteUbergraph_BP_OptionsRow_Dropdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.ExecuteUbergraph_BP_OptionsRow_Dropdown");
		
		UBP_OptionsRow_Dropdown_C_ExecuteUbergraph_BP_OptionsRow_Dropdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESelectInfo                                        SelectInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Console_Variable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_Dropdown_C::OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C.OnOptionSelected__DelegateSignature");
		
		UBP_OptionsRow_Dropdown_C_OnOptionSelected__DelegateSignature_Params params {};
		params.ID = ID;
		params.Text = Text;
		params.SelectInfo = SelectInfo;
		params.Console_Variable = Console_Variable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_Dropdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_Dropdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C");
		return ptr;
	}

}


