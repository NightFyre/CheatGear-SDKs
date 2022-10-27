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
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
	 */
	struct UBPI_IO_Switch_C_GetSwitchFeedbackState_Params
	{
	public:
		Enum_States_SwitchFeedback                                 FeedbackState;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
	 */
	struct UBPI_IO_Switch_C_SetSwitchFeedbackState_Params
	{
	public:
		Enum_States_SwitchFeedback                                 FeedbackState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
	 */
	struct UBPI_IO_Switch_C_GetSwitchInteractiveState_Params
	{
	public:
		bool                                                       Interactive;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
	 */
	struct UBPI_IO_Switch_C_GetSwitchLockedState_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
	 */
	struct UBPI_IO_Switch_C_GetSwitchState_Params
	{
	public:
		Enum_Switch_State                                          SwitchState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
	 */
	struct UBPI_IO_Switch_C_SetSwitchInteractiveState_Params
	{
	public:
		bool                                                       Interactive;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
	 */
	struct UBPI_IO_Switch_C_SetSwitchLockedState_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
	 */
	struct UBPI_IO_Switch_C_SetSwitchState_Params
	{
	public:
		Enum_Switch_State                                          SwitchState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
