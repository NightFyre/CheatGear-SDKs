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
	 * 		Name   -> Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.GetObjectiveVisibilty
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_FloatingHintTextContainer_C::GetObjectiveVisibilty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.GetObjectiveVisibilty");
		
		UBP_FloatingHintTextContainer_C_GetObjectiveVisibilty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.GetColorAndOpacityForObjectives
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_FloatingHintTextContainer_C::GetColorAndOpacityForObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.GetColorAndOpacityForObjectives");
		
		UBP_FloatingHintTextContainer_C_GetColorAndOpacityForObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingHintTextContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.Tick");
		
		UBP_FloatingHintTextContainer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.ExecuteUbergraph_BP_FloatingHintTextContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingHintTextContainer_C::ExecuteUbergraph_BP_FloatingHintTextContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C.ExecuteUbergraph_BP_FloatingHintTextContainer");
		
		UBP_FloatingHintTextContainer_C_ExecuteUbergraph_BP_FloatingHintTextContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FloatingHintTextContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FloatingHintTextContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C");
		return ptr;
	}

}


