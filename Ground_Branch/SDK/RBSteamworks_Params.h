#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function RBSteamworks.RBServerList.RequestServerList
	 */
	struct URBServerList_RequestServerList_Params
	{
	public:
		ESteamServerType                                           Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBServerList.ParseQuedServerList
	 */
	struct URBServerList_ParseQuedServerList_Params
	{	};

	/**
	 * Function RBSteamworks.RBServerList.IsRefreshing
	 */
	struct URBServerList_IsRefreshing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBServerList.CancelRequestServerList
	 */
	struct URBServerList_CancelRequestServerList_Params
	{	};

	/**
	 * Function RBSteamworks.RBSteamworksFunctionLibrary.MatchingSteamID
	 */
	struct URBSteamworksFunctionLibrary_MatchingSteamID_Params
	{
	public:
		struct FRBSteamID                                          A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRBSteamID                                          B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBSteamworksFunctionLibrary.InviteUserToGame
	 */
	struct URBSteamworksFunctionLibrary_InviteUserToGame_Params
	{
	public:
		struct FRBSteamID                                          SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ConnectString;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBSteamworksFunctionLibrary.GetSteamFriendsList
	 */
	struct URBSteamworksFunctionLibrary_GetSteamFriendsList_Params
	{
	public:
		TArray<struct FRBSteamFriendDetails>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBSteamworksFunctionLibrary.GetAppID
	 */
	struct URBSteamworksFunctionLibrary_GetAppID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RBSteamworks.RBSteamworksFunctionLibrary.CreateRBServerListRef
	 */
	struct URBSteamworksFunctionLibrary_CreateRBServerListRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URBServerList*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
