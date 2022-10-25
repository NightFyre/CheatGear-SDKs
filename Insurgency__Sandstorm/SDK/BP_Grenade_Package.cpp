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
	 * 		RVA    -> 0x04E26720
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdatEquipmentOnBack");
		
		ABP_Grenade_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E27360
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateNightVisionState");
		
		ABP_Grenade_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3D60
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Grenade_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateInsurgentNVGState");
		
		ABP_Grenade_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E270D0
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateGearCopyPoseAnim
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
	void ABP_Grenade_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateGearCopyPoseAnim");
		
		ABP_Grenade_C_UpdateGearCopyPoseAnim_Params params {};
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
	 * 		RVA    -> 0x04E26E30
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateGearBoneVisibility");
		
		ABP_Grenade_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E26C90
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateGasMaskState");
		
		ABP_Grenade_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E26D10
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateGasmaskReference");
		
		ABP_Grenade_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E26B00
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateCharacterBoneHide");
		
		ABP_Grenade_C_UpdateCharacterBoneHide_Params params {};
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
	 * 		RVA    -> 0x04E268F0
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UpdateCharacterAnimInstance");
		
		ABP_Grenade_C_UpdateCharacterAnimInstance_Params params {};
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
	 * 		RVA    -> 0x04DB3960
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Grenade_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ResetEquipmentPhysics");
		
		ABP_Grenade_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3920
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Grenade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay");
		
		ABP_Grenade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4F40
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Grenade_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.NewFunction_1");
		
		ABP_Grenade_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E26530
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.MolotovRagState");
		
		ABP_Grenade_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E26410
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.Mesh3PLoaded
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::Mesh3PLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.Mesh3PLoaded");
		
		ABP_Grenade_C_Mesh3PLoaded_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E262B0
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.BlueprintOnAttachToBack
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::BlueprintOnAttachToBack(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.BlueprintOnAttachToBack");
		
		ABP_Grenade_C_BlueprintOnAttachToBack_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E261A0
	 * 		Name   -> Function BP_Grenade.BP_Grenade_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.BlendOutMontage");
		
		ABP_Grenade_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Grenade.BP_Grenade_C.ItemMeshLoadedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Grenade_C::ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Grenade.BP_Grenade_C.ItemMeshLoadedDelegate__DelegateSignature");
		
		ABP_Grenade_C_ItemMeshLoadedDelegate__DelegateSignature_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Grenade.BP_Grenade_C");
		return ptr;
	}

}


