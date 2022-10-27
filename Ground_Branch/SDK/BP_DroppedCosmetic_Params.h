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
	 * Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.Setup
	 */
	struct ABP_DroppedCosmetic_C_Setup_Params
	{
	public:
		class UStaticMeshComponent*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewVel;                                                  // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.K2_OnReset
	 */
	struct ABP_DroppedCosmetic_C_K2_OnReset_Params
	{	};

	/**
	 * Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.ExecuteUbergraph_BP_DroppedCosmetic
	 */
	struct ABP_DroppedCosmetic_C_ExecuteUbergraph_BP_DroppedCosmetic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OMXG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
