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
	 * 		Name   -> Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.AN_MeleeHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_IronBear_BearfisT_HeavyPunch_R_C::AN_MeleeHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.AN_MeleeHit");
		
		UAction_IronBear_BearfisT_HeavyPunch_R_C_AN_MeleeHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_BearfisT_HeavyPunch_R_C::ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C.ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R");
		
		UAction_IronBear_BearfisT_HeavyPunch_R_C_ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronBear_BearfisT_HeavyPunch_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronBear_BearfisT_HeavyPunch_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C");
		return ptr;
	}

}


