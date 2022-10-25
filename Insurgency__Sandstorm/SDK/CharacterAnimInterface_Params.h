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
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdatEquipmentOnBack
	 */
	struct UCharacterAnimInterface_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateNightVisionState
	 */
	struct UCharacterAnimInterface_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateInsurgentNVGState
	 */
	struct UCharacterAnimInterface_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearCopyPoseAnim
	 */
	struct UCharacterAnimInterface_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WHXG[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S4MN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGearBoneVisibility
	 */
	struct UCharacterAnimInterface_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasMaskState
	 */
	struct UCharacterAnimInterface_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateGasmaskReference
	 */
	struct UCharacterAnimInterface_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterBoneHide
	 */
	struct UCharacterAnimInterface_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.UpdateCharacterAnimInstance
	 */
	struct UCharacterAnimInterface_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SIO1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.ResetEquipmentPhysics
	 */
	struct UCharacterAnimInterface_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.NewFunction_1
	 */
	struct UCharacterAnimInterface_C_NewFunction_1_Params
	{	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.MolotovRagState
	 */
	struct UCharacterAnimInterface_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterAnimInterface.CharacterAnimInterface_C.BlendOutMontage
	 */
	struct UCharacterAnimInterface_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
