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
	 * 		Name   -> Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GrenadeThrow_Crouched_Armed_NotFiring_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.OnBegin");
		
		UAction_GrenadeThrow_Crouched_Armed_NotFiring_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GrenadeThrow_Crouched_Armed_NotFiring_C::ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring");
		
		UAction_GrenadeThrow_Crouched_Armed_NotFiring_C_ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_GrenadeThrow_Crouched_Armed_NotFiring_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GrenadeThrow_Crouched_Armed_NotFiring_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C");
		return ptr;
	}

}


