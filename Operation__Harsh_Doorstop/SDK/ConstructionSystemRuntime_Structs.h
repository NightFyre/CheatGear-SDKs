#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum ConstructionSystemRuntime.EConstructionSystemToolType
	 */
	enum class EConstructionSystemToolType : uint8_t
	{
		BuildTool  = 0,
		RemoveTool = 1,
		MAX        = 2
	};

	/**
	 * Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
	 */
	enum class EConstructionSystemCursorVisiblity : uint8_t
	{
		Visible        = 0,
		VisibleInvalid = 1,
		Hidden         = 2,
		MAX            = 3
	};

	/**
	 * Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
	 */
	enum class EPrefabricatorConstructionSnapType : uint8_t
	{
		Floor  = 0,
		Wall   = 1,
		Object = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
	 * Size -> 0x0050
	 */
	struct FConstructionSystemSavePlayerInfo
	{
	public:
		bool                                                       bRestorePlayerInfo;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCGF[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ControlRotation;                                         // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7F9A[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
	 * Size -> 0x0040
	 */
	struct FConstructionSystemSaveConstructedItem
	{
	public:
		class UPrefabricatorAssetInterface*                        PrefabAsset;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5ME[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
	 * Size -> 0x0006
	 */
	struct FPCSnapConstraintFloor
	{
	public:
		bool                                                       AttachX;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachXNegative;                                         // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachY;                                                 // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachYNegative;                                         // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachZ;                                                 // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachZNegative;                                         // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
	 * Size -> 0x0004
	 */
	struct FPCSnapConstraintWall
	{
	public:
		bool                                                       AttachTop;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachBottom;                                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachLeft;                                              // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttachRight;                                             // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
	 * Size -> 0x0040
	 */
	struct FConstructionSystemUIPrefabEntry
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Tooltip;                                                 // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrefabricatorAssetInterface*                        Prefab;                                                  // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
	 * Size -> 0x0030
	 */
	struct FConstructionSystemUICategory
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConstructionSystemUIPrefabEntry>            PrefabEntries;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
