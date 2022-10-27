#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UserConstructionScript
	 */
	struct ABP_Gear_GasMask_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdatEquipmentOnBack
	 */
	struct ABP_Gear_GasMask_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateNightVisionState
	 */
	struct ABP_Gear_GasMask_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateInsurgentNVGState
	 */
	struct ABP_Gear_GasMask_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateHeadgearEyewear
	 */
	struct ABP_Gear_GasMask_C_UpdateHeadgearEyewear_Params
	{
	public:
		bool                                                       bpp__GasMaskEquipped__pf;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2RG7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USharedCosmeticState*                                bpp__CosmeticState__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearCopyPoseAnim
	 */
	struct ABP_Gear_GasMask_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8TEE[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U1E2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGearBoneVisibility
	 */
	struct ABP_Gear_GasMask_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasMaskState
	 */
	struct ABP_Gear_GasMask_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateGasmaskReference
	 */
	struct ABP_Gear_GasMask_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterBoneHide
	 */
	struct ABP_Gear_GasMask_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.UpdateCharacterAnimInstance
	 */
	struct ABP_Gear_GasMask_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HFUX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.ToggleEyewear
	 */
	struct ABP_Gear_GasMask_C_ToggleEyewear_Params
	{
	public:
		bool                                                       bpp__Show__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_497W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__SkeletalMesh__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.SetupPreviewAttachment
	 */
	struct ABP_Gear_GasMask_C_SetupPreviewAttachment_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.ResetEquipmentPhysics
	 */
	struct ABP_Gear_GasMask_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.NewFunction_1
	 */
	struct ABP_Gear_GasMask_C_NewFunction_1_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.MolotovRagState
	 */
	struct ABP_Gear_GasMask_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.MeshLoaded
	 */
	struct ABP_Gear_GasMask_C_MeshLoaded_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__MeshComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetHeadCosmetic
	 */
	struct ABP_Gear_GasMask_C_GetHeadCosmetic_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.GetEquipmentMesh
	 */
	struct ABP_Gear_GasMask_C_GetEquipmentMesh_Params
	{
	public:
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.GasMaskSetMorph
	 */
	struct ABP_Gear_GasMask_C_GasMaskSetMorph_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintSpawnedPreviewActor
	 */
	struct ABP_Gear_GasMask_C_BlueprintSpawnedPreviewActor_Params
	{
	public:
		bool                                                       bpp__bFirstPerson__pf__const;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F6TR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           bpp__PlayerInventory__pf;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnPickedUp
	 */
	struct ABP_Gear_GasMask_C_BlueprintOnPickedUp_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintOnAttachMeshToPawn
	 */
	struct ABP_Gear_GasMask_C_BlueprintOnAttachMeshToPawn_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlueprintInteractableStateChanged
	 */
	struct ABP_Gear_GasMask_C_BlueprintInteractableStateChanged_Params
	{
	public:
		EEquipableState                                            bpp__NewState__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.BlendOutMontage
	 */
	struct ABP_Gear_GasMask_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGogglesToComponent
	 */
	struct ABP_Gear_GasMask_C_AttachGogglesToComponent_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__TargetComponent__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskWeapon
	 */
	struct ABP_Gear_GasMask_C_AttachGasMaskWeapon_Params
	{	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasmaskSocket
	 */
	struct ABP_Gear_GasMask_C_AttachGasmaskSocket_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__CompositeGear__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_GasMask.BP_Gear_GasMask_C.AttachGasMaskHead
	 */
	struct ABP_Gear_GasMask_C_AttachGasMaskHead_Params
	{	};

	/**
	 * DelegateFunction BP_Gear_GasMask.BP_Gear_GasMask_C.ItemMeshLoadedDelegate__DelegateSignature
	 */
	struct ABP_Gear_GasMask_C_ItemMeshLoadedDelegate__DelegateSignature_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__MeshComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
