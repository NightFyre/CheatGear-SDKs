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
	 * Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetRightTrackThrottleInput
	 */
	struct UWheeledVehicleMovementComponentTank_SetRightTrackThrottleInput_Params
	{
	public:
		float                                                      InThrottle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetLeftTrackThrottleInput
	 */
	struct UWheeledVehicleMovementComponentTank_SetLeftTrackThrottleInput_Params
	{
	public:
		float                                                      InThrottle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetBothTracksThrottleInput
	 */
	struct UWheeledVehicleMovementComponentTank_SetBothTracksThrottleInput_Params
	{
	public:
		float                                                      InThrottle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetRightTrackSpeed
	 */
	struct UWheeledVehicleMovementComponentTank_GetRightTrackSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetLeftTrackSpeed
	 */
	struct UWheeledVehicleMovementComponentTank_GetLeftTrackSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
