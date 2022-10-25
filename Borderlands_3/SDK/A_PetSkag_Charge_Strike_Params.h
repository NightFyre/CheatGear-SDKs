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
	 * Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.Notify_Melee
	 */
	struct UA_PetSkag_Charge_Strike_C_Notify_Melee_Params
	{	};

	/**
	 * Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.ExecuteUbergraph_A_PetSkag_Charge_Strike
	 */
	struct UA_PetSkag_Charge_Strike_C_ExecuteUbergraph_A_PetSkag_Charge_Strike_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y6MS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
