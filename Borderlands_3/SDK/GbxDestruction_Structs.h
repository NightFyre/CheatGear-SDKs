#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum GbxDestruction.EDestructibleRelevance
	 */
	enum class EDestructibleRelevance : uint8_t
	{
		DR_GameplayAndNetwork = 0,
		DR_Gameplay           = 1,
		DR_None               = 2,
		DR_MAX                = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxDestruction.GbxDestructibleNetBuffer
	 * Size -> 0x0020
	 */
	struct FGbxDestructibleNetBuffer
	{
	public:
		unsigned char                                              UnknownData_6PS9[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
