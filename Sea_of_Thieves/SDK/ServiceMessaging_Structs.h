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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ServiceMessaging.ServiceMessagingTestMessage
	 * Size -> 0x0004
	 */
	struct FServiceMessagingTestMessage
	{
	public:
		int32_t                                                    Data;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ServiceMessaging.ServiceMessagingUnsubscribedEvent
	 * Size -> 0x0010
	 */
	struct FServiceMessagingUnsubscribedEvent
	{
	public:
		class FString                                              RoutingKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ServiceMessaging.ServiceMessagingSubscribedEvent
	 * Size -> 0x0010
	 */
	struct FServiceMessagingSubscribedEvent
	{
	public:
		class FString                                              RoutingKey;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ServiceMessaging.TestStructWithNetId
	 * Size -> 0x0018
	 */
	struct FTestStructWithNetId
	{
	public:
		struct FUniqueNetIdRepl                                    NetId;                                                   // 0x0000(0x0018)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
