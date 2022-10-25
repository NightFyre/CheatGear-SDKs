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
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsHidden                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_Barrier_C::SetBarrierHidden(bool bIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHidden");
		
		AIO_Operative_Barrier_C_SetBarrierHidden_Params params {};
		params.bIsHidden = bIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDeterrenceFieldDamageForCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Val                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::GetDeterrenceFieldDamageForCharacter(class AOakCharacter* Enemy, float* Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDeterrenceFieldDamageForCharacter");
		
		AIO_Operative_Barrier_C_GetDeterrenceFieldDamageForCharacter_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Val != nullptr)
			*Val = params.Val;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnStateTransitionEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionEnd");
		
		AIO_Operative_Barrier_C_OnStateTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnStateTransitionBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionBegin");
		
		AIO_Operative_Barrier_C_OnStateTransitionBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.DetachFromPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::DetachFromPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.DetachFromPlayer");
		
		AIO_Operative_Barrier_C_DetachFromPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.AttachToPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::AttachToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.AttachToPlayer");
		
		AIO_Operative_Barrier_C_AttachToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.IsShuttingDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_Barrier_C::IsShuttingDown(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.IsShuttingDown");
		
		AIO_Operative_Barrier_C_IsShuttingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupPhysicsAssetOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPhysicsAsset*                               InAssetOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::SetupPhysicsAssetOverride(class UPhysicsAsset* InAssetOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupPhysicsAssetOverride");
		
		AIO_Operative_Barrier_C_SetupPhysicsAssetOverride_Params params {};
		params.InAssetOverride = InAssetOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupMultiModBarrierFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupMultiModBarrierFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupMultiModBarrierFX");
		
		AIO_Operative_Barrier_C_SetupMultiModBarrierFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDamageRTPCValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::GetDamageRTPCValue(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDamageRTPCValue");
		
		AIO_Operative_Barrier_C_GetDamageRTPCValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupStressTest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupStressTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupStressTest");
		
		AIO_Operative_Barrier_C_SetupStressTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.TryActivateSystem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::TryActivateSystem(class UParticleSystemComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TryActivateSystem");
		
		AIO_Operative_Barrier_C_TryActivateSystem_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.ConfigureTemplates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::ConfigureTemplates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ConfigureTemplates");
		
		AIO_Operative_Barrier_C_ConfigureTemplates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupModMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::SetupModMaterial(const class FName& ParamName, float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupModMaterial");
		
		AIO_Operative_Barrier_C_SetupModMaterial_Params params {};
		params.ParamName = ParamName;
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupElectromagneticTherapy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupElectromagneticTherapy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupElectromagneticTherapy");
		
		AIO_Operative_Barrier_C_SetupElectromagneticTherapy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupChargedRelay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupChargedRelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupChargedRelay");
		
		AIO_Operative_Barrier_C_SetupChargedRelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupDeterrenceField
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupDeterrenceField()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupDeterrenceField");
		
		AIO_Operative_Barrier_C_SetupDeterrenceField_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHoldScalar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_Barrier_C::SetBarrierHoldScalar(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHoldScalar");
		
		AIO_Operative_Barrier_C_SetBarrierHoldScalar_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UserConstructionScript");
		
		AIO_Operative_Barrier_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::TurboTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__FinishedFunc");
		
		AIO_Operative_Barrier_C_TurboTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::TurboTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__UpdateFunc");
		
		AIO_Operative_Barrier_C_TurboTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnCarried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::UpdateFX_OnCarried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnCarried");
		
		AIO_Operative_Barrier_C_UpdateFX_OnCarried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Carried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnStartState_Carried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Carried");
		
		AIO_Operative_Barrier_C_OnStartState_Carried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Carried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnEndState_Carried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Carried");
		
		AIO_Operative_Barrier_C_OnEndState_Carried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Activating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnEndState_Activating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Activating");
		
		AIO_Operative_Barrier_C_OnEndState_Activating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnDeployed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::UpdateFX_OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnDeployed");
		
		AIO_Operative_Barrier_C_UpdateFX_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Deployed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnStartState_Deployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Deployed");
		
		AIO_Operative_Barrier_C_OnStartState_Deployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Deployed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnEndState_Deployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Deployed");
		
		AIO_Operative_Barrier_C_OnEndState_Deployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ReceiveBeginPlay");
		
		AIO_Operative_Barrier_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.HandleBarrierStateChange
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeBarrierState                             OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOperativeBarrierState                             NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::HandleBarrierStateChange(EOperativeBarrierState OldState, EOperativeBarrierState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.HandleBarrierStateChange");
		
		AIO_Operative_Barrier_C_HandleBarrierStateChange_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupBarrierMods
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::SetupBarrierMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupBarrierMods");
		
		AIO_Operative_Barrier_C_SetupBarrierMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::UpdateFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX");
		
		AIO_Operative_Barrier_C_UpdateFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.StartNextBarrierState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::StartNextBarrierState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.StartNextBarrierState");
		
		AIO_Operative_Barrier_C_StartNextBarrierState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnTurbochargedStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbIsTurbocharged                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_Barrier_C::OnTurbochargedStateChanged(bool InbIsTurbocharged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnTurbochargedStateChanged");
		
		AIO_Operative_Barrier_C_OnTurbochargedStateChanged_Params params {};
		params.InbIsTurbocharged = InbIsTurbocharged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_ShuttingDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::OnStartState_ShuttingDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_ShuttingDown");
		
		AIO_Operative_Barrier_C_OnStartState_ShuttingDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.ApplyDeterrenceFieldToEnemy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::ApplyDeterrenceFieldToEnemy(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ApplyDeterrenceFieldToEnemy");
		
		AIO_Operative_Barrier_C_ApplyDeterrenceFieldToEnemy_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.DigistructOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_Barrier_C::DigistructOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.DigistructOut");
		
		AIO_Operative_Barrier_C_DigistructOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_Barrier.IO_Operative_Barrier_C.ExecuteUbergraph_IO_Operative_Barrier
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_Barrier_C::ExecuteUbergraph_IO_Operative_Barrier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ExecuteUbergraph_IO_Operative_Barrier");
		
		AIO_Operative_Barrier_C_ExecuteUbergraph_IO_Operative_Barrier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_Operative_Barrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_Operative_Barrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_Operative_Barrier.IO_Operative_Barrier_C");
		return ptr;
	}

}


