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
	 * Enum RBZooKeeper.EZKAdminCommandResult
	 */
	enum class EZKAdminCommandResult : uint8_t
	{
		Rejected    = 0,
		Invalid     = 1,
		Denied      = 2,
		Ok          = 3,
		ShowMenu    = 4,
		SetupFailed = 5,
		SetupPassed = 6,
		MAX         = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RBZooKeeper.ZKAdminGroupInfo
	 * Size -> 0x0020
	 */
	struct FZKAdminGroupInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Commands;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKAdminInfo
	 * Size -> 0x0040
	 */
	struct FZKAdminInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UniqueId;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContactInfo;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Group;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKAFKInfo
	 * Size -> 0x0030
	 */
	struct FZKAFKInfo
	{
	public:
		unsigned char                                              UnknownData_U5Y6[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKBanInfo
	 * Size -> 0x0038
	 */
	struct FZKBanInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UniqueId;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Expiry;                                                  // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKCommandInfo
	 * Size -> 0x0020
	 */
	struct FZKCommandInfo
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKTeamKillRecord
	 * Size -> 0x0020
	 */
	struct FZKTeamKillRecord
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Forgives;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastModified;                                            // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKTeamKillerInfo
	 * Size -> 0x0030
	 */
	struct FZKTeamKillerInfo
	{
	public:
		class FString                                              LastKnownName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UniqueId;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FZKTeamKillRecord>                           TeamKillRecords;                                         // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RBZooKeeper.ZKReplicatedContent
	 * Size -> 0x0018
	 */
	struct FZKReplicatedContent
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Lines;                                                   // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
