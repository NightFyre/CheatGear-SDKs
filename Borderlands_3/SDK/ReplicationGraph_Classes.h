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
	 * Class ReplicationGraph.ReplicationGraph
	 * Size -> 0x01D0 (FullSize[0x01F8] - InheritedSize[0x0028])
	 */
	class UReplicationGraph : public UReplicationDriver
	{
	public:
		class UClass*                                              ReplicationConnectionManagerClass;                       // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetDriver*                                          NetDriver;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              Connections;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              PendingConnections;                                      // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E68X[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       GlobalGraphNodes;                                        // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PrepareForReplicationNodes;                              // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ERQW[0x150];                                 // 0x00A8(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UReplicationGraphNode : public UObject
	{
	public:
		TArray<class UReplicationGraphNode*>                       AllChildNodes;                                           // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y4IL[0x68];                                  // 0x0038(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorList
	 * Size -> 0x00A8 (FullSize[0x0148] - InheritedSize[0x00A0])
	 */
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_KW8M[0xA8];                                  // 0x00A0(0x00A8) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.NetReplicationGraphConnection
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMQE[0x140];                                 // 0x0030(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReplicationGraphDebugActor*                         DebugActor;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1JU[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       ConnectionGraphNodes;                                    // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_TearOff_ForConnection*         TearOffNode;                                             // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      NonReplicatedDormantActors;                              // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WDTB[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.BasicReplicationGraph
	 * Size -> 0x0030 (FullSize[0x0228] - InheritedSize[0x01F8])
	 */
	class UBasicReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionAlwaysRelevantNodePair>           AlwaysRelevantForConnectionList;                         // 0x0208(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x0218(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	 * Size -> 0x00E0 (FullSize[0x0180] - InheritedSize[0x00A0])
	 */
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_AZD0[0xE0];                                  // 0x00A0(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
	 * Size -> 0x0098 (FullSize[0x01E0] - InheritedSize[0x0148])
	 */
	class UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_8414[0x8];                                   // 0x0148(0x0008) Fix Super Size
		unsigned char                                              UnknownData_RIE2[0x90];                                  // 0x0150(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	 * Size -> 0x0058 (FullSize[0x01A0] - InheritedSize[0x0148])
	 */
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_0VU6[0x8];                                   // 0x0148(0x0008) Fix Super Size
		unsigned char                                              UnknownData_C7BW[0x50];                                  // 0x0150(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridCell
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
	{
	public:
		class UReplicationGraphNode_ActorListFrequencyBuckets*     DynamicNode;                                             // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_DormancyNode*                  DormancyNode;                                            // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2SQ8[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	 * Size -> 0x0130 (FullSize[0x01D0] - InheritedSize[0x00A0])
	 */
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_3H4Z[0x130];                                 // 0x00A0(0x0130) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
	{
	public:
		class UReplicationGraphNode*                               ChildNode;                                               // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXEY[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0028 (FullSize[0x0170] - InheritedSize[0x0148])
	 */
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_88Y4[0x8];                                   // 0x0148(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WMSH[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastViewer;                                              // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewTarget;                                          // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
	{
	public:
		TArray<struct FTearOffActorInfo>                           TearOffActors;                                           // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4R7G[0x20];                                  // 0x00B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphDebugActor
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class AReplicationGraphDebugActor : public AActor
	{
	public:
		class UReplicationGraph*                                   ReplicationGraph;                                        // 0x0458(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetReplicationGraphConnection*                      ConnectionManager;                                       // 0x0460(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerStopDebugging();
		void ServerStartDebugging();
		void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
		void ServerPrintAllActorInfo(const class FString& str);
		void ServerCellInfo();
		void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
