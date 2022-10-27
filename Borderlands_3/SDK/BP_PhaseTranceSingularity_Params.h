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
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors
	 */
	struct ABP_PhaseTranceSingularity_C_GetIgnoredActors_Params
	{
	public:
		TArray<class AActor*>                                      res;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration
	 */
	struct ABP_PhaseTranceSingularity_C_GetSingularityDuration_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript
	 */
	struct ABP_PhaseTranceSingularity_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay
	 */
	struct ABP_PhaseTranceSingularity_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity
	 */
	struct ABP_PhaseTranceSingularity_C_ConfigureSingularity_Params
	{	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested
	 */
	struct ABP_PhaseTranceSingularity_C_OnShutdownRequested_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast
	 */
	struct ABP_PhaseTranceSingularity_C_CleanShutdownMulticast_Params
	{	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem
	 */
	struct ABP_PhaseTranceSingularity_C_ReleaseParticleSystem_Params
	{	};

	/**
	 * Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity
	 */
	struct ABP_PhaseTranceSingularity_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
