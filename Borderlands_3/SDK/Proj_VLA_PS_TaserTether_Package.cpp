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
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::TriggerElementalPuddles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles");
		
		AProj_VLA_PS_TaserTether_C_TriggerElementalPuddles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      BeamTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_VLA_PS_TaserTether_C::AttachBeam(class AActor* BeamTarget, class UClass* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam");
		
		AProj_VLA_PS_TaserTether_C_AttachBeam_Params params {};
		params.BeamTarget = BeamTarget;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::StopMovementEnableTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger");
		
		AProj_VLA_PS_TaserTether_C_StopMovementEnableTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript");
		
		AProj_VLA_PS_TaserTether_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_StartFuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse");
		
		AProj_VLA_PS_TaserTether_C_BPI_StartFuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode");
		
		AProj_VLA_PS_TaserTether_C_BPI_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PhysicsOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_SetSimulatePhysics(bool PhysicsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics");
		
		AProj_VLA_PS_TaserTether_C_BPI_SetSimulatePhysics_Params params {};
		params.PhysicsOn = PhysicsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ThrowVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotatorForSpin                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              FuseSpeedScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AdditiveVector                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow");
		
		AProj_VLA_PS_TaserTether_C_BPI_ImpulseThrow_Params params {};
		params.ThrowVector = ThrowVector;
		params.Force = Force;
		params.RotatorForSpin = RotatorForSpin;
		params.FuseSpeedScale = FuseSpeedScale;
		params.AdditiveVector = AdditiveVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_ResetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth");
		
		AProj_VLA_PS_TaserTether_C_BPI_ResetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_VLA_PS_TaserTether_C::BPI_SetNavPainterEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled");
		
		AProj_VLA_PS_TaserTether_C_BPI_SetNavPainterEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit
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
	void AProj_VLA_PS_TaserTether_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit");
		
		AProj_VLA_PS_TaserTether_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay");
		
		AProj_VLA_PS_TaserTether_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode");
		
		AProj_VLA_PS_TaserTether_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");
		
		AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params params {};
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
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LeavingActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* LeavingActor, bool bIsPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");
		
		AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params params {};
		params.LeavingActor = LeavingActor;
		params.bIsPlayer = bIsPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDetection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_VLA_PS_TaserTether_C::Destructible_Fractured(const struct FVector& HitPoint, const struct FVector& HitDetection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured");
		
		AProj_VLA_PS_TaserTether_C_Destructible_Fractured_Params params {};
		params.HitPoint = HitPoint;
		params.HitDetection = HitDetection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_VLA_PS_TaserTether_C::BarrelExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode");
		
		AProj_VLA_PS_TaserTether_C_BarrelExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_VLA_PS_TaserTether_C::ExecuteUbergraph_Proj_VLA_PS_TaserTether(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether");
		
		AProj_VLA_PS_TaserTether_C_ExecuteUbergraph_Proj_VLA_PS_TaserTether_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_VLA_PS_TaserTether_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_VLA_PS_TaserTether_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C");
		return ptr;
	}

}


