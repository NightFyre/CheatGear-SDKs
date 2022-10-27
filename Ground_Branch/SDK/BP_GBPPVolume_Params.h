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
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.UserConstructionScript
	 */
	struct ABP_GBPPVolume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.ReceiveBeginPlay
	 */
	struct ABP_GBPPVolume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.BindToSkyActor
	 */
	struct ABP_GBPPVolume_C_BindToSkyActor_Params
	{	};

	/**
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.OnTimeSpanChanged_Event_1
	 */
	struct ABP_GBPPVolume_C_OnTimeSpanChanged_Event_1_Params
	{
	public:
		class FName                                                Timespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.SetEnabled
	 */
	struct ABP_GBPPVolume_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GBPPVolume.BP_GBPPVolume_C.ExecuteUbergraph_BP_GBPPVolume
	 */
	struct ABP_GBPPVolume_C_ExecuteUbergraph_BP_GBPPVolume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
