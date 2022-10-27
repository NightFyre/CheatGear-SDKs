#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
	 */
	struct UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params
	{
	public:
		float                                                      InStiffness;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	 */
	struct UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params
	{
	public:
		float                                                      InStiffness;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
	 */
	struct UClothingSimulationInteractorNv_EnableGravityOverride_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
	 */
	struct UClothingSimulationInteractorNv_DisableGravityOverride_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
