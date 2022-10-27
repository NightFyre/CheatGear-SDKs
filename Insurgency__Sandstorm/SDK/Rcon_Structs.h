#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Enum Rcon.ERconClientState
	 */
	enum class ERconClientState : uint8_t
	{
		WaitingAuthentication = 0,
		Authenticated         = 1,
		MAX                   = 2
	};

	/**
	 * Enum Rcon.ESourceRconPacketType
	 */
	enum class ESourceRconPacketType : uint8_t
	{
		SERVERDATA_Response_Value = 0,
		SERVERDATA_ExecCommand    = 1,
		SERVERDATA_Auth_Response  = 2,
		SERVERDATA_Auth           = 3,
		SERVERDATA_MAX            = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Rcon.RconCommand
	 * Size -> 0x0030
	 */
	struct FRconCommand
	{
	public:
		class FString                                              Usage;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HelpDescription;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW9A[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Rcon.RconPendingCommand
	 * Size -> 0x0018
	 */
	struct FRconPendingCommand
	{
	public:
		int32_t                                                    PacketId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQMJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Command;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Rcon.SourceRconHeader
	 * Size -> 0x000C
	 */
	struct FSourceRconHeader
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceRconPacketType                                      Type;                                                    // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUYU[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Rcon.SourceRconPacket
	 * Size -> 0x0020
	 */
	struct FSourceRconPacket
	{
	public:
		struct FSourceRconHeader                                   Header;                                                  // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KZU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Body;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
