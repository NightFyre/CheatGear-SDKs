#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USpawnDLCSCript_Cartels_C : public USpawnDLCScript
	{
	public:
		class UGbxCondition*                                       ConditionalReqMissionState_All;                          // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGbxCondition*                                       ConditionalReqMissionState_Opt_Intro;                    // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGbxCondition*                                       ConditionalReqMissionState_Opt_Rep;                      // 0x0038(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
