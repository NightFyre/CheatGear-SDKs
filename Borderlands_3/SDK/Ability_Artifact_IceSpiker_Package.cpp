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
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_IceSpiker_C::GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007(class AActor* Actor, int32_t InstanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007");
		
		UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007_Params params {};
		params.Actor = Actor;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_IceSpiker_C::GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E(class AActor* Actor, int32_t InstanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E");
		
		UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E_Params params {};
		params.Actor = Actor;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_IceSpiker_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnActivated");
		
		UAbility_Artifact_IceSpiker_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_IceSpiker_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnDeactivated");
		
		UAbility_Artifact_IceSpiker_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GroundSlam_End
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGroundSlamEndedDetails                     Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_IceSpiker_C::GroundSlam_End(const struct FGroundSlamEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GroundSlam_End");
		
		UAbility_Artifact_IceSpiker_C_GroundSlam_End_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.ExecuteUbergraph_Ability_Artifact_IceSpiker
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_IceSpiker_C::ExecuteUbergraph_Ability_Artifact_IceSpiker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.ExecuteUbergraph_Ability_Artifact_IceSpiker");
		
		UAbility_Artifact_IceSpiker_C_ExecuteUbergraph_Ability_Artifact_IceSpiker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_IceSpiker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_IceSpiker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C");
		return ptr;
	}

}


