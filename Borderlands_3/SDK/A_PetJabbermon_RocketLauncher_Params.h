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
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin
	 */
	struct UA_PetJabbermon_RocketLauncher_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher
	 */
	struct UA_PetJabbermon_RocketLauncher_C_SpawnLauncher_Params
	{	};

	/**
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher
	 */
	struct UA_PetJabbermon_RocketLauncher_C_FireLauncher_Params
	{	};

	/**
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn
	 */
	struct UA_PetJabbermon_RocketLauncher_C_StartLauncherDespawn_Params
	{	};

	/**
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd
	 */
	struct UA_PetJabbermon_RocketLauncher_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VA52[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher
	 */
	struct UA_PetJabbermon_RocketLauncher_C_ExecuteUbergraph_A_PetJabbermon_RocketLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
