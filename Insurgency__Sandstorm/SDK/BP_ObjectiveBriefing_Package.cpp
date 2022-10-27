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
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateDestructibleObjectiveIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UBP_ObjectiveBriefing_C::DoCreateDestructibleObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateDestructibleObjectiveIcon");
		
		UBP_ObjectiveBriefing_C_DoCreateDestructibleObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateCapturingObjectiveIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UBP_ObjectiveBriefing_C::DoCreateCapturingObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateCapturingObjectiveIcon");
		
		UBP_ObjectiveBriefing_C_DoCreateCapturingObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.NotifyNewObjective
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ObjectiveBriefing_C::NotifyNewObjective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.NotifyNewObjective");
		
		UBP_ObjectiveBriefing_C_NotifyNewObjective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ObjectiveBriefing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Construct");
		
		UBP_ObjectiveBriefing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveBriefing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Tick");
		
		UBP_ObjectiveBriefing_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.ExecuteUbergraph_BP_ObjectiveBriefing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveBriefing_C::ExecuteUbergraph_BP_ObjectiveBriefing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.ExecuteUbergraph_BP_ObjectiveBriefing");
		
		UBP_ObjectiveBriefing_C_ExecuteUbergraph_BP_ObjectiveBriefing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ObjectiveBriefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ObjectiveBriefing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ObjectiveBriefing.BP_ObjectiveBriefing_C");
		return ptr;
	}

}


