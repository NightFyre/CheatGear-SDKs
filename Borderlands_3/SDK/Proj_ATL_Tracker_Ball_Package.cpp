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
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AOE_FindTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::AOE_FindTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AOE_FindTarget");
		
		AProj_ATL_Tracker_Ball_C_AOE_FindTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.UserConstructionScript");
		
		AProj_ATL_Tracker_Ball_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnExplode");
		
		AProj_ATL_Tracker_Ball_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveBeginPlay");
		
		AProj_ATL_Tracker_Ball_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_ATL_Tracker_Ball_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitEnemy");
		
		AProj_ATL_Tracker_Ball_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_ATL_Tracker_Ball_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitWorld");
		
		AProj_ATL_Tracker_Ball_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.FuseTriggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::FuseTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.FuseTriggered");
		
		AProj_ATL_Tracker_Ball_C_FuseTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveHit
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
	void AProj_ATL_Tracker_Ball_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveHit");
		
		AProj_ATL_Tracker_Ball_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_Tracker_Ball_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball");
		
		AProj_ATL_Tracker_Ball_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params params {};
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
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AttachedActorDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Ball_C::AttachedActorDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AttachedActorDeath");
		
		AProj_ATL_Tracker_Ball_C_AttachedActorDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_Tracker_Ball_C::ExecuteUbergraph_Proj_ATL_Tracker_Ball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball");
		
		AProj_ATL_Tracker_Ball_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_ATL_Tracker_Ball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_ATL_Tracker_Ball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C");
		return ptr;
	}

}


