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
	 * 		Name   -> Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_RangedAttack_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.OnBegin");
		
		UA_PetSpiderant_RangedAttack_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.Notify_Throw
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_RangedAttack_C::Notify_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.Notify_Throw");
		
		UA_PetSpiderant_RangedAttack_C_Notify_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.ExecuteUbergraph_A_PetSpiderant_RangedAttack
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_RangedAttack_C::ExecuteUbergraph_A_PetSpiderant_RangedAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.ExecuteUbergraph_A_PetSpiderant_RangedAttack");
		
		UA_PetSpiderant_RangedAttack_C_ExecuteUbergraph_A_PetSpiderant_RangedAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSpiderant_RangedAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSpiderant_RangedAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C");
		return ptr;
	}

}


