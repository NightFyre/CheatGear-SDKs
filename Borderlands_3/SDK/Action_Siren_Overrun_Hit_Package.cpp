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
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Siren_Overrun_Hit_C::AN_BlitzHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit");
		
		UAction_Siren_Overrun_Hit_C_AN_BlitzHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Hit_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd");
		
		UAction_Siren_Overrun_Hit_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Hit_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon");
		
		UAction_Siren_Overrun_Hit_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Hit_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin");
		
		UAction_Siren_Overrun_Hit_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Siren_Overrun_Hit_C::AN_PerformBlitzFeedback_Hit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit");
		
		UAction_Siren_Overrun_Hit_C_AN_PerformBlitzFeedback_Hit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Hit_C::ExecuteUbergraph_Action_Siren_Overrun_Hit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit");
		
		UAction_Siren_Overrun_Hit_C_ExecuteUbergraph_Action_Siren_Overrun_Hit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Siren_Overrun_Hit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Siren_Overrun_Hit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C");
		return ptr;
	}

}


