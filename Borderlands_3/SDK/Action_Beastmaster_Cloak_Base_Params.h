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
	 * Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_Stealth
	 */
	struct UAction_Beastmaster_Cloak_Base_C_Notify_Stealth_Params
	{	};

	/**
	 * Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_StealthFeedback
	 */
	struct UAction_Beastmaster_Cloak_Base_C_Notify_StealthFeedback_Params
	{	};

	/**
	 * Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.ExecuteUbergraph_Action_Beastmaster_Cloak_Base
	 */
	struct UAction_Beastmaster_Cloak_Base_C_ExecuteUbergraph_Action_Beastmaster_Cloak_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LGV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
