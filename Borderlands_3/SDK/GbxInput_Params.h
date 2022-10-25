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
	 * Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl
	 */
	struct UGbxInputComponent_StartInputConsumeKeyImpl_Params
	{	};

	/**
	 * Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl
	 */
	struct UGbxInputComponent_StartInputAction_Discrete_Impl_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        DiscreteAction;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConsumeEvent;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl
	 */
	struct UGbxInputComponent_InputAction_Continuous_Vector_Impl_Params
	{
	public:
		class UGbxInputActionData_Continuous_Vector*               AxisAction;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse
	 */
	struct UGbxInputEventHelpers_SigFunc_Button_PressPulse_Params
	{
	public:
		float                                                      NextPulseDelay;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxInput.GbxInputEventHelpers.SigFunc_Axis
	 */
	struct UGbxInputEventHelpers_SigFunc_Axis_Params
	{
	public:
		struct FVector                                             Val;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
