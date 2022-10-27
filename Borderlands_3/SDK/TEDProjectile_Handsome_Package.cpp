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
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::SetExplosionRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius");
		
		ATEDProjectile_Handsome_C_SetExplosionRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATEDProjectile_Handsome_C::AIProjectile_CanBeStolen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen");
		
		ATEDProjectile_Handsome_C_AIProjectile_CanBeStolen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::AIProjectileArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm");
		
		ATEDProjectile_Handsome_C_AIProjectileArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::AIProjectileDisarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm");
		
		ATEDProjectile_Handsome_C_AIProjectileDisarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              DamagePerShot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BulletsPerShot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ATEDProjectile_Handsome_C::CalculateExplosionDamage(float DamagePerShot, int32_t BulletsPerShot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage");
		
		ATEDProjectile_Handsome_C_CalculateExplosionDamage_Params params {};
		params.DamagePerShot = DamagePerShot;
		params.BulletsPerShot = BulletsPerShot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ThrowType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Handsome_C::RemoveAmmo(int32_t* ThrowType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo");
		
		ATEDProjectile_Handsome_C_RemoveAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThrowType != nullptr)
			*ThrowType = params.ThrowType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ATEDProjectile_Handsome_C::SpawnRotationandOffset(const struct FVector& Location, const struct FVector& HitNormal, const struct FVector& Normal, struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset");
		
		ATEDProjectile_Handsome_C_SpawnRotationandOffset_Params params {};
		params.Location = Location;
		params.HitNormal = HitNormal;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::InitCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo");
		
		ATEDProjectile_Handsome_C_InitCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::StabilizerFXandAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio");
		
		ATEDProjectile_Handsome_C_StabilizerFXandAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::StabilizerBoostBouncy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy");
		
		ATEDProjectile_Handsome_C_StabilizerBoostBouncy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::StabilizerBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost");
		
		ATEDProjectile_Handsome_C_StabilizerBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::InitHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming");
		
		ATEDProjectile_Handsome_C_InitHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ThrowStyle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Handsome_C::InitRotation(int32_t ThrowStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation");
		
		ATEDProjectile_Handsome_C_InitRotation_Params params {};
		params.ThrowStyle = ThrowStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::InitStabilizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer");
		
		ATEDProjectile_Handsome_C_InitStabilizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript");
		
		ATEDProjectile_Handsome_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BehaviorClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Handsome_C::OnBehaviorInitialized(class UClass* BehaviorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized");
		
		ATEDProjectile_Handsome_C_OnBehaviorInitialized_Params params {};
		params.BehaviorClass = BehaviorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::HomingThrust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust");
		
		ATEDProjectile_Handsome_C_HomingThrust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Handsome_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base");
		
		ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::AIProjectile_Arm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm");
		
		ATEDProjectile_Handsome_C_AIProjectile_Arm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay");
		
		ATEDProjectile_Handsome_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::EnableDrunk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk");
		
		ATEDProjectile_Handsome_C_EnableDrunk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::AIProjectile_Disarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm");
		
		ATEDProjectile_Handsome_C_AIProjectile_Disarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Handsome_C::FuseExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired");
		
		ATEDProjectile_Handsome_C_FuseExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ATEDProjectile_Handsome_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld");
		
		ATEDProjectile_Handsome_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ATEDProjectile_Handsome_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome");
		
		ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Handsome_C::ExecuteUbergraph_TEDProjectile_Handsome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome");
		
		ATEDProjectile_Handsome_C_ExecuteUbergraph_TEDProjectile_Handsome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATEDProjectile_Handsome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATEDProjectile_Handsome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Handsome.TEDProjectile_Handsome_C");
		return ptr;
	}

}


