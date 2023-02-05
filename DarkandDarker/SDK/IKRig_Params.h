#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function IKRig.IKRigComponent.SetIKRigGoalTransform
	 */
	struct UIKRigComponent_SetIKRigGoalTransform_Params
	{
	public:
		class FName                                                GoalName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7GVJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0060)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      PositionAlpha;                                           // 0x0070(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationAlpha;                                           // 0x0074(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	 */
	struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
	{
	public:
		class FName                                                GoalName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0008(0x0018)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               Rotation;                                                // 0x0020(0x0020)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      PositionAlpha;                                           // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationAlpha;                                           // 0x0044(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.SetIKRigGoal
	 */
	struct UIKRigComponent_SetIKRigGoal_Params
	{
	public:
		struct FIKRigGoal                                          Goal;                                                    // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.ClearAllGoals
	 */
	struct UIKRigComponent_ClearAllGoals_Params
	{	};

	/**
	 * Function IKRig.IKGoalCreatorInterface.AddIKGoals
	 */
	struct UIKGoalCreatorInterface_AddIKGoals_Params
	{
	public:
		TMap<class FName, struct FIKRigGoal>                       OutGoals;                                                // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
