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
	 * Class PhysicsHelpers.PostPhysicsTickerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPostPhysicsTickerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PhysicsHelpers.MockPostPhysicsTickerComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UMockPostPhysicsTickerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2PV7[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
