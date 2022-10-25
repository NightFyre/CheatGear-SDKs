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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
	 * Size -> 0x0010
	 */
	struct FConnectionAlwaysRelevantNodePair
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_AlwaysRelevant_ForConnection*  Node;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
	 * Size -> 0x0018
	 */
	struct FAlwaysRelevantActorInfo
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewer;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReplicationGraph.TearOffActorInfo
	 * Size -> 0x0018
	 */
	struct FTearOffActorInfo
	{
	public:
		unsigned char                                              UnknownData_5ZVH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DP39[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReplicationGraph.LastLocationGatherInfo
	 * Size -> 0x0020
	 */
	struct FLastLocationGatherInfo
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastLocation;                                            // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastOutOfRangeLocationCheck;                             // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
