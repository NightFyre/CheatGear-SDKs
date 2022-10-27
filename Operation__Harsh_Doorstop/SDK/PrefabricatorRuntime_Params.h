#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function PrefabricatorRuntime.PrefabActor.SavePrefab
	 */
	struct APrefabActor_SavePrefab_Params
	{	};

	/**
	 * Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
	 */
	struct APrefabActor_RandomizeSeed_Params
	{
	public:
		struct FRandomStream                                       InRandom;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabActor.LoadPrefab
	 */
	struct APrefabActor_LoadPrefab_Params
	{	};

	/**
	 * Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
	 */
	struct APrefabActor_IsPrefabOutdated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
	 */
	struct APrefabActor_GetPrefabAsset_Params
	{
	public:
		class UPrefabricatorAsset*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabRandomizer.Randomize
	 */
	struct APrefabRandomizer_Randomize_Params
	{
	public:
		int32_t                                                    InSeed;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
	 */
	struct UPrefabricatorEventListener_PostSpawn_Params
	{
	public:
		class APrefabActor*                                        Prefab;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
	 */
	struct UPrefabricatorBlueprintLibrary_UnlinkPrefab_Params
	{
	public:
		class APrefabActor*                                        PrefabActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
	 */
	struct UPrefabricatorBlueprintLibrary_SpawnPrefab_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrefabricatorAssetInterface*                        Prefab;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Seed;                                                    // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6UB0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrefabActor*                                        ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
	 */
	struct UPrefabricatorBlueprintLibrary_SetPrefabAsset_Params
	{
	public:
		class APrefabActor*                                        PrefabActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrefabricatorAssetInterface*                        Prefab;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReloadPrefab;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
	 */
	struct UPrefabricatorBlueprintLibrary_RandomizePrefab_Params
	{
	public:
		class APrefabActor*                                        PrefabActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       InRandom;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
	 */
	struct UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params
	{
	public:
		class AActor*                                              Prefab;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      AttachedActors;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
