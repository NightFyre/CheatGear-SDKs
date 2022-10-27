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
	 * ScriptStruct CustomDeath.SetShouldUseRevivalFlowData
	 * Size -> 0x0008
	 */
	struct FSetShouldUseRevivalFlowData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldUseRevivalFlow;                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2VO9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedData
	 * Size -> 0x0008
	 */
	struct FSetShouldSkipFerryOfTheDamnedData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldSkipFerryOfTheDamned;                             // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L6YL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerData
	 * Size -> 0x0004
	 */
	struct FGameModeDeathPenaltyRespawnTimerData
	{
	public:
		float                                                      SpawnTimer;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomDeath.SetCustomPlayerStartData
	 * Size -> 0x0008
	 */
	struct FSetCustomPlayerStartData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlayerStartActorNetID;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomDeath.CustomDeathConfiguration
	 * Size -> 0x0018
	 */
	struct FCustomDeathConfiguration
	{
	public:
		unsigned char                                              UnknownData_T5WP[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomDeath.ResetCustomConfigForPlayerData
	 * Size -> 0x0004
	 */
	struct FResetCustomConfigForPlayerData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomDeath.KillPlayerData
	 * Size -> 0x0004
	 */
	struct FKillPlayerData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomDeath.KillCrewData
	 * Size -> 0x0010
	 */
	struct FKillCrewData
	{
	public:
		struct FGuid                                               CrewNetGUID;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CustomDeath.ForcePlayerRespawnData
	 * Size -> 0x0008
	 */
	struct FForcePlayerRespawnData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRespawnAsGhost;                                         // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QW8F[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomDeath.DestroyCustomPlayerStartData
	 * Size -> 0x0018
	 */
	struct FDestroyCustomPlayerStartData
	{
	public:
		int32_t                                                    PlayerStartActorNetID;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QR0V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tag;                                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomDeath.CustomPlayerStartConfigData
	 * Size -> 0x0030
	 */
	struct FCustomPlayerStartConfigData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5ZKW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor
		TArray<class FString>                                      Tags;                                                    // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CustomDeath.CustomPlayerStartConfigResponseData
	 * Size -> 0x0008
	 */
	struct FCustomPlayerStartConfigResponseData
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37W2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerStartId;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
