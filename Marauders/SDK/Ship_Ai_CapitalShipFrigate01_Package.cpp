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
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetSmokeSize
	 * 		Flags  -> ()
	 */
	void AShip_Ai_CapitalShipFrigate01_C::SetSmokeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetSmokeSize");
		
		AShip_Ai_CapitalShipFrigate01_C_SetSmokeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_ShipHull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount_Percent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::DamageEffects_ShipHull(float DamageAmount_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_ShipHull");
		
		AShip_Ai_CapitalShipFrigate01_C_DamageEffects_ShipHull_Params params {};
		params.DamageAmount_Percent = DamageAmount_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::DamageEffects_HelmGun(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_HelmGun");
		
		AShip_Ai_CapitalShipFrigate01_C_DamageEffects_HelmGun_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::DamageEffects_Engine(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Engine");
		
		AShip_Ai_CapitalShipFrigate01_C_DamageEffects_Engine_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::DamageEffects_Turret(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.DamageEffects_Turret");
		
		AShip_Ai_CapitalShipFrigate01_C_DamageEffects_Turret_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.AdjustBoomLength
	 * 		Flags  -> ()
	 */
	void AShip_Ai_CapitalShipFrigate01_C::AdjustBoomLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.AdjustBoomLength");
		
		AShip_Ai_CapitalShipFrigate01_C_AdjustBoomLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PlayLeftRightThrusterSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::PlayLeftRightThrusterSound(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PlayLeftRightThrusterSound");
		
		AShip_Ai_CapitalShipFrigate01_C_PlayLeftRightThrusterSound_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetMainThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::SetMainThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.SetMainThrusterParticle");
		
		AShip_Ai_CapitalShipFrigate01_C_SetMainThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ActivateSubThrusters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::ActivateSubThrusters(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ActivateSubThrusters");
		
		AShip_Ai_CapitalShipFrigate01_C_ActivateSubThrusters_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.LeftThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::LeftThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.LeftThrusterParticle");
		
		AShip_Ai_CapitalShipFrigate01_C_LeftThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.RightThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::RightThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.RightThrusterParticle");
		
		AShip_Ai_CapitalShipFrigate01_C_RightThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpActEvt_N_K2Node_InputKeyEvent_1");
		
		AShip_Ai_CapitalShipFrigate01_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnMoveFinished_0F43DDA04C784407BCB8448352024B77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::OnMoveFinished_0F43DDA04C784407BCB8448352024B77(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnMoveFinished_0F43DDA04C784407BCB8448352024B77");
		
		AShip_Ai_CapitalShipFrigate01_C_OnMoveFinished_0F43DDA04C784407BCB8448352024B77_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnRequestFailed_0F43DDA04C784407BCB8448352024B77
	 * 		Flags  -> ()
	 */
	void AShip_Ai_CapitalShipFrigate01_C::OnRequestFailed_0F43DDA04C784407BCB8448352024B77()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.OnRequestFailed_0F43DDA04C784407BCB8448352024B77");
		
		AShip_Ai_CapitalShipFrigate01_C_OnRequestFailed_0F43DDA04C784407BCB8448352024B77_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AShip_Ai_CapitalShipFrigate01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveBeginPlay");
		
		AShip_Ai_CapitalShipFrigate01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ReceiveTick");
		
		AShip_Ai_CapitalShipFrigate01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		AShip_Ai_CapitalShipFrigate01_C_BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		AShip_Ai_CapitalShipFrigate01_C_BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PawnTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.PawnTakenDamage");
		
		AShip_Ai_CapitalShipFrigate01_C_PawnTakenDamage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");
		
		AShip_Ai_CapitalShipFrigate01_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ShipHealthCheck
	 * 		Flags  -> ()
	 */
	void AShip_Ai_CapitalShipFrigate01_C::ShipHealthCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ShipHealthCheck");
		
		AShip_Ai_CapitalShipFrigate01_C_ShipHealthCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Ai_CapitalShipFrigate01_C::ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C.ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01");
		
		AShip_Ai_CapitalShipFrigate01_C_ExecuteUbergraph_Ship_Ai_CapitalShipFrigate01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShip_Ai_CapitalShipFrigate01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShip_Ai_CapitalShipFrigate01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ship_Ai_CapitalShipFrigate01.Ship_Ai_CapitalShipFrigate01_C");
		return ptr;
	}

}


