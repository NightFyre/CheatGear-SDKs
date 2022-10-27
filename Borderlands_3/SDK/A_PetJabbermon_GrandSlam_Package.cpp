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
	 * 		Name   -> Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_GrandSlam_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin");
		
		UA_PetJabbermon_GrandSlam_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_GrandSlam_C::Notify_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee");
		
		UA_PetJabbermon_GrandSlam_C_Notify_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_GrandSlam_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd");
		
		UA_PetJabbermon_GrandSlam_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_GrandSlam_C::Notify_BatVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis");
		
		UA_PetJabbermon_GrandSlam_C_Notify_BatVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_GrandSlam_C::ExecuteUbergraph_A_PetJabbermon_GrandSlam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam");
		
		UA_PetJabbermon_GrandSlam_C_ExecuteUbergraph_A_PetJabbermon_GrandSlam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetJabbermon_GrandSlam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetJabbermon_GrandSlam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C");
		return ptr;
	}

}


