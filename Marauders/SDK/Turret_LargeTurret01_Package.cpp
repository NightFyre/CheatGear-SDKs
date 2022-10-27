﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.GearChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhatGear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::GearChange(int32_t WhatGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.GearChange");
		
		ATurret_LargeTurret01_C_GearChange_Params params {};
		params.WhatGear = WhatGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerPressedZoom
	 * 		Flags  -> ()
	 */
	void ATurret_LargeTurret01_C::PlayerPressedZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerPressedZoom");
		
		ATurret_LargeTurret01_C_PlayerPressedZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUnPressedZoom
	 * 		Flags  -> ()
	 */
	void ATurret_LargeTurret01_C::PlayerUnPressedZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUnPressedZoom");
		
		ATurret_LargeTurret01_C_PlayerUnPressedZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.DebugShipAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDebugAnimations                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::DebugShipAnimations(bool ShouldDebugAnimations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.DebugShipAnimations");
		
		ATurret_LargeTurret01_C_DebugShipAnimations_Params params {};
		params.ShouldDebugAnimations = ShouldDebugAnimations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.CameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    CameraRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotClamp_Min                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotClamp_Max                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurretAnimRotSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.CameraRotation");
		
		ATurret_LargeTurret01_C_CameraRotation_Params params {};
		params.CameraRotation = CameraRotation;
		params.RotClamp_Min = RotClamp_Min;
		params.RotClamp_Max = RotClamp_Max;
		params.TurretAnimRotSpeed = TurretAnimRotSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Shoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TurretID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::Shoot(int32_t TurretID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Shoot");
		
		ATurret_LargeTurret01_C_Shoot_Params params {};
		params.TurretID = TurretID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerLeftRightInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::PlayerLeftRightInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerLeftRightInputAxis");
		
		ATurret_LargeTurret01_C_PlayerLeftRightInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::Frigate_Damage_Engine(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Engine");
		
		ATurret_LargeTurret01_C_Frigate_Damage_Engine_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::Frigate_Damage_Turret(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Turret");
		
		ATurret_LargeTurret01_C_Frigate_Damage_Turret_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::Frigate_Damage_HelmGun(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_HelmGun");
		
		ATurret_LargeTurret01_C_Frigate_Damage_HelmGun_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.FakeZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoomed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::FakeZoom(bool isZoomed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.FakeZoom");
		
		ATurret_LargeTurret01_C_FakeZoom_Params params {};
		params.isZoomed = isZoomed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.FiredTurrentEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::FiredTurrentEvent(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.FiredTurrentEvent");
		
		ATurret_LargeTurret01_C_FiredTurrentEvent_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Hull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::Frigate_Damage_Hull(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Hull");
		
		ATurret_LargeTurret01_C_Frigate_Damage_Hull_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_SpeedAsApercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SpeedAsPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XY_Speed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z_Speed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_SpeedAsApercentage");
		
		ATurret_LargeTurret01_C_Frigate_SpeedAsApercentage_Params params {};
		params.SpeedAsPercentage = SpeedAsPercentage;
		params.XY_Speed = XY_Speed;
		params.Z_Speed = Z_Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUpDownInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::PlayerUpDownInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUpDownInputAxis");
		
		ATurret_LargeTurret01_C_PlayerUpDownInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveTick");
		
		ATurret_LargeTurret01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATurret_LargeTurret01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveBeginPlay");
		
		ATurret_LargeTurret01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Turret_ControlAimPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ControlAimLoc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::Turret_ControlAimPoint(const struct FVector& ControlAimLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Turret_ControlAimPoint");
		
		ATurret_LargeTurret01_C_Turret_ControlAimPoint_Params params {};
		params.ControlAimLoc = ControlAimLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.Ship_ActorPitchAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PitchAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::Ship_ActorPitchAmount(float PitchAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.Ship_ActorPitchAmount");
		
		ATurret_LargeTurret01_C_Ship_ActorPitchAmount_Params params {};
		params.PitchAmount = PitchAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodisBreaching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBreaching                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::DropPodisBreaching(bool isBreaching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodisBreaching");
		
		ATurret_LargeTurret01_C_DropPodisBreaching_Params params {};
		params.isBreaching = isBreaching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodBoosting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoosting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurret_LargeTurret01_C::DropPodBoosting(bool IsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodBoosting");
		
		ATurret_LargeTurret01_C_DropPodBoosting_Params params {};
		params.IsBoosting = IsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPod_Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    RotMovementDelta                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentGear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPod_Movement");
		
		ATurret_LargeTurret01_C_DropPod_Movement_Params params {};
		params.RotMovementDelta = RotMovementDelta;
		params.CurrentGear = CurrentGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Turret_LargeTurret01.Turret_LargeTurret01_C.ExecuteUbergraph_Turret_LargeTurret01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurret_LargeTurret01_C::ExecuteUbergraph_Turret_LargeTurret01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turret_LargeTurret01.Turret_LargeTurret01_C.ExecuteUbergraph_Turret_LargeTurret01");
		
		ATurret_LargeTurret01_C_ExecuteUbergraph_Turret_LargeTurret01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATurret_LargeTurret01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATurret_LargeTurret01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Turret_LargeTurret01.Turret_LargeTurret01_C");
		return ptr;
	}

}


