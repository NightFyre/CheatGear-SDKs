#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Enum ModelingComponents.EBaseCreateFromSelectedTargetType
	 */
	enum class EBaseCreateFromSelectedTargetType : uint8_t
	{
		NewAsset        = 0,
		FirstInputAsset = 1,
		LastInputAsset  = 2,
		MAX             = 3
	};

	/**
	 * Enum ModelingComponents.EDynamicMeshTangentCalcType
	 */
	enum class EDynamicMeshTangentCalcType : uint8_t
	{
		NoTangents           = 0,
		AutoCalculated       = 1,
		ExternallyCalculated = 2,
		MAX                  = 3
	};

	/**
	 * Enum ModelingComponents.EMultiTransformerMode
	 */
	enum class EMultiTransformerMode : uint8_t
	{
		DefaultGizmo         = 0,
		QuickAxisTranslation = 1,
		MAX                  = 2
	};

	/**
	 * Enum ModelingComponents.EHandleSourcesMethod
	 */
	enum class EHandleSourcesMethod : uint8_t
	{
		DeleteSources = 0,
		HideSources   = 1,
		KeepSources   = 2,
		MAX           = 3
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointFalloffType
	 */
	enum class ESpaceCurveControlPointFalloffType : uint8_t
	{
		Linear = 0,
		Smooth = 1,
		MAX    = 2
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointOriginMode
	 */
	enum class ESpaceCurveControlPointOriginMode : uint8_t
	{
		Shared = 0,
		First  = 1,
		Last   = 2,
		MAX    = 3
	};

	/**
	 * Enum ModelingComponents.ESpaceCurveControlPointTransformMode
	 */
	enum class ESpaceCurveControlPointTransformMode : uint8_t
	{
		Shared    = 0,
		PerVertex = 1,
		MAX       = 2
	};

	/**
	 * Enum ModelingComponents.EUVLayoutPreviewSide
	 */
	enum class EUVLayoutPreviewSide : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ModelingComponents.RenderableTriangleVertex
	 * Size -> 0x0024
	 */
	struct FRenderableTriangleVertex
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV;                                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelingComponents.RenderableTriangle
	 * Size -> 0x0078
	 */
	struct FRenderableTriangle
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex0;                                                 // 0x0008(0x0024) NoDestructor, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex1;                                                 // 0x002C(0x0024) NoDestructor, NativeAccessSpecifierPublic
		struct FRenderableTriangleVertex                           Vertex2;                                                 // 0x0050(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GMI[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
