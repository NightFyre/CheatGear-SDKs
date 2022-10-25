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
	 * 		Name   -> Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_ClawRtoL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARandom_PetSkag_Melee_Run_C::Notify_ClawRtoL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_ClawRtoL");
		
		UARandom_PetSkag_Melee_Run_C_Notify_ClawRtoL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_Bite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARandom_PetSkag_Melee_Run_C::Notify_Bite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_Bite");
		
		UARandom_PetSkag_Melee_Run_C_Notify_Bite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_MeleeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARandom_PetSkag_Melee_Run_C::Notify_MeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_MeleeAttack");
		
		UARandom_PetSkag_Melee_Run_C_Notify_MeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.ExecuteUbergraph_ARandom_PetSkag_Melee_Run
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARandom_PetSkag_Melee_Run_C::ExecuteUbergraph_ARandom_PetSkag_Melee_Run(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.ExecuteUbergraph_ARandom_PetSkag_Melee_Run");
		
		UARandom_PetSkag_Melee_Run_C_ExecuteUbergraph_ARandom_PetSkag_Melee_Run_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARandom_PetSkag_Melee_Run_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARandom_PetSkag_Melee_Run_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C");
		return ptr;
	}

}


