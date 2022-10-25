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
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicle
	 */
	struct UABP_VehiclePassenger_C_OnKilledInVehicle_Params
	{	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnEnteredVehicle
	 */
	struct UABP_VehiclePassenger_C_OnEnteredVehicle_Params
	{
	public:
		class UVehicleSeatComponent*                               bpp__VehicleSeat__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919
	 */
	struct UABP_VehiclePassenger_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919_Params
	{	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572
	 */
	struct UABP_VehiclePassenger_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572_Params
	{	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintUpdateAnimation
	 */
	struct UABP_VehiclePassenger_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintInitializeAnimation
	 */
	struct UABP_VehiclePassenger_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintBeginPlay
	 */
	struct UABP_VehiclePassenger_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.AnimGraph
	 */
	struct UABP_VehiclePassenger_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnVehicleSeatChangeDelegate__DelegateSignature
	 */
	struct UABP_VehiclePassenger_C_OnVehicleSeatChangeDelegate__DelegateSignature_Params
	{
	public:
		class UVehicleSeatComponent*                               bpp__VehicleSeat__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicleSeatDelegate__DelegateSignature
	 */
	struct UABP_VehiclePassenger_C_OnKilledInVehicleSeatDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
