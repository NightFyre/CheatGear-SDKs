/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0503BE50
	 * 		Name   -> Function DiscordRpc.DiscordRpc.UpdatePresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordRpc::UpdatePresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.UpdatePresence");
		
		UDiscordRpc_UpdatePresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503BE30
	 * 		Name   -> Function DiscordRpc.DiscordRpc.Shutdown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordRpc::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Shutdown");
		
		UDiscordRpc_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503BE10
	 * 		Name   -> Function DiscordRpc.DiscordRpc.RunCallbacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordRpc::RunCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.RunCallbacks");
		
		UDiscordRpc_RunCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503BD30
	 * 		Name   -> Function DiscordRpc.DiscordRpc.Respond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Reply                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordRpc::Respond(const class FString& UserId, int32_t Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Respond");
		
		UDiscordRpc_Respond_Params params {};
		params.UserId = UserId;
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503BBF0
	 * 		Name   -> Function DiscordRpc.DiscordRpc.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      applicationId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               autoRegister                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      optionalSteamId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordRpc::Initialize(const class FString& applicationId, bool autoRegister, const class FString& optionalSteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Initialize");
		
		UDiscordRpc_Initialize_Params params {};
		params.applicationId = applicationId;
		params.autoRegister = autoRegister;
		params.optionalSteamId = optionalSteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503BBD0
	 * 		Name   -> Function DiscordRpc.DiscordRpc.ClearPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordRpc::ClearPresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.ClearPresence");
		
		UDiscordRpc_ClearPresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscordRpc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordRpc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DiscordRpc.DiscordRpc");
		return ptr;
	}

}


