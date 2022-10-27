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
	 * Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompDamage
	 */
	struct UA_IronCub_Stomp_C_AN_StompDamage_Params
	{	};

	/**
	 * Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompKnockback
	 */
	struct UA_IronCub_Stomp_C_AN_StompKnockback_Params
	{	};

	/**
	 * Function A_IronCub_Stomp.A_IronCub_Stomp_C.ExecuteUbergraph_A_IronCub_Stomp
	 */
	struct UA_IronCub_Stomp_C_ExecuteUbergraph_A_IronCub_Stomp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3Y8T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
