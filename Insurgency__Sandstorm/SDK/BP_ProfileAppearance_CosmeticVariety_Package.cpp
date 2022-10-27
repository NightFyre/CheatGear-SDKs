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
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.SetVarietyText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticVariety_C::SetVarietyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.SetVarietyText");
		
		UBP_ProfileAppearance_CosmeticVariety_C_SetVarietyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticVariety_C::BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticVariety_C_BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticVariety
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticVariety_C::ExecuteUbergraph_BP_ProfileAppearance_CosmeticVariety(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticVariety");
		
		UBP_ProfileAppearance_CosmeticVariety_C_ExecuteUbergraph_BP_ProfileAppearance_CosmeticVariety_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.OnPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ProfileAppearance_CosmeticVariety_C*     VarietyButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticVariety_C::OnPressed__DelegateSignature(class UBP_ProfileAppearance_CosmeticVariety_C* VarietyButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C.OnPressed__DelegateSignature");
		
		UBP_ProfileAppearance_CosmeticVariety_C_OnPressed__DelegateSignature_Params params {};
		params.VarietyButton = VarietyButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileAppearance_CosmeticVariety_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileAppearance_CosmeticVariety_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileAppearance_CosmeticVariety.BP_ProfileAppearance_CosmeticVariety_C");
		return ptr;
	}

}


