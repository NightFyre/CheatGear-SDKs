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
	 * ScriptStruct Serialisation.SerialisedNestedStruct
	 * Size -> 0x0028
	 */
	struct FSerialisedNestedStruct
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>                                            IntArray;                                                // 0x0010(0x0010) ZeroConstructor
		int32_t                                                    Int;                                                     // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Float;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Serialisation.SerialisedTestStruct
	 * Size -> 0x0060
	 */
	struct FSerialisedTestStruct
	{
	public:
		int32_t                                                    Int;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Float;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              String;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>                                            IntArray;                                                // 0x0018(0x0010) ZeroConstructor
		TArray<struct FSerialisedNestedStruct>                     StructArray;                                             // 0x0028(0x0010) ZeroConstructor
		struct FSerialisedNestedStruct                             NestedStruct;                                            // 0x0038(0x0028)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
