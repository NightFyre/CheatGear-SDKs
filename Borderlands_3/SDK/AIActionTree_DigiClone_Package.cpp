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
	 * 		Name   -> Function AIActionTree_DigiClone.AIActionTree_DigiClone_C.ExecuteUbergraph_AIActionTree_DigiClone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIActionTree_DigiClone_C::ExecuteUbergraph_AIActionTree_DigiClone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIActionTree_DigiClone.AIActionTree_DigiClone_C.ExecuteUbergraph_AIActionTree_DigiClone");
		
		UAIActionTree_DigiClone_C_ExecuteUbergraph_AIActionTree_DigiClone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionTree_DigiClone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionTree_DigiClone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIActionTree_DigiClone.AIActionTree_DigiClone_C");
		return ptr;
	}

}


