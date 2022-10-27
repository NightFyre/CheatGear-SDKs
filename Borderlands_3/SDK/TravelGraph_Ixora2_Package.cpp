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
	 * 		Name   -> Function TravelGraph_Ixora2.TravelGraph_Ixora2_C.ExecuteUbergraph_TravelGraph_Ixora2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTravelGraph_Ixora2_C::ExecuteUbergraph_TravelGraph_Ixora2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TravelGraph_Ixora2.TravelGraph_Ixora2_C.ExecuteUbergraph_TravelGraph_Ixora2");
		
		UTravelGraph_Ixora2_C_ExecuteUbergraph_TravelGraph_Ixora2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTravelGraph_Ixora2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTravelGraph_Ixora2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TravelGraph_Ixora2.TravelGraph_Ixora2_C");
		return ptr;
	}

}


