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
	 * 		RVA    -> 0x04DBD600
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdatEquipmentOnBack");
		
		UABP_CP_Equipment_Basic_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBE110
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateNightVisionState");
		
		UABP_CP_Equipment_Basic_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A80
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateInsurgentNVGState");
		
		UABP_CP_Equipment_Basic_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBDF00
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGearCopyPoseAnim
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
	void UABP_CP_Equipment_Basic_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGearCopyPoseAnim");
		
		UABP_CP_Equipment_Basic_C_UpdateGearCopyPoseAnim_Params params {};
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
	 * 		RVA    -> 0x04DBDDE0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGearBoneVisibility");
		
		UABP_CP_Equipment_Basic_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBDBC0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGasMaskState");
		
		UABP_CP_Equipment_Basic_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBDCC0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateGasmaskReference");
		
		UABP_CP_Equipment_Basic_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBD9A0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateCharacterBoneHide");
		
		UABP_CP_Equipment_Basic_C_UpdateCharacterBoneHide_Params params {};
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
	 * 		RVA    -> 0x04DBD7A0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.UpdateCharacterAnimInstance");
		
		UABP_CP_Equipment_Basic_C_UpdateCharacterAnimInstance_Params params {};
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
	 * 		RVA    -> 0x04DB4DE0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CP_Equipment_Basic_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.ResetEquipmentPhysics");
		
		UABP_CP_Equipment_Basic_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBD2C0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.PrintHelper
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      bpp__Title__pf__const                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      bpp__Input__pf__const                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Duration__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__TextColor__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::PrintHelper(const class FString& bpp__Title__pf__const, const class FString& bpp__Input__pf__const, float bpp__Duration__pf, const struct FLinearColor& bpp__TextColor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.PrintHelper");
		
		UABP_CP_Equipment_Basic_C_PrintHelper_Params params {};
		params.bpp__Title__pf__const = bpp__Title__pf__const;
		params.bpp__Input__pf__const = bpp__Input__pf__const;
		params.bpp__Duration__pf = bpp__Duration__pf;
		params.bpp__TextColor__pf = bpp__TextColor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FC0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_CP_Equipment_Basic_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.NewFunction_1");
		
		UABP_CP_Equipment_Basic_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBD230
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.MolotovRagState");
		
		UABP_CP_Equipment_Basic_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBD010
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.DeltaRotatorAxis
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Axisx1__pfT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Axisx2__pfT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::DeltaRotatorAxis(float bpp__Axisx1__pfT, float bpp__Axisx2__pfT, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.DeltaRotatorAxis");
		
		UABP_CP_Equipment_Basic_C_DeltaRotatorAxis_Params params {};
		params.bpp__Axisx1__pfT = bpp__Axisx1__pfT;
		params.bpp__Axisx2__pfT = bpp__Axisx2__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBCDF0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.CombineRotatorAxis
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Axisx1__pfT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Axisx2__pfT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::CombineRotatorAxis(float bpp__Axisx1__pfT, float bpp__Axisx2__pfT, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.CombineRotatorAxis");
		
		UABP_CP_Equipment_Basic_C_CombineRotatorAxis_Params params {};
		params.bpp__Axisx1__pfT = bpp__Axisx1__pfT;
		params.bpp__Axisx2__pfT = bpp__Axisx2__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBC9F0
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.CalcRelativeTransform
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  bpp__Child__pf__const                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  bpp__Parent__pf__const                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  bpp__Return__pf                                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::CalcRelativeTransform(const struct FTransform& bpp__Child__pf__const, const struct FTransform& bpp__Parent__pf__const, struct FTransform* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.CalcRelativeTransform");
		
		UABP_CP_Equipment_Basic_C_CalcRelativeTransform_Params params {};
		params.bpp__Child__pf__const = bpp__Child__pf__const;
		params.bpp__Parent__pf__const = bpp__Parent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBA990
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.BlendOutMontage");
		
		UABP_CP_Equipment_Basic_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBC820
	 * 		Name   -> Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_CP_Equipment_Basic_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C.AnimGraph");
		
		UABP_CP_Equipment_Basic_C_AnimGraph_Params params {};
		
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
	 * 		Name   -> PredefinedFunction UABP_CP_Equipment_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_CP_Equipment_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C");
		return ptr;
	}

}


