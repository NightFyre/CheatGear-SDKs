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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RBSteamworks.ESteamServerType
	 */
	enum class ESteamServerType : uint8_t
	{
		Internet  = 0,
		LAN       = 1,
		Friends   = 2,
		Favorites = 3,
		History   = 4,
		Spectator = 5,
		MAX       = 6
	};

	/**
	 * Enum RBSteamworks.ERBSteamPersonaState
	 */
	enum class ERBSteamPersonaState : uint8_t
	{
		Offline = 0,
		Online  = 1,
		Busy    = 2,
		Away    = 3,
		Snooze  = 4,
		Unknown = 5,
		MAX     = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RBSteamworks.SteamServerDetails
	 * Size -> 0x0058
	 */
	struct FSteamServerDetails
	{
	public:
		class FString                                              ServerName;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassword;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFZ7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapName;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Players;                                                 // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Ping;                                                    // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBU2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConnectionString;                                        // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TagArray;                                                // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBSteamworks.RBSteamID
	 * Size -> 0x0008
	 */
	struct FRBSteamID
	{
	public:
		unsigned char                                              UnknownData_UGVP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RBSteamworks.RBSteamFriendDetails
	 * Size -> 0x0020
	 */
	struct FRBSteamFriendDetails
	{
	public:
		struct FRBSteamID                                          SteamID;                                                 // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PersonaName;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBSteamPersonaState                                       PersonaState;                                            // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STQU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
