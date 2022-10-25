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
	 * Function ControlRig.ControlRigComponent.OnPreInitialize
	 */
	struct UControlRigComponent_OnPreInitialize_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPreEvaluate
	 */
	struct UControlRigComponent_OnPreEvaluate_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPostInitialize
	 */
	struct UControlRigComponent_OnPostInitialize_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPostEvaluate
	 */
	struct UControlRigComponent_OnPostEvaluate_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.BP_GetControlRig
	 */
	struct UControlRigComponent_BP_GetControlRig_Params
	{
	public:
		class UControlRig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
