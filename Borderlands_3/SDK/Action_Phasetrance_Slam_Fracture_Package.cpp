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
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::AN_CreateCastProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile");
		
		UAction_Phasetrance_Slam_Fracture_C_AN_CreateCastProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd");
		
		UAction_Phasetrance_Slam_Fracture_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon");
		
		UAction_Phasetrance_Slam_Fracture_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureRumble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble");
		
		UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureRumble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureCS_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start");
		
		UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureCS_Quake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake");
		
		UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Quake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureFB_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server");
		
		UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureFB_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Fracture_C::ExecuteUbergraph_Action_Phasetrance_Slam_Fracture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture");
		
		UAction_Phasetrance_Slam_Fracture_C_ExecuteUbergraph_Action_Phasetrance_Slam_Fracture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_Slam_Fracture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_Slam_Fracture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C");
		return ptr;
	}

}


