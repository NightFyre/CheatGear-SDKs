#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_Footprint.BP_Footprint_C.ReceiveBeginPlay
	 */
	struct ABP_Footprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Footprint.BP_Footprint_C.ReceiveTick
	 */
	struct ABP_Footprint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Footprint.BP_Footprint_C.BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature
	 */
	struct ABP_Footprint_C_BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       bDetected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1S71[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0008(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Footprint.BP_Footprint_C.ExecuteUbergraph_BP_Footprint
	 */
	struct ABP_Footprint_C_ExecuteUbergraph_BP_Footprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
