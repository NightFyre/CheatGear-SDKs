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
	 * ScriptStruct ServiceMaelstrom.MaelstromEventBaseFragment
	 * Size -> 0x0030
	 */
	struct FMaelstromEventBaseFragment
	{
	public:
		uint64_t                                                   SequenceID;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint64_t                                                   TypeID;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Name;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              TimestampUtc;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
