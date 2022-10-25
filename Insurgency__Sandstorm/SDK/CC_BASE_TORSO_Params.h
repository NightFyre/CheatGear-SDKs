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
	 * Function CC_BASE_TORSO.CC_BASE_TORSO_C.UpdateTorsoMorph
	 */
	struct UCC_BASE_TORSO_C_UpdateTorsoMorph_Params
	{
	public:
		ECarrierArmour                                             bpp__EquipmentCombination__pf;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DO8H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__TorsoMorph__pf;                                     // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_TORSO.CC_BASE_TORSO_C.BlueprintInitCosmetic
	 */
	struct UCC_BASE_TORSO_C_BlueprintInitCosmetic_Params
	{
	public:
		class UClass*                                              bpp__VariationClass__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_TORSO.CC_BASE_TORSO_C.BlueprintCosmeticMeshLoaded
	 */
	struct UCC_BASE_TORSO_C_BlueprintCosmeticMeshLoaded_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__SkeletalMesh__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__CosmeticModel__pf__const;                           // 0x0008(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFirstPerson__pf__const;                            // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bBodyMesh__pf__const;                               // 0x0079(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
