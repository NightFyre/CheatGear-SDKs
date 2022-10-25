#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class RBSteamworks.RBServerList
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class URBServerList : public UObject
	{
	public:
		unsigned char                                              UnknownData_MV5M[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSteamServerDetails>                         QuedSteamServerDetails;                                  // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QK3C[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnServerRespondedEvent;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerRefreshCompleteEvent;                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void RequestServerList(ESteamServerType Type);
		void ParseQuedServerList();
		bool IsRefreshing();
		void CancelRequestServerList();
		static UClass* StaticClass();
	};

	/**
	 * Class RBSteamworks.RBSteamworksFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URBSteamworksFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool MatchingSteamID(const struct FRBSteamID& A, const struct FRBSteamID& B);
		bool InviteUserToGame(const struct FRBSteamID& SteamID, const class FString& ConnectString);
		TArray<struct FRBSteamFriendDetails> GetSteamFriendsList();
		int32_t GetAppID();
		class URBServerList* CreateRBServerListRef(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
