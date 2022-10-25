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
	 * Class SocketSubsystemSpark.SparkNetConnection
	 * Size -> 0x0000 (FullSize[0x19A0] - InheritedSize[0x19A0])
	 */
	class USparkNetConnection : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SocketSubsystemSpark.SparkBeaconNetConnection
	 * Size -> 0x0000 (FullSize[0x19A0] - InheritedSize[0x19A0])
	 */
	class USparkBeaconNetConnection : public USparkNetConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SocketSubsystemSpark.SparkNetDriver
	 * Size -> 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
	 */
	class USparkNetDriver : public UIpNetDriver
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x0578(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCKE[0x17];                                  // 0x0579(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SocketSubsystemSpark.SparkBeaconNetDriver
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class USparkBeaconNetDriver : public USparkNetDriver
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
