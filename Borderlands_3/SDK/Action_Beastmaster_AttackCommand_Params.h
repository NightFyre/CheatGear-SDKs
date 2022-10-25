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
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack
	 */
	struct UAction_Beastmaster_AttackCommand_C_Notify_Attack_Params
	{	};

	/**
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon
	 */
	struct UAction_Beastmaster_AttackCommand_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin
	 */
	struct UAction_Beastmaster_AttackCommand_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback
	 */
	struct UAction_Beastmaster_AttackCommand_C_Notify_Feedback_Params
	{	};

	/**
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd
	 */
	struct UAction_Beastmaster_AttackCommand_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LB1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand
	 */
	struct UAction_Beastmaster_AttackCommand_C_ExecuteUbergraph_Action_Beastmaster_AttackCommand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
