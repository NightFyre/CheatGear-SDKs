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
	 * Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerEnd
	 */
	struct UBP_CE_Cartel_TeleportIn_Thug_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_21FQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerBegin
	 */
	struct UBP_CE_Cartel_TeleportIn_Thug_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug
	 */
	struct UBP_CE_Cartel_TeleportIn_Thug_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
