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
	 * Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.AN_SummonOrb
	 */
	struct UAction_Phasetrance_RecallOrb_C_AN_SummonOrb_Params
	{	};

	/**
	 * Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerBegin
	 */
	struct UAction_Phasetrance_RecallOrb_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerEnd
	 */
	struct UAction_Phasetrance_RecallOrb_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D4JF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.ExecuteUbergraph_Action_Phasetrance_RecallOrb
	 */
	struct UAction_Phasetrance_RecallOrb_C_ExecuteUbergraph_Action_Phasetrance_RecallOrb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
