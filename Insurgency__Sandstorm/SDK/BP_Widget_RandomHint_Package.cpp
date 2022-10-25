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
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PrepareStringForCompare
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      HintsValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RandomHint_C::PrepareStringForCompare(const class FString& HintsValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PrepareStringForCompare");
		
		UBP_Widget_RandomHint_C_PrepareStringForCompare_Params params {};
		params.HintsValue = HintsValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CanHintBeShownOnConsole
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHintIsOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_RandomHint_C::CanHintBeShownOnConsole(const class FText& HintText, bool* bHintIsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CanHintBeShownOnConsole");
		
		UBP_Widget_RandomHint_C_CanHintBeShownOnConsole_Params params {};
		params.HintText = HintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHintIsOk != nullptr)
			*bHintIsOk = params.bHintIsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.UpdateWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::UpdateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.UpdateWidgets");
		
		UBP_Widget_RandomHint_C_UpdateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PopulateRandomHints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::PopulateRandomHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.PopulateRandomHints");
		
		UBP_Widget_RandomHint_C_PopulateRandomHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleNextHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReverseDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_RandomHint_C::CycleNextHint(bool bReverseDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleNextHint");
		
		UBP_Widget_RandomHint_C_CycleNextHint_Params params {};
		params.bReverseDirection = bReverseDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleRandomHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::CycleRandomHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.CycleRandomHint");
		
		UBP_Widget_RandomHint_C_CycleRandomHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.Construct");
		
		UBP_Widget_RandomHint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_Widget_RandomHint_C_BndEvt__NextHintButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_RandomHint_C::BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_Widget_RandomHint_C_BndEvt__PreviousHintButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.ExecuteUbergraph_BP_Widget_RandomHint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RandomHint_C::ExecuteUbergraph_BP_Widget_RandomHint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RandomHint.BP_Widget_RandomHint_C.ExecuteUbergraph_BP_Widget_RandomHint");
		
		UBP_Widget_RandomHint_C_ExecuteUbergraph_BP_Widget_RandomHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_RandomHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_RandomHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_RandomHint.BP_Widget_RandomHint_C");
		return ptr;
	}

}


