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
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::PlayFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback");
		
		UControlledMove_PhaseLock_WebGrasp_C_PlayFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::SetGraspTimerRunning(bool bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning");
		
		UControlledMove_PhaseLock_WebGrasp_C_SetGraspTimerRunning_Params params {};
		params.bRes = bRes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::GraspFinishLeech()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech");
		
		UControlledMove_PhaseLock_WebGrasp_C_GraspFinishLeech_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::OnGraspLeechTarget(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget");
		
		UControlledMove_PhaseLock_WebGrasp_C_OnGraspLeechTarget_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::DoPhaseTranceEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects");
		
		UControlledMove_PhaseLock_WebGrasp_C_DoPhaseTranceEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxCharacter*                               Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::DispatchGraspTargetDiedEvent(class AGbxCharacter* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent");
		
		UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspTargetDiedEvent_Params params {};
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::UnpackComboData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData");
		
		UControlledMove_PhaseLock_WebGrasp_C_UnpackComboData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::ConfigureEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters");
		
		UControlledMove_PhaseLock_WebGrasp_C_ConfigureEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::DispatchGraspedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent");
		
		UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::RemoveElementalEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect");
		
		UControlledMove_PhaseLock_WebGrasp_C_RemoveElementalEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::ApplyElementalEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect");
		
		UControlledMove_PhaseLock_WebGrasp_C_ApplyElementalEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart");
		
		UControlledMove_PhaseLock_WebGrasp_C_OnServerStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::OnServerStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop");
		
		UControlledMove_PhaseLock_WebGrasp_C_OnServerStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::ConfigurePhaseLockProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties");
		
		UControlledMove_PhaseLock_WebGrasp_C_ConfigurePhaseLockProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::OnControlledCharacterDied(class AActor* Receiver, class AActor* Causer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied");
		
		UControlledMove_PhaseLock_WebGrasp_C_OnControlledCharacterDied_Params params {};
		params.Receiver = Receiver;
		params.Causer = Causer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_WebGrasp_C::ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp");
		
		UControlledMove_PhaseLock_WebGrasp_C_ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_PhaseLock_WebGrasp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_PhaseLock_WebGrasp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C");
		return ptr;
	}

}


