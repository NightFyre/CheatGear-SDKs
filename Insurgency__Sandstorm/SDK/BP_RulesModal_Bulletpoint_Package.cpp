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
	 * 		Name   -> Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RulesModal_Bulletpoint_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.PreConstruct");
		
		UBP_RulesModal_Bulletpoint_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RulesModal_Bulletpoint_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.Construct");
		
		UBP_RulesModal_Bulletpoint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.ExecuteUbergraph_BP_RulesModal_Bulletpoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RulesModal_Bulletpoint_C::ExecuteUbergraph_BP_RulesModal_Bulletpoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C.ExecuteUbergraph_BP_RulesModal_Bulletpoint");
		
		UBP_RulesModal_Bulletpoint_C_ExecuteUbergraph_BP_RulesModal_Bulletpoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RulesModal_Bulletpoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RulesModal_Bulletpoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RulesModal_Bulletpoint.BP_RulesModal_Bulletpoint_C");
		return ptr;
	}

}


