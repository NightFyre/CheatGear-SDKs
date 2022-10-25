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
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnEnd
	 */
	struct UAction_Melee_Operative_Miss_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLP4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBeginBringUpWeapon
	 */
	struct UAction_Melee_Operative_Miss_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOnOperativeBlades
	 */
	struct UAction_Melee_Operative_Miss_C_TurnOnOperativeBlades_Params
	{	};

	/**
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOffOperativeBlades
	 */
	struct UAction_Melee_Operative_Miss_C_TurnOffOperativeBlades_Params
	{	};

	/**
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBegin
	 */
	struct UAction_Melee_Operative_Miss_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.ExecuteUbergraph_Action_Melee_Operative_Miss
	 */
	struct UAction_Melee_Operative_Miss_C_ExecuteUbergraph_Action_Melee_Operative_Miss_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
