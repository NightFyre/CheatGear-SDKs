#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Class DungeonCrawlerMessageRuntime.BaseObject
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UBaseObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_5J3C[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FBindMsgNodeArray>              MsgMulticastDelegateBlueprintMap;                        // 0x0078(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawlerMessageRuntime.BaseInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseInterface : public UInterface
	{
	public:
		void UnbindMsgAll(class UObject* InObject);
		void UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject);
		void TerminateBase();
		void BroadcastMsgBlueprint(int32_t InMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawlerMessageRuntime.MsgBaseNode
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMsgBaseNode : public UCancellableAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnMessageReceived;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYPX[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)

	public:
		void ReplyMsg(int32_t InMsg);
		bool GetPayload(int32_t* OutRecvMsgType);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawlerMessageRuntime.BindMsgNode
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBindMsgNode : public UMsgBaseNode
	{
	public:
		class UBindMsgNode* STATIC_BindMsgNode(class UObject* Owner, class UScriptStruct* RecvMsgType);
		static UClass* StaticClass();
	};

	/**
	 * Class DungeonCrawlerMessageRuntime.BroadcastMsgNode
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBroadcastMsgNode : public UMsgBaseNode
	{
	public:
		class UBroadcastMsgNode* STATIC_BroadcastMsgNode(class UObject* Owner, class UScriptStruct* RecvMsgType);
		void BroadcastMsg(int32_t InMsg);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
