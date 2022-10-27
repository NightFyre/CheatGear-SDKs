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
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.SetMorph
	 */
	struct UCC_BASE_Character_Parent_C_SetMorph_Params
	{
	public:
		class USkeletalMeshComponent*                              bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Morph__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Apply__pf;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.GenerateHeadgearMorphName
	 */
	struct UCC_BASE_Character_Parent_C_GenerateHeadgearMorphName_Params
	{
	public:
		unsigned char                                              UnknownData_6Q9Y[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_V9H8[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__LocalMorphSuffix__pf;                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Morph__pf;                                          // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckMenuProfile
	 */
	struct UCC_BASE_Character_Parent_C_CheckMenuProfile_Params
	{
	public:
		bool                                                       bpp__Profile__pf;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEyeHeadgearMorph
	 */
	struct UCC_BASE_Character_Parent_C_CheckEyeHeadgearMorph_Params
	{
	public:
		unsigned char                                              UnknownData_BF72[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_8804[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Name__pf;                                           // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__NoMorph__pf;                                        // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.CheckEquipment
	 */
	struct UCC_BASE_Character_Parent_C_CheckEquipment_Params
	{
	public:
		ECarrierArmour                                             bpp__EquipmentCombination__pf;                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.BlueprintInitSharedState
	 */
	struct UCC_BASE_Character_Parent_C_BlueprintInitSharedState_Params
	{
	public:
		class USharedCosmeticState*                                bpp__NewState__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMorph
	 */
	struct UCC_BASE_Character_Parent_C_AttachmentSetMorph_Params
	{
	public:
		struct FCharacterCosmeticAttachedModel                     bpp__Attachment__pf__const;                              // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                bpp__MorphxTargetxName__pfTT;                            // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMorphTargetPair>                            bpp__MorphxArray__pfT;                                   // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__CharacterCosmeticAttachedModel__pf;                 // 0x0088(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterialSlot
	 */
	struct UCC_BASE_Character_Parent_C_AttachmentSetMaterialSlot_Params
	{
	public:
		int32_t                                                    bpp__Array__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__MaterialxSlotxName__pfTT;                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M9YF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharacterCosmeticAttachedModel                     bpp__AttachmentReference__pf__const;                     // 0x0010(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__CharacterCosmeticAttachedModel__pf;                 // 0x0080(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentSetMaterial
	 */
	struct UCC_BASE_Character_Parent_C_AttachmentSetMaterial_Params
	{
	public:
		int32_t                                                    bpp__Array__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__MaterialxSlotxName__pfTT;                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J4VO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  bpp__Material__pf;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__AttachmentReference__pf;                            // 0x0018(0x0070)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__CharacterCosmeticAttachedModel__pf;                 // 0x0088(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_Character_Parent.CC_BASE_Character_Parent_C.AttachmentBreakMake
	 */
	struct UCC_BASE_Character_Parent_C_AttachmentBreakMake_Params
	{
	public:
		struct FCharacterCosmeticAttachedModel                     bpp__Attachment__pf;                                     // 0x0000(0x0070)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FCharacterCosmeticAttachedModel                     bpp__Reference__pf;                                      // 0x0070(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
