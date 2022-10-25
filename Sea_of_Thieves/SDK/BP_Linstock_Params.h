#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function BP_Linstock.BP_Linstock_C.UserConstructionScript
	 */
	struct ABP_Linstock_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Linstock.BP_Linstock_C.ReceiveBeginPlay
	 */
	struct ABP_Linstock_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Linstock.BP_Linstock_C.ExecuteUbergraph_BP_Linstock
	 */
	struct ABP_Linstock_C_ExecuteUbergraph_BP_Linstock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
