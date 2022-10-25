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
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnRep_StuckTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::OnRep_StuckTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnRep_StuckTarget");
		
		AProj_ATL_TrackerMaster_Base_C_OnRep_StuckTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.StartAudioLoopOnActor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target_Actor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseEvent*                                 Wwise_Event                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_TrackerMaster_Base_C::StartAudioLoopOnActor(class AActor* Target_Actor, class UWwiseEvent* Wwise_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.StartAudioLoopOnActor");
		
		AProj_ATL_TrackerMaster_Base_C_StartAudioLoopOnActor_Params params {};
		params.Target_Actor = Target_Actor;
		params.Wwise_Event = Wwise_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetTag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::MultiTargetTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetTag");
		
		AProj_ATL_TrackerMaster_Base_C_MultiTargetTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.RemoveAllTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::RemoveAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.RemoveAllTargets");
		
		AProj_ATL_TrackerMaster_Base_C_RemoveAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.SingleTargetTag
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::SingleTargetTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.SingleTargetTag");
		
		AProj_ATL_TrackerMaster_Base_C_SingleTargetTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.UserConstructionScript");
		
		AProj_ATL_TrackerMaster_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveBeginPlay");
		
		AProj_ATL_TrackerMaster_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnExplode");
		
		AProj_ATL_TrackerMaster_Base_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveHit
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
	void AProj_ATL_TrackerMaster_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveHit");
		
		AProj_ATL_TrackerMaster_Base_C_ReceiveHit_Params params {};
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
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.AttachedActorDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::AttachedActorDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.AttachedActorDeath");
		
		AProj_ATL_TrackerMaster_Base_C_AttachedActorDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FuseTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_TrackerMaster_Base_C::FuseStart(float FuseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseStart");
		
		AProj_ATL_TrackerMaster_Base_C_FuseStart_Params params {};
		params.FuseTime = FuseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseTriggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::FuseTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseTriggered");
		
		AProj_ATL_TrackerMaster_Base_C_FuseTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.TargetStuck
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_TrackerMaster_Base_C::TargetStuck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.TargetStuck");
		
		AProj_ATL_TrackerMaster_Base_C_TargetStuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetActorDeath_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_TrackerMaster_Base_C::MultiTargetActorDeath_Event(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetActorDeath_Event");
		
		AProj_ATL_TrackerMaster_Base_C_MultiTargetActorDeath_Event_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ExecuteUbergraph_Proj_ATL_TrackerMaster_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_TrackerMaster_Base_C::ExecuteUbergraph_Proj_ATL_TrackerMaster_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ExecuteUbergraph_Proj_ATL_TrackerMaster_Base");
		
		AProj_ATL_TrackerMaster_Base_C_ExecuteUbergraph_Proj_ATL_TrackerMaster_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_ATL_TrackerMaster_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_ATL_TrackerMaster_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C");
		return ptr;
	}

}


