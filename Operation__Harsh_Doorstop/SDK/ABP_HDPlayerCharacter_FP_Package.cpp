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
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDPlayerCharacter_FP_C::PlayEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayEquipMontage");
		
		UABP_HDPlayerCharacter_FP_C_PlayEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayFireMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFireLast                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAiming                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDPlayerCharacter_FP_C::PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayFireMontage");
		
		UABP_HDPlayerCharacter_FP_C_PlayFireMontage_Params params {};
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
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayReloadMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFullReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDPlayerCharacter_FP_C::PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayReloadMontage");
		
		UABP_HDPlayerCharacter_FP_C_PlayReloadMontage_Params params {};
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
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayUnEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDPlayerCharacter_FP_C::PlayUnEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayUnEquipMontage");
		
		UABP_HDPlayerCharacter_FP_C_PlayUnEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_FP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AnimGraph");
		
		UABP_HDPlayerCharacter_FP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetMountPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::GetMountPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetMountPosition");
		
		UABP_HDPlayerCharacter_FP_C_GetMountPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetGripAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::GetGripAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetGripAmount");
		
		UABP_HDPlayerCharacter_FP_C_GetGripAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightRotationOffset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::GetSightRotationOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightRotationOffset");
		
		UABP_HDPlayerCharacter_FP_C_GetSightRotationOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSmoothRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::GetSmoothRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSmoothRotation");
		
		UABP_HDPlayerCharacter_FP_C_GetSmoothRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Positon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::GetSightPosition(struct FVector* Positon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightPosition");
		
		UABP_HDPlayerCharacter_FP_C_GetSightPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Positon != nullptr)
			*Positon = params.Positon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayCharacterFPPMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayDuration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::PlayCharacterFPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayCharacterFPPMontage");
		
		UABP_HDPlayerCharacter_FP_C_PlayCharacterFPPMontage_Params params {};
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
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateLeanOffsets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::UpdateLeanOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateLeanOffsets");
		
		UABP_HDPlayerCharacter_FP_C_UpdateLeanOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignLegacyWeaponLocomotionAnims
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        WeaponAnimSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UABP_HDPlayerCharacter_FP_C::AssignLegacyWeaponLocomotionAnims(TMap<class FName, class UAnimSequenceBase*>* WeaponAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignLegacyWeaponLocomotionAnims");
		
		UABP_HDPlayerCharacter_FP_C_AssignLegacyWeaponLocomotionAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponAnimSet != nullptr)
			*WeaponAnimSet = params.WeaponAnimSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignWeaponLocomotionAnims
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterAnimCollection                    AnimCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bReadyToThrow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_FP_C::AssignWeaponLocomotionAnims(struct FCharacterAnimCollection* AnimCollection, bool bReadyToThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignWeaponLocomotionAnims");
		
		UABP_HDPlayerCharacter_FP_C_AssignWeaponLocomotionAnims_Params params {};
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
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateAnimation");
		
		UABP_HDPlayerCharacter_FP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateAttachments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDPlayerCharacter_FP_C::UpdateAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateAttachments");
		
		UABP_HDPlayerCharacter_FP_C_UpdateAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdatePawnOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdatePawnOwnerRefs");
		
		UABP_HDPlayerCharacter_FP_C_BlueprintUpdatePawnOwnerRefs_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateControllerOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::BlueprintUpdateControllerOwnerRefs(class AController* NewC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateControllerOwnerRefs");
		
		UABP_HDPlayerCharacter_FP_C_BlueprintUpdateControllerOwnerRefs_Params params {};
		params.NewC = NewC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateEquippedWeaponRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 NewWeap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateEquippedWeaponRefs");
		
		UABP_HDPlayerCharacter_FP_C_BlueprintUpdateEquippedWeaponRefs_Params params {};
		params.NewWeap = NewWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.WeaponUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDWeaponBase_C*                          NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::WeaponUpdated(class ABP_HDWeaponBase_C* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.WeaponUpdated");
		
		UABP_HDPlayerCharacter_FP_C_WeaponUpdated_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_FP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_FP_C::ExecuteUbergraph_ABP_HDPlayerCharacter_FP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_FP");
		
		UABP_HDPlayerCharacter_FP_C_ExecuteUbergraph_ABP_HDPlayerCharacter_FP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_HDPlayerCharacter_FP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HDPlayerCharacter_FP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C");
		return ptr;
	}

}


