/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Get Color and Opacity 1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWBP_SwitchScreen_Tab_C::Get_Color_and_Opacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Get Color and Opacity 1");
		
		UWBP_SwitchScreen_Tab_C_Get_Color_and_Opacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_SwitchScreen_Tab_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.GetColorAndOpacity_1");
		
		UWBP_SwitchScreen_Tab_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_A47AE17D484D464500C86CA4B88BCE06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWBP_SwitchScreen_Tab_C::OnLoaded_A47AE17D484D464500C86CA4B88BCE06(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_A47AE17D484D464500C86CA4B88BCE06");
		
		UWBP_SwitchScreen_Tab_C_OnLoaded_A47AE17D484D464500C86CA4B88BCE06_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_3B85CAF4457E7152C609BAA5141C88D6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SwitchScreen_Tab_C::OnLoaded_3B85CAF4457E7152C609BAA5141C88D6(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnLoaded_3B85CAF4457E7152C609BAA5141C88D6");
		
		UWBP_SwitchScreen_Tab_C_OnLoaded_3B85CAF4457E7152C609BAA5141C88D6_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SwitchScreen_Tab_C::BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_SwitchScreen_Tab_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalSetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SwitchScreen_Tab_C::InternalSetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalSetSelected");
		
		UWBP_SwitchScreen_Tab_C_InternalSetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalOnSelected
	 * 		Flags  -> ()
	 */
	void UWBP_SwitchScreen_Tab_C::InternalOnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.InternalOnSelected");
		
		UWBP_SwitchScreen_Tab_C_InternalOnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SwitchScreen_Tab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.Construct");
		
		UWBP_SwitchScreen_Tab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SwitchScreen_Tab_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.PreConstruct");
		
		UWBP_SwitchScreen_Tab_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.ExecuteUbergraph_WBP_SwitchScreen_Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SwitchScreen_Tab_C::ExecuteUbergraph_WBP_SwitchScreen_Tab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.ExecuteUbergraph_WBP_SwitchScreen_Tab");
		
		UWBP_SwitchScreen_Tab_C_ExecuteUbergraph_WBP_SwitchScreen_Tab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SwitchScreen_Tab_C::OnSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C.OnSelected__DelegateSignature");
		
		UWBP_SwitchScreen_Tab_C_OnSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SwitchScreen_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SwitchScreen_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C");
		return ptr;
	}

}


