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
	 * Function BP_ZoneMapSection.BP_ZoneMapSection_C.UserConstructionScript
	 */
	struct ABP_ZoneMapSection_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMapSection.BP_ZoneMapSection_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMapSection_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMapSection.BP_ZoneMapSection_C.ExecuteUbergraph_BP_ZoneMapSection
	 */
	struct ABP_ZoneMapSection_C_ExecuteUbergraph_BP_ZoneMapSection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
