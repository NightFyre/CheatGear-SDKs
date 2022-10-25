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
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.DistanceCHeck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::DistanceCHeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.DistanceCHeck");
		
		ADroneProj_TED_Earthbound_C_DistanceCHeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.NoFriends
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::NoFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.NoFriends");
		
		ADroneProj_TED_Earthbound_C_NoFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.StopFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::StopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.StopFire");
		
		ADroneProj_TED_Earthbound_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.FireWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::FireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.FireWeapon");
		
		ADroneProj_TED_Earthbound_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.UserConstructionScript");
		
		ADroneProj_TED_Earthbound_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ReceiveBeginPlay");
		
		ADroneProj_TED_Earthbound_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.PutDownNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Earthbound_C::PutDownNotify(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.PutDownNotify");
		
		ADroneProj_TED_Earthbound_C_PutDownNotify_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnBeginExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::OnBeginExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnBeginExplode");
		
		ADroneProj_TED_Earthbound_C_OnBeginExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AOakDroneProjectile*                         Drone                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Earthbound_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon");
		
		ADroneProj_TED_Earthbound_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params {};
		params.Drone = Drone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADroneProj_TED_Earthbound_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnHitEnemy");
		
		ADroneProj_TED_Earthbound_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.RebindMoveTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Earthbound_C::RebindMoveTarget(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.RebindMoveTarget");
		
		ADroneProj_TED_Earthbound_C_RebindMoveTarget_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.CheckForTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_Earthbound_C::CheckForTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.CheckForTargets");
		
		ADroneProj_TED_Earthbound_C_CheckForTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ExecuteUbergraph_DroneProj_TED_Earthbound
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_Earthbound_C::ExecuteUbergraph_DroneProj_TED_Earthbound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ExecuteUbergraph_DroneProj_TED_Earthbound");
		
		ADroneProj_TED_Earthbound_C_ExecuteUbergraph_DroneProj_TED_Earthbound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroneProj_TED_Earthbound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroneProj_TED_Earthbound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C");
		return ptr;
	}

}


