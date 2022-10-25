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
	 * Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed
	 */
	struct UAction_IronBear_BearFist_Base_C_NotifyUsed_Params
	{	};

	/**
	 * Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit
	 */
	struct UAction_IronBear_BearFist_Base_C_DoBearFistMeleeHit_Params
	{
	public:
		bool                                                       NormalFireMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin
	 */
	struct UAction_IronBear_BearFist_Base_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base
	 */
	struct UAction_IronBear_BearFist_Base_C_ExecuteUbergraph_Action_IronBear_BearFist_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EL33[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
