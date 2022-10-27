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
	 * 		Name   -> Function TravelGraph_Cartels.TravelGraph_Cartels_C.ExecuteUbergraph_TravelGraph_Cartels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTravelGraph_Cartels_C::ExecuteUbergraph_TravelGraph_Cartels(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TravelGraph_Cartels.TravelGraph_Cartels_C.ExecuteUbergraph_TravelGraph_Cartels");
		
		UTravelGraph_Cartels_C_ExecuteUbergraph_TravelGraph_Cartels_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelGraph_Cartels_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelGraph_Cartels_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TravelGraph_Cartels.TravelGraph_Cartels_C");
		return ptr;
	}

}


