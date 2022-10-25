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
	 * Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.SetColourBaseParameters
	 */
	struct UCV_BASE_Dynamic_Character_Parent_C_SetColourBaseParameters_Params
	{
	public:
		int32_t                                                    bpp__Index__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__ParameterName__pf__const;                           // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__ColourValue__pf;                                    // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.CreateVariationDynamicMaterial
	 */
	struct UCV_BASE_Dynamic_Character_Parent_C_CreateVariationDynamicMaterial_Params
	{
	public:
		class UMeshComponent*                                      bpp__SkeletalMesh__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__MatID__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1YHI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  bpp__OptionalMaterial__pf;                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            bpp__DynamicMaterial__pf;                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.BlueprintInitVariation
	 */
	struct UCV_BASE_Dynamic_Character_Parent_C_BlueprintInitVariation_Params
	{
	public:
		class UCosmeticItem*                                       bpp__OuterCosmetic__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CV_BASE_Dynamic_Character_Parent.CV_BASE_Dynamic_Character_Parent_C.ApplyCamoTexture
	 */
	struct UCV_BASE_Dynamic_Character_Parent_C_ApplyCamoTexture_Params
	{
	public:
		class UMaterialInstanceDynamic*                            bpp__DynamicMaterial__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
