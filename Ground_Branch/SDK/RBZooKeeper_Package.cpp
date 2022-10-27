/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UZKCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.GetAdminInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZKAdminInfo                                OutAdminInfo                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZKAdmin::GetAdminInfo(const class FString& UniqueId, struct FZKAdminInfo* OutAdminInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.GetAdminInfo");
		
		UZKAdmin_GetAdminInfo_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdminInfo != nullptr)
			*OutAdminInfo = params.OutAdminInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.GetAdminGroupCommands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AdminGroupName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UZKAdmin::GetAdminGroupCommands(const class FString& AdminGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.GetAdminGroupCommands");
		
		UZKAdmin_GetAdminGroupCommands_Params params {};
		params.AdminGroupName = AdminGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.GetAdminCommands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UZKAdmin::GetAdminCommands(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.GetAdminCommands");
		
		UZKAdmin_GetAdminCommands_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.Get
	 * 		Flags  -> ()
	 */
	class UZKAdmin* UZKAdmin::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.Get");
		
		UZKAdmin_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.AllowPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZKAdmin::AllowPlayerName(const class FString& PlayerName, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.AllowPlayerName");
		
		UZKAdmin_AllowPlayerName_Params params {};
		params.PlayerName = PlayerName;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKAdmin.AdminCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EZKAdminCommandResult UZKAdmin::AdminCommand(const class FString& UniqueId, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKAdmin.AdminCommand");
		
		UZKAdmin_AdminCommand_Params params {};
		params.UniqueId = UniqueId;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKAdmin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKAdmin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKAdmin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKAFKDetection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKAFKDetection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKAFKDetection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKBan.IsBanned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueIdString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZKBan::IsBanned(const class FString& UniqueIdString, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKBan.IsBanned");
		
		UZKBan_IsBanned_Params params {};
		params.UniqueIdString = UniqueIdString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKBan.Get
	 * 		Flags  -> ()
	 */
	class UZKBan* UZKBan::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKBan.Get");
		
		UZKBan_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKBan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKBan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKBan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKCommands.Get
	 * 		Flags  -> ()
	 */
	class UZKCommands* UZKCommands::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKCommands.Get");
		
		UZKCommands_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKCommands");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKMapList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKMapList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKMapList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.HasWhiteList
	 * 		Flags  -> ()
	 */
	bool UZKServer::HasWhiteList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.HasWhiteList");
		
		UZKServer_HasWhiteList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetSpectatorOnlyPassword
	 * 		Flags  -> ()
	 */
	class FString UZKServer::GetSpectatorOnlyPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetSpectatorOnlyPassword");
		
		UZKServer_GetSpectatorOnlyPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetServerPassword
	 * 		Flags  -> ()
	 */
	class FString UZKServer::GetServerPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetServerPassword");
		
		UZKServer_GetServerPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetServerName
	 * 		Flags  -> ()
	 */
	class FString UZKServer::GetServerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetServerName");
		
		UZKServer_GetServerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetServerMOTD
	 * 		Flags  -> ()
	 */
	class FString UZKServer::GetServerMOTD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetServerMOTD");
		
		UZKServer_GetServerMOTD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetMaxSpectators
	 * 		Flags  -> ()
	 */
	int32_t UZKServer::GetMaxSpectators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetMaxSpectators");
		
		UZKServer_GetMaxSpectators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.GetMaxPlayers
	 * 		Flags  -> ()
	 */
	int32_t UZKServer::GetMaxPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.GetMaxPlayers");
		
		UZKServer_GetMaxPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKServer.Get
	 * 		Flags  -> ()
	 */
	class UZKServer* UZKServer::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKServer.Get");
		
		UZKServer_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.ReportTeamKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamKillerUniqueId                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKTeamKill::ReportTeamKill(const class FString& TeamKillerUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.ReportTeamKill");
		
		UZKTeamKill_ReportTeamKill_Params params {};
		params.TeamKillerUniqueId = TeamKillerUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.GetTotalTeamKills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamKillerUniqueId                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMinusForgives                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UZKTeamKill::GetTotalTeamKills(const class FString& TeamKillerUniqueId, bool bMinusForgives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.GetTotalTeamKills");
		
		UZKTeamKill_GetTotalTeamKills_Params params {};
		params.TeamKillerUniqueId = TeamKillerUniqueId;
		params.bMinusForgives = bMinusForgives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.GetTeamKills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamKillerUniqueId                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VictimUniqueId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMinusForgives                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UZKTeamKill::GetTeamKills(const class FString& TeamKillerUniqueId, const class FString& VictimUniqueId, bool bMinusForgives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.GetTeamKills");
		
		UZKTeamKill_GetTeamKills_Params params {};
		params.TeamKillerUniqueId = TeamKillerUniqueId;
		params.VictimUniqueId = VictimUniqueId;
		params.bMinusForgives = bMinusForgives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.Get
	 * 		Flags  -> ()
	 */
	class UZKTeamKill* UZKTeamKill::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.Get");
		
		UZKTeamKill_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.ForgiveTeamKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamKillerUniqueId                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VictimUniqueId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKTeamKill::ForgiveTeamKill(const class FString& TeamKillerUniqueId, const class FString& VictimUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.ForgiveTeamKill");
		
		UZKTeamKill_ForgiveTeamKill_Params params {};
		params.TeamKillerUniqueId = TeamKillerUniqueId;
		params.VictimUniqueId = VictimUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKTeamKill.AddTeamKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamKillerUniqueId                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TeamKillerName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VictimUniqueId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VictimName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKTeamKill::AddTeamKill(const class FString& TeamKillerUniqueId, const class FString& TeamKillerName, const class FString& VictimUniqueId, const class FString& VictimName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKTeamKill.AddTeamKill");
		
		UZKTeamKill_AddTeamKill_Params params {};
		params.TeamKillerUniqueId = TeamKillerUniqueId;
		params.TeamKillerName = TeamKillerName;
		params.VictimUniqueId = VictimUniqueId;
		params.VictimName = VictimName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKTeamKill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKTeamKill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKTeamKill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKVote.VoteCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKVote::VoteCommand(class APlayerController* PlayerController, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKVote.VoteCommand");
		
		UZKVote_VoteCommand_Params params {};
		params.PlayerController = PlayerController;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKVote.StartVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKVote::StartVote(class APlayerController* PlayerController, const class FString& Command, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKVote.StartVote");
		
		UZKVote_StartVote_Params params {};
		params.PlayerController = PlayerController;
		params.Command = Command;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKVote.Get
	 * 		Flags  -> ()
	 */
	class UZKVote* UZKVote::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKVote.Get");
		
		UZKVote_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBZooKeeper.ZKVote.EndVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPassed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZKVote::EndVote(bool bPassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBZooKeeper.ZKVote.EndVote");
		
		UZKVote_EndVote_Params params {};
		params.bPassed = bPassed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZKVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZKVote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBZooKeeper.ZKVote");
		return ptr;
	}

}


