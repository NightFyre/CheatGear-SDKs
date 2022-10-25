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
	 * BlueprintGeneratedClass SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USpawnDLCScript_BloodyHarvest_C : public USpawnDLCScript
	{
	public:
		class UGbxCondition*                                       ConditionalRequiredMissionState;                         // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetSpawnTransform(class AActor* ActorThatDied, struct FTransform* Output);
		void SpawnEnemyAsHaunted(class AActor* Enemy);
		void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		void OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
