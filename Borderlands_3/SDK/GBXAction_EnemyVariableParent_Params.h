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
	 * Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation
	 */
	struct UGBXAction_EnemyVariableParent_C_GetLocation_Params
	{
	public:
		struct FVector                                             MyLocation;                                              // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin
	 */
	struct UGBXAction_EnemyVariableParent_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent
	 */
	struct UGBXAction_EnemyVariableParent_C_ExecuteUbergraph_GBXAction_EnemyVariableParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SNTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
