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
	 * 		Name   -> Function GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C.ExecuteUbergraph_GlobalTravelGraph_DLC2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalTravelGraph_DLC2_C::ExecuteUbergraph_GlobalTravelGraph_DLC2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C.ExecuteUbergraph_GlobalTravelGraph_DLC2");
		
		UGlobalTravelGraph_DLC2_C_ExecuteUbergraph_GlobalTravelGraph_DLC2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalTravelGraph_DLC2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalTravelGraph_DLC2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C");
		return ptr;
	}

}


