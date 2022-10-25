#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	 */
	struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
	{
	public:
		float                                                      InStiffness;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	 */
	struct UClothingSimulationInteractor_PhysicsAssetUpdated_Params
	{	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	 */
	struct UClothingSimulationInteractor_EnableGravityOverride_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	 */
	struct UClothingSimulationInteractor_DisableGravityOverride_Params
	{	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	 */
	struct UClothingSimulationInteractor_ClothConfigUpdated_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
