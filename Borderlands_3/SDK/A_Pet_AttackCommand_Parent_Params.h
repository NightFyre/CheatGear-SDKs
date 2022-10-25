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
	 * Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.AttackCommandUsed
	 */
	struct UA_Pet_AttackCommand_Parent_C_AttackCommandUsed_Params
	{	};

	/**
	 * Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.OnServerBegin
	 */
	struct UA_Pet_AttackCommand_Parent_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.ExecuteUbergraph_A_Pet_AttackCommand_Parent
	 */
	struct UA_Pet_AttackCommand_Parent_C_ExecuteUbergraph_A_Pet_AttackCommand_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55FR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
