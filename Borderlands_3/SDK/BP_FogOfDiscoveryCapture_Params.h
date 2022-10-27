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
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.FinishZoneMapFoD
	 */
	struct ABP_FogOfDiscoveryCapture_C_FinishZoneMapFoD_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.CaptureZoneMapFoD
	 */
	struct ABP_FogOfDiscoveryCapture_C_CaptureZoneMapFoD_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.UserConstructionScript
	 */
	struct ABP_FogOfDiscoveryCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.GetData
	 */
	struct ABP_FogOfDiscoveryCapture_C_GetData_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded
	 */
	struct ABP_FogOfDiscoveryCapture_C_OnFogLevelLoaded_Params
	{
	public:
		class UZoneMapData*                                        UpdatedZoneMap;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay
	 */
	struct ABP_FogOfDiscoveryCapture_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveBeginPlay
	 */
	struct ABP_FogOfDiscoveryCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture
	 */
	struct ABP_FogOfDiscoveryCapture_C_ExecuteUbergraph_BP_FogOfDiscoveryCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P912[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
