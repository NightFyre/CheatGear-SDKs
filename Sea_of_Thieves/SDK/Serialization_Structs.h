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
	 * ScriptStruct Serialization.StructSerializerNumericTestStruct
	 * Size -> 0x0030
	 */
	struct FStructSerializerNumericTestStruct
	{
	public:
		int8_t                                                     Int8;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AGLO[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    Int16;                                                   // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Int32;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    Int64;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UInt8;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQRU[0x1];                                   // 0x0011(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   UInt16;                                                  // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   UInt32;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint64_t                                                   UInt64;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Float;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5YUE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Double;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Serialization.StructSerializerBooleanTestStruct
	 * Size -> 0x0008
	 */
	struct FStructSerializerBooleanTestStruct
	{
	public:
		bool                                                       BoolFalse;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BoolTrue;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S3T8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Bitfield;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Serialization.StructSerializerObjectTestStruct
	 * Size -> 0x0010
	 */
	struct FStructSerializerObjectTestStruct
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UObject*                                             ObjectPtr;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Serialization.StructSerializerBuiltinTestStruct
	 * Size -> 0x0040
	 */
	struct FStructSerializerBuiltinTestStruct
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Name;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              String;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FRotator                                            Rotator;                                                 // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Vector;                                                  // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Serialization.StructSerializerArrayTestStruct
	 * Size -> 0x0040
	 */
	struct FStructSerializerArrayTestStruct
	{
	public:
		TArray<int32_t>                                            Int32Array;                                              // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    StaticSingleElement;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StaticInt32Array[0x3];                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaticFloatArray[0x3];                                   // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_19WN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VectorArray;                                             // 0x0030(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Serialization.StructSerializerTestStruct
	 * Size -> 0x00C8
	 */
	struct FStructSerializerTestStruct
	{
	public:
		struct FStructSerializerNumericTestStruct                  Numerics;                                                // 0x0000(0x0030)
		struct FStructSerializerBooleanTestStruct                  Booleans;                                                // 0x0030(0x0008)
		struct FStructSerializerObjectTestStruct                   Objects;                                                 // 0x0038(0x0010)
		struct FStructSerializerBuiltinTestStruct                  Builtins;                                                // 0x0048(0x0040)
		struct FStructSerializerArrayTestStruct                    Arrays;                                                  // 0x0088(0x0040)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
