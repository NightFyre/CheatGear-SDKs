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
	 * 		Name   -> Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetSpiderant_Evo2_King_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.UserConstructionScript");
		
		ABPChar_PetSpiderant_Evo2_King_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_PetSpiderant_Evo2_King_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ReceiveBeginPlay");
		
		ABPChar_PetSpiderant_Evo2_King_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetSpiderant_Evo2_King_C::ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King");
		
		ABPChar_PetSpiderant_Evo2_King_C_ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_PetSpiderant_Evo2_King_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_PetSpiderant_Evo2_King_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C");
		return ptr;
	}

}


