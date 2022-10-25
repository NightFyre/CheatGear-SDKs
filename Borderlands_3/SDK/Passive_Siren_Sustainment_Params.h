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
	 * Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.OnActivated
	 */
	struct UPassive_Siren_Sustainment_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.ExecuteUbergraph_Passive_Siren_Sustainment
	 */
	struct UPassive_Siren_Sustainment_C_ExecuteUbergraph_Passive_Siren_Sustainment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUPY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
