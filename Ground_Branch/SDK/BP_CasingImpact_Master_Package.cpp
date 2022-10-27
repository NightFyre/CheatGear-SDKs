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
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CasingImpact_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ReceiveBeginPlay");
		
		ABP_CasingImpact_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.PlaySound
	 * 		Flags  -> ()
	 */
	void ABP_CasingImpact_Master_C::PlaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.PlaySound");
		
		ABP_CasingImpact_Master_C_PlaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.SpawnParticleFX
	 * 		Flags  -> ()
	 */
	void ABP_CasingImpact_Master_C::SpawnParticleFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.SpawnParticleFX");
		
		ABP_CasingImpact_Master_C_SpawnParticleFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnPlayVoiceCallback_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CasingImpact_Master_C::OnPlayVoiceCallback_Event(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnPlayVoiceCallback_Event");
		
		ABP_CasingImpact_Master_C_OnPlayVoiceCallback_Event_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.CheckDestroy
	 * 		Flags  -> ()
	 */
	void ABP_CasingImpact_Master_C::CheckDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.CheckDestroy");
		
		ABP_CasingImpact_Master_C_CheckDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnSystemFinished_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CasingImpact_Master_C::OnSystemFinished_Event_1(class UParticleSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnSystemFinished_Event_1");
		
		ABP_CasingImpact_Master_C_OnSystemFinished_Event_1_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ExecuteUbergraph_BP_CasingImpact_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CasingImpact_Master_C::ExecuteUbergraph_BP_CasingImpact_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ExecuteUbergraph_BP_CasingImpact_Master");
		
		ABP_CasingImpact_Master_C_ExecuteUbergraph_BP_CasingImpact_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CasingImpact_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CasingImpact_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CasingImpact_Master.BP_CasingImpact_Master_C");
		return ptr;
	}

}


