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
	 * 		Name   -> Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.AN_MeleeHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_IronBear_Bearfist_HeavyPunch_L_C::AN_MeleeHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.AN_MeleeHit");
		
		UAction_IronBear_Bearfist_HeavyPunch_L_C_AN_MeleeHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_Bearfist_HeavyPunch_L_C::ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C.ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L");
		
		UAction_IronBear_Bearfist_HeavyPunch_L_C_ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronBear_Bearfist_HeavyPunch_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronBear_Bearfist_HeavyPunch_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C");
		return ptr;
	}

}


