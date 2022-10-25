/**
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
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.AnimGraph");
		
		UAnimBP_TorpedoLauncher01_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_TorpedoLauncher01_AnimGraphNode_ModifyBone_677EF9794635A5271D1CF9AA08213018
	 * 		Flags  -> ()
	 */
	void UAnimBP_TorpedoLauncher01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_TorpedoLauncher01_AnimGraphNode_ModifyBone_677EF9794635A5271D1CF9AA08213018()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_TorpedoLauncher01_AnimGraphNode_ModifyBone_677EF9794635A5271D1CF9AA08213018");
		
		UAnimBP_TorpedoLauncher01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_TorpedoLauncher01_AnimGraphNode_ModifyBone_677EF9794635A5271D1CF9AA08213018_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.BlueprintUpdateAnimation");
		
		UAnimBP_TorpedoLauncher01_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DebugShipAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDebugAnimations                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::DebugShipAnimations(bool ShouldDebugAnimations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DebugShipAnimations");
		
		UAnimBP_TorpedoLauncher01_C_DebugShipAnimations_Params params {};
		params.ShouldDebugAnimations = ShouldDebugAnimations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPodBoosting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoosting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::DropPodBoosting(bool IsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPodBoosting");
		
		UAnimBP_TorpedoLauncher01_C_DropPodBoosting_Params params {};
		params.IsBoosting = IsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.CameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    CameraRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotClamp_Min                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotClamp_Max                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurretAnimRotSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.CameraRotation");
		
		UAnimBP_TorpedoLauncher01_C_CameraRotation_Params params {};
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
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPod_Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    RotMovementDelta                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentGear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPod_Movement");
		
		UAnimBP_TorpedoLauncher01_C_DropPod_Movement_Params params {};
		params.RotMovementDelta = RotMovementDelta;
		params.CurrentGear = CurrentGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.PlayerUpDownInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::PlayerUpDownInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.PlayerUpDownInputAxis");
		
		UAnimBP_TorpedoLauncher01_C_PlayerUpDownInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_SpeedAsApercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SpeedAsPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XY_Speed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z_Speed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_SpeedAsApercentage");
		
		UAnimBP_TorpedoLauncher01_C_Frigate_SpeedAsApercentage_Params params {};
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
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Hull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::Frigate_Damage_Hull(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Hull");
		
		UAnimBP_TorpedoLauncher01_C_Frigate_Damage_Hull_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::Frigate_Damage_HelmGun(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_HelmGun");
		
		UAnimBP_TorpedoLauncher01_C_Frigate_Damage_HelmGun_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Shoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TurretID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::Shoot(int32_t TurretID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Shoot");
		
		UAnimBP_TorpedoLauncher01_C_Shoot_Params params {};
		params.TurretID = TurretID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::Frigate_Damage_Turret(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Turret");
		
		UAnimBP_TorpedoLauncher01_C_Frigate_Damage_Turret_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::Frigate_Damage_Engine(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Frigate_Damage_Engine");
		
		UAnimBP_TorpedoLauncher01_C_Frigate_Damage_Engine_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Turret_ControlAimPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ControlAimLoc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::Turret_ControlAimPoint(const struct FVector& ControlAimLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Turret_ControlAimPoint");
		
		UAnimBP_TorpedoLauncher01_C_Turret_ControlAimPoint_Params params {};
		params.ControlAimLoc = ControlAimLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Ship_ActorPitchAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PitchAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::Ship_ActorPitchAmount(float PitchAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.Ship_ActorPitchAmount");
		
		UAnimBP_TorpedoLauncher01_C_Ship_ActorPitchAmount_Params params {};
		params.PitchAmount = PitchAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPodisBreaching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBreaching                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_TorpedoLauncher01_C::DropPodisBreaching(bool isBreaching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.DropPodisBreaching");
		
		UAnimBP_TorpedoLauncher01_C_DropPodisBreaching_Params params {};
		params.isBreaching = isBreaching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.PlayerLeftRightInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::PlayerLeftRightInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.PlayerLeftRightInputAxis");
		
		UAnimBP_TorpedoLauncher01_C_PlayerLeftRightInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.GearChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhatGear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::GearChange(int32_t WhatGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.GearChange");
		
		UAnimBP_TorpedoLauncher01_C_GearChange_Params params {};
		params.WhatGear = WhatGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.ExecuteUbergraph_AnimBP_TorpedoLauncher01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_TorpedoLauncher01_C::ExecuteUbergraph_AnimBP_TorpedoLauncher01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C.ExecuteUbergraph_AnimBP_TorpedoLauncher01");
		
		UAnimBP_TorpedoLauncher01_C_ExecuteUbergraph_AnimBP_TorpedoLauncher01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_TorpedoLauncher01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_TorpedoLauncher01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_TorpedoLauncher01.AnimBP_TorpedoLauncher01_C");
		return ptr;
	}

}


