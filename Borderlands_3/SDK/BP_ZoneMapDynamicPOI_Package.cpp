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
	 * 		Name   -> Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ZoneMapDynamicPOI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ReceiveBeginPlay");
		
		UBP_ZoneMapDynamicPOI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ExecuteUbergraph_BP_ZoneMapDynamicPOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ZoneMapDynamicPOI_C::ExecuteUbergraph_BP_ZoneMapDynamicPOI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C.ExecuteUbergraph_BP_ZoneMapDynamicPOI");
		
		UBP_ZoneMapDynamicPOI_C_ExecuteUbergraph_BP_ZoneMapDynamicPOI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ZoneMapDynamicPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ZoneMapDynamicPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C");
		return ptr;
	}

}


