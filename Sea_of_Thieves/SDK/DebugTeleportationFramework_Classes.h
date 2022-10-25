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
	 * Class DebugTeleportationFramework.DebugTeleportationLookupInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugTeleportationLookupInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugTeleportationFramework.DebugTeleportationPresentationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugTeleportationPresentationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugTeleportationRegistrationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugTeleportationFramework.DebugTeleportationDestinationService
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class ADebugTeleportationDestinationService : public AActor
	{
	public:
		unsigned char                                              UnknownData_ZL9Y[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDebugTeleportDestinationEntry>              DebugTeleportationRegistry;                              // 0x03E0(0x0010) Net, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
