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
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_RocketLauncher_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin");
		
		UA_PetJabbermon_RocketLauncher_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_RocketLauncher_C::SpawnLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher");
		
		UA_PetJabbermon_RocketLauncher_C_SpawnLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_RocketLauncher_C::FireLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher");
		
		UA_PetJabbermon_RocketLauncher_C_FireLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_RocketLauncher_C::StartLauncherDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn");
		
		UA_PetJabbermon_RocketLauncher_C_StartLauncherDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_RocketLauncher_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd");
		
		UA_PetJabbermon_RocketLauncher_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_RocketLauncher_C::ExecuteUbergraph_A_PetJabbermon_RocketLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher");
		
		UA_PetJabbermon_RocketLauncher_C_ExecuteUbergraph_A_PetJabbermon_RocketLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetJabbermon_RocketLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetJabbermon_RocketLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C");
		return ptr;
	}

}


