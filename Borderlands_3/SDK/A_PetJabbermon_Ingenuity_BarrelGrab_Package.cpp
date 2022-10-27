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
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Attach
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelGrab_C::Notify_Barrel_Attach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Attach");
		
		UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Attach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelGrab_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnEnd");
		
		UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Align
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelGrab_C::Notify_Barrel_Align()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Align");
		
		UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Align_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelGrab_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnServerBegin");
		
		UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelGrab_C::ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab");
		
		UA_PetJabbermon_Ingenuity_BarrelGrab_C_ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetJabbermon_Ingenuity_BarrelGrab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetJabbermon_Ingenuity_BarrelGrab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C");
		return ptr;
	}

}


