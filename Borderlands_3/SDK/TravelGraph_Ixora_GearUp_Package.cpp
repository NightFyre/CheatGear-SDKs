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
	 * 		Name   -> Function TravelGraph_Ixora_GearUp.TravelGraph_Ixora_GearUp_C.ExecuteUbergraph_TravelGraph_Ixora_GearUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTravelGraph_Ixora_GearUp_C::ExecuteUbergraph_TravelGraph_Ixora_GearUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TravelGraph_Ixora_GearUp.TravelGraph_Ixora_GearUp_C.ExecuteUbergraph_TravelGraph_Ixora_GearUp");
		
		UTravelGraph_Ixora_GearUp_C_ExecuteUbergraph_TravelGraph_Ixora_GearUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelGraph_Ixora_GearUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelGraph_Ixora_GearUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TravelGraph_Ixora_GearUp.TravelGraph_Ixora_GearUp_C");
		return ptr;
	}

}


