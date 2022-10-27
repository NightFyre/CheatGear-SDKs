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
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDisarm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Weapon_BaseProjectile_C::ProjectileDisarm(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDisarm");
		
		AProj_Weapon_BaseProjectile_C_ProjectileDisarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileArm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Weapon_BaseProjectile_C::ProjectileArm(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileArm");
		
		AProj_Weapon_BaseProjectile_C_ProjectileArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDetonate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Weapon_BaseProjectile_C::ProjectileDetonate(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDetonate");
		
		AProj_Weapon_BaseProjectile_C_ProjectileDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Attached                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StuckToActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Weapon_BaseProjectile_C::StickToTarget(const struct FHitResult& Hit, bool* Attached, bool* StuckToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToTarget");
		
		AProj_Weapon_BaseProjectile_C_StickToTarget_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attached != nullptr)
			*Attached = params.Attached;
		if (StuckToActor != nullptr)
			*StuckToActor = params.StuckToActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.AddElementalTrail
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Collection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_BaseProjectile_C::AddElementalTrail(class UClass* Collection, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.AddElementalTrail");
		
		AProj_Weapon_BaseProjectile_C_AddElementalTrail_Params params {};
		params.Collection = Collection;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.CallExplode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::CallExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.CallExplode");
		
		AProj_Weapon_BaseProjectile_C_CallExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToWorld
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Weapon_BaseProjectile_C::StickToWorld(const struct FHitResult& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToWorld");
		
		AProj_Weapon_BaseProjectile_C_StickToWorld_Params params {};
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               AttachedToActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Weapon_BaseProjectile_C::StickToActor(const struct FHitResult& HitResult, bool* AttachedToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToActor");
		
		AProj_Weapon_BaseProjectile_C_StickToActor_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachedToActor != nullptr)
			*AttachedToActor = params.AttachedToActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.WeaponProjectileExplode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::WeaponProjectileExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.WeaponProjectileExplode");
		
		AProj_Weapon_BaseProjectile_C_WeaponProjectileExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.UserConstructionScript");
		
		AProj_Weapon_BaseProjectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Weapon_BaseProjectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveHit");
		
		AProj_Weapon_BaseProjectile_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnExplode");
		
		AProj_Weapon_BaseProjectile_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveBeginPlay");
		
		AProj_Weapon_BaseProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Destructible_Fractured
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDetection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_BaseProjectile_C::Destructible_Fractured(const struct FVector& HitPoint, const struct FVector& HitDetection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Destructible_Fractured");
		
		AProj_Weapon_BaseProjectile_C_Destructible_Fractured_Params params {};
		params.HitPoint = HitPoint;
		params.HitDetection = HitDetection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Actor_Died
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::Actor_Died()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Actor_Died");
		
		AProj_Weapon_BaseProjectile_C_Actor_Died_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Weapon_BaseProjectile_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnHitWorld");
		
		AProj_Weapon_BaseProjectile_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Fallback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_BaseProjectile_C::Fallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Fallback");
		
		AProj_Weapon_BaseProjectile_C_Fallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ExecuteUbergraph_Proj_Weapon_BaseProjectile
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_BaseProjectile_C::ExecuteUbergraph_Proj_Weapon_BaseProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ExecuteUbergraph_Proj_Weapon_BaseProjectile");
		
		AProj_Weapon_BaseProjectile_C_ExecuteUbergraph_Proj_Weapon_BaseProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Weapon_BaseProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Weapon_BaseProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C");
		return ptr;
	}

}


