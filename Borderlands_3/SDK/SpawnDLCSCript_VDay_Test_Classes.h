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
	 * BlueprintGeneratedClass SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnDLCSCript_VDay_Test_C : public USpawnDLCScript
	{
	public:
		void OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
