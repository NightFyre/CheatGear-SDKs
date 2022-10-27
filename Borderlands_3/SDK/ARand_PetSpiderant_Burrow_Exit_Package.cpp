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
	 * 		Name   -> Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.Notify_BurrowExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_PetSpiderant_Burrow_Exit_C::Notify_BurrowExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.Notify_BurrowExit");
		
		UARand_PetSpiderant_Burrow_Exit_C_Notify_BurrowExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARand_PetSpiderant_Burrow_Exit_C::ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit");
		
		UARand_PetSpiderant_Burrow_Exit_C_ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARand_PetSpiderant_Burrow_Exit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARand_PetSpiderant_Burrow_Exit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C");
		return ptr;
	}

}


