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
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript");
		
		AProj_MAL_SR_Storm_Orbs_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay");
		
		AProj_MAL_SR_Storm_Orbs_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs");
		
		AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params params {};
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
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed");
		
		AProj_MAL_SR_Storm_Orbs_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::WeaponProjectileExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode");
		
		AProj_MAL_SR_Storm_Orbs_C_WeaponProjectileExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LeavingActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* LeavingActor, bool bIsPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs");
		
		AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params params {};
		params.LeavingActor = LeavingActor;
		params.bIsPlayer = bIsPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit
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
	void AProj_MAL_SR_Storm_Orbs_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit");
		
		AProj_MAL_SR_Storm_Orbs_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::Bobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble");
		
		AProj_MAL_SR_Storm_Orbs_C_Bobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_MAL_SR_Storm_Orbs_C::ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs");
		
		AProj_MAL_SR_Storm_Orbs_C_ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_MAL_SR_Storm_Orbs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_MAL_SR_Storm_Orbs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C");
		return ptr;
	}

}


