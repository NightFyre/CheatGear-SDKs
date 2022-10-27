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
	 * 		RVA    -> 0x00D4EBB0
	 * 		Name   -> Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerSendMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAntiCheatNetComponentEOS::ServerSendMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerSendMessage");
		
		UAntiCheatNetComponentEOS_ServerSendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D4EA50
	 * 		Name   -> Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerCheckSanctions
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            UserId                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAntiCheatNetComponentEOS::ServerCheckSanctions(const struct FUniqueNetIdRepl& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ServerCheckSanctions");
		
		UAntiCheatNetComponentEOS_ServerCheckSanctions_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D4EA30
	 * 		Name   -> Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.OnRep_IsRegisteredEOS
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAntiCheatNetComponentEOS::OnRep_IsRegisteredEOS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.OnRep_IsRegisteredEOS");
		
		UAntiCheatNetComponentEOS_OnRep_IsRegisteredEOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D4E990
	 * 		Name   -> Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ClientSendMessage
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAntiCheatNetComponentEOS::ClientSendMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOS.AntiCheatNetComponentEOS.ClientSendMessage");
		
		UAntiCheatNetComponentEOS_ClientSendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAntiCheatNetComponentEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAntiCheatNetComponentEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.AntiCheatNetComponentEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSArtifactSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSArtifactSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSArtifactSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetConnectionEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetConnectionEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetConnectionEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetDriverEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetDriverEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAuthComponentModuleInterfaceEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuthComponentModuleInterfaceEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.AuthComponentModuleInterfaceEOS");
		return ptr;
	}

}


