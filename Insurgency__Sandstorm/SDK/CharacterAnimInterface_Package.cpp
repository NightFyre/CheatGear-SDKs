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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdatEquipmentOnBack");
		
		UCharacterAnimInterface_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateNightVisionState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateNightVisionState");
		
		UCharacterAnimInterface_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCharacterAnimInterface_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateInsurgentNVGState");
		
		UCharacterAnimInterface_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearCopyPoseAnim
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bProfile__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFemale__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      bpp__Character__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABP_Gear_BASE_Carrier_C*                     bpp__Carrier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearCopyPoseAnim");
		
		UCharacterAnimInterface_C_UpdateGearCopyPoseAnim_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		params.bpp__bProfile__pf = bpp__bProfile__pf;
		params.bpp__bFemale__pf = bpp__bFemale__pf;
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Combination__pf = bpp__Combination__pf;
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearBoneVisibility");
		
		UCharacterAnimInterface_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasMaskState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasMaskState");
		
		UCharacterAnimInterface_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasmaskReference
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasmaskReference");
		
		UCharacterAnimInterface_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterBoneHide");
		
		UCharacterAnimInterface_C_UpdateCharacterBoneHide_Params params {};
		params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;
		params.bpp__Gunner__pf = bpp__Gunner__pf;
		params.bpp__Passenger__pf = bpp__Passenger__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterAnimInstance");
		
		UCharacterAnimInterface_C_UpdateCharacterAnimInstance_Params params {};
		params.bpp__GearAnimInstance__pf = bpp__GearAnimInstance__pf;
		params.bpp__Combination__pf = bpp__Combination__pf;
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.ResetEquipmentPhysics
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCharacterAnimInterface_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.ResetEquipmentPhysics");
		
		UCharacterAnimInterface_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.NewFunction_1
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCharacterAnimInterface_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.NewFunction_1");
		
		UCharacterAnimInterface_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.MolotovRagState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.MolotovRagState");
		
		UCharacterAnimInterface_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function CharacterAnimInterface.CharacterAnimInterface_C.BlendOutMontage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAnimInterface_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterAnimInterface.CharacterAnimInterface_C.BlendOutMontage");
		
		UCharacterAnimInterface_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterAnimInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterAnimInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CharacterAnimInterface.CharacterAnimInterface_C");
		return ptr;
	}

}


