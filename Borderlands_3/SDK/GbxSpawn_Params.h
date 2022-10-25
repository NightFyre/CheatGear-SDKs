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
	 * Function GbxSpawn.Spawner.SuspendAllActors
	 */
	struct ASpawner_SuspendAllActors_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.SetTeamOverride
	 */
	struct ASpawner_SetTeamOverride_Params
	{
	public:
		class UTeam*                                               OverrideTeam;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.SetTeam
	 */
	struct ASpawner_SetTeam_Params
	{
	public:
		class UTeam*                                               NewTeam;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.SetAlwaysActive
	 */
	struct ASpawner_SetAlwaysActive_Params
	{
	public:
		bool                                                       bInAlwaysActive;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.ResetSpawning
	 */
	struct ASpawner_ResetSpawning_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.OverrideSpawnerStyle
	 */
	struct ASpawner_OverrideSpawnerStyle_Params
	{
	public:
		class USpawnerStyle*                                       NewSpawnerStyle;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.OnSpawningComplete
	 */
	struct ASpawner_OnSpawningComplete_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.IsSpawnerEnabled
	 */
	struct ASpawner_IsSpawnerEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.IsFinishedSpawning
	 */
	struct ASpawner_IsFinishedSpawning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.GetSpawnPointComponent
	 */
	struct ASpawner_GetSpawnPointComponent_Params
	{
	public:
		class USpawnPointComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.GetSpawnerTeamComponent
	 */
	struct ASpawner_GetSpawnerTeamComponent_Params
	{
	public:
		class USpawnerTeamComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.GetSpawnerLinkComponent
	 */
	struct ASpawner_GetSpawnerLinkComponent_Params
	{
	public:
		class USpawnerLinkComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.GetSpawnerComponent
	 */
	struct ASpawner_GetSpawnerComponent_Params
	{
	public:
		class USpawnerComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.GetNumAliveActors
	 */
	struct ASpawner_GetNumAliveActors_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H906[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.Spawner.EnableSpawner
	 */
	struct ASpawner_EnableSpawner_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.DisableSpawner
	 */
	struct ASpawner_DisableSpawner_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.DestroyAllActors
	 */
	struct ASpawner_DestroyAllActors_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.CompleteScriptedWarmup
	 */
	struct ASpawner_CompleteScriptedWarmup_Params
	{	};

	/**
	 * Function GbxSpawn.Spawner.AreAllDead
	 */
	struct ASpawner_AreAllDead_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.SuspendAllActors
	 */
	struct USpawnerComponent_SuspendAllActors_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.SetTeam
	 */
	struct USpawnerComponent_SetTeam_Params
	{
	public:
		class UTeam*                                               NewTeam;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.SetSpawnOptions
	 */
	struct USpawnerComponent_SetSpawnOptions_Params
	{
	public:
		class USpawnOptionData*                                    NewSpawnOptions;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.ResetSpawning
	 */
	struct USpawnerComponent_ResetSpawning_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle
	 */
	struct USpawnerComponent_OverrideSpawnerStyle_Params
	{
	public:
		class USpawnerStyle*                                       NewSpawnerStyle;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed
	 */
	struct USpawnerComponent_IsSpawnerStyleClassAllowed_Params
	{
	public:
		class UClass*                                              SpawnerStyleClass;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.IsFinishedSpawning
	 */
	struct USpawnerComponent_IsFinishedSpawning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent
	 */
	struct USpawnerComponent_IncludeExternalActorsForAllDiedEvent_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetSpawnOptions
	 */
	struct USpawnerComponent_GetSpawnOptions_Params
	{
	public:
		class USpawnOptionData*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetParentSpawner
	 */
	struct USpawnerComponent_GetParentSpawner_Params
	{
	public:
		class USpawnerComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors
	 */
	struct USpawnerComponent_GetNumSuspendedActors_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors
	 */
	struct USpawnerComponent_GetNumSpawnedActors_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInGroup;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4EXS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetNumDeadActors
	 */
	struct USpawnerComponent_GetNumDeadActors_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInGroup;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M8ES[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetNumAliveActors
	 */
	struct USpawnerComponent_GetNumAliveActors_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInGroup;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GBES[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.GetAliveActors
	 */
	struct USpawnerComponent_GetAliveActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerComponent.EnableSpawner
	 */
	struct USpawnerComponent_EnableSpawner_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.DisableSpawner
	 */
	struct USpawnerComponent_DisableSpawner_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.DestroyAllActors
	 */
	struct USpawnerComponent_DestroyAllActors_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup
	 */
	struct USpawnerComponent_CompleteScriptedWarmup_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnerComponent.AreAllDead
	 */
	struct USpawnerComponent_AreAllDead_Params
	{
	public:
		bool                                                       bIncludeExternal;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInGroup;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPoint.SetSpawnStyleTag
	 */
	struct ASpawnPoint_SetSpawnStyleTag_Params
	{
	public:
		struct FGameplayTag                                        NewTag;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPoint.ResetStretchPoint
	 */
	struct ASpawnPoint_ResetStretchPoint_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPoint.GetSpawnStyleTag
	 */
	struct ASpawnPoint_GetSpawnStyleTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPoint.EnableSpawnPoint
	 */
	struct ASpawnPoint_EnableSpawnPoint_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPoint.DisableSpawnPoint
	 */
	struct ASpawnPoint_DisableSpawnPoint_Params
	{	};

	/**
	 * Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint
	 */
	struct UGbxAction_SpawnAnim_K2_GetSpawnPoint_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnDLCScript.OnAllSpawned
	 */
	struct USpawnDLCScript_OnAllSpawned_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnDLCScript.OnAllDied
	 */
	struct USpawnDLCScript_OnAllDied_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnDLCScript.OnActorSpawned
	 */
	struct USpawnDLCScript_OnActorSpawned_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnDLCScript.OnActorDied
	 */
	struct USpawnDLCScript_OnActorDied_Params
	{
	public:
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors
	 */
	struct USpawnerBlueprintLibrary_SuspendSpawnedActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform
	 */
	struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsTransform_Params
	{
	public:
		class AActor*                                              Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync
	 */
	struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsAsync_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnManagerAsyncRequest                           Request;                                                 // 0x0008(0x0068)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions
	 */
	struct USpawnerBlueprintLibrary_SpawnActorWithSpawnOptions_Params
	{
	public:
		class AActor*                                              Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner
	 */
	struct USpawnerBlueprintLibrary_SpawnActorWithSpawner_Params
	{
	public:
		class AActor*                                              Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnFactory*                                       Factory;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost
	 */
	struct USpawnerBlueprintLibrary_SetMaxSpawnCost_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewMaxSpawnCost;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors
	 */
	struct USpawnerBlueprintLibrary_RestoreSuspendedActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem
	 */
	struct USpawnerBlueprintLibrary_RemoveActorFromSpawnSystem_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest
	 */
	struct USpawnerBlueprintLibrary_CancelSpawnActorWithOptionsAsyncRequest_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RequestID;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed
	 */
	struct USpawnerStyleFactory_Bunch_IsFactoryClassAllowed_Params
	{
	public:
		class UClass*                                              FactoryClass;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed
	 */
	struct USpawnerStyleFactory_Den_IsFactoryClassAllowed_Params
	{
	public:
		class UClass*                                              FactoryClass;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed
	 */
	struct USpawnerStyleFactory_Single_IsFactoryClassAllowed_Params
	{
	public:
		class UClass*                                              FactoryClass;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty
	 */
	struct USpawnFactory_Generic_ShouldSkipActorProperty_Params
	{
	public:
		class UProperty*                                           ActorProperty;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnManager.ActorDestroyed
	 */
	struct USpawnManager_ActorDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag
	 */
	struct USpawnPointComponent_SetSpawnStyleTag_Params
	{
	public:
		struct FGameplayTag                                        NewTag;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.ResetStretchPoint
	 */
	struct USpawnPointComponent_ResetStretchPoint_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag
	 */
	struct USpawnPointComponent_HasSpawnAITreeTag_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.GetStretchyPoint
	 */
	struct USpawnPointComponent_GetStretchyPoint_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag
	 */
	struct USpawnPointComponent_GetSpawnStyleTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag
	 */
	struct USpawnPointComponent_GetSpawnAITreeTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint
	 */
	struct USpawnPointComponent_EnableSpawnPoint_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint
	 */
	struct USpawnPointComponent_DisableSpawnPoint_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPreviewComponent.OnReplayAction
	 */
	struct USpawnPreviewComponent_OnReplayAction_Params
	{	};

	/**
	 * Function GbxSpawn.SpawnPreviewComponent.OnCycleActor
	 */
	struct USpawnPreviewComponent_OnCycleActor_Params
	{
	public:
		ECycleDirection                                            Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
