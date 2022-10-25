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
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.SetActiveMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CG_ListRow_MapScenario_C::SetActiveMode(bool bInActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.SetActiveMode");
		
		UBP_CG_ListRow_MapScenario_C_SetActiveMode_Params params {};
		params.bInActive = bInActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CG_ListRow_MapScenario_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.PreConstruct");
		
		UBP_CG_ListRow_MapScenario_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_CG_ListRow_MapScenario_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.Construct");
		
		UBP_CG_ListRow_MapScenario_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_CG_ListRow_MapScenario_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBP_CG_ListRow_MapScenario_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_CG_ListRow_MapScenario_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_CG_ListRow_MapScenario_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.ExecuteUbergraph_BP_CG_ListRow_MapScenario
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CG_ListRow_MapScenario_C::ExecuteUbergraph_BP_CG_ListRow_MapScenario(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.ExecuteUbergraph_BP_CG_ListRow_MapScenario");
		
		UBP_CG_ListRow_MapScenario_C_ExecuteUbergraph_BP_CG_ListRow_MapScenario_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.OnSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_CG_ListRow_MapScenario_C::OnSelected__DelegateSignature(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C.OnSelected__DelegateSignature");
		
		UBP_CG_ListRow_MapScenario_C_OnSelected__DelegateSignature_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CG_ListRow_MapScenario_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CG_ListRow_MapScenario_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CG_ListRow_MapScenario.BP_CG_ListRow_MapScenario_C");
		return ptr;
	}

}


