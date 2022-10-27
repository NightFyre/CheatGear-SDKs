#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Watercrafts.FakeShip.OnAttachedItemEndPlay
	 */
	struct AFakeShip_OnAttachedItemEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
	 */
	struct UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params
	{
	public:
		class AActor*                                              PreviousWatercraft;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
	 */
	struct UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedWatercraft;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.Watercraft.OnRigidBodyWake
	 */
	struct AWatercraft_OnRigidBodyWake_Params
	{
	public:
		class FName                                                InBoneName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.Watercraft.OnRigidBodySleep
	 */
	struct AWatercraft_OnRigidBodySleep_Params
	{
	public:
		class FName                                                InBoneName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
	 */
	struct ARowboat_SetAlwaysEnabledInteractables_Params
	{
	public:
		TArray<class UChildActorComponent*>                        InAlwaysEnabledInteractables;                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Watercrafts.Rowboat.OnRep_IsSinking
	 */
	struct ARowboat_OnRep_IsSinking_Params
	{	};

	/**
	 * Function Watercrafts.TaleQuestWatercraftFunctionLibrary.GetFirstSpawnedWatercraft
	 */
	struct UTaleQuestWatercraftFunctionLibrary_GetFirstSpawnedWatercraft_Params
	{
	public:
		class AWatercraft*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.TaleQuestWatercraftFunctionLibrary.FilterPointsByDistanceFromWatercraft
	 */
	struct UTaleQuestWatercraftFunctionLibrary_FilterPointsByDistanceFromWatercraft_Params
	{
	public:
		float                                                      MinDistance;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_47HI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOrientedPoint>                              Points;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
	 */
	struct UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              WatercraftClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AWatercraft*                                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
	 */
	struct UWatercraftTrackerComponent_OnWatercraftDestroyed_Params
	{
	public:
		class AActor*                                              WatercraftActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
