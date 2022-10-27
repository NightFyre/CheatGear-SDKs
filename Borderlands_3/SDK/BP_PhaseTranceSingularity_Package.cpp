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
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class AActor*>                              res                                                        (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_PhaseTranceSingularity_C::GetIgnoredActors(TArray<class AActor*>* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors");
		
		ABP_PhaseTranceSingularity_C_GetIgnoredActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhaseTranceSingularity_C::GetSingularityDuration(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration");
		
		ABP_PhaseTranceSingularity_C_GetSingularityDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript");
		
		ABP_PhaseTranceSingularity_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay");
		
		ABP_PhaseTranceSingularity_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_C::ConfigureSingularity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity");
		
		ABP_PhaseTranceSingularity_C_ConfigureSingularity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhaseTranceSingularity_C::OnShutdownRequested(bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested");
		
		ABP_PhaseTranceSingularity_C_OnShutdownRequested_Params params {};
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_C::CleanShutdownMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast");
		
		ABP_PhaseTranceSingularity_C_CleanShutdownMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_C::ReleaseParticleSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem");
		
		ABP_PhaseTranceSingularity_C_ReleaseParticleSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhaseTranceSingularity_C::ExecuteUbergraph_BP_PhaseTranceSingularity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity");
		
		ABP_PhaseTranceSingularity_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhaseTranceSingularity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhaseTranceSingularity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C");
		return ptr;
	}

}


