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
	 * Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.Notify_Response
	 */
	struct UAction_Pet_KilledEnemy_C_Notify_Response_Params
	{	};

	/**
	 * Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.ExecuteUbergraph_Action_Pet_KilledEnemy
	 */
	struct UAction_Pet_KilledEnemy_C_ExecuteUbergraph_Action_Pet_KilledEnemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7DD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
