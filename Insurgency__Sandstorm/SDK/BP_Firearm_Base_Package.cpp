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
	 * 		RVA    -> 0x04E01780
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdatEquipmentOnBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Carrier__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSSoldier*                                 bpp__Soldier__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdatEquipmentOnBack");
		
		ABP_Firearm_Base_C_UpdatEquipmentOnBack_Params params {};
		params.bpp__Carrier__pf = bpp__Carrier__pf;
		params.bpp__Soldier__pf = bpp__Soldier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01E10
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateNightVisionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateNightVisionState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateNightVisionState");
		
		ABP_Firearm_Base_C_UpdateNightVisionState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3740
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateInsurgentNVGState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Firearm_Base_C::UpdateInsurgentNVGState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateInsurgentNVGState");
		
		ABP_Firearm_Base_C_UpdateInsurgentNVGState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01C00
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGearCopyPoseAnim
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
	void ABP_Firearm_Base_C::UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGearCopyPoseAnim");
		
		ABP_Firearm_Base_C_UpdateGearCopyPoseAnim_Params params {};
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
	 * 		RVA    -> 0x04E01B70
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGearBoneVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Visibility__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateGearBoneVisibility(bool bpp__Visibility__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGearBoneVisibility");
		
		ABP_Firearm_Base_C_UpdateGearBoneVisibility_Params params {};
		params.bpp__Visibility__pf = bpp__Visibility__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01A60
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGasMaskState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateGasMaskState(EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGasMaskState");
		
		ABP_Firearm_Base_C_UpdateGasMaskState_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01AE0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGasmaskReference
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABP_Gear_GasMask_C*                          bpp__Gasmask__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateGasmaskReference");
		
		ABP_Firearm_Base_C_UpdateGasmaskReference_Params params {};
		params.bpp__Gasmask__pf = bpp__Gasmask__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01950
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateCharacterBoneHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UABP_Character_C*                            bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Gunner__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Passenger__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateCharacterBoneHide");
		
		ABP_Firearm_Base_C_UpdateCharacterBoneHide_Params params {};
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
	 * 		RVA    -> 0x04E01850
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateCharacterAnimInstance
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               bpp__GearAnimInstance__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECarrierArmour                                     bpp__Combination__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.UpdateCharacterAnimInstance");
		
		ABP_Firearm_Base_C_UpdateCharacterAnimInstance_Params params {};
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
	 * 		RVA    -> 0x04DB3880
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.ResetEquipmentPhysics
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Firearm_Base_C::ResetEquipmentPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.ResetEquipmentPhysics");
		
		ABP_Firearm_Base_C_ResetEquipmentPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB44C0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Firearm_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.ReceiveBeginPlay");
		
		ABP_Firearm_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E016F0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.OnExitedVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehicleSeatComponent*                       bpp__VehicleSeat__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::OnExitedVehicle(class UVehicleSeatComponent* bpp__VehicleSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.OnExitedVehicle");
		
		ABP_Firearm_Base_C_OnExitedVehicle_Params params {};
		params.bpp__VehicleSeat__pf = bpp__VehicleSeat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01660
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.OnEnteredVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehicleSeatComponent*                       bpp__VehicleSeat__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::OnEnteredVehicle(class UVehicleSeatComponent* bpp__VehicleSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.OnEnteredVehicle");
		
		ABP_Firearm_Base_C_OnEnteredVehicle_Params params {};
		params.bpp__VehicleSeat__pf = bpp__VehicleSeat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB39E0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.NewFunction_1
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Firearm_Base_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.NewFunction_1");
		
		ABP_Firearm_Base_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E015D0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.MolotovRagState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::MolotovRagState(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.MolotovRagState");
		
		ABP_Firearm_Base_C_MolotovRagState_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01540
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.Mesh3PLoaded
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::Mesh3PLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.Mesh3PLoaded");
		
		ABP_Firearm_Base_C_Mesh3PLoaded_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E014B0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnUpdateVisibleAmmoContainer
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bVisible__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::BlueprintOnUpdateVisibleAmmoContainer(bool bpp__bVisible__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnUpdateVisibleAmmoContainer");
		
		ABP_Firearm_Base_C_BlueprintOnUpdateVisibleAmmoContainer_Params params {};
		params.bpp__bVisible__pf = bpp__bVisible__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3CC0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnUnequipped
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Firearm_Base_C::BlueprintOnUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnUnequipped");
		
		ABP_Firearm_Base_C_BlueprintOnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3BE0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnPickedUp
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Firearm_Base_C::BlueprintOnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnPickedUp");
		
		ABP_Firearm_Base_C_BlueprintOnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB38E0
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnEquip
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Firearm_Base_C::BlueprintOnEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnEquip");
		
		ABP_Firearm_Base_C_BlueprintOnEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01420
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnDetachMeshFromPawn
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::BlueprintOnDetachMeshFromPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnDetachMeshFromPawn");
		
		ABP_Firearm_Base_C_BlueprintOnDetachMeshFromPawn_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01390
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnAttachToBack
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::BlueprintOnAttachToBack(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnAttachToBack");
		
		ABP_Firearm_Base_C_BlueprintOnAttachToBack_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01300
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnAttachMeshToPawn
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlueprintOnAttachMeshToPawn");
		
		ABP_Firearm_Base_C_BlueprintOnAttachMeshToPawn_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E01270
	 * 		Name   -> Function BP_Firearm_Base.BP_Firearm_Base_C.BlendOutMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Montage__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Firearm_Base.BP_Firearm_Base_C.BlendOutMontage");
		
		ABP_Firearm_Base_C_BlendOutMontage_Params params {};
		params.bpp__Montage__pf = bpp__Montage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Firearm_Base.BP_Firearm_Base_C.OnVehicleSeatChangeDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UVehicleSeatComponent*                       bpp__VehicleSeat__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::OnVehicleSeatChangeDelegate__DelegateSignature(class UVehicleSeatComponent* bpp__VehicleSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Firearm_Base.BP_Firearm_Base_C.OnVehicleSeatChangeDelegate__DelegateSignature");
		
		ABP_Firearm_Base_C_OnVehicleSeatChangeDelegate__DelegateSignature_Params params {};
		params.bpp__VehicleSeat__pf = bpp__VehicleSeat__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Firearm_Base.BP_Firearm_Base_C.ItemMeshLoadedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Firearm_Base_C::ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Firearm_Base.BP_Firearm_Base_C.ItemMeshLoadedDelegate__DelegateSignature");
		
		ABP_Firearm_Base_C_ItemMeshLoadedDelegate__DelegateSignature_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firearm_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Firearm_Base.BP_Firearm_Base_C");
		return ptr;
	}

}


