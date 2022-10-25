#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
		int8_t                                                     Int8;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDDY[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    Int16;                                                   // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Int64;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UInt8;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16VO[0x1];                                   // 0x0011(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   UInt16;                                                  // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UInt32;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UInt64;                                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOJC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Double;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerBooleanTestStruct
	 * Size -> 0x0003
	 */
	struct FStructSerializerBooleanTestStruct
	{
	public:
		bool                                                       BoolFalse;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolTrue;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield0 : 1;                                           // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield1 : 1;                                           // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield2Set : 1;                                        // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield3 : 1;                                           // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield4Set : 1;                                        // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield5Set : 1;                                        // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield6 : 1;                                           // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Bitfield7Set : 1;                                        // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerObjectTestStruct
	 * Size -> 0x00B0
	 */
	struct FStructSerializerObjectTestStruct
	{
	public:
		class UClass*                                              RawClass;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WrappedClass;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SubClass;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SoftClass[0x28];                                         // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UObject*                                             RawObject;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             WrappedObject;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMetaData>                            WeakObject;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SoftObject[0x28];                                        // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSoftClassPath                                      ClassPath;                                               // 0x0080(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ObjectPath;                                              // 0x0098(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerBuiltinTestStruct
	 * Size -> 0x00D0
	 */
	struct FStructSerializerBuiltinTestStruct
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x0028(0x0018) NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGKL[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Vector4;                                                 // 0x0060(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0080(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOTS[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quat;                                                    // 0x00A0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQZE[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Serialization.StructSerializerLWCTypesTest
	 * Size -> 0x0360
	 */
	struct FStructSerializerLWCTypesTest
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector2D;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQMH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Vector4;                                                 // 0x0030(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatrix                                             Matrix;                                                  // 0x0050(0x0080) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPlane                                              Plane;                                                   // 0x00D0(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Quat;                                                    // 0x00F0(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0110(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q53[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0130(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                Box;                                                     // 0x0190(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox2D                                              Box2D;                                                   // 0x01C8(0x0028) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoxSphereBounds                                    BoxSphereBounds;                                         // 0x01F0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOrientedBox                                        OrientedBox;                                             // 0x0228(0x0078) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9A3F[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Double;                                                  // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VectorArray;                                             // 0x02B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, struct FVector>                        StrToVec;                                                // 0x02C0(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              VectorSet[0x50];                                         // 0x0310(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Serialization.OrientedBoxFloat
	 * Size -> 0x003C
	 */
	struct FOrientedBoxFloat
	{
	public:
		struct FVector3f                                           Center;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           AxisX;                                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           AxisY;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           AxisZ;                                                   // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentX;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerNonLWCTypesTest
	 * Size -> 0x0220
	 */
	struct FStructSerializerNonLWCTypesTest
	{
	public:
		struct FVector3f                                           Vector;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           Vector2D;                                                // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LG45[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4f                                           Vector4;                                                 // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatrix44f                                          Matrix;                                                  // 0x0030(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPlane4f                                            Plane;                                                   // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat4f                                             Quat;                                                    // 0x0080(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator3f                                          Rotator;                                                 // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PZR[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform3f                                        Transform;                                               // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox3f                                              Box;                                                     // 0x00D0(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox2f                                              Box2D;                                                   // 0x00EC(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoxSphereBounds3f                                  BoxSphereBounds;                                         // 0x0100(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOrientedBoxFloat                                   OrientedBox;                                             // 0x011C(0x003C) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ35[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Double;                                                  // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   VectorArray;                                             // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, struct FVector3f>                      StrToVec;                                                // 0x0178(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              VectorSet[0x50];                                         // 0x01C8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_GY9G[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Serialization.StructSerializerByteArray
	 * Size -> 0x0038
	 */
	struct FStructSerializerByteArray
	{
	public:
		int32_t                                                    Dummy1;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7O2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ByteArray;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Dummy2;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F9U[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int8_t>                                             Int8Array;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Dummy3;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7LD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Serialization.StructSerializerArrayTestStruct
	 * Size -> 0x0060
	 */
	struct FStructSerializerArrayTestStruct
	{
	public:
		TArray<int32_t>                                            Int32Array;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ByteArray;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StaticSingleElement;                                     // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticInt32Array[0x3];                                   // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticFloatArray[0x3];                                   // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1S8[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VectorArray;                                             // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStructSerializerBuiltinTestStruct>          StructArray;                                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerMapTestStruct
	 * Size -> 0x0140
	 */
	struct FStructSerializerMapTestStruct
	{
	public:
		TMap<int32_t, class FString>                               IntToStr;                                                // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         StrToStr;                                                // 0x0050(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, struct FVector>                        StrToVec;                                                // 0x00A0(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                             // 0x00F0(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Serialization.StructSerializerSetTestStruct
	 * Size -> 0x0140
	 */
	struct FStructSerializerSetTestStruct
	{
	public:
		unsigned char                                              StrSet[0x50];                                            // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              IntSet[0x50];                                            // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              NameSet[0x50];                                           // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              StructSet[0x50];                                         // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Serialization.StructSerializerTestStruct
	 * Size -> 0x0800
	 */
	struct FStructSerializerTestStruct
	{
	public:
		struct FStructSerializerNumericTestStruct                  Numerics;                                                // 0x0000(0x0030) NoDestructor, NativeAccessSpecifierPublic
		struct FStructSerializerBooleanTestStruct                  Booleans;                                                // 0x0030(0x0003) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CM40[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStructSerializerObjectTestStruct                   Objects;                                                 // 0x0038(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N9J[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStructSerializerBuiltinTestStruct                  Builtins;                                                // 0x00F0(0x00D0) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStructSerializerArrayTestStruct                    Arrays;                                                  // 0x01C0(0x0060) NativeAccessSpecifierPublic
		struct FStructSerializerMapTestStruct                      Maps;                                                    // 0x0220(0x0140) NativeAccessSpecifierPublic
		struct FStructSerializerSetTestStruct                      Sets;                                                    // 0x0360(0x0140) NativeAccessSpecifierPublic
		struct FStructSerializerLWCTypesTest                       LWCTypes;                                                // 0x04A0(0x0360) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
