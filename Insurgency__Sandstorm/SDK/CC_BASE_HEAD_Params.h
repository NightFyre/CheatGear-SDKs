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
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.Update Scarification
	 */
	struct UCC_BASE_HEAD_C_Update_Scarification_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__SkeletalMesh__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Condition__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GJCQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__MaterialSlotName__pf;                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.SetupTattoos
	 */
	struct UCC_BASE_HEAD_C_SetupTattoos_Params
	{
	public:
		bool                                                       bpp__FirstPerson__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.CreateArmsDynamicMaterials
	 */
	struct UCC_BASE_HEAD_C_CreateArmsDynamicMaterials_Params
	{
	public:
		bool                                                       bpp__FirstPerson__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6LE8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            bpp__DynamicMaterial__pf;                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintInitCosmetic
	 */
	struct UCC_BASE_HEAD_C_BlueprintInitCosmetic_Params
	{
	public:
		class UClass*                                              bpp__VariationClass__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.BlueprintCosmeticMeshLoaded
	 */
	struct UCC_BASE_HEAD_C_BlueprintCosmeticMeshLoaded_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__SkeletalMesh__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__CosmeticModel__pf__const;                           // 0x0008(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFirstPerson__pf__const;                            // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bBodyMesh__pf__const;                               // 0x0079(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.Attached Mesh Index
	 */
	struct UCC_BASE_HEAD_C_Attached_Mesh_Index_Params
	{
	public:
		int32_t                                                    bpp__Output__pf;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_HEAD.CC_BASE_HEAD_C.Apply Head Morph if Needed
	 */
	struct UCC_BASE_HEAD_C_Apply_Head_Morph_if_Needed_Params
	{
	public:
		class USkeletalMeshComponent*                              bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
