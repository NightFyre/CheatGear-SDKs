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
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.DetermineActorsToIgnore
	 * 		Flags  -> ()
	 */
	void UBP_GBItemBeamComponent_C::DetermineActorsToIgnore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.DetermineActorsToIgnore");
		
		UBP_GBItemBeamComponent_C_DetermineActorsToIgnore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GBItemBeamComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ReceiveTick");
		
		UBP_GBItemBeamComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.PerformTrace
	 * 		Flags  -> ()
	 */
	void UBP_GBItemBeamComponent_C::PerformTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.PerformTrace");
		
		UBP_GBItemBeamComponent_C_PerformTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetDrawBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDrawBeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GBItemBeamComponent_C::SetDrawBeam(bool bDrawBeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetDrawBeam");
		
		UBP_GBItemBeamComponent_C_SetDrawBeam_Params params {};
		params.bDrawBeam = bDrawBeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetBeamParticleSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GBItemBeamComponent_C::SetBeamParticleSystem(class UParticleSystem* EmitterTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetBeamParticleSystem");
		
		UBP_GBItemBeamComponent_C_SetBeamParticleSystem_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.InternalUpdateBeam
	 * 		Flags  -> ()
	 */
	void UBP_GBItemBeamComponent_C::InternalUpdateBeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.InternalUpdateBeam");
		
		UBP_GBItemBeamComponent_C_InternalUpdateBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ExecuteUbergraph_BP_GBItemBeamComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GBItemBeamComponent_C::ExecuteUbergraph_BP_GBItemBeamComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ExecuteUbergraph_BP_GBItemBeamComponent");
		
		UBP_GBItemBeamComponent_C_ExecuteUbergraph_BP_GBItemBeamComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GBItemBeamComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GBItemBeamComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GBItemBeamComponent.BP_GBItemBeamComponent_C");
		return ptr;
	}

}


