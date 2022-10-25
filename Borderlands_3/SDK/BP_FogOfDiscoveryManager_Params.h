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
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript
	 */
	struct ABP_FogOfDiscoveryManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay
	 */
	struct ABP_FogOfDiscoveryManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map
	 */
	struct ABP_FogOfDiscoveryManager_C_Update_Map_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay
	 */
	struct ABP_FogOfDiscoveryManager_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture
	 */
	struct ABP_FogOfDiscoveryManager_C_Save_FOD_Texture_Params
	{	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick
	 */
	struct ABP_FogOfDiscoveryManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager
	 */
	struct ABP_FogOfDiscoveryManager_C_ExecuteUbergraph_BP_FogOfDiscoveryManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
