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
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.UserConstructionScript
	 */
	struct ABP_GalaxyPOI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.End Zone Map Cursor Over
	 */
	struct ABP_GalaxyPOI_C_End_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.Begin Zone Map Cursor Over
	 */
	struct ABP_GalaxyPOI_C_Begin_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.Activate POI
	 */
	struct ABP_GalaxyPOI_C_Activate_POI_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.ReceiveBeginPlay
	 */
	struct ABP_GalaxyPOI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.On Begin Zone Map Cursor Over
	 */
	struct ABP_GalaxyPOI_C_On_Begin_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.On End Zone Map Cursor Over
	 */
	struct ABP_GalaxyPOI_C_On_End_Zone_Map_Cursor_Over_Params
	{	};

	/**
	 * Function BP_GalaxyPOI.BP_GalaxyPOI_C.ExecuteUbergraph_BP_GalaxyPOI
	 */
	struct ABP_GalaxyPOI_C_ExecuteUbergraph_BP_GalaxyPOI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ROLP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
