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
	 * 		Name   -> Function BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMap_SupplyCache_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C.Construct");
		
		UBP_Widget_TacticalMap_SupplyCache_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C.ExecuteUbergraph_BP_Widget_TacticalMap_SupplyCache
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMap_SupplyCache_C::ExecuteUbergraph_BP_Widget_TacticalMap_SupplyCache(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C.ExecuteUbergraph_BP_Widget_TacticalMap_SupplyCache");
		
		UBP_Widget_TacticalMap_SupplyCache_C_ExecuteUbergraph_BP_Widget_TacticalMap_SupplyCache_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_TacticalMap_SupplyCache_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_TacticalMap_SupplyCache_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_SupplyCache.BP_Widget_TacticalMap_SupplyCache_C");
		return ptr;
	}

}


