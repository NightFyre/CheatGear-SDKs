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
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdatEquipmentOnBack
	 */
	struct ABP_Gear_NVG_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateNightVisionState
	 */
	struct ABP_Gear_NVG_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateInsurgentNVGState
	 */
	struct ABP_Gear_NVG_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateGearCopyPoseAnim
	 */
	struct ABP_Gear_NVG_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KF43[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_07LE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateGearBoneVisibility
	 */
	struct ABP_Gear_NVG_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateGasMaskState
	 */
	struct ABP_Gear_NVG_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateGasmaskReference
	 */
	struct ABP_Gear_NVG_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateCharacterBoneHide
	 */
	struct ABP_Gear_NVG_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.UpdateCharacterAnimInstance
	 */
	struct ABP_Gear_NVG_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_078P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.ResetEquipmentPhysics
	 */
	struct ABP_Gear_NVG_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.NewFunction_1
	 */
	struct ABP_Gear_NVG_C_NewFunction_1_Params
	{	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.MolotovRagState
	 */
	struct ABP_Gear_NVG_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Gear_NVG.BP_Gear_NVG_C.BlendOutMontage
	 */
	struct ABP_Gear_NVG_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
