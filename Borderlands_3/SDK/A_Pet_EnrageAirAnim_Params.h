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
	 * Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters
	 */
	struct UA_Pet_EnrageAirAnim_C_GetRiftActorFromRegisters_Params
	{
	public:
		class ABPPetEnrageRift_C*                                  res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters
	 */
	struct UA_Pet_EnrageAirAnim_C_GetLocationFromRegisters_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin
	 */
	struct UA_Pet_EnrageAirAnim_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim
	 */
	struct UA_Pet_EnrageAirAnim_C_ExecuteUbergraph_A_Pet_EnrageAirAnim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ORE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
