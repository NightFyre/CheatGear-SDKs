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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EngineMessages.EngineServiceNotification
	 * Size -> 0x0018
	 */
	struct FEngineServiceNotification
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		double                                                     TimeSeconds;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceTerminate
	 * Size -> 0x0010
	 */
	struct FEngineServiceTerminate
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceExecuteCommand
	 * Size -> 0x0020
	 */
	struct FEngineServiceExecuteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              UserName;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceAuthGrant
	 * Size -> 0x0020
	 */
	struct FEngineServiceAuthGrant
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              UserToGrant;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EngineMessages.EngineServiceAuthDeny
	 * Size -> 0x0020
	 */
	struct FEngineServiceAuthDeny
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              UserToDeny;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EngineMessages.EngineServicePong
	 * Size -> 0x0050
	 */
	struct FEngineServicePong
	{
	public:
		class FString                                              CurrentLevel;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    EngineVersion;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBegunPlay;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WKCW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               InstanceId;                                              // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              InstanceType;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               SessionId;                                               // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WorldTimeSeconds;                                        // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ZOS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineMessages.EngineServicePing
	 * Size -> 0x0001
	 */
	struct FEngineServicePing
	{
	public:
		unsigned char                                              UnknownData_UCQS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
