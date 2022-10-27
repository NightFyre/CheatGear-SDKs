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
	 * Enum TreasuryFramework.ETreasuryWaveType
	 */
	enum class ETreasuryWaveType : uint8_t
	{
		Regular   = 0,
		FinalWave = 1,
		MAX       = 2
	};

	/**
	 * Enum TreasuryFramework.ETreasuryVaultDoorState
	 */
	enum class ETreasuryVaultDoorState : uint8_t
	{
		Opening = 0,
		Open    = 1,
		Closing = 2,
		Closed  = 3,
		MAX     = 4
	};

	/**
	 * Enum TreasuryFramework.ETreasuryEncounterType
	 */
	enum class ETreasuryEncounterType : uint8_t
	{
		Sirens        = 0,
		OceanCrawlers = 1,
		MAX           = 2
	};

	/**
	 * Enum TreasuryFramework.ETreasuryWaveResult
	 */
	enum class ETreasuryWaveResult : uint8_t
	{
		Continue   = 0,
		ChangeType = 1,
		MAX        = 2
	};

	/**
	 * Enum TreasuryFramework.ETreasuryState
	 */
	enum class ETreasuryState : uint8_t
	{
		Inactive  = 0,
		Waiting   = 1,
		Active    = 2,
		Completed = 3,
		Failed    = 4,
		Aftermath = 5,
		MAX       = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TreasuryFramework.TreasuryWaveEncounter
	 * Size -> 0x0048
	 */
	struct FTreasuryWaveEncounter
	{
	public:
		ETreasuryEncounterType                                     EncounterType;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6JC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpawnAIWaveMechanismAction*                         SpawnerMechanism;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MechanismTrigger;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASpawnAIWaveMechanismAction*                         SpawnerMechanismVaultMaster;                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MechanismTriggerVaultMaster;                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTreasuryWaveDataAsset*                              Waves;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTreasuryWaveDataAsset*                              FinalWaves;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTreasuryWaveDataAsset*                              FinalWavesVaultMaster;                                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NeedsRoomFlooded;                                        // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1EG3[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TreasuryFramework.TreasuryWaveTracker
	 * Size -> 0x0018
	 */
	struct FTreasuryWaveTracker
	{
	public:
		unsigned char                                              UnknownData_UPCU[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TreasuryFramework.EventTreasuryRoomInactive
	 * Size -> 0x0001
	 */
	struct FEventTreasuryRoomInactive
	{
	public:
		unsigned char                                              UnknownData_OIEI[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TreasuryFramework.EventTreasuryRoomActive
	 * Size -> 0x0001
	 */
	struct FEventTreasuryRoomActive
	{
	public:
		unsigned char                                              UnknownData_3N4X[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
