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
	 * Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnBeginBringUpWeapon
	 */
	struct UAction_Melee_Resonator_Success_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.OnEnd
	 */
	struct UAction_Melee_Resonator_Success_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAJG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Start
	 */
	struct UAction_Melee_Resonator_Success_C_Resonator_Start_Params
	{	};

	/**
	 * Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.Resonator_Stop
	 */
	struct UAction_Melee_Resonator_Success_C_Resonator_Stop_Params
	{	};

	/**
	 * Function Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C.ExecuteUbergraph_Action_Melee_Resonator_Success
	 */
	struct UAction_Melee_Resonator_Success_C_ExecuteUbergraph_Action_Melee_Resonator_Success_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NJS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
