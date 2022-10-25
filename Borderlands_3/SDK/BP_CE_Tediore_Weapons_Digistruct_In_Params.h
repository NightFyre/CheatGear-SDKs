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
	 * Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnBegin
	 */
	struct UBP_CE_Tediore_Weapons_Digistruct_In_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnEnd
	 */
	struct UBP_CE_Tediore_Weapons_Digistruct_In_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZQA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In
	 */
	struct UBP_CE_Tediore_Weapons_Digistruct_In_C_ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
