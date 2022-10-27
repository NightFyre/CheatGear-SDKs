#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GbxTwitch.TwitchAPI.RequestTwitchStreams
	 */
	struct UTwitchAPI_RequestTwitchStreams_Params
	{
	public:
		int32_t                                                    MaxNbStreams;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JVRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              GameName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserLogin;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Language;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      StreamInfoReceivedDelegate;                              // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTwitch.TwitchIRCClient.SendChatMessage
	 */
	struct UTwitchIRCClient_SendChatMessage_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTwitch.TwitchIRCClient.QuitChannel
	 */
	struct UTwitchIRCClient_QuitChannel_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTwitch.TwitchIRCClient.JoinChannel
	 */
	struct UTwitchIRCClient_JoinChannel_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnMessageReceived;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTwitch.TwitchIRCClient.InitChatBot
	 */
	struct UTwitchIRCClient_InitChatBot_Params
	{	};

	/**
	 * Function GbxTwitch.TwitchIRCClient.ExitChatBot
	 */
	struct UTwitchIRCClient_ExitChatBot_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
