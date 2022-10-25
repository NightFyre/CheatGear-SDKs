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
	 * 		Name   -> Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayEvent_C::BndEvt__ReplayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ReplayEvent_C_BndEvt__ReplayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayEvent_C::BndEvt__ReplayButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ReplayEvent_C_BndEvt__ReplayButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayEvent_C::BndEvt__ReplayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayEvent.BP_ReplayEvent_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ReplayEvent_C_BndEvt__ReplayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayEvent.BP_ReplayEvent_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ReplayEvent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayEvent.BP_ReplayEvent_C.Construct");
		
		UBP_ReplayEvent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayEvent.BP_ReplayEvent_C.ExecuteUbergraph_BP_ReplayEvent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayEvent_C::ExecuteUbergraph_BP_ReplayEvent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayEvent.BP_ReplayEvent_C.ExecuteUbergraph_BP_ReplayEvent");
		
		UBP_ReplayEvent_C_ExecuteUbergraph_BP_ReplayEvent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ReplayEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ReplayEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReplayEvent.BP_ReplayEvent_C");
		return ptr;
	}

}


