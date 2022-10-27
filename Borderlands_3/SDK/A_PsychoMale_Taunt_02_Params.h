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
	 * Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB
	 */
	struct UA_PsychoMale_Taunt_02_C_GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.OnBegin
	 */
	struct UA_PsychoMale_Taunt_02_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.MeleeStrike
	 */
	struct UA_PsychoMale_Taunt_02_C_MeleeStrike_Params
	{	};

	/**
	 * Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.ExecuteUbergraph_A_PsychoMale_Taunt_02
	 */
	struct UA_PsychoMale_Taunt_02_C_ExecuteUbergraph_A_PsychoMale_Taunt_02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0UA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
