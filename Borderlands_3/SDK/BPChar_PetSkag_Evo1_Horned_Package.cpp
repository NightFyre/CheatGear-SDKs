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
	 * 		Name   -> Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetSkag_Evo1_Horned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.UserConstructionScript");
		
		ABPChar_PetSkag_Evo1_Horned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_PetSkag_Evo1_Horned_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ReceiveBeginPlay");
		
		ABPChar_PetSkag_Evo1_Horned_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetSkag_Evo1_Horned_C::ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned");
		
		ABPChar_PetSkag_Evo1_Horned_C_ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_PetSkag_Evo1_Horned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_PetSkag_Evo1_Horned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C");
		return ptr;
	}

}


