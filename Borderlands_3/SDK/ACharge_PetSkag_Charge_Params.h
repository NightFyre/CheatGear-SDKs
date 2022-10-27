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
	 * Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.Notify_Melee
	 */
	struct UACharge_PetSkag_Charge_C_Notify_Melee_Params
	{	};

	/**
	 * Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.ExecuteUbergraph_ACharge_PetSkag_Charge
	 */
	struct UACharge_PetSkag_Charge_C_ExecuteUbergraph_ACharge_PetSkag_Charge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6BHK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
