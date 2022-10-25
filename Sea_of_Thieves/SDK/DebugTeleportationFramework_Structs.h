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
	 * ScriptStruct DebugTeleportationFramework.DebugTeleportDestinationEntry
	 * Size -> 0x0040
	 */
	struct FDebugTeleportDestinationEntry
	{
	public:
		class FString                                              DebugMenuSubPath;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             Destination;                                             // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor
		struct FGuid                                               AssociatedCrew;                                          // 0x001C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               Id;                                                      // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QZNT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
