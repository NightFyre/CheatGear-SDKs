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
	 * 		Name   -> Function AITree_LookAtPlayer.AITree_LookAtPlayer_C.ExecuteUbergraph_AITree_LookAtPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_LookAtPlayer_C::ExecuteUbergraph_AITree_LookAtPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_LookAtPlayer.AITree_LookAtPlayer_C.ExecuteUbergraph_AITree_LookAtPlayer");
		
		UAITree_LookAtPlayer_C_ExecuteUbergraph_AITree_LookAtPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITree_LookAtPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITree_LookAtPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AITree_LookAtPlayer.AITree_LookAtPlayer_C");
		return ptr;
	}

}


