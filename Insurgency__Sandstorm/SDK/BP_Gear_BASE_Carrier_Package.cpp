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
	 * 		RVA    -> 0x04E1BC80
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdatEquipmentOnBack");
		
		ABP_Gear_BASE_Carrier_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C9A0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateNightVisionState");
		
		ABP_Gear_BASE_Carrier_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C880
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateMorphsForCosmeticItem
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCC_BASE_Character_Parent_C*                 bpp__InCosmeticItem__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__InNewMorph__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__InProfile__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateMorphsForCosmeticItem(class UCC_BASE_Character_Parent_C* bpp__InCosmeticItem__pf, class FName* bpp__InNewMorph__pf, bool bpp__InProfile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateMorphsForCosmeticItem");
		
		ABP_Gear_BASE_Carrier_C_UpdateMorphsForCosmeticItem_Params params {};
		params.bpp__InCosmeticItem__pf = bpp__InCosmeticItem__pf;
		params.bpp__InProfile__pf = bpp__InProfile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__InNewMorph__pf != nullptr)
			*bpp__InNewMorph__pf = params.bpp__InNewMorph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4EA0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateInsurgentNVGState");
		
		ABP_Gear_BASE_Carrier_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C770
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseSettings
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__CarrierArmour__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateGearCopyPoseSettings(ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf, ECarrierArmour* bpp__CarrierArmour__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseSettings");
		
		ABP_Gear_BASE_Carrier_C_UpdateGearCopyPoseSettings_Params params {};
		params.bpp__Combination__pf = bpp__Combination__pf;
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__CarrierArmour__pf != nullptr)
			*bpp__CarrierArmour__pf = params.bpp__CarrierArmour__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C560
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseAnim
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
	void ABP_Gear_BASE_Carrier_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseAnim");
		
		ABP_Gear_BASE_Carrier_C_UpdateGearCopyPoseAnim_Params params {};
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
	 * 		RVA    -> 0x04E1C4D0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearBoneVisibility");
		
		ABP_Gear_BASE_Carrier_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C3C0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasMaskState");
		
		ABP_Gear_BASE_Carrier_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C440
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasmaskReference");
		
		ABP_Gear_BASE_Carrier_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C2B0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentVisuals
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bForce__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bProfile__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         bpp__Inventory__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateEquipmentVisuals(bool bpp__bForce__pf, bool bpp__bProfile__pf, class UInventoryComponent* bpp__Inventory__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentVisuals");
		
		ABP_Gear_BASE_Carrier_C_UpdateEquipmentVisuals_Params params {};
		params.bpp__bForce__pf = bpp__bForce__pf;
		params.bpp__bProfile__pf = bpp__bProfile__pf;
		params.bpp__Inventory__pf = bpp__Inventory__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C220
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentAttachment
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Profile__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateEquipmentAttachment(bool bpp__Profile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentAttachment");
		
		ABP_Gear_BASE_Carrier_C_UpdateEquipmentAttachment_Params params {};
		params.bpp__Profile__pf = bpp__Profile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1C120
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMorphs
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewMorphs__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__OldMorphs__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateCosmeticMorphs(class USkeletalMeshComponent* bpp__Mesh__pf, const class FName& bpp__NewMorphs__pf, const class FName& bpp__OldMorphs__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMorphs");
		
		ABP_Gear_BASE_Carrier_C_UpdateCosmeticMorphs_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__NewMorphs__pf = bpp__NewMorphs__pf;
		params.bpp__OldMorphs__pf = bpp__OldMorphs__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1BF60
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMeshesMorphs
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCC_BASE_TORSO_C*                            bpp__Torso__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCC_BASE_FACEWEAR_Shemagh_C*                 bpp__Shemagh__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCC_BASE_HIJAB_C*                            bpp__Hijab__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCC_BASE_HDGR_C*                             bpp__Headgear__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      bpp__MergedMesh__pf                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Profile__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateCosmeticMeshesMorphs(class UCC_BASE_TORSO_C* bpp__Torso__pf, class UCC_BASE_FACEWEAR_Shemagh_C* bpp__Shemagh__pf, class UCC_BASE_HIJAB_C* bpp__Hijab__pf, class UCC_BASE_HDGR_C* bpp__Headgear__pf, class USkeletalMeshComponent* bpp__MergedMesh__pf, bool bpp__Profile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMeshesMorphs");
		
		ABP_Gear_BASE_Carrier_C_UpdateCosmeticMeshesMorphs_Params params {};
		params.bpp__Torso__pf = bpp__Torso__pf;
		params.bpp__Shemagh__pf = bpp__Shemagh__pf;
		params.bpp__Hijab__pf = bpp__Hijab__pf;
		params.bpp__Headgear__pf = bpp__Headgear__pf;
		params.bpp__MergedMesh__pf = bpp__MergedMesh__pf;
		params.bpp__Profile__pf = bpp__Profile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB52C0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticBoneVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateCosmeticBoneVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticBoneVisibility");
		
		ABP_Gear_BASE_Carrier_C_UpdateCosmeticBoneVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1BE50
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterBoneHide");
		
		ABP_Gear_BASE_Carrier_C_UpdateCharacterBoneHide_Params params {};
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
	 * 		RVA    -> 0x04E1BD50
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterAnimInstance");
		
		ABP_Gear_BASE_Carrier_C_UpdateCharacterAnimInstance_Params params {};
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
	 * 		RVA    -> 0x04DB5240
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.Update_EquipmentChangeInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Carrier_C::Update_EquipmentChangeInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.Update_EquipmentChangeInterface");
		
		ABP_Gear_BASE_Carrier_C_Update_EquipmentChangeInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1BAA0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.SetCarrierArmourCombination
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EItemGearLevel                                     bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::SetCarrierArmourCombination(EItemGearLevel bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.SetCarrierArmourCombination");
		
		ABP_Gear_BASE_Carrier_C_SetCarrierArmourCombination_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4200
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Carrier_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.ResetEquipmentPhysics");
		
		ABP_Gear_BASE_Carrier_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B6F0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCosmeticMeshesMorphs
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bProfile__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::OnUpdateCosmeticMeshesMorphs(bool bpp__bProfile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCosmeticMeshesMorphs");
		
		ABP_Gear_BASE_Carrier_C_OnUpdateCosmeticMeshesMorphs_Params params {};
		params.bpp__bProfile__pf = bpp__bProfile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B660
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bProfile__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::OnUpdateCharacterAnimInstance(bool bpp__bProfile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCharacterAnimInstance");
		
		ABP_Gear_BASE_Carrier_C_OnUpdateCharacterAnimInstance_Params params {};
		params.bpp__bProfile__pf = bpp__bProfile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3AE0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Gear_BASE_Carrier_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.NewFunction_1");
		
		ABP_Gear_BASE_Carrier_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B5D0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.MolotovRagState");
		
		ABP_Gear_BASE_Carrier_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B420
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetSkeletalMesh3P
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EItemGearLevel                                     bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::GetSkeletalMesh3P(EItemGearLevel bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetSkeletalMesh3P");
		
		ABP_Gear_BASE_Carrier_C_GetSkeletalMesh3P_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1AA30
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetCurrentArmourLevel
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	EItemGearLevel ABP_Gear_BASE_Carrier_C::GetCurrentArmourLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetCurrentArmourLevel");
		
		ABP_Gear_BASE_Carrier_C_GetCurrentArmourLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1A9A0
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlueprintOnAttachMeshToPawn
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlueprintOnAttachMeshToPawn");
		
		ABP_Gear_BASE_Carrier_C_BlueprintOnAttachMeshToPawn_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1A910
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlendOutMontage");
		
		ABP_Gear_BASE_Carrier_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1A840
	 * 		Name   -> Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.AddSocketComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               bpp__Mesh__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Socket__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_BASE_Carrier_C::AddSocketComponent(class USkeletalMesh* bpp__Mesh__pf, const class FName& bpp__Socket__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.AddSocketComponent");
		
		ABP_Gear_BASE_Carrier_C_AddSocketComponent_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__Socket__pf = bpp__Socket__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gear_BASE_Carrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gear_BASE_Carrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C");
		return ptr;
	}

}


