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
	 * ScriptStruct BumperZone.BumperZoneData
	 * Size -> 0x0028
	 */
	struct FBumperZoneData
	{
	public:
		class AShipBumperZone*                                     BumperZone;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_594B[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BumperZone.CachedShip
	 * Size -> 0x0018
	 */
	struct FCachedShip
	{
	public:
		unsigned char                                              UnknownData_IIB0[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
