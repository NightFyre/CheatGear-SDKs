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
	 * 		Name   -> Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ContextualHUDHint_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.PreConstruct");
		
		UBP_ContextualHUDHint_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ContextualHUDHint_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.Construct");
		
		UBP_ContextualHUDHint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ContextualHUDHint_C::BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature");
		
		UBP_ContextualHUDHint_C_BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.BuildIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Gamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ContextualHUDHint_C::BuildIcon(bool Gamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.BuildIcon");
		
		UBP_ContextualHUDHint_C_BuildIcon_Params params {};
		params.Gamepad = Gamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.ExecuteUbergraph_BP_ContextualHUDHint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextualHUDHint_C::ExecuteUbergraph_BP_ContextualHUDHint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHint.BP_ContextualHUDHint_C.ExecuteUbergraph_BP_ContextualHUDHint");
		
		UBP_ContextualHUDHint_C_ExecuteUbergraph_BP_ContextualHUDHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ContextualHUDHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ContextualHUDHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextualHUDHint.BP_ContextualHUDHint_C");
		return ptr;
	}

}


