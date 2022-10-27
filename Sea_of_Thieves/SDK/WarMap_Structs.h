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
	 * ScriptStruct WarMap.EventLocalPlayerOpenedWarMap
	 * Size -> 0x0001
	 */
	struct FEventLocalPlayerOpenedWarMap
	{
	public:
		unsigned char                                              UnknownData_MCFB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WarMap.EventWarMapStateChanged
	 * Size -> 0x0010
	 */
	struct FEventWarMapStateChanged
	{
	public:
		unsigned char                                              UnknownData_4GDF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              WarMapProposalContainer;                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
