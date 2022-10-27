#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class GameStatsServer.GameStatsCollectionComponent
	 * Size -> 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
	 */
	class UGameStatsCollectionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_P622[0x80];                                  // 0x00B0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameStatsServer.GameStatsServerSubsystem
	 * Size -> 0x0198 (FullSize[0x01C8] - InheritedSize[0x0030])
	 */
	class UGameStatsServerSubsystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnLoginDelegate;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZOX[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameStatsSession*                                   ActiveSession;                                           // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGameStatsSession*>                           InactiveSessions;                                        // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              CollectionComponents[0x50];                              // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_4VMD[0xF0];                                  // 0x00D8(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameStatsServer.GameStatsSession
	 * Size -> 0x03B8 (FullSize[0x03E0] - InheritedSize[0x0028])
	 */
	class UGameStatsSession : public UObject
	{
	public:
		unsigned char                                              UnknownData_3UQO[0x1E0];                                 // 0x0028(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CollectionComponents[0x50];                              // 0x0208(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_AB0R[0x188];                                 // 0x0258(0x0188) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
