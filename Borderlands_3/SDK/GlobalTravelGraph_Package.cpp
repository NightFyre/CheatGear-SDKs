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
	 * 		Name   -> Function GlobalTravelGraph.GlobalTravelGraph_C.ExecuteUbergraph_GlobalTravelGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalTravelGraph_C::ExecuteUbergraph_GlobalTravelGraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalTravelGraph.GlobalTravelGraph_C.ExecuteUbergraph_GlobalTravelGraph");
		
		UGlobalTravelGraph_C_ExecuteUbergraph_GlobalTravelGraph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalTravelGraph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalTravelGraph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalTravelGraph.GlobalTravelGraph_C");
		return ptr;
	}

}


