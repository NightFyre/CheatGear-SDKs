#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum ServerMigration.EExecutionTarget
	 */
	enum class EExecutionTarget : uint8_t
	{
		OldServer = 0,
		NewServer = 1,
		Client    = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ServerMigration.ServerSettings
	 * Size -> 0x0008
	 */
	struct FServerSettings
	{
	public:
		bool                                                       FailToConnectToServer;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RefuseMigrationStart;                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisconnectServerConnectionDuringMigration;               // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2W7K[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RefuseIncomingClientConnections;                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ServerMigration.ClientSettings
	 * Size -> 0x0002
	 */
	struct FClientSettings
	{
	public:
		bool                                                       FailToConnectToServer;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PauseMigrationBeforeOwnershipTransfer;                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct ServerMigration.ServerMigrationCustomMigrationSerialisationStruct
	 * Size -> 0x0004
	 */
	struct FServerMigrationCustomMigrationSerialisationStruct
	{
	public:
		unsigned char                                              UnknownData_3FQY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ServerMigration.ServerMigrationSerialisationDetailsTestsUStruct
	 * Size -> 0x000C
	 */
	struct FServerMigrationSerialisationDetailsTestsUStruct
	{
	public:
		float                                                      FloatWithNoMarkup;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint16_t                                                   UInt16WithMigrationMarkup;                               // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint16_t                                                   UInt16WithNotReplicatedMarkup;                           // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		uint16_t                                                   UInt16WithMigrationAndNotReplicatedMarkup;               // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XNKG[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
