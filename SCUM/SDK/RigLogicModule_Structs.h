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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RigLogicModule.EDNADataLayer
	 */
	enum class EDNADataLayer : uint8_t
	{
		Descriptor                 = 0,
		Definition                 = 1,
		Behavior                   = 2,
		Geometry                   = 3,
		GeometryWithoutBlendShapes = 4,
		AllWithoutBlendShapes      = 5,
		All                        = 6,
		MAX                        = 7
	};

	/**
	 * Enum RigLogicModule.EDirection
	 */
	enum class EDirection : uint8_t
	{
		Left  = 0,
		Right = 1,
		Up    = 2,
		Down  = 3,
		Front = 4,
		Back  = 5,
		MAX   = 6
	};

	/**
	 * Enum RigLogicModule.ERotationUnit
	 */
	enum class ERotationUnit : uint8_t
	{
		Degrees = 0,
		Radians = 1,
		MAX     = 2
	};

	/**
	 * Enum RigLogicModule.ETranslationUnit
	 */
	enum class ETranslationUnit : uint8_t
	{
		CM  = 0,
		M   = 1,
		MAX = 2
	};

	/**
	 * Enum RigLogicModule.EGender
	 */
	enum class EGender : uint8_t
	{
		Male   = 0,
		Female = 1,
		Other  = 2,
		MAX    = 3
	};

	/**
	 * Enum RigLogicModule.EArchetype
	 */
	enum class EArchetype : uint8_t
	{
		Asian     = 0,
		Black     = 1,
		Caucasian = 2,
		Hispanic  = 3,
		Alien     = 4,
		Other     = 5,
		MAX       = 6
	};

	/**
	 * Enum RigLogicModule.ERigLogicCalculationType
	 */
	enum class ERigLogicCalculationType : uint8_t
	{
		Scalar = 0,
		SSE    = 1,
		AVX    = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RigLogicModule.VertexLayout
	 * Size -> 0x000C
	 */
	struct FVertexLayout
	{
	public:
		int32_t                                                    position;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureCoordinate;                                       // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Normal;                                                  // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.TextureCoordinate
	 * Size -> 0x0008
	 */
	struct FTextureCoordinate
	{
	public:
		float                                                      U;                                                       // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      V;                                                       // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
	 * Size -> 0x0008
	 */
	struct FMeshBlendShapeChannelMapping
	{
	public:
		int32_t                                                    MeshIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlendShapeChannelIndex;                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.CoordinateSystem
	 * Size -> 0x0003
	 */
	struct FCoordinateSystem
	{
	public:
		EDirection                                                 XAxis;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDirection                                                 YAxis;                                                   // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDirection                                                 ZAxis;                                                   // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
	 * Size -> 0x0010
	 */
	struct FRigUnit_RigLogic_IntArray
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
	 * Size -> 0x0080
	 */
	struct FRigUnit_RigLogic_Data
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SkelMeshComponent;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CR9G[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            InputCurveIndices;                                       // 0x0018(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            HierarchyBoneIndices;                                    // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  MorphTargetCurveIndices;                                 // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  BlendShapeIndices;                                       // 0x0048(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  CurveContainerIndicesForAnimMaps;                        // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  RigLogicIndicesForAnimMaps;                              // 0x0068(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		uint32_t                                                   CurrentLOD;                                              // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EAB[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic
	 * Size -> 0x0080 (FullSize[0x00E8] - InheritedSize[0x0068])
	 */
	struct FRigUnit_RigLogic : public FRigUnitMutable
	{
	public:
		struct FRigUnit_RigLogic_Data                              Data;                                                    // 0x0068(0x0080) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
