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
	 * Enum Music.EAISpawnerMusicZoneState
	 */
	enum class EAISpawnerMusicZoneState : uint8_t
	{
		Passive   = 0,
		InCombat  = 1,
		BattleWon = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Music.MusicZoneDestroyedEvent
	 * Size -> 0x0010
	 */
	struct FMusicZoneDestroyedEvent
	{
	public:
		unsigned char                                              UnknownData_GEWC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Music.MusicZoneSpawnedEvent
	 * Size -> 0x0010
	 */
	struct FMusicZoneSpawnedEvent
	{
	public:
		unsigned char                                              UnknownData_PB7M[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
