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
	 * Function CV_COMB_BASE.CV_COMB_BASE_C.UpdateCombColourStruct
	 */
	struct UCV_COMB_BASE_C_UpdateCombColourStruct_Params
	{
	public:
		struct FLinearColor                                        bpp__NewColour__pf;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EColourChannels                                            bpp__EColourChannel__pf;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_59G8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FColourStruct                                       bpp__ColourStruct__pf;                                   // 0x0014(0x0050)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CV_COMB_BASE.CV_COMB_BASE_C.GetColorFromVariation
	 */
	struct UCV_COMB_BASE_C_GetColorFromVariation_Params
	{
	public:
		class UClass*                                              bpp__Class__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__MasklessColour__pf;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__LayerxOne__pfT;                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__LayerxTwo__pfT;                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__LayerxThree__pfT;                                   // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__LayerxFour__pfT;                                    // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CV_COMB_BASE.CV_COMB_BASE_C.BlueprintCosmeticItemMeshLoaded
	 */
	struct UCV_COMB_BASE_C_BlueprintCosmeticItemMeshLoaded_Params
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
