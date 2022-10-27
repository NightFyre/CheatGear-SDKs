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
	 * 		Name   -> Function ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C.ExecuteUbergraph_ALI_GlobalTravelGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_GlobalTravelGraph_C::ExecuteUbergraph_ALI_GlobalTravelGraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C.ExecuteUbergraph_ALI_GlobalTravelGraph");
		
		UALI_GlobalTravelGraph_C_ExecuteUbergraph_ALI_GlobalTravelGraph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_GlobalTravelGraph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_GlobalTravelGraph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C");
		return ptr;
	}

}


