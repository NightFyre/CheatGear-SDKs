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
	 * Function BPI_Door.BPI_Door_C.GetDoorFeedbackState
	 */
	struct UBPI_Door_C_GetDoorFeedbackState_Params
	{
	public:
		Enum_States_DoorLocked                                     FeedbackState;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.SetDoorFeedbackState
	 */
	struct UBPI_Door_C_SetDoorFeedbackState_Params
	{
	public:
		Enum_States_DoorLocked                                     FeedbackState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.GetDoorInteractiveState
	 */
	struct UBPI_Door_C_GetDoorInteractiveState_Params
	{
	public:
		bool                                                       Interactive;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.GetDoorLockedState
	 */
	struct UBPI_Door_C_GetDoorLockedState_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.GetDoorState
	 */
	struct UBPI_Door_C_GetDoorState_Params
	{
	public:
		Enum_Door_State                                            DoorState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.SetDoorInteractiveState
	 */
	struct UBPI_Door_C_SetDoorInteractiveState_Params
	{
	public:
		bool                                                       Interactive;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.SetDoorLockedState
	 */
	struct UBPI_Door_C_SetDoorLockedState_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Door.BPI_Door_C.SetDoorState
	 */
	struct UBPI_Door_C_SetDoorState_Params
	{
	public:
		Enum_Door_State                                            DoorState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
