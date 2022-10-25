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
	 * 		Name   -> Function RBSteamworks.RBServerList.RequestServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamServerType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URBServerList::RequestServerList(ESteamServerType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBServerList.RequestServerList");
		
		URBServerList_RequestServerList_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBServerList.ParseQuedServerList
	 * 		Flags  -> ()
	 */
	void URBServerList::ParseQuedServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBServerList.ParseQuedServerList");
		
		URBServerList_ParseQuedServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBServerList.IsRefreshing
	 * 		Flags  -> ()
	 */
	bool URBServerList::IsRefreshing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBServerList.IsRefreshing");
		
		URBServerList_IsRefreshing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBServerList.CancelRequestServerList
	 * 		Flags  -> ()
	 */
	void URBServerList::CancelRequestServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBServerList.CancelRequestServerList");
		
		URBServerList_CancelRequestServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBServerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBServerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSteamworks.RBServerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBSteamworksFunctionLibrary.MatchingSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBSteamID                                  A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRBSteamID                                  B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool URBSteamworksFunctionLibrary::MatchingSteamID(const struct FRBSteamID& A, const struct FRBSteamID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBSteamworksFunctionLibrary.MatchingSteamID");
		
		URBSteamworksFunctionLibrary_MatchingSteamID_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBSteamworksFunctionLibrary.InviteUserToGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBSteamID                                  SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URBSteamworksFunctionLibrary::InviteUserToGame(const struct FRBSteamID& SteamID, const class FString& ConnectString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBSteamworksFunctionLibrary.InviteUserToGame");
		
		URBSteamworksFunctionLibrary_InviteUserToGame_Params params {};
		params.SteamID = SteamID;
		params.ConnectString = ConnectString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBSteamworksFunctionLibrary.GetSteamFriendsList
	 * 		Flags  -> ()
	 */
	TArray<struct FRBSteamFriendDetails> URBSteamworksFunctionLibrary::GetSteamFriendsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBSteamworksFunctionLibrary.GetSteamFriendsList");
		
		URBSteamworksFunctionLibrary_GetSteamFriendsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBSteamworksFunctionLibrary.GetAppID
	 * 		Flags  -> ()
	 */
	int32_t URBSteamworksFunctionLibrary::GetAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBSteamworksFunctionLibrary.GetAppID");
		
		URBSteamworksFunctionLibrary_GetAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSteamworks.RBSteamworksFunctionLibrary.CreateRBServerListRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URBServerList* URBSteamworksFunctionLibrary::CreateRBServerListRef(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSteamworks.RBSteamworksFunctionLibrary.CreateRBServerListRef");
		
		URBSteamworksFunctionLibrary_CreateRBServerListRef_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSteamworksFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSteamworksFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSteamworks.RBSteamworksFunctionLibrary");
		return ptr;
	}

}


