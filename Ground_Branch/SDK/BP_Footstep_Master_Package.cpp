/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.SetPhysicCollisionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InSourceActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InSourceComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InContactPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InContactNormal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Footstep_Master_C::SetPhysicCollisionInfo(class AActor* InSourceActor, class UPrimitiveComponent* InSourceComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& InContactPosition, const struct FVector& InContactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.SetPhysicCollisionInfo");
		
		ABP_Footstep_Master_C_SetPhysicCollisionInfo_Params params {};
		params.InSourceActor = InSourceActor;
		params.InSourceComponent = InSourceComponent;
		params.OtherActor = OtherActor;
		params.OtherComponent = OtherComponent;
		params.InContactPosition = InContactPosition;
		params.InContactNormal = InContactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Footstep_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.ReceiveBeginPlay");
		
		ABP_Footstep_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnImpactParticleFX
	 * 		Flags  -> ()
	 */
	void ABP_Footstep_Master_C::SpawnImpactParticleFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnImpactParticleFX");
		
		ABP_Footstep_Master_C_SpawnImpactParticleFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnImpactSound
	 * 		Flags  -> ()
	 */
	void ABP_Footstep_Master_C::SpawnImpactSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnImpactSound");
		
		ABP_Footstep_Master_C_SpawnImpactSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnDecal
	 * 		Flags  -> ()
	 */
	void ABP_Footstep_Master_C::SpawnDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.SpawnDecal");
		
		ABP_Footstep_Master_C_SpawnDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.SetHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InHitResultSource                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  InHitResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Footstep_Master_C::SetHitResult(class UObject* InHitResultSource, const struct FHitResult& InHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.SetHitResult");
		
		ABP_Footstep_Master_C_SetHitResult_Params params {};
		params.InHitResultSource = InHitResultSource;
		params.InHitResult = InHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footstep_Master.BP_Footstep_Master_C.ExecuteUbergraph_BP_Footstep_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Footstep_Master_C::ExecuteUbergraph_BP_Footstep_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footstep_Master.BP_Footstep_Master_C.ExecuteUbergraph_BP_Footstep_Master");
		
		ABP_Footstep_Master_C_ExecuteUbergraph_BP_Footstep_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Footstep_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Footstep_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Footstep_Master.BP_Footstep_Master_C");
		return ptr;
	}

}


