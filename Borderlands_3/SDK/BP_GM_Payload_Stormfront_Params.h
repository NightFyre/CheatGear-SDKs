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
	 * Function BP_GM_Payload_Stormfront.BP_GM_Payload_Stormfront_C.K2_UpdateChildGeneration
	 */
	struct UBP_GM_Payload_Stormfront_C_K2_UpdateChildGeneration_Params
	{
	public:
		struct FGrenadeChildGenerationData                         InGenerationData;                                        // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FGrenadeChildGenerationData                         GenerationData;                                          // 0x0028(0x0028)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_GM_Payload_Stormfront.BP_GM_Payload_Stormfront_C.K2_GrenadeExplode
	 */
	struct UBP_GM_Payload_Stormfront_C_K2_GrenadeExplode_Params
	{
	public:
		class AGrenade*                                            Grenade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGrenadeMod*                                         GrenadeMod;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPayloadInstanceData                                InstanceData;                                            // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_GM_Payload_Stormfront.BP_GM_Payload_Stormfront_C.K2_GrenadeInitialized
	 */
	struct UBP_GM_Payload_Stormfront_C_K2_GrenadeInitialized_Params
	{
	public:
		class AGrenade*                                            Grenade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGrenadeMod*                                         GrenadeMod;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPayloadInstanceData                                InstanceData;                                            // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
