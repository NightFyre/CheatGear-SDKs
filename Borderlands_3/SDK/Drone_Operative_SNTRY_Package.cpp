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
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ADrone_Operative_SNTRY_C::HasValidDroneTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget");
		
		ADrone_Operative_SNTRY_C_HasValidDroneTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::ConfigureDigistruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct");
		
		ADrone_Operative_SNTRY_C_ConfigureDigistruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::ConfigureCryoEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter");
		
		ADrone_Operative_SNTRY_C_ConfigureCryoEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::OnSimCalledShotRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease");
		
		ADrone_Operative_SNTRY_C_OnSimCalledShotRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::RegisterDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates");
		
		ADrone_Operative_SNTRY_C_RegisterDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KilledTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::DispatchCalledShotRestorationParticles(class AActor* KilledTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles");
		
		ADrone_Operative_SNTRY_C_DispatchCalledShotRestorationParticles_Params params {};
		params.KilledTarget = KilledTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::RefundDuration(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration");
		
		ADrone_Operative_SNTRY_C_RefundDuration_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADrone_Operative_SNTRY_C::AdvanceCalledShotCount(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount");
		
		ADrone_Operative_SNTRY_C_AdvanceCalledShotCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::SetupCalledShot(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot");
		
		ADrone_Operative_SNTRY_C_SetupCalledShot_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      CurrentTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LastDamageLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalRefund                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::ApplyShieldDamageRefund(class AActor* CurrentTarget, const struct FVector& LastDamageLocation, float TotalRefund)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund");
		
		ADrone_Operative_SNTRY_C_ApplyShieldDamageRefund_Params params {};
		params.CurrentTarget = CurrentTarget;
		params.LastDamageLocation = LastDamageLocation;
		params.TotalRefund = TotalRefund;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BeamName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::CreateStaticFieldBeamToTarget(class AActor* TargetActor, const class FName& BeamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget");
		
		ADrone_Operative_SNTRY_C_CreateStaticFieldBeamToTarget_Params params {};
		params.TargetActor = TargetActor;
		params.BeamName = BeamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BeamName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::CreateBadDoseBeamToTarget(class AActor* TargetActor, const class FName& BeamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget");
		
		ADrone_Operative_SNTRY_C_CreateBadDoseBeamToTarget_Params params {};
		params.TargetActor = TargetActor;
		params.BeamName = BeamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::SetupStaticField()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField");
		
		ADrone_Operative_SNTRY_C_SetupStaticField_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::SetupCryoBullets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets");
		
		ADrone_Operative_SNTRY_C_SetupCryoBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::CauseCollisionDamageToEnemy(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy");
		
		ADrone_Operative_SNTRY_C_CauseCollisionDamageToEnemy_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::GetMoveDelayForTarget(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget");
		
		ADrone_Operative_SNTRY_C_GetMoveDelayForTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	class AActor* ADrone_Operative_SNTRY_C::FindNewTargetAutonomous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous");
		
		ADrone_Operative_SNTRY_C_FindNewTargetAutonomous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADrone_Operative_SNTRY_C::SetExhaustFXEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled");
		
		ADrone_Operative_SNTRY_C_SetExhaustFXEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DropPayload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload");
		
		ADrone_Operative_SNTRY_C_DropPayload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript");
		
		ADrone_Operative_SNTRY_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DigistructOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc");
		
		ADrone_Operative_SNTRY_C_DigistructOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DigistructOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc");
		
		ADrone_Operative_SNTRY_C_DigistructOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DronePhase__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc");
		
		ADrone_Operative_SNTRY_C_DronePhase__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DronePhase__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc");
		
		ADrone_Operative_SNTRY_C_DronePhase__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsBoosting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADrone_Operative_SNTRY_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY(bool bIsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY");
		
		ADrone_Operative_SNTRY_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY_Params params {};
		params.bIsBoosting = bIsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::StartDigistructOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut");
		
		ADrone_Operative_SNTRY_C_StartDigistructOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::ApplyCollisionDamageToTarget(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget");
		
		ADrone_Operative_SNTRY_C_ApplyCollisionDamageToTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay");
		
		ADrone_Operative_SNTRY_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::SetupMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods");
		
		ADrone_Operative_SNTRY_C_SetupMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::OnShutdownGracefully()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully");
		
		ADrone_Operative_SNTRY_C_OnShutdownGracefully_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DoGracefulShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown");
		
		ADrone_Operative_SNTRY_C_DoGracefulShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DoDroneDelivery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery");
		
		ADrone_Operative_SNTRY_C_DoDroneDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::OnCalledShotActivated(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated");
		
		ADrone_Operative_SNTRY_C_OnCalledShotActivated_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::DoNextCalledShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot");
		
		ADrone_Operative_SNTRY_C_DoNextCalledShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KilledActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::OnCalledShotKill(class AActor* KilledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill");
		
		ADrone_Operative_SNTRY_C_OnCalledShotKill_Params params {};
		params.KilledActor = KilledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPhasing                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADrone_Operative_SNTRY_C::SetDronePhasing(bool bPhasing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing");
		
		ADrone_Operative_SNTRY_C_SetDronePhasing_Params params {};
		params.bPhasing = bPhasing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADrone_Operative_SNTRY_C::HaltDronePhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase");
		
		ADrone_Operative_SNTRY_C_HaltDronePhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrone_Operative_SNTRY_C::ExecuteUbergraph_Drone_Operative_SNTRY(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY");
		
		ADrone_Operative_SNTRY_C_ExecuteUbergraph_Drone_Operative_SNTRY_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADrone_Operative_SNTRY_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADrone_Operative_SNTRY_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Drone_Operative_SNTRY.Drone_Operative_SNTRY_C");
		return ptr;
	}

}


