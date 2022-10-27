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
	 * Class RemoteActorDestruction.RemoteActorDestructionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemoteActorDestructionInterface : public UInterface
	{
	public:
		void DestroyExistingActors(TArray<class UClass*> ClassesToDestroy);
		void DestroyActor(const struct FDestroyActorData& DestroyActorData);
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteActorDestruction.RemoteActorDestructionService
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ARemoteActorDestructionService : public AActor
	{
	public:
		unsigned char                                              UnknownData_6B2P[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
