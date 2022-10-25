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
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdatEquipmentOnBack
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateNightVisionState
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateMorphsForCosmeticItem
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateMorphsForCosmeticItem_Params
	{
	public:
		class UCC_BASE_Character_Parent_C*                         bpp__InCosmeticItem__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__InNewMorph__pf;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__InProfile__pf;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateInsurgentNVGState
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseSettings
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateGearCopyPoseSettings_Params
	{
	public:
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H7LI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__CarrierArmour__pf;                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearCopyPoseAnim
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PA8J[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BIB9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGearBoneVisibility
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasMaskState
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateGasmaskReference
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentVisuals
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateEquipmentVisuals_Params
	{
	public:
		bool                                                       bpp__bForce__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S6ED[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 bpp__Inventory__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateEquipmentAttachment
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateEquipmentAttachment_Params
	{
	public:
		bool                                                       bpp__Profile__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMorphs
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateCosmeticMorphs_Params
	{
	public:
		class USkeletalMeshComponent*                              bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewMorphs__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__OldMorphs__pf;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticMeshesMorphs
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateCosmeticMeshesMorphs_Params
	{
	public:
		class UCC_BASE_TORSO_C*                                    bpp__Torso__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCC_BASE_FACEWEAR_Shemagh_C*                         bpp__Shemagh__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCC_BASE_HIJAB_C*                                    bpp__Hijab__pf;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCC_BASE_HDGR_C*                                     bpp__Headgear__pf;                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              bpp__MergedMesh__pf;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Profile__pf;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCosmeticBoneVisibility
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateCosmeticBoneVisibility_Params
	{	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterBoneHide
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.UpdateCharacterAnimInstance
	 */
	struct ABP_Gear_BASE_Carrier_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AN7U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.Update_EquipmentChangeInterface
	 */
	struct ABP_Gear_BASE_Carrier_C_Update_EquipmentChangeInterface_Params
	{	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.SetCarrierArmourCombination
	 */
	struct ABP_Gear_BASE_Carrier_C_SetCarrierArmourCombination_Params
	{
	public:
		EItemGearLevel                                             bpp__Item__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.ResetEquipmentPhysics
	 */
	struct ABP_Gear_BASE_Carrier_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCosmeticMeshesMorphs
	 */
	struct ABP_Gear_BASE_Carrier_C_OnUpdateCosmeticMeshesMorphs_Params
	{
	public:
		bool                                                       bpp__bProfile__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.OnUpdateCharacterAnimInstance
	 */
	struct ABP_Gear_BASE_Carrier_C_OnUpdateCharacterAnimInstance_Params
	{
	public:
		bool                                                       bpp__bProfile__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.NewFunction_1
	 */
	struct ABP_Gear_BASE_Carrier_C_NewFunction_1_Params
	{	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.MolotovRagState
	 */
	struct ABP_Gear_BASE_Carrier_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetSkeletalMesh3P
	 */
	struct ABP_Gear_BASE_Carrier_C_GetSkeletalMesh3P_Params
	{
	public:
		EItemGearLevel                                             bpp__Item__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N08K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.GetCurrentArmourLevel
	 */
	struct ABP_Gear_BASE_Carrier_C_GetCurrentArmourLevel_Params
	{
	public:
		EItemGearLevel                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlueprintOnAttachMeshToPawn
	 */
	struct ABP_Gear_BASE_Carrier_C_BlueprintOnAttachMeshToPawn_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.BlendOutMontage
	 */
	struct ABP_Gear_BASE_Carrier_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_BASE_Carrier.BP_Gear_BASE_Carrier_C.AddSocketComponent
	 */
	struct ABP_Gear_BASE_Carrier_C_AddSocketComponent_Params
	{
	public:
		class USkeletalMesh*                                       bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Socket__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
