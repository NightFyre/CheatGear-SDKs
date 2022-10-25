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
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.SetUsingController
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LateJoinPrompt_C::SetUsingController(bool UsingController, EeInputIconType Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.SetUsingController");
		
		UBP_LateJoinPrompt_C_SetUsingController_Params params {};
		params.UsingController = UsingController;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.JoinMatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_LateJoinPrompt_C::JoinMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.JoinMatch");
		
		UBP_LateJoinPrompt_C_JoinMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForLatejoin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LateJoinPrompt_C::ShouldBeVisibleForLatejoin(bool* bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForLatejoin");
		
		UBP_LateJoinPrompt_C_ShouldBeVisibleForLatejoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldBeVisible != nullptr)
			*bShouldBeVisible = params.bShouldBeVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForMatchmaking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LateJoinPrompt_C::ShouldBeVisibleForMatchmaking(bool* bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ShouldBeVisibleForMatchmaking");
		
		UBP_LateJoinPrompt_C_ShouldBeVisibleForMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldBeVisible != nullptr)
			*bShouldBeVisible = params.bShouldBeVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.GetOverallVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_LateJoinPrompt_C::GetOverallVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.GetOverallVisibility");
		
		UBP_LateJoinPrompt_C_GetOverallVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_LateJoinPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.Construct");
		
		UBP_LateJoinPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_LateJoinPrompt_C::BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_LateJoinPrompt_C_BndEvt__BtnJoin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ExecuteUbergraph_BP_LateJoinPrompt
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LateJoinPrompt_C::ExecuteUbergraph_BP_LateJoinPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LateJoinPrompt.BP_LateJoinPrompt_C.ExecuteUbergraph_BP_LateJoinPrompt");
		
		UBP_LateJoinPrompt_C_ExecuteUbergraph_BP_LateJoinPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LateJoinPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LateJoinPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LateJoinPrompt.BP_LateJoinPrompt_C");
		return ptr;
	}

}


