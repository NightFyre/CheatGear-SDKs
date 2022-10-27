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
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript
	 */
	struct ABP_ZoneMapPOI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI
	 */
	struct ABP_ZoneMapPOI_C_Activate_POI_Params
	{	};

	/**
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMapPOI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over
	 */
	struct ABP_ZoneMapPOI_C_Begin_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over
	 */
	struct ABP_ZoneMapPOI_C_End_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI
	 */
	struct ABP_ZoneMapPOI_C_ExecuteUbergraph_BP_ZoneMapPOI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
