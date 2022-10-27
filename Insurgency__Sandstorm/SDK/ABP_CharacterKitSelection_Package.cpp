/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DBA510
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdatEquipmentOnBack");
		
		UABP_CharacterKitSelection_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBACC0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateNightVisionState");
		
		UABP_CharacterKitSelection_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CharacterKitSelection_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateInsurgentNVGState");
		
		UABP_CharacterKitSelection_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBAAB0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearCopyPoseAnim
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bProfile__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFemale__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      bpp__Character__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABP_Gear_BASE_Carrier_C*                     bpp__Carrier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearCopyPoseAnim");
		
		UABP_CharacterKitSelection_C_UpdateGearCopyPoseAnim_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		params.bpp__bProfile__pf = bpp__bProfile__pf;
		params.bpp__bFemale__pf = bpp__bFemale__pf;
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Combination__pf = bpp__Combination__pf;
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBAA20
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearBoneVisibility");
		
		UABP_CharacterKitSelection_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA910
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasMaskState");
		
		UABP_CharacterKitSelection_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA990
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasmaskReference");
		
		UABP_CharacterKitSelection_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB34E0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateEquipable
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_CharacterKitSelection_C::UpdateEquipable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateEquipable");
		
		UABP_CharacterKitSelection_C_UpdateEquipable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA7F0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCurveAlpha
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Curve__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateCurveAlpha(bool bpp__Condition__pf, const class FName& bpp__Curve__pf, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCurveAlpha");
		
		UABP_CharacterKitSelection_C_UpdateCurveAlpha_Params params {};
		params.bpp__Condition__pf = bpp__Condition__pf;
		params.bpp__Curve__pf = bpp__Curve__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA6E0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterBoneHide");
		
		UABP_CharacterKitSelection_C_UpdateCharacterBoneHide_Params params {};
		params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;
		params.bpp__Gunner__pf = bpp__Gunner__pf;
		params.bpp__Passenger__pf = bpp__Passenger__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA5E0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterAnimInstance");
		
		UABP_CharacterKitSelection_C_UpdateCharacterAnimInstance_Params params {};
		params.bpp__GearAnimInstance__pf = bpp__GearAnimInstance__pf;
		params.bpp__Combination__pf = bpp__Combination__pf;
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA020
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.StoreAnimations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FCharacterAnimEquipable                     bpp__Common__pf                                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCharacterAnimFirearm                       bpp__FirearmStruct__pf                                     (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFirearm__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::StoreAnimations(const struct FCharacterAnimEquipable& bpp__Common__pf, const struct FCharacterAnimFirearm& bpp__FirearmStruct__pf, bool bpp__bFirearm__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.StoreAnimations");
		
		UABP_CharacterKitSelection_C_StoreAnimations_Params params {};
		params.bpp__Common__pf = bpp__Common__pf;
		params.bpp__FirearmStruct__pf = bpp__FirearmStruct__pf;
		params.bpp__bFirearm__pf = bpp__bFirearm__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DE30E0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.SetCharacterAnimation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_CharacterKitSelection_C::SetCharacterAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.SetCharacterAnimation");
		
		UABP_CharacterKitSelection_C_SetCharacterAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FE0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CharacterKitSelection_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.ResetEquipmentPhysics");
		
		UABP_CharacterKitSelection_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9F20
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.PlaySpecial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__SpecialIntervalTime__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__SpecialIntervalTimeMainMenu__pf                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::PlaySpecial(float bpp__SpecialIntervalTime__pf, float bpp__SpecialIntervalTimeMainMenu__pf, bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.PlaySpecial");
		
		UABP_CharacterKitSelection_C_PlaySpecial_Params params {};
		params.bpp__SpecialIntervalTime__pf = bpp__SpecialIntervalTime__pf;
		params.bpp__SpecialIntervalTimeMainMenu__pf = bpp__SpecialIntervalTimeMainMenu__pf;
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9E70
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CharacterKitSelection_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.NewFunction_1");
		
		UABP_CharacterKitSelection_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9DE0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.MolotovRagState");
		
		UABP_CharacterKitSelection_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9CC0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.GetUnderbarrelSequence
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__WeaponMount__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__ValidAnim__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::GetUnderbarrelSequence(class UObject* bpp__Upgrade__pf, bool bpp__WeaponMount__pf, bool* bpp__ValidAnim__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.GetUnderbarrelSequence");
		
		UABP_CharacterKitSelection_C_GetUnderbarrelSequence_Params params {};
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		params.bpp__WeaponMount__pf = bpp__WeaponMount__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ValidAnim__pf != nullptr)
			*bpp__ValidAnim__pf = params.bpp__ValidAnim__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9CA0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_CharacterKitSelection_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8");
		
		UABP_CharacterKitSelection_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9C80
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_CharacterKitSelection_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E");
		
		UABP_CharacterKitSelection_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9B70
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.DeltaRotatorAxis
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__A__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__B__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::DeltaRotatorAxis(float bpp__A__pf, float bpp__B__pf, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.DeltaRotatorAxis");
		
		UABP_CharacterKitSelection_C_DeltaRotatorAxis_Params params {};
		params.bpp__A__pf = bpp__A__pf;
		params.bpp__B__pf = bpp__B__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9AE0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcUnderbarrelOffset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWeaponUpgradeComponent*                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::CalcUnderbarrelOffset(class UWeaponUpgradeComponent* bpp__Upgrade__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcUnderbarrelOffset");
		
		UABP_CharacterKitSelection_C_CalcUnderbarrelOffset_Params params {};
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9980
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRotationAxisInterp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Original__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::CalcRotationAxisInterp(float bpp__Original__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRotationAxisInterp");
		
		UABP_CharacterKitSelection_C_CalcRotationAxisInterp_Params params {};
		params.bpp__Original__pf = bpp__Original__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB97A0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRelativeTransform
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  bpp__Child__pf                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  bpp__Parent__pf                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  bpp__Transform__pf                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::CalcRelativeTransform(const struct FTransform& bpp__Child__pf, const struct FTransform& bpp__Parent__pf, struct FTransform* bpp__Transform__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRelativeTransform");
		
		UABP_CharacterKitSelection_C_CalcRelativeTransform_Params params {};
		params.bpp__Child__pf = bpp__Child__pf;
		params.bpp__Parent__pf = bpp__Parent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Transform__pf != nullptr)
			*bpp__Transform__pf = params.bpp__Transform__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9690
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcForearmTwistAlpha
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__BoneName__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__LeftHand__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UABP_CharacterKitSelection_C::CalcForearmTwistAlpha(class USceneComponent* bpp__Mesh__pf, const class FName& bpp__BoneName__pf, bool bpp__LeftHand__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcForearmTwistAlpha");
		
		UABP_CharacterKitSelection_C_CalcForearmTwistAlpha_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__BoneName__pf = bpp__BoneName__pf;
		params.bpp__LeftHand__pf = bpp__LeftHand__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9590
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlueprintUpdateAnimation");
		
		UABP_CharacterKitSelection_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9500
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlendOutMontage");
		
		UABP_CharacterKitSelection_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB93C0
	 * 		Name   -> Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_CharacterKitSelection_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.AnimGraph");
		
		UABP_CharacterKitSelection_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_CharacterKitSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_CharacterKitSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_CharacterKitSelection.ABP_CharacterKitSelection_C");
		return ptr;
	}

}


