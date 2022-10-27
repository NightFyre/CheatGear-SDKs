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
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Source_Player                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               NewTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::TryFindNextValidTarget(class AOakCharacter* Source_Player, class AOakCharacter** NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_TryFindNextValidTarget_Params params {};
		params.Source_Player = Source_Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTarget != nullptr)
			*NewTarget = params.NewTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::StartFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_StartFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NoReload                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::StopFiring(bool NoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_StopFiring_Params params {};
		params.NoReload = NoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::FireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::IncrementStats(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_IncrementStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::TrySecondWindBadass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_TrySecondWindBadass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::SpawnLootBadass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_SpawnLootBadass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakDroneMovementMode                              NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::SetDroneMovementTypeWithTargets(EOakDroneMovementMode NewMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_SetDroneMovementTypeWithTargets_Params params {};
		params.NewMovementMode = NewMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::DoSpawnInPresentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_DoSpawnInPresentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceInstantSpawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::DoStartSpawnPresentation(bool ForceInstantSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_DoStartSpawnPresentation_Params params {};
		params.ForceInstantSpawn = ForceInstantSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::InitGhostBadass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_InitGhostBadass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceInstantSpawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::DoEndSpawnPresentation(bool ForceInstantSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_DoEndSpawnPresentation_Params params {};
		params.ForceInstantSpawn = ForceInstantSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::TargetOnDied_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::SkullTarget_OnDied(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_SkullTarget_OnDied_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::TargetOnDied_Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::BeginBadassChargeAndDie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_BeginBadassChargeAndDie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::BeginReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_BeginReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::CheckPerceivableByAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_CheckPerceivableByAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::ResetShooting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_ResetShooting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_Ghost_Drone_C::ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone");
		
		AProjectile_BloodyHarvest_Ghost_Drone_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_BloodyHarvest_Ghost_Drone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_BloodyHarvest_Ghost_Drone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C");
		return ptr;
	}

}


