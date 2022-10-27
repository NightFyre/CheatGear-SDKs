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
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.DetermineActorsToIgnore
	 */
	struct UBP_GBItemBeamComponent_C_DetermineActorsToIgnore_Params
	{	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ReceiveTick
	 */
	struct UBP_GBItemBeamComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.PerformTrace
	 */
	struct UBP_GBItemBeamComponent_C_PerformTrace_Params
	{	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetDrawBeam
	 */
	struct UBP_GBItemBeamComponent_C_SetDrawBeam_Params
	{
	public:
		bool                                                       bDrawBeam;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.SetBeamParticleSystem
	 */
	struct UBP_GBItemBeamComponent_C_SetBeamParticleSystem_Params
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.InternalUpdateBeam
	 */
	struct UBP_GBItemBeamComponent_C_InternalUpdateBeam_Params
	{	};

	/**
	 * Function BP_GBItemBeamComponent.BP_GBItemBeamComponent_C.ExecuteUbergraph_BP_GBItemBeamComponent
	 */
	struct UBP_GBItemBeamComponent_C_ExecuteUbergraph_BP_GBItemBeamComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
