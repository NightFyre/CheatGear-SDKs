/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ZoneMap_LegendaryPOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ReceiveBeginPlay");
		
		UBP_ZoneMap_LegendaryPOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ExecuteUbergraph_BP_ZoneMap_LegendaryPOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ZoneMap_LegendaryPOI_C::ExecuteUbergraph_BP_ZoneMap_LegendaryPOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C.ExecuteUbergraph_BP_ZoneMap_LegendaryPOI");
		
		UBP_ZoneMap_LegendaryPOI_C_ExecuteUbergraph_BP_ZoneMap_LegendaryPOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ZoneMap_LegendaryPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ZoneMap_LegendaryPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C");
		return ptr;
	}

}


