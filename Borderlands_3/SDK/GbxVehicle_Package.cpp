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
	 * 		RVA    -> 0x030E38D0
	 * 		Name   -> Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTurretMovementComponent::UpdateTurretControlDependency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency");
		
		UTurretMovementComponent_UpdateTurretControlDependency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E38B0
	 * 		Name   -> Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTurretMovementComponent::UpdateParentInitialOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset");
		
		UTurretMovementComponent_UpdateParentInitialOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3410
	 * 		Name   -> Function GbxVehicle.TurretMovementComponent.SetRotationInputs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              XValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurretMovementComponent::SetRotationInputs(float XValue, float YValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.SetRotationInputs");
		
		UTurretMovementComponent_SetRotationInputs_Params params {};
		params.XValue = XValue;
		params.YValue = YValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2C40
	 * 		Name   -> Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
	 * 		Flags  -> (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector2D                                   InRotationInputs                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurretMovementComponent::ServerSetRotationInputs(const struct FVector2D& InRotationInputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs");
		
		UTurretMovementComponent_ServerSetRotationInputs_Params params {};
		params.InRotationInputs = InRotationInputs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurretMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurretMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.TurretMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3630
	 * 		Name   -> Function GbxVehicle.Vehicle.SetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UTeam*                                       Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVehicle::SetTeam(class UTeam* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.SetTeam");
		
		AVehicle_SetTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2AE0
	 * 		Name   -> Function GbxVehicle.Vehicle.RemoveVehiclePart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehiclePartData*                            CharacterPart                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVehicle::RemoveVehiclePart(class UVehiclePartData* CharacterPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.RemoveVehiclePart");
		
		AVehicle_RemoveVehiclePart_Params params {};
		params.CharacterPart = CharacterPart;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2920
	 * 		Name   -> Function GbxVehicle.Vehicle.OnRep_VehicleParts
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AVehicle::OnRep_VehicleParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.OnRep_VehicleParts");
		
		AVehicle_OnRep_VehicleParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2780
	 * 		Name   -> Function GbxVehicle.Vehicle.IsPowerSliding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AVehicle::IsPowerSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.IsPowerSliding");
		
		AVehicle_IsPowerSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E26B0
	 * 		Name   -> Function GbxVehicle.Vehicle.IsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AVehicle::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.IsInAir");
		
		AVehicle_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E25F0
	 * 		Name   -> Function GbxVehicle.Vehicle.GetTeamComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTeamComponent* AVehicle::GetTeamComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTeamComponent");
		
		AVehicle_GetTeamComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2630
	 * 		Name   -> Function GbxVehicle.Vehicle.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTeam* AVehicle::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTeam");
		
		AVehicle_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2610
	 * 		Name   -> Function GbxVehicle.Vehicle.GetTargetingComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTargetingComponent* AVehicle::GetTargetingComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTargetingComponent");
		
		AVehicle_GetTargetingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E25F0
	 * 		Name   -> Function GbxVehicle.Vehicle.GetTargetableComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTargetableComponent* AVehicle::GetTargetableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTargetableComponent");
		
		AVehicle_GetTargetableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E24F0
	 * 		Name   -> Function GbxVehicle.Vehicle.GetNumWheelsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AVehicle::GetNumWheelsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetNumWheelsInAir");
		
		AVehicle_GetNumWheelsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2440
	 * 		Name   -> Function GbxVehicle.Vehicle.GetEquipedParts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UVehiclePartData*> AVehicle::GetEquipedParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetEquipedParts");
		
		AVehicle_GetEquipedParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1C70
	 * 		Name   -> Function GbxVehicle.Vehicle.AddVehiclePart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehiclePartData*                            CharacterPart                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVehicle::AddVehiclePart(class UVehiclePartData* CharacterPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.AddVehiclePart");
		
		AVehicle_AddVehiclePart_Params params {};
		params.CharacterPart = CharacterPart;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.Vehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleInventoryBalanceStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleInventoryBalanceStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleInventoryBalanceStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleBoostData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleBoostData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleBoostData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UVehicleBoostComponent::VehicleBoostEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature");
		
		UVehicleBoostComponent_VehicleBoostEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E37A0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.StopBoost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleBoostComponent::StopBoost(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.StopBoost");
		
		UVehicleBoostComponent_StopBoost_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3780
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.StartBoost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehicleBoostComponent::StartBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.StartBoost");
		
		UVehicleBoostComponent_StartBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2BA0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.ResumeBoost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehicleBoostComponent::ResumeBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.ResumeBoost");
		
		UVehicleBoostComponent_ResumeBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E29E0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BoostTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              BoostValueReachedDelegate                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVehicleBoostComponent::RegisterBoostRegenerateEvent(float BoostTarget, const class FScriptDelegate& BoostValueReachedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent");
		
		UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params params {};
		params.BoostTarget = BoostTarget;
		params.BoostValueReachedDelegate = BoostValueReachedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2940
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.PauseBoost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehicleBoostComponent::PauseBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.PauseBoost");
		
		UVehicleBoostComponent_PauseBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E27E0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               bWasBoosting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleBoostComponent::OnRep_IsBoosting(bool bWasBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting");
		
		UVehicleBoostComponent_OnRep_IsBoosting_Params params {};
		params.bWasBoosting = bWasBoosting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVehicleBoostComponent::K2_BoostStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped");
		
		UVehicleBoostComponent_K2_BoostStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVehicleBoostComponent::K2_BoostStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted");
		
		UVehicleBoostComponent_K2_BoostStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E25A0
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleBoostComponent::GetRelativeBoostSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed");
		
		UVehicleBoostComponent_GetRelativeBoostSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2490
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleBoostComponent::GetMaxBoostPoolValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue");
		
		UVehicleBoostComponent_GetMaxBoostPoolValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2250
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleBoostComponent::GetCurrentBoostPoolValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue");
		
		UVehicleBoostComponent_GetCurrentBoostPoolValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2220
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UVehicleBoostComponent::GetCurrentBoostChargesCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount");
		
		UVehicleBoostComponent_GetCurrentBoostChargesCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2040
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehicleBoostComponent::GetBoostEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled");
		
		UVehicleBoostComponent_GetBoostEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2000
	 * 		Name   -> Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UVehicleBoostComponent::GetBoostDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetBoostDirection");
		
		UVehicleBoostComponent_GetBoostDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleBoostComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleBoostComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleBoostComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehiclePartData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehiclePartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehiclePartData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleAirControlComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleAirControlComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleAirControlComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleContactPtModifierInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleContactPtModifierInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleContactPtModifierInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E36B0
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     WantedDirection                                            (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleDigiThrustComponent::SetTeleportDirection(const struct FVector& WantedDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection");
		
		UVehicleDigiThrustComponent_SetTeleportDirection_Params params {};
		params.WantedDirection = WantedDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2B60
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehicleDigiThrustComponent::RequestTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport");
		
		UVehicleDigiThrustComponent_RequestTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014979B0
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted");
		
		UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01454240
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEndFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished");
		
		UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEndFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB4E0
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd");
		
		UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AB500
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 */
	void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision");
		
		UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E27B0
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehicleDigiThrustComponent::IsTeleporting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting");
		
		UVehicleDigiThrustComponent_IsTeleporting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E24C0
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleDigiThrustComponent::GetMaxBoostPoolValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue");
		
		UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2280
	 * 		Name   -> Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehicleDigiThrustComponent::GetCurrentBoostPoolValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue");
		
		UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UVehicleDigiThrustComponent::DigiThrustEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature");
		
		UVehicleDigiThrustComponent_DigiThrustEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleDigiThrustComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleDigiThrustComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleDigiThrustComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleFlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleFlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleFlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2670
	 * 		Name   -> Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehicleHitchAttachPtComponent::IsAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached");
		
		UVehicleHitchAttachPtComponent_IsAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AVehicle*                                    FromVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleHitchAttachPtComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature");
		
		UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params params {};
		params.FromVehicle = FromVehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleHitchAttachPtComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleHitchAttachPtComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleHitchAttachPtComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3830
	 * 		Name   -> Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TrailerToAttach                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleHitchComponent::TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch");
		
		UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params params {};
		params.TrailerToAttach = TrailerToAttach;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AVehicle*                                    FromVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleHitchComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature");
		
		UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params params {};
		params.FromVehicle = FromVehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1F30
	 * 		Name   -> Function GbxVehicle.VehicleHitchComponent.DetachFromHitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehicleHitchComponent::DetachFromHitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.DetachFromHitch");
		
		UVehicleHitchComponent_DetachFromHitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1E90
	 * 		Name   -> Function GbxVehicle.VehicleHitchComponent.AttachToHitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehicleHitchAttachPtComponent*              AttachPtToAttach                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleHitchComponent::AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.AttachToHitch");
		
		UVehicleHitchComponent_AttachToHitch_Params params {};
		params.AttachPtToAttach = AttachPtToAttach;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleHitchComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleHitchComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleHitchComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UVehicleHoverComponent::VehicleHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature");
		
		UVehicleHoverComponent_VehicleHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2CF0
	 * 		Name   -> Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		bool                                               InbIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InStrafeInput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InForwardInput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InTargetRotation                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVehicleHoverComponent::ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.ServerUpdateState");
		
		UVehicleHoverComponent_ServerUpdateState_Params params {};
		params.InbIsEnabled = InbIsEnabled;
		params.InStrafeInput = InStrafeInput;
		params.InForwardInput = InForwardInput;
		params.InTargetRotation = InTargetRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2690
	 * 		Name   -> Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehicleHoverComponent::IsHoverEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled");
		
		UVehicleHoverComponent_IsHoverEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1F50
	 * 		Name   -> Function GbxVehicle.VehicleHoverComponent.EnableHover
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehicleHoverComponent::EnableHover(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.EnableHover");
		
		UVehicleHoverComponent_EnableHover_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleHoverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleHoverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleHoverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2300
	 * 		Name   -> Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   StickInput                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVehicleMovementInterface::GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer");
		
		UVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params params {};
		params.StickInput = StickInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleMovementInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleMovementInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleMovementInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E38F0
	 * 		Name   -> Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      SpawnedPart                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVehiclePartActor::WeldActorToVehicle(class AActor* SpawnedPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.WeldActorToVehicle");
		
		AVehiclePartActor_WeldActorToVehicle_Params params {};
		params.SpawnedPart = SpawnedPart;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AVehiclePartActor::ReceiveParentVehicleBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay");
		
		AVehiclePartActor_ReceiveParentVehicleBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2900
	 * 		Name   -> Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AVehiclePartActor::OnRep_ParentSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket");
		
		AVehiclePartActor_OnRep_ParentSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2900
	 * 		Name   -> Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AVehiclePartActor::OnRep_OwningVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle");
		
		AVehiclePartActor_OnRep_OwningVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVehiclePartActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVehiclePartActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehiclePartActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehiclePartSelectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehiclePartSelectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehiclePartSelectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3380
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehiclePowerSlideComponent::SetPowerSlideEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled");
		
		UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2BC0
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehiclePowerSlideComponent::ResumePowerSlide(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide");
		
		UVehiclePowerSlideComponent_ResumePowerSlide_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2960
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehiclePowerSlideComponent::PausePowerSlide(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide");
		
		UVehiclePowerSlideComponent_PausePowerSlide_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2870
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               bWasPowerSliding                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVehiclePowerSlideComponent::OnRep_IsPowerSliding(bool bWasPowerSliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding");
		
		UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params params {};
		params.bWasPowerSliding = bWasPowerSliding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2750
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UVehiclePowerSlideComponent::IsPowerSlidePaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused");
		
		UVehiclePowerSlideComponent_IsPowerSlidePaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2720
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVehiclePowerSlideComponent::IsInPowerSlideBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost");
		
		UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2580
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UVehiclePowerSlideComponent::GetPowerSlideEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled");
		
		UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E22B0
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVehiclePowerSlideComponent::GetCurrentBoostRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio");
		
		UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1F10
	 * 		Name   -> Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVehiclePowerSlideComponent::CancelPowerSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide");
		
		UVehiclePowerSlideComponent_CancelPowerSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehiclePowerSlideComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehiclePowerSlideComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehiclePowerSlideComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxVehicleWheel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxVehicleWheel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.GbxVehicleWheel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleCollisionResponseModificationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleCollisionResponseModificationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.VehicleCollisionResponseModificationContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3760
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWheeledVehicleMovementComponentNW::SetToRestState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState");
		
		UWheeledVehicleMovementComponentNW_SetToRestState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3560
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SteerAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetSteerAngle(float SteerAngle, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle");
		
		UWheeledVehicleMovementComponentNW_SetSteerAngle_Params params {};
		params.SteerAngle = SteerAngle;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E34D0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetSagittalBalancingEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled");
		
		UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3300
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetOversteerFixupEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled");
		
		UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3230
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SteerAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetNoDriveSteerAngle(float SteerAngle, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle");
		
		UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params params {};
		params.SteerAngle = SteerAngle;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3160
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetNoDriveDriveTorque(float DriveTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque");
		
		UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params params {};
		params.DriveTorque = DriveTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3090
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetNoDriveBrakeTorque(float BrakeTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque");
		
		UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params params {};
		params.BrakeTorque = BrakeTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E3010
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled");
		
		UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2F90
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewModifier                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetCustomGravityModifier(float NewModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier");
		
		UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params params {};
		params.NewModifier = NewModifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2F00
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetCoronalBalancingEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled");
		
		UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2E80
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::SetAerialRotationalDampingEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled");
		
		UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2B80
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWheeledVehicleMovementComponentNW::ResetCustomGravityModifer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer");
		
		UWheeledVehicleMovementComponentNW_ResetCustomGravityModifer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E26E0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWheeledVehicleMovementComponentNW::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir");
		
		UWheeledVehicleMovementComponentNW_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E25D0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWheeledVehicleMovementComponentNW::GetSagittalBalancingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled");
		
		UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2560
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWheeledVehicleMovementComponentNW::GetOversteerFixupEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled");
		
		UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2520
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWheeledVehicleMovementComponentNW::GetNumWheelsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir");
		
		UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2470
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWheeledVehicleMovementComponentNW::GetLateralToLongitudinalVelocityShiftEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled");
		
		UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E23A0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   StickInput                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWheeledVehicleMovementComponentNW::GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer");
		
		UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params params {};
		params.StickInput = StickInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E22E0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponentNW::GetCustomGravityModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier");
		
		UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2200
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWheeledVehicleMovementComponentNW::GetCoronalBalancingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled");
		
		UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E2060
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   StickInput                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WantedDirAngle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVehicleCameraRelativeDrivingMode                  Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 AngleToSteeringCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWheeledVehicleMovementComponentNW::GetCameraRelativeThrottleAndSteer(const struct FVector2D& StickInput, float* WantedDirAngle, EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer");
		
		UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params params {};
		params.StickInput = StickInput;
		params.Mode = Mode;
		params.AngleToSteeringCurve = AngleToSteeringCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WantedDirAngle != nullptr)
			*WantedDirAngle = params.WantedDirAngle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1FE0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWheeledVehicleMovementComponentNW::GetAerialRotationalDampingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled");
		
		UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030E1CF0
	 * 		Name   -> Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxInfluence                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentNW::ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence");
		
		UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params params {};
		params.DeltaTime = DeltaTime;
		params.MaxInfluence = MaxInfluence;
		params.Pitch = Pitch;
		params.Roll = Roll;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWheeledVehicleMovementComponentNW.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponentNW::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxVehicle.WheeledVehicleMovementComponentNW");
		return ptr;
	}

}


