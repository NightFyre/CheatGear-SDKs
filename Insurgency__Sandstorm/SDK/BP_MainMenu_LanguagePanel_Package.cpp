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
	 * 		Name   -> Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_LanguagePanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnFocusReceived");
		
		UBP_MainMenu_LanguagePanel_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsNewCulture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_LanguagePanel_C::BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature(bool IsNewCulture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature");
		
		UBP_MainMenu_LanguagePanel_C_BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature_Params params {};
		params.IsNewCulture = IsNewCulture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.ExecuteUbergraph_BP_MainMenu_LanguagePanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_LanguagePanel_C::ExecuteUbergraph_BP_MainMenu_LanguagePanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.ExecuteUbergraph_BP_MainMenu_LanguagePanel");
		
		UBP_MainMenu_LanguagePanel_C_ExecuteUbergraph_BP_MainMenu_LanguagePanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnContinue__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsNewCulture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_LanguagePanel_C::OnContinue__DelegateSignature(bool IsNewCulture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnContinue__DelegateSignature");
		
		UBP_MainMenu_LanguagePanel_C_OnContinue__DelegateSignature_Params params {};
		params.IsNewCulture = IsNewCulture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_LanguagePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_LanguagePanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C");
		return ptr;
	}

}


