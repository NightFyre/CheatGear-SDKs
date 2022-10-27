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
	 * 		RVA    -> 0x04DB51A0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UserConstructionScript");
		
		ABP_Gear_GasMask_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21300
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdatEquipmentOnBack");
		
		ABP_Gear_GasMask_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E219D0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateNightVisionState");
		
		ABP_Gear_GasMask_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF00
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateInsurgentNVGState");
		
		ABP_Gear_GasMask_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21900
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateHeadgearEyewear
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__GasMaskEquipped__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USharedCosmeticState*                        bpp__CosmeticState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateHeadgearEyewear(bool bpp__GasMaskEquipped__pf, class USharedCosmeticState* bpp__CosmeticState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateHeadgearEyewear");
		
		ABP_Gear_GasMask_C_UpdateHeadgearEyewear_Params params {};
		params.bpp__GasMaskEquipped__pf = bpp__GasMaskEquipped__pf;
		params.bpp__CosmeticState__pf = bpp__CosmeticState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E216F0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearCopyPoseAnim
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
	void ABP_Gear_GasMask_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearCopyPoseAnim");
		
		ABP_Gear_GasMask_C_UpdateGearCopyPoseAnim_Params params {};
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
	 * 		RVA    -> 0x04E1C220
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearBoneVisibility");
		
		ABP_Gear_GasMask_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E215E0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasMaskState");
		
		ABP_Gear_GasMask_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21660
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasmaskReference");
		
		ABP_Gear_GasMask_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E214D0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterBoneHide");
		
		ABP_Gear_GasMask_C_UpdateCharacterBoneHide_Params params {};
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
	 * 		RVA    -> 0x04E213D0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterAnimInstance");
		
		ABP_Gear_GasMask_C_UpdateCharacterAnimInstance_Params params {};
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
	 * 		RVA    -> 0x04E21230
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.ToggleEyewear
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Show__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      bpp__SkeletalMesh__pf                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::ToggleEyewear(bool bpp__Show__pf, class USkeletalMeshComponent* bpp__SkeletalMesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.ToggleEyewear");
		
		ABP_Gear_GasMask_C_ToggleEyewear_Params params {};
		params.bpp__Show__pf = bpp__Show__pf;
		params.bpp__SkeletalMesh__pf = bpp__SkeletalMesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4920
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.SetupPreviewAttachment
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::SetupPreviewAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.SetupPreviewAttachment");
		
		ABP_Gear_GasMask_C_SetupPreviewAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4AA0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.ResetEquipmentPhysics");
		
		ABP_Gear_GasMask_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5060
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.NewFunction_1");
		
		ABP_Gear_GasMask_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E210D0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.MolotovRagState");
		
		ABP_Gear_GasMask_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20FB0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.MeshLoaded
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::MeshLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.MeshLoaded");
		
		ABP_Gear_GasMask_C_MeshLoaded_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4D60
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetHeadCosmetic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::GetHeadCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetHeadCosmetic");
		
		ABP_Gear_GasMask_C_GetHeadCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20ED0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetEquipmentMesh
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::GetEquipmentMesh(class AINSSoldier* bpp__Soldier__pf, class UINSSkeletalMeshComponent** bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetEquipmentMesh");
		
		ABP_Gear_GasMask_C_GetEquipmentMesh_Params params {};
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Mesh__pf != nullptr)
			*bpp__Mesh__pf = params.bpp__Mesh__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20E40
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.GasMaskSetMorph
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::GasMaskSetMorph(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.GasMaskSetMorph");
		
		ABP_Gear_GasMask_C_GasMaskSetMorph_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20CA0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintSpawnedPreviewActor
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bFirstPerson__pf__const                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPlayerInventoryComponent*                   bpp__PlayerInventory__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::BlueprintSpawnedPreviewActor(bool bpp__bFirstPerson__pf__const, class UPlayerInventoryComponent* bpp__PlayerInventory__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintSpawnedPreviewActor");
		
		ABP_Gear_GasMask_C_BlueprintSpawnedPreviewActor_Params params {};
		params.bpp__bFirstPerson__pf__const = bpp__bFirstPerson__pf__const;
		params.bpp__PlayerInventory__pf = bpp__PlayerInventory__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5240
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnPickedUp
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Gear_GasMask_C::BlueprintOnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnPickedUp");
		
		ABP_Gear_GasMask_C_BlueprintOnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20B80
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnAttachMeshToPawn
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnAttachMeshToPawn");
		
		ABP_Gear_GasMask_C_BlueprintOnAttachMeshToPawn_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20A80
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintInteractableStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EEquipableState                                    bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::BlueprintInteractableStateChanged(EEquipableState bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintInteractableStateChanged");
		
		ABP_Gear_GasMask_C_BlueprintInteractableStateChanged_Params params {};
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E209F0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlendOutMontage");
		
		ABP_Gear_GasMask_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E208D0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGogglesToComponent
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__TargetComponent__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::AttachGogglesToComponent(class UINSSkeletalMeshComponent* bpp__TargetComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGogglesToComponent");
		
		ABP_Gear_GasMask_C_AttachGogglesToComponent_Params params {};
		params.bpp__TargetComponent__pf = bpp__TargetComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4CE0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskWeapon
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::AttachGasMaskWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskWeapon");
		
		ABP_Gear_GasMask_C_AttachGasMaskWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20840
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasmaskSocket
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__CompositeGear__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::AttachGasmaskSocket(class UINSSkeletalMeshComponent* bpp__CompositeGear__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasmaskSocket");
		
		ABP_Gear_GasMask_C_AttachGasmaskSocket_Params params {};
		params.bpp__CompositeGear__pf = bpp__CompositeGear__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB52E0
	 * 		Name   -> Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskHead
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_GasMask_C::AttachGasMaskHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskHead");
		
		ABP_Gear_GasMask_C_AttachGasMaskHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Gear_GasMask.BP_Gear_GasMask_C.ItemMeshLoadedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_GasMask_C::ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Gear_GasMask.BP_Gear_GasMask_C.ItemMeshLoadedDelegate__DelegateSignature");
		
		ABP_Gear_GasMask_C_ItemMeshLoadedDelegate__DelegateSignature_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gear_GasMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gear_GasMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Gear_GasMask.BP_Gear_GasMask_C");
		return ptr;
	}

}


