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
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::TryToAllure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_TryToAllure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::HandleWorldHit(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_HandleWorldHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::DoDamageToWorld(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToWorld_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UPrimitiveComponent* AProjectile_Siren_Phasecast_Revised_Base_C::GetOverlapComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_GetOverlapComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::GetTargetedHitDirectionForDamage(class AActor* Enemy, struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_GetTargetedHitDirectionForDamage_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::CalculateDamage(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_CalculateDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::DoDamageToEnemy(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToEnemy_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::HandleEnemyHit(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_HandleEnemyHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImpactData*                                 res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::GetImpactEffect(class UImpactData** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_GetImpactEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  InHitInfo                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::PlayImpactEffect(struct FHitResult* InHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_PlayImpactEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHitInfo != nullptr)
			*InHitInfo = params.InHitInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::ConfigureSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_ConfigureSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::OnOverlappedEnemy(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedEnemy_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::OnOverlappedNeutral(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedNeutral_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Base_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base");
		
		AProjectile_Siren_Phasecast_Revised_Base_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Siren_Phasecast_Revised_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Siren_Phasecast_Revised_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C");
		return ptr;
	}

}


