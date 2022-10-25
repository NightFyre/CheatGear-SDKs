#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Stretch
	 */
	struct UBP_CharacterInterface_C_IK_Limb_Stretch_Params
	{
	public:
		float                                                      ArmStretch;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      SpineStretch;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LegStretch;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Active
	 */
	struct UBP_CharacterInterface_C_IK_Limb_Active_Params
	{
	public:
		EIKLimbName                                                LimbId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Active;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ELimbIKSpace                                               CoordinateSpace;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Strength
	 */
	struct UBP_CharacterInterface_C_IK_Limb_Update_Strength_Params
	{
	public:
		EIKLimbName                                                LimbId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1GJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LocationStrength;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotationStrength;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Blend Timing
	 */
	struct UBP_CharacterInterface_C_IK_Limb_Blend_Timing_Params
	{
	public:
		EIKLimbName                                                LimbId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1OX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlendIn;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOut;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.IK Limb Update Transform
	 */
	struct UBP_CharacterInterface_C_IK_Limb_Update_Transform_Params
	{
	public:
		EIKLimbName                                                LimbId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UC8J[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          TransformUpdate;                                         // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanForce
	 */
	struct UBP_CharacterInterface_C_CapstanForce_Params
	{
	public:
		float                                                      IndividualForce;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Y6B[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          LH_IK;                                                   // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          RH_IK;                                                   // 0x0040(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.DockingInterface
	 */
	struct UBP_CharacterInterface_C_DockingInterface_Params
	{
	public:
		struct FBP_Docking                                         Docking;                                                 // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.CapstanRotationSpeed
	 */
	struct UBP_CharacterInterface_C_CapstanRotationSpeed_Params
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterInterface.BP_CharacterInterface_C.Update Athena Character
	 */
	struct UBP_CharacterInterface_C_Update_Athena_Character_Params
	{
	public:
		class AAthenaCharacter*                                    AthenaCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
