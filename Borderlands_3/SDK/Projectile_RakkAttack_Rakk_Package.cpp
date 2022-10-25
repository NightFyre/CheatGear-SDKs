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
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetHitTarget(class AActor* SourceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget");
		
		AProjectile_RakkAttack_Rakk_C_SetHitTarget_Params params {};
		params.SourceActor = SourceActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetHomingAndLocationWithDelay(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay");
		
		AProjectile_RakkAttack_Rakk_C_SetHomingAndLocationWithDelay_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              SetRef                                                     (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AActor*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::ChooseTargetFromSet(TArray<class AActor*>* SetRef, class AActor** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet");
		
		AProjectile_RakkAttack_Rakk_C_ChooseTargetFromSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetRef != nullptr)
			*SetRef = params.SetRef;
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::FindNewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget");
		
		AProjectile_RakkAttack_Rakk_C_FindNewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::ReleaseCurrentHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget");
		
		AProjectile_RakkAttack_Rakk_C_ReleaseCurrentHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnRep_bReturningToOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner");
		
		AProjectile_RakkAttack_Rakk_C_OnRep_bReturningToOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::DoMod1Heal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal");
		
		AProjectile_RakkAttack_Rakk_C_DoMod1Heal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_RakkAttack_Rakk_C::HasHomingTarget(bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget");
		
		AProjectile_RakkAttack_Rakk_C_HasHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetupRakkElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement");
		
		AProjectile_RakkAttack_Rakk_C_SetupRakkElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             PassiveParticle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetupElementalMaterials(class UMaterialInstance* Material, class UParticleSystem* PassiveParticle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials");
		
		AProjectile_RakkAttack_Rakk_C_SetupElementalMaterials_Params params {};
		params.Material = Material;
		params.PassiveParticle = PassiveParticle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::DoPreDestroyCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup");
		
		AProjectile_RakkAttack_Rakk_C_DoPreDestroyCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetupMod1Transfusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion");
		
		AProjectile_RakkAttack_Rakk_C_SetupMod1Transfusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::InitAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio");
		
		AProjectile_RakkAttack_Rakk_C_InitAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetHomingAndLocation(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation");
		
		AProjectile_RakkAttack_Rakk_C_SetHomingAndLocation_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::DoRakkDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage");
		
		AProjectile_RakkAttack_Rakk_C_DoRakkDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript");
		
		AProjectile_RakkAttack_Rakk_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4");
		
		AProjectile_RakkAttack_Rakk_C_OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnEnd_A3A042B947729CE01D4C998DA75FCBF4(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4");
		
		AProjectile_RakkAttack_Rakk_C_OnEnd_A3A042B947729CE01D4C998DA75FCBF4_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnAnimEnd_D54427794086CD24870288B0EF46744B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B");
		
		AProjectile_RakkAttack_Rakk_C_OnAnimEnd_D54427794086CD24870288B0EF46744B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnEnd_D54427794086CD24870288B0EF46744B(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B");
		
		AProjectile_RakkAttack_Rakk_C_OnEnd_D54427794086CD24870288B0EF46744B_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay");
		
		AProjectile_RakkAttack_Rakk_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject");
		
		AProjectile_RakkAttack_Rakk_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld");
		
		AProjectile_RakkAttack_Rakk_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode");
		
		AProjectile_RakkAttack_Rakk_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1");
		
		AProjectile_RakkAttack_Rakk_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WantsNiceCleanup                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_RakkAttack_Rakk_C::DoRakkDestroyCleanup(bool WantsNiceCleanup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup");
		
		AProjectile_RakkAttack_Rakk_C_DoRakkDestroyCleanup_Params params {};
		params.WantsNiceCleanup = WantsNiceCleanup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetupRuntimeMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods");
		
		AProjectile_RakkAttack_Rakk_C_SetupRuntimeMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::DoRakkDigistructIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn");
		
		AProjectile_RakkAttack_Rakk_C_DoRakkDigistructIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewHomingTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetNewHomingTarget(class AActor* NewHomingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget");
		
		AProjectile_RakkAttack_Rakk_C_SetNewHomingTarget_Params params {};
		params.NewHomingTarget = NewHomingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::OnDeath_ProjectileHomingTarget(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget");
		
		AProjectile_RakkAttack_Rakk_C_OnDeath_ProjectileHomingTarget_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::StartNewTargetSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch");
		
		AProjectile_RakkAttack_Rakk_C_StartNewTargetSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_C::ReturnToOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner");
		
		AProjectile_RakkAttack_Rakk_C_ReturnToOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NewHomingTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::SetNewHomingTargetWithDelay(float Delay, class AActor* NewHomingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay");
		
		AProjectile_RakkAttack_Rakk_C_SetNewHomingTargetWithDelay_Params params {};
		params.Delay = Delay;
		params.NewHomingTarget = NewHomingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk");
		
		AProjectile_RakkAttack_Rakk_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_Params params {};
		params.TouchingActor = TouchingActor;
		params.bIsPlayer = bIsPlayer;
		params.ComponentTouched = ComponentTouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_C::ExecuteUbergraph_Projectile_RakkAttack_Rakk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk");
		
		AProjectile_RakkAttack_Rakk_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_RakkAttack_Rakk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_RakkAttack_Rakk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C");
		return ptr;
	}

}


