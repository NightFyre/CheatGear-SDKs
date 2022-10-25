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
	 * Enum JsonUtilities.EJsonTestEnum
	 */
	enum class EJsonTestEnum : uint8_t
	{
		Value0 = 0,
		Value1 = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct JsonUtilities.JsonObjectWrapper
	 * Size -> 0x0018
	 */
	struct FJsonObjectWrapper
	{
	public:
		unsigned char                                              UnknownData_ABHC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct JsonUtilities.TestTextObject
	 * Size -> 0x0070
	 */
	struct FTestTextObject
	{
	public:
		class FText                                                TestText;                                                // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_75F6[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TestTextExport;                                          // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_4EMT[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct JsonUtilities.TestFloatObject
	 * Size -> 0x0008
	 */
	struct FTestFloatObject
	{
	public:
		float                                                      TestFloat1;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TestFloat2;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct JsonUtilities.TestEnumObject
	 * Size -> 0x0001
	 */
	struct FTestEnumObject
	{
	public:
		EJsonTestEnum                                              TestEnum;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct JsonUtilities.TestMessageTimespan
	 * Size -> 0x0008
	 */
	struct FTestMessageTimespan
	{
	public:
		struct FTimespan                                           Timespan;                                                // 0x0000(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestMessageDateTime
	 * Size -> 0x0008
	 */
	struct FTestMessageDateTime
	{
	public:
		struct FDateTime                                           DateTime;                                                // 0x0000(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestSerializationObject
	 * Size -> 0x0028
	 */
	struct FTestSerializationObject
	{
	public:
		bool                                                       TestBool;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OCDF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TestInt;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TestString;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               TestGuid;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestSerializationNestedObject
	 * Size -> 0x0028
	 */
	struct FTestSerializationNestedObject
	{
	public:
		struct FTestSerializationObject                            NestedObject;                                            // 0x0000(0x0028)
	};

	/**
	 * ScriptStruct JsonUtilities.TestMessageUInt64
	 * Size -> 0x0008
	 */
	struct FTestMessageUInt64
	{
	public:
		uint64_t                                                   TestInt;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct JsonUtilities.TestMessageInt64
	 * Size -> 0x0008
	 */
	struct FTestMessageInt64
	{
	public:
		int64_t                                                    TestInt;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct JsonUtilities.TestUStructMapSerializationObject
	 * Size -> 0x0050
	 */
	struct FTestUStructMapSerializationObject
	{
	public:
		TMap<class FString, struct FTestSerializationObject>       StructMap;                                               // 0x0000(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestInt32MapSerializationObject
	 * Size -> 0x0050
	 */
	struct FTestInt32MapSerializationObject
	{
	public:
		TMap<class FString, int32_t>                               Int32Map;                                                // 0x0000(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestInvalidStringMapSerializationObject
	 * Size -> 0x0050
	 */
	struct FTestInvalidStringMapSerializationObject
	{
	public:
		TMap<int32_t, class FString>                               StringMap;                                               // 0x0000(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct JsonUtilities.TestStringMapSerializationObject
	 * Size -> 0x0050
	 */
	struct FTestStringMapSerializationObject
	{
	public:
		TMap<class FString, class FString>                         StringMap;                                               // 0x0000(0x0050) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
