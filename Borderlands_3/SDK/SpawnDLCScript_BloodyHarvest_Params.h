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
	 * Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform
	 */
	struct USpawnDLCScript_BloodyHarvest_C_GetSpawnTransform_Params
	{
	public:
		class AActor*                                              ActorThatDied;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J0LU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Output;                                                  // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted
	 */
	struct USpawnDLCScript_BloodyHarvest_C_SpawnEnemyAsHaunted_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned
	 */
	struct USpawnDLCScript_BloodyHarvest_C_OnActorSpawned_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied
	 */
	struct USpawnDLCScript_BloodyHarvest_C_OnActorDied_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
