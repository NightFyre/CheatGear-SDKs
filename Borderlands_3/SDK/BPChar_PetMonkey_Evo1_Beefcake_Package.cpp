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
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.UserConstructionScript");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.ReceiveBeginPlay");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_ChangeMeleeVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewWeapVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_ChangeMeleeVis");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_PetJabbermon_ChangeMeleeVis_Params params {};
		params.NewWeapVisibility = NewWeapVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_Poop_Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::PetJabbermon_Poop_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_Poop_Show");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_PetJabbermon_Poop_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_Poop_Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::PetJabbermon_Poop_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.PetJabbermon_Poop_Hide");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_PetJabbermon_Poop_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_Evo1_Beefcake_C::ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C.ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake");
		
		ABPChar_PetMonkey_Evo1_Beefcake_C_ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_PetMonkey_Evo1_Beefcake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_PetMonkey_Evo1_Beefcake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C");
		return ptr;
	}

}


