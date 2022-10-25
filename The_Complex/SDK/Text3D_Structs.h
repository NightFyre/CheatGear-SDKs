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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Text3D.EText3DBevelType
	 */
	enum class EText3DBevelType : uint8_t
	{
		Linear     = 0,
		HalfCircle = 1,
		Convex     = 2,
		Concave    = 3,
		OneStep    = 4,
		TwoSteps   = 5,
		Engraved   = 6,
		MAX        = 7
	};

	/**
	 * Enum Text3D.EText3DHorizontalTextAlignment
	 */
	enum class EText3DHorizontalTextAlignment : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum Text3D.EText3DVerticalTextAlignment
	 */
	enum class EText3DVerticalTextAlignment : uint8_t
	{
		FirstLine = 0,
		Top       = 1,
		Center    = 2,
		Bottom    = 3,
		MAX       = 4
	};

	/**
	 * Enum Text3D.EText3DCharacterEffectOrder
	 */
	enum class EText3DCharacterEffectOrder : uint8_t
	{
		Normal     = 0,
		FromCenter = 1,
		ToCenter   = 2,
		Opposite   = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Text3D.CachedFontMeshes
	 * Size -> 0x0060
	 */
	struct FCachedFontMeshes
	{
	public:
		TMap<uint32_t, class UStaticMesh*>                         Glyphs;                                                  // 0x0000(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL5X[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Text3D.CachedFontData
	 * Size -> 0x00E8
	 */
	struct FCachedFontData
	{
	public:
		class UFont*                                               Font;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, struct FCachedFontMeshes>                   Meshes;                                                  // 0x0008(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZLM[0x90];                                  // 0x0058(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Text3D.GlyphMeshParameters
	 * Size -> 0x0018
	 */
	struct FGlyphMeshParameters
	{
	public:
		float                                                      Extrude;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bevel;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DBevelType                                           BevelType;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELFB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BevelSegments;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutline;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SML4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutlineExpand;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
