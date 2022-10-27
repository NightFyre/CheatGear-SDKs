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
	 * 		Name   -> Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.Notify_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARandom_PetSpiderant_MeleeMix_C::Notify_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.Notify_Melee");
		
		UARandom_PetSpiderant_MeleeMix_C_Notify_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARandom_PetSpiderant_MeleeMix_C::ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix");
		
		UARandom_PetSpiderant_MeleeMix_C_ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARandom_PetSpiderant_MeleeMix_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARandom_PetSpiderant_MeleeMix_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C");
		return ptr;
	}

}


