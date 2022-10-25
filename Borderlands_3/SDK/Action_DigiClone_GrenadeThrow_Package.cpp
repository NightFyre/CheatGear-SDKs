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
	 * 		Name   -> Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.AnimNotify_ThrowProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_DigiClone_GrenadeThrow_C::AnimNotify_ThrowProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.AnimNotify_ThrowProjectile");
		
		UAction_DigiClone_GrenadeThrow_C_AnimNotify_ThrowProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.ExecuteUbergraph_Action_DigiClone_GrenadeThrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_DigiClone_GrenadeThrow_C::ExecuteUbergraph_Action_DigiClone_GrenadeThrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.ExecuteUbergraph_Action_DigiClone_GrenadeThrow");
		
		UAction_DigiClone_GrenadeThrow_C_ExecuteUbergraph_Action_DigiClone_GrenadeThrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_DigiClone_GrenadeThrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_DigiClone_GrenadeThrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C");
		return ptr;
	}

}


