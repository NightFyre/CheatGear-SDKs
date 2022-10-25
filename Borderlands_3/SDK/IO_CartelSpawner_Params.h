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
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.SetSpawnedEnemyProvoke
	 */
	struct AIO_CartelSpawner_C_SetSpawnedEnemyProvoke_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.HandleTestmapEnemySpawns
	 */
	struct AIO_CartelSpawner_C_HandleTestmapEnemySpawns_Params
	{
	public:
		ECartelSpawnerType                                         SpawnType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.CheckForSpawnCollisions
	 */
	struct AIO_CartelSpawner_C_CheckForSpawnCollisions_Params
	{
	public:
		struct FVector                                             CapsulePos;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanSpawn;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6M1S[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelFX
	 */
	struct AIO_CartelSpawner_C_SpawnCartelFX_Params
	{
	public:
		struct FVector                                             BackupFX_Location;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AI0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.InitCartelIO
	 */
	struct AIO_CartelSpawner_C_InitCartelIO_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnNewKillSquadMember
	 */
	struct AIO_CartelSpawner_C_SpawnNewKillSquadMember_Params
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECartelSpawnerType                                         SpawnType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4P0O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.BeginCleanup
	 */
	struct AIO_CartelSpawner_C_BeginCleanup_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.UpdateCartelMission
	 */
	struct AIO_CartelSpawner_C_UpdateCartelMission_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.UserConstructionScript
	 */
	struct AIO_CartelSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50
	 */
	struct AIO_CartelSpawner_C_GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50
	 */
	struct AIO_CartelSpawner_C_GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.ReceiveBeginPlay
	 */
	struct AIO_CartelSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnCartelKillSquad
	 */
	struct AIO_CartelSpawner_C_SpawnCartelKillSquad_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.SpawnUnderbossWithAllies
	 */
	struct AIO_CartelSpawner_C_SpawnUnderbossWithAllies_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.StartAsyncSpawnTrace
	 */
	struct AIO_CartelSpawner_C_StartAsyncSpawnTrace_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.DoStartupPresentation
	 */
	struct AIO_CartelSpawner_C_DoStartupPresentation_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_Underboss
	 */
	struct AIO_CartelSpawner_C_OnAllDied_Underboss_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnAllDied_ThugSpawner
	 */
	struct AIO_CartelSpawner_C_OnAllDied_ThugSpawner_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Underboss
	 */
	struct AIO_CartelSpawner_C_OnSuspend_Underboss_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnSuspend_Thug
	 */
	struct AIO_CartelSpawner_C_OnSuspend_Thug_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.BeginFailsafeTimer
	 */
	struct AIO_CartelSpawner_C_BeginFailsafeTimer_Params
	{	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_ThugSpawner
	 */
	struct AIO_CartelSpawner_C_OnSpawned_ThugSpawner_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.OnSpawned_Underboss
	 */
	struct AIO_CartelSpawner_C_OnSpawned_Underboss_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_CartelSpawner.IO_CartelSpawner_C.ExecuteUbergraph_IO_CartelSpawner
	 */
	struct AIO_CartelSpawner_C_ExecuteUbergraph_IO_CartelSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGVG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
