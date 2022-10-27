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
	 * 		Name   -> Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_Bite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_PetSkag_MeleeMix_C::Notify_Bite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_Bite");
		
		UARand_PetSkag_MeleeMix_C_Notify_Bite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawRtoL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_PetSkag_MeleeMix_C::Notify_ClawRtoL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawRtoL");
		
		UARand_PetSkag_MeleeMix_C_Notify_ClawRtoL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawLtoR
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_PetSkag_MeleeMix_C::Notify_ClawLtoR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawLtoR");
		
		UARand_PetSkag_MeleeMix_C_Notify_ClawLtoR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_MeleeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_PetSkag_MeleeMix_C::Notify_MeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_MeleeAttack");
		
		UARand_PetSkag_MeleeMix_C_Notify_MeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.ExecuteUbergraph_ARand_PetSkag_MeleeMix
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARand_PetSkag_MeleeMix_C::ExecuteUbergraph_ARand_PetSkag_MeleeMix(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.ExecuteUbergraph_ARand_PetSkag_MeleeMix");
		
		UARand_PetSkag_MeleeMix_C_ExecuteUbergraph_ARand_PetSkag_MeleeMix_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARand_PetSkag_MeleeMix_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARand_PetSkag_MeleeMix_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C");
		return ptr;
	}

}


