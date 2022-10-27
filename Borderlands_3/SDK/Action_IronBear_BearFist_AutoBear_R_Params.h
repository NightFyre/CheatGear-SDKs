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
	 * Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.IronBearMeleeNotify
	 */
	struct UAction_IronBear_BearFist_AutoBear_R_C_IronBearMeleeNotify_Params
	{	};

	/**
	 * Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.OnServerBegin
	 */
	struct UAction_IronBear_BearFist_AutoBear_R_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R
	 */
	struct UAction_IronBear_BearFist_AutoBear_R_C_ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNRN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
