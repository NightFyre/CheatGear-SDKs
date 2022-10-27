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
	 * Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.OnAddingChild
	 */
	struct ABP_Helmet_OpsCore_N_C_OnAddingChild_Params
	{
	public:
		class AGBItem*                                             AddedChild;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.ExecuteUbergraph_BP_Helmet_OpsCore_N
	 */
	struct ABP_Helmet_OpsCore_N_C_ExecuteUbergraph_BP_Helmet_OpsCore_N_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z2US[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
