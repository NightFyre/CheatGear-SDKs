#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * ScriptStruct SCUE4.SafeColor
	 * Size -> 0x0098
	 */
	struct FSafeColor
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueR;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueG;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueB;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueA;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftR;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftG;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftB;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftA;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0090(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJVI[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeVector4D
	 * Size -> 0x0098
	 */
	struct FSafeVector4D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueW;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftW;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0090(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XKW4[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeVector2D
	 * Size -> 0x0058
	 */
	struct FSafeVector2D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0050(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQ5J[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeText
	 * Size -> 0x0038
	 */
	struct FSafeText
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4YME[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeFloat
	 * Size -> 0x0038
	 */
	struct FSafeFloat
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PWOH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeName
	 * Size -> 0x0038
	 */
	struct FSafeName
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HUWL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeBool
	 * Size -> 0x0038
	 */
	struct FSafeBool
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IH1P[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeVector3D
	 * Size -> 0x0078
	 */
	struct FSafeVector3D
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0070(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8UEY[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeRotator
	 * Size -> 0x0078
	 */
	struct FSafeRotator
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueX;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueY;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              TrueZ;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftX;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftY;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ShiftZ;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0070(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NR13[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeTransform
	 * Size -> 0x0168
	 */
	struct FSafeTransform
	{
	public:
		struct FSafeVector3D                                       Scale;                                                   // 0x0000(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSafeVector3D                                       position;                                                // 0x0078(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSafeRotator                                        Rotation;                                                // 0x00F0(0x0078) Edit, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SCUE4.SafeByte
	 * Size -> 0x0038
	 */
	struct FSafeByte
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SK13[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeInt
	 * Size -> 0x0038
	 */
	struct FSafeInt
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LY16[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SCUE4.SafeString
	 * Size -> 0x0038
	 */
	struct FSafeString
	{
	public:
		class FString                                              Internal;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Base;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Shift;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flag;                                                    // 0x0030(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T1TM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
