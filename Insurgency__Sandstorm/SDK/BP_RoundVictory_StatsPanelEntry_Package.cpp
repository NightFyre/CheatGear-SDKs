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
	 * 		Name   -> Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RoundVictory_StatsPanelEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.PreConstruct");
		
		UBP_RoundVictory_StatsPanelEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RoundVictory_StatsPanelEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.Construct");
		
		UBP_RoundVictory_StatsPanelEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.ExecuteUbergraph_BP_RoundVictory_StatsPanelEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RoundVictory_StatsPanelEntry_C::ExecuteUbergraph_BP_RoundVictory_StatsPanelEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C.ExecuteUbergraph_BP_RoundVictory_StatsPanelEntry");
		
		UBP_RoundVictory_StatsPanelEntry_C_ExecuteUbergraph_BP_RoundVictory_StatsPanelEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RoundVictory_StatsPanelEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RoundVictory_StatsPanelEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RoundVictory_StatsPanelEntry.BP_RoundVictory_StatsPanelEntry_C");
		return ptr;
	}

}


