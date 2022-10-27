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
	 * Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.Notify_Dialog
	 */
	struct UAction_Pet_StartCombat_C_Notify_Dialog_Params
	{	};

	/**
	 * Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.ExecuteUbergraph_Action_Pet_StartCombat
	 */
	struct UAction_Pet_StartCombat_C_ExecuteUbergraph_Action_Pet_StartCombat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PXX5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
