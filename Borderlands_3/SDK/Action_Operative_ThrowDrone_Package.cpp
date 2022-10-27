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
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_ThrowDrone_C::AnimNotify_SpawnDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone");
		
		UAction_Operative_ThrowDrone_C_AnimNotify_SpawnDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_ThrowDrone_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin");
		
		UAction_Operative_ThrowDrone_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_ThrowDrone_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd");
		
		UAction_Operative_ThrowDrone_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_ThrowDrone_C::AN_PerformDroneCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake");
		
		UAction_Operative_ThrowDrone_C_AN_PerformDroneCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_ThrowDrone_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon");
		
		UAction_Operative_ThrowDrone_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_ThrowDrone_C::ExecuteUbergraph_Action_Operative_ThrowDrone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone");
		
		UAction_Operative_ThrowDrone_C_ExecuteUbergraph_Action_Operative_ThrowDrone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Operative_ThrowDrone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Operative_ThrowDrone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C");
		return ptr;
	}

}


