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
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_TOR_SG_Boring_Child_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.UserConstructionScript");
		
		AProj_TOR_SG_Boring_Child_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_TOR_SG_Boring_Child_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.OnExplode");
		
		AProj_TOR_SG_Boring_Child_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_TOR_SG_Boring_Child_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_TOR_SG_Boring_Child_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_TOR_SG_Boring_Child_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_TOR_SG_Boring_Child_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_TOR_SG_Boring_Child_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.OnHitDamagableObject");
		
		AProj_TOR_SG_Boring_Child_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_5_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProj_TOR_SG_Boring_Child_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_5_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_5_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_5_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_6_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProj_TOR_SG_Boring_Child_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_6_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_6_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_6_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_TOR_SG_Boring_Child_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.ReceiveBeginPlay");
		
		AProj_TOR_SG_Boring_Child_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.ExecuteUbergraph_Proj_TOR_SG_Boring_Child
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_TOR_SG_Boring_Child_C::ExecuteUbergraph_Proj_TOR_SG_Boring_Child(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C.ExecuteUbergraph_Proj_TOR_SG_Boring_Child");
		
		AProj_TOR_SG_Boring_Child_C_ExecuteUbergraph_Proj_TOR_SG_Boring_Child_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_TOR_SG_Boring_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_TOR_SG_Boring_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C");
		return ptr;
	}

}


