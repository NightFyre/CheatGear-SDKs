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
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.StoreCosmeticMorphNames
	 */
	struct ABP_Gear_SECNVG_Base_C_StoreCosmeticMorphNames_Params
	{
	public:
		class USharedCosmeticState*                                bpp__CosmeticState__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Gear_SECNVG_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.OnThirdPersonMeshesVisibilityChanged
	 */
	struct ABP_Gear_SECNVG_Base_C_OnThirdPersonMeshesVisibilityChanged_Params
	{
	public:
		bool                                                       bpp__bVisible__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bPropagateToChildren__pf;                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.MeshLoaded
	 */
	struct ABP_Gear_SECNVG_Base_C_MeshLoaded_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__MeshComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.MergedMesh
	 */
	struct ABP_Gear_SECNVG_Base_C_MergedMesh_Params
	{	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.BlueprintSpawnedPreviewActor
	 */
	struct ABP_Gear_SECNVG_Base_C_BlueprintSpawnedPreviewActor_Params
	{
	public:
		bool                                                       bpp__bFirstPerson__pf__const;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UWIT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           bpp__PlayerInventory__pf;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.BlueprintOnTransferToRagdoll
	 */
	struct ABP_Gear_SECNVG_Base_C_BlueprintOnTransferToRagdoll_Params
	{
	public:
		class ARagdoll*                                            bpp__Ragdoll__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.BlueprintOnPickedUp
	 */
	struct ABP_Gear_SECNVG_Base_C_BlueprintOnPickedUp_Params
	{	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.BlueprintOnAttachMeshToPawn
	 */
	struct ABP_Gear_SECNVG_Base_C_BlueprintOnAttachMeshToPawn_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.BlueprintInteractableStateChanged
	 */
	struct ABP_Gear_SECNVG_Base_C_BlueprintInteractableStateChanged_Params
	{
	public:
		EEquipableState                                            bpp__NewState__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.AttachGogglesToComponent
	 */
	struct ABP_Gear_SECNVG_Base_C_AttachGogglesToComponent_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__TargetComponent__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.ApplyNVGUnitMorphs
	 */
	struct ABP_Gear_SECNVG_Base_C_ApplyNVGUnitMorphs_Params
	{
	public:
		bool                                                       bpp__NVGUp__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Advanced__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.ApplyHarnessMorphs
	 */
	struct ABP_Gear_SECNVG_Base_C_ApplyHarnessMorphs_Params
	{
	public:
		class USkeletalMeshComponent*                              bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.OnMergedMeshSetDelegate__DelegateSignature
	 */
	struct ABP_Gear_SECNVG_Base_C_OnMergedMeshSetDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BP_Gear_SECNVG_Base.BP_Gear_SECNVG_Base_C.ItemMeshLoadedDelegate__DelegateSignature
	 */
	struct ABP_Gear_SECNVG_Base_C_ItemMeshLoadedDelegate__DelegateSignature_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__MeshComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
