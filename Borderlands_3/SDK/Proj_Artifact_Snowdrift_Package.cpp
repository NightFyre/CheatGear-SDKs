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
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Artifact_Snowdrift_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript");
		
		AProj_Artifact_Snowdrift_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Artifact_Snowdrift_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay");
		
		AProj_Artifact_Snowdrift_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Artifact_Snowdrift_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject");
		
		AProj_Artifact_Snowdrift_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Artifact_Snowdrift_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode");
		
		AProj_Artifact_Snowdrift_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall");
		
		AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift");
		
		AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift");
		
		AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Artifact_Snowdrift_C::ExecuteUbergraph_Proj_Artifact_Snowdrift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift");
		
		AProj_Artifact_Snowdrift_C_ExecuteUbergraph_Proj_Artifact_Snowdrift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Artifact_Snowdrift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Artifact_Snowdrift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C");
		return ptr;
	}

}


