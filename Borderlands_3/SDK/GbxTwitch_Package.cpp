/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTwitchSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTwitchSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTwitch.GbxTwitchSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0C70
	 * 		Name   -> Function GbxTwitch.TwitchAPI.RequestTwitchStreams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxNbStreams                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserLogin                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              StreamInfoReceivedDelegate                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTwitchAPI::STATIC_RequestTwitchStreams(int32_t MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, const class FScriptDelegate& StreamInfoReceivedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchAPI.RequestTwitchStreams");
		
		UTwitchAPI_RequestTwitchStreams_Params params {};
		params.MaxNbStreams = MaxNbStreams;
		params.GameName = GameName;
		params.UserLogin = UserLogin;
		params.Language = Language;
		params.StreamInfoReceivedDelegate = StreamInfoReceivedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTwitchAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwitchAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTwitch.TwitchAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0EF0
	 * 		Name   -> Function GbxTwitch.TwitchIRCClient.SendChatMessage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwitchIRCClient::STATIC_SendChatMessage(const class FString& ChannelName, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.SendChatMessage");
		
		UTwitchIRCClient_SendChatMessage_Params params {};
		params.ChannelName = ChannelName;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0BA0
	 * 		Name   -> Function GbxTwitch.TwitchIRCClient.QuitChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwitchIRCClient::STATIC_QuitChannel(const class FString& ChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.QuitChannel");
		
		UTwitchIRCClient_QuitChannel_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0A70
	 * 		Name   -> Function GbxTwitch.TwitchIRCClient.JoinChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnMessageReceived                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTwitchIRCClient::STATIC_JoinChannel(const class FString& ChannelName, const class FScriptDelegate& OnMessageReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.JoinChannel");
		
		UTwitchIRCClient_JoinChannel_Params params {};
		params.ChannelName = ChannelName;
		params.OnMessageReceived = OnMessageReceived;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0A50
	 * 		Name   -> Function GbxTwitch.TwitchIRCClient.InitChatBot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTwitchIRCClient::STATIC_InitChatBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.InitChatBot");
		
		UTwitchIRCClient_InitChatBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006C0A30
	 * 		Name   -> Function GbxTwitch.TwitchIRCClient.ExitChatBot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTwitchIRCClient::STATIC_ExitChatBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.ExitChatBot");
		
		UTwitchIRCClient_ExitChatBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTwitchIRCClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwitchIRCClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTwitch.TwitchIRCClient");
		return ptr;
	}

}


