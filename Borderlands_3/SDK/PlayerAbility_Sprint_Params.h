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
	 * Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle
	 */
	struct UPlayerAbility_Sprint_C_IsSprintToggle_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H76S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4
	 */
	struct UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3
	 */
	struct UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3_Params
	{
	public:
		class UGbxInputActionData_Discrete*                        Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint
	 */
	struct UPlayerAbility_Sprint_C_ExecuteUbergraph_PlayerAbility_Sprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PURQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
