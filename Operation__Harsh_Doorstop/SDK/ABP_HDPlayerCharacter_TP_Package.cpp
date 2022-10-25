/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDPlayerCharacter_TP_C::PlayEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayEquipMontage");
		
		UABP_HDPlayerCharacter_TP_C_PlayEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayFireMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFireLast                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAiming                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDPlayerCharacter_TP_C::PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayFireMontage");
		
		UABP_HDPlayerCharacter_TP_C_PlayFireMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFireLast = bFireLast;
		params.bAiming = bAiming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayReloadMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFullReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDPlayerCharacter_TP_C::PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayReloadMontage");
		
		UABP_HDPlayerCharacter_TP_C_PlayReloadMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayUnEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDPlayerCharacter_TP_C::PlayUnEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayUnEquipMontage");
		
		UABP_HDPlayerCharacter_TP_C_PlayUnEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponUpperBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   UpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   WeaponUpperBody                                            (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::WeaponUpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* WeaponUpperBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponUpperBody");
		
		UABP_HDPlayerCharacter_TP_C_WeaponUpperBody_Params params {};
		params.UpperBody = UpperBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponUpperBody != nullptr)
			*WeaponUpperBody = params.WeaponUpperBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponAdditive
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   WeaponAdditive                                             (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::WeaponAdditive(struct FPoseLink* WeaponAdditive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponAdditive");
		
		UABP_HDPlayerCharacter_TP_C_WeaponAdditive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponAdditive != nullptr)
			*WeaponAdditive = params.WeaponAdditive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.Move
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   Move2                                                      (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::Move(const struct FPoseLink& Move, struct FPoseLink* Move2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.Move");
		
		UABP_HDPlayerCharacter_TP_C_Move_Params params {};
		params.Move = Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Move2 != nullptr)
			*Move2 = params.Move2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponJumpLoop
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   LowerJumpLoop                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   WeaponJumpLoop                                             (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::WeaponJumpLoop(const struct FPoseLink& LowerJumpLoop, struct FPoseLink* WeaponJumpLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponJumpLoop");
		
		UABP_HDPlayerCharacter_TP_C_WeaponJumpLoop_Params params {};
		params.LowerJumpLoop = LowerJumpLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponJumpLoop != nullptr)
			*WeaponJumpLoop = params.WeaponJumpLoop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleFullBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   FullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   VehicleFullBody                                            (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::VehicleFullBody(const struct FPoseLink& FullBody, struct FPoseLink* VehicleFullBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleFullBody");
		
		UABP_HDPlayerCharacter_TP_C_VehicleFullBody_Params params {};
		params.FullBody = FullBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VehicleFullBody != nullptr)
			*VehicleFullBody = params.VehicleFullBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleLowerBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   LowerBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   VehicleLowerBody                                           (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::VehicleLowerBody(const struct FPoseLink& LowerBody, struct FPoseLink* VehicleLowerBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleLowerBody");
		
		UABP_HDPlayerCharacter_TP_C_VehicleLowerBody_Params params {};
		params.LowerBody = LowerBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VehicleLowerBody != nullptr)
			*VehicleLowerBody = params.VehicleLowerBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.LayeredLoco
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InBaseLayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   InOverlayLayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   InFullBodyAdditive                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   LayeredLoco                                                (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::LayeredLoco(const struct FPoseLink& InBaseLayer, const struct FPoseLink& InOverlayLayer, const struct FPoseLink& InFullBodyAdditive, struct FPoseLink* LayeredLoco)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.LayeredLoco");
		
		UABP_HDPlayerCharacter_TP_C_LayeredLoco_Params params {};
		params.InBaseLayer = InBaseLayer;
		params.InOverlayLayer = InOverlayLayer;
		params.InFullBodyAdditive = InFullBodyAdditive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LayeredLoco != nullptr)
			*LayeredLoco = params.LayeredLoco;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OverlayLocoLayer
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   OverlayLocoLayer                                           (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::OverlayLocoLayer(struct FPoseLink* OverlayLocoLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OverlayLocoLayer");
		
		UABP_HDPlayerCharacter_TP_C_OverlayLocoLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OverlayLocoLayer != nullptr)
			*OverlayLocoLayer = params.OverlayLocoLayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BaseLocoLayer
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   BaseLocoLayer                                              (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::BaseLocoLayer(struct FPoseLink* BaseLocoLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BaseLocoLayer");
		
		UABP_HDPlayerCharacter_TP_C_BaseLocoLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseLocoLayer != nullptr)
			*BaseLocoLayer = params.BaseLocoLayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimGraph");
		
		UABP_HDPlayerCharacter_TP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateIKTraceDataForFoot
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForRightFoot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::UpdateIKTraceDataForFoot(bool bForRightFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateIKTraceDataForFoot");
		
		UABP_HDPlayerCharacter_TP_C_UpdateIKTraceDataForFoot_Params params {};
		params.bForRightFoot = bForRightFoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PerformFootIKTrace
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromRightFoot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOutHit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutHitOffsetFromFoot                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::PerformFootIKTrace(bool bFromRightFoot, bool* bOutHit, struct FVector* OutHitOffsetFromFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PerformFootIKTrace");
		
		UABP_HDPlayerCharacter_TP_C_PerformFootIKTrace_Params params {};
		params.bFromRightFoot = bFromRightFoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutHit != nullptr)
			*bOutHit = params.bOutHit;
		if (OutHitOffsetFromFoot != nullptr)
			*OutHitOffsetFromFoot = params.OutHitOffsetFromFoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateFootIKTraceData
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::UpdateFootIKTraceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateFootIKTraceData");
		
		UABP_HDPlayerCharacter_TP_C_UpdateFootIKTraceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.SetupFootIK
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  CharOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::SetupFootIK(class ACharacter* CharOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.SetupFootIK");
		
		UABP_HDPlayerCharacter_TP_C_SetupFootIK_Params params {};
		params.CharOwner = CharOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ShouldUseHandIK
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bOutUseHandIK                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::ShouldUseHandIK(bool* bOutUseHandIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ShouldUseHandIK");
		
		UABP_HDPlayerCharacter_TP_C_ShouldUseHandIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutUseHandIK != nullptr)
			*bOutUseHandIK = params.bOutUseHandIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayCharacterTPPMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayDuration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::PlayCharacterTPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayCharacterTPPMontage");
		
		UABP_HDPlayerCharacter_TP_C_PlayCharacterTPPMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bForceDisableAutoBlendOut = bForceDisableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayDuration != nullptr)
			*PlayDuration = params.PlayDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignLegacyWeaponTPPLocomotionAnims
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        WeaponAnimSetTPP                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UABP_HDPlayerCharacter_TP_C::AssignLegacyWeaponTPPLocomotionAnims(TMap<class FName, class UAnimSequenceBase*> WeaponAnimSetTPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignLegacyWeaponTPPLocomotionAnims");
		
		UABP_HDPlayerCharacter_TP_C_AssignLegacyWeaponTPPLocomotionAnims_Params params {};
		params.WeaponAnimSetTPP = WeaponAnimSetTPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignWeaponTPPLocomotionAnims
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterAnimCollection                    AnimCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bReadyToThrow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::AssignWeaponTPPLocomotionAnims(struct FCharacterAnimCollection* AnimCollection, bool bReadyToThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignWeaponTPPLocomotionAnims");
		
		UABP_HDPlayerCharacter_TP_C_AssignWeaponTPPLocomotionAnims_Params params {};
		params.bReadyToThrow = bReadyToThrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimCollection != nullptr)
			*AnimCollection = params.AnimCollection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultRightHandIKTransformByItemType
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  RightTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::GetDefaultRightHandIKTransformByItemType(EItemType ItemType, struct FTransform* RightTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultRightHandIKTransformByItemType");
		
		UABP_HDPlayerCharacter_TP_C_GetDefaultRightHandIKTransformByItemType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RightTransform != nullptr)
			*RightTransform = params.RightTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultLeftHandIKTransformByItemType
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  LeftTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_TP_C::GetDefaultLeftHandIKTransformByItemType(EItemType ItemType, struct FTransform* LeftTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultLeftHandIKTransformByItemType");
		
		UABP_HDPlayerCharacter_TP_C_GetDefaultLeftHandIKTransformByItemType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftTransform != nullptr)
			*LeftTransform = params.LeftTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_03E0282943B466F95A9987B1825BCF44
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnNotifyEnd_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_03E0282943B466F95A9987B1825BCF44");
		
		UABP_HDPlayerCharacter_TP_C_OnNotifyEnd_03E0282943B466F95A9987B1825BCF44_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_03E0282943B466F95A9987B1825BCF44
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnNotifyBegin_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_03E0282943B466F95A9987B1825BCF44");
		
		UABP_HDPlayerCharacter_TP_C_OnNotifyBegin_03E0282943B466F95A9987B1825BCF44_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_03E0282943B466F95A9987B1825BCF44
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnInterrupted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_03E0282943B466F95A9987B1825BCF44");
		
		UABP_HDPlayerCharacter_TP_C_OnInterrupted_03E0282943B466F95A9987B1825BCF44_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_03E0282943B466F95A9987B1825BCF44
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnBlendOut_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_03E0282943B466F95A9987B1825BCF44");
		
		UABP_HDPlayerCharacter_TP_C_OnBlendOut_03E0282943B466F95A9987B1825BCF44_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_03E0282943B466F95A9987B1825BCF44
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnCompleted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_03E0282943B466F95A9987B1825BCF44");
		
		UABP_HDPlayerCharacter_TP_C_OnCompleted_03E0282943B466F95A9987B1825BCF44_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B");
		
		UABP_HDPlayerCharacter_TP_C_OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B");
		
		UABP_HDPlayerCharacter_TP_C_OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B");
		
		UABP_HDPlayerCharacter_TP_C_OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B");
		
		UABP_HDPlayerCharacter_TP_C_OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_ED2EB33C4A118243E7441F82017EFA1B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::OnCompleted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_ED2EB33C4A118243E7441F82017EFA1B");
		
		UABP_HDPlayerCharacter_TP_C_OnCompleted_ED2EB33C4A118243E7441F82017EFA1B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftCrouchState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_LeftCrouchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftCrouchState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftCrouchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyCrouchedState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_FullyCrouchedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyCrouchedState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyCrouchedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyStandingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_FullyStandingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyStandingState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyStandingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftStandState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_LeftStandState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftStandState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftStandState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyProneState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_FullyProneState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyProneState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyProneState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftProneState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::AnimNotify_LeftProneState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftProneState");
		
		UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftProneState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateAnimation");
		
		UABP_HDPlayerCharacter_TP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_TP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintInitializeAnimation");
		
		UABP_HDPlayerCharacter_TP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.EquippedItemChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::EquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.EquippedItemChanged");
		
		UABP_HDPlayerCharacter_TP_C_EquippedItemChanged_Params params {};
		params.Character = Character;
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdatePawnOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdatePawnOwnerRefs");
		
		UABP_HDPlayerCharacter_TP_C_BlueprintUpdatePawnOwnerRefs_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateControllerOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::BlueprintUpdateControllerOwnerRefs(class AController* NewC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateControllerOwnerRefs");
		
		UABP_HDPlayerCharacter_TP_C_BlueprintUpdateControllerOwnerRefs_Params params {};
		params.NewC = NewC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateEquippedWeaponRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 NewWeap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateEquippedWeaponRefs");
		
		UABP_HDPlayerCharacter_TP_C_BlueprintUpdateEquippedWeaponRefs_Params params {};
		params.NewWeap = NewWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_TP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_TP_C::ExecuteUbergraph_ABP_HDPlayerCharacter_TP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_TP");
		
		UABP_HDPlayerCharacter_TP_C_ExecuteUbergraph_ABP_HDPlayerCharacter_TP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_HDPlayerCharacter_TP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HDPlayerCharacter_TP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C");
		return ptr;
	}

}


