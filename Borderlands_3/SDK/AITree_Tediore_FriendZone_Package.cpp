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
	 * 		Name   -> Function AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C.ExecuteUbergraph_AITree_Tediore_FriendZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_Tediore_FriendZone_C::ExecuteUbergraph_AITree_Tediore_FriendZone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C.ExecuteUbergraph_AITree_Tediore_FriendZone");
		
		UAITree_Tediore_FriendZone_C_ExecuteUbergraph_AITree_Tediore_FriendZone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITree_Tediore_FriendZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITree_Tediore_FriendZone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C");
		return ptr;
	}

}


