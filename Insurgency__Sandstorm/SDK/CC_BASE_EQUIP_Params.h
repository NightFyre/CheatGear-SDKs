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
	 * Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateVariation
	 */
	struct UCC_BASE_EQUIP_C_UpdateVariation_Params
	{	};

	/**
	 * Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.UpdateEquipmentVariation
	 */
	struct UCC_BASE_EQUIP_C_UpdateEquipmentVariation_Params
	{
	public:
		class UMeshComponent*                                      bpp__EquipmentMesh__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.GetEquipmentMesh
	 */
	struct UCC_BASE_EQUIP_C_GetEquipmentMesh_Params
	{
	public:
		class UMeshComponent*                                      bpp__EquipmentMesh__pf;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.CreateStoreEquipmentDynamic
	 */
	struct UCC_BASE_EQUIP_C_CreateStoreEquipmentDynamic_Params
	{
	public:
		class UCosmeticVariation*                                  bpp__Variation__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMaterialInstance*>                           bpp__ColourMaterials__pf;                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMaterialInstance*>                           bpp__CamoMaterials__pf;                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__MaterialArrayValue__pf;                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W8WK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMaterialInstanceDynamic*>                    bpp__DynamicArray__pf;                                   // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      bpp__Mesh__pf;                                           // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__SlotName__pf;                                       // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_EQUIP.CC_BASE_EQUIP_C.BlueprintInitCosmetic
	 */
	struct UCC_BASE_EQUIP_C_BlueprintInitCosmetic_Params
	{
	public:
		class UClass*                                              bpp__VariationClass__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
