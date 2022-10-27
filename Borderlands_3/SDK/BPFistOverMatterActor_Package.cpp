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
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::OnRep_GroundLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation");
		
		ABPFistOverMatterActor_C_OnRep_GroundLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::PerformFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback");
		
		ABPFistOverMatterActor_C_PerformFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SlamLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPFistOverMatterActor_C::DoSlamDamage(const struct FVector& SlamLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage");
		
		ABPFistOverMatterActor_C_DoSlamDamage_Params params {};
		params.SlamLocation = SlamLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPFistOverMatterActor_C::GetfindGroundVectorLocations(struct FVector* Start, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations");
		
		ABPFistOverMatterActor_C_GetfindGroundVectorLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float ABPFistOverMatterActor_C::GetMaxTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime");
		
		ABPFistOverMatterActor_C_GetMaxTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript");
		
		ABPFistOverMatterActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPFistOverMatterActor_C::GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9");
		
		ABPFistOverMatterActor_C_GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPFistOverMatterActor_C::GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9");
		
		ABPFistOverMatterActor_C_GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::SpawnSlamEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter");
		
		ABPFistOverMatterActor_C_SpawnSlamEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EmitterTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPFistOverMatterActor_C::WebSlamParticleSystemEvent(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent");
		
		ABPFistOverMatterActor_C_WebSlamParticleSystemEvent_Params params {};
		params.EventName = EventName;
		params.EmitterTime = EmitterTime;
		params.Location = Location;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::StartRightHandTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer");
		
		ABPFistOverMatterActor_C_StartRightHandTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::StartLeftHandTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer");
		
		ABPFistOverMatterActor_C_StartLeftHandTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay");
		
		ABPFistOverMatterActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::FindGroundLocationAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync");
		
		ABPFistOverMatterActor_C_FindGroundLocationAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::BeginWebSlam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam");
		
		ABPFistOverMatterActor_C_BeginWebSlam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::EndWebSlam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam");
		
		ABPFistOverMatterActor_C_EndWebSlam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::DoWebSlamLeftDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage");
		
		ABPFistOverMatterActor_C_DoWebSlamLeftDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPFistOverMatterActor_C::DoWebSlamRightDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage");
		
		ABPFistOverMatterActor_C_DoWebSlamRightDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPFistOverMatterActor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay");
		
		ABPFistOverMatterActor_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPFistOverMatterActor_C::ExecuteUbergraph_BPFistOverMatterActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor");
		
		ABPFistOverMatterActor_C_ExecuteUbergraph_BPFistOverMatterActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPFistOverMatterActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPFistOverMatterActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFistOverMatterActor.BPFistOverMatterActor_C");
		return ptr;
	}

}


