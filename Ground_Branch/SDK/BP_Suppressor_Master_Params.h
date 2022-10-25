#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingUnequipped
	 */
	struct ABP_Suppressor_Master_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingEquipped
	 */
	struct ABP_Suppressor_Master_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_Suppressor_Master.BP_Suppressor_Master_C.ExecuteUbergraph_BP_Suppressor_Master
	 */
	struct ABP_Suppressor_Master_C_ExecuteUbergraph_BP_Suppressor_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVI7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
