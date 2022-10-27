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
	 * 		Name   -> Function BP_INSSwitcher.BP_INSSwitcher_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_INSSwitcher_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_INSSwitcher.BP_INSSwitcher_C.PreConstruct");
		
		UBP_INSSwitcher_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_INSSwitcher.BP_INSSwitcher_C.BndEvt__BP_PlatformButtonSteam_K2Node_ComponentBoundEvent_3_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_INSSwitcher_C::BndEvt__BP_PlatformButtonSteam_K2Node_ComponentBoundEvent_3_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_INSSwitcher.BP_INSSwitcher_C.BndEvt__BP_PlatformButtonSteam_K2Node_ComponentBoundEvent_3_OnCicked__DelegateSignature");
		
		UBP_INSSwitcher_C_BndEvt__BP_PlatformButtonSteam_K2Node_ComponentBoundEvent_3_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_INSSwitcher.BP_INSSwitcher_C.BndEvt__BP_PlatformButtonSecond_K2Node_ComponentBoundEvent_4_OnCicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_INSSwitcher_C::BndEvt__BP_PlatformButtonSecond_K2Node_ComponentBoundEvent_4_OnCicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_INSSwitcher.BP_INSSwitcher_C.BndEvt__BP_PlatformButtonSecond_K2Node_ComponentBoundEvent_4_OnCicked__DelegateSignature");
		
		UBP_INSSwitcher_C_BndEvt__BP_PlatformButtonSecond_K2Node_ComponentBoundEvent_4_OnCicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_INSSwitcher.BP_INSSwitcher_C.ExecuteUbergraph_BP_INSSwitcher
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_INSSwitcher_C::ExecuteUbergraph_BP_INSSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_INSSwitcher.BP_INSSwitcher_C.ExecuteUbergraph_BP_INSSwitcher");
		
		UBP_INSSwitcher_C_ExecuteUbergraph_BP_INSSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_INSSwitcher.BP_INSSwitcher_C.OnPlatformSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_INSSwitcher_C::OnPlatformSelected__DelegateSignature(const class FText& SelectedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_INSSwitcher.BP_INSSwitcher_C.OnPlatformSelected__DelegateSignature");
		
		UBP_INSSwitcher_C_OnPlatformSelected__DelegateSignature_Params params {};
		params.SelectedText = SelectedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_INSSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_INSSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_INSSwitcher.BP_INSSwitcher_C");
		return ptr;
	}

}


