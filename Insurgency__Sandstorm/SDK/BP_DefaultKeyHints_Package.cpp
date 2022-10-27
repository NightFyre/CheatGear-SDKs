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
	 * 		Name   -> Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultKeyHints_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.PreConstruct");
		
		UBP_DefaultKeyHints_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_DefaultKeyHints_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.Construct");
		
		UBP_DefaultKeyHints_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_90_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DefaultKeyHints_C::BndEvt__BtnBack_K2Node_ComponentBoundEvent_90_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.BndEvt__BtnBack_K2Node_ComponentBoundEvent_90_OnPressed__DelegateSignature");
		
		UBP_DefaultKeyHints_C_BndEvt__BtnBack_K2Node_ComponentBoundEvent_90_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.ExecuteUbergraph_BP_DefaultKeyHints
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultKeyHints_C::ExecuteUbergraph_BP_DefaultKeyHints(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.ExecuteUbergraph_BP_DefaultKeyHints");
		
		UBP_DefaultKeyHints_C_ExecuteUbergraph_BP_DefaultKeyHints_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.OnBackButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DefaultKeyHints_C::OnBackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultKeyHints.BP_DefaultKeyHints_C.OnBackButtonPressed__DelegateSignature");
		
		UBP_DefaultKeyHints_C_OnBackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DefaultKeyHints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DefaultKeyHints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DefaultKeyHints.BP_DefaultKeyHints_C");
		return ptr;
	}

}


