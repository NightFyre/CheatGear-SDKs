#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class ABarrelsOfPlentyDebugSpawnLocation : public AActor
	{
	public:
		TArray<struct FBarrelsOfPlentyDebugLocationEntry>          Objects;                                                 // 0x03C8(0x0010) Net, ZeroConstructor
		struct FVector                                             SpawnCentre;                                             // 0x03D8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x03E4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class ABarrelsOfPlentySpawnProxy : public AActor
	{
	public:
		class AShip*                                               Ship;                                                    // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEBZ[0x18];                                  // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class USpawnBarrelsOfPlentyStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_OIP5[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class USpawnBarrelsOfPlentyStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableVector                                LocatorVar;                                              // 0x0080(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
