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
	 * Enum ProceduralMeshComponent.EProcMeshSliceCapOption
	 */
	enum class EProcMeshSliceCapOption : uint8_t
	{
		NoCap                  = 0,
		CreateNewSectionForCap = 1,
		UseLastSectionForCap   = 2,
		MAX                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshTangent
	 * Size -> 0x0020
	 */
	struct FProcMeshTangent
	{
	public:
		struct FVector                                             TangentX;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipTangentY;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJI7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshVertex
	 * Size -> 0x0098
	 */
	struct FProcMeshVertex
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProcMeshTangent                                    Tangent;                                                 // 0x0030(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU0O[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           UV0;                                                     // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV3;                                                     // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshSection
	 * Size -> 0x0060
	 */
	struct FProcMeshSection
	{
	public:
		TArray<struct FProcMeshVertex>                             ProcVertexBuffer;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           ProcIndexBuffer;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                SectionLocalBox;                                         // 0x0020(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSectionVisible;                                         // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCSA[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
