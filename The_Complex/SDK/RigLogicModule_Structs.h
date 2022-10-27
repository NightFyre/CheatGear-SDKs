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
	 * Enum RigLogicModule.ETranslationUnit
	 */
	enum class ETranslationUnit : uint8_t
	{
		CM  = 0,
		M   = 1,
		MAX = 2
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
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
	 * Size -> 0x0010
	 */
	struct FRigUnit_RigLogic_IntArray
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.RigDefinitionMapping
	 * Size -> 0x0060
	 */
	struct FRigDefinitionMapping
	{
	public:
		TArray<int32_t>                                            InputCurveIndices;                                       // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            HierarchyBoneIndices;                                    // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  MorphTargetCurveIndices;                                 // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  BlendShapeIndices;                                       // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  CurveElementIndicesForAnimMaps;                          // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_RigLogic_IntArray>                  RigLogicIndicesForAnimMaps;                              // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
	 * Size -> 0x0030
	 */
	struct FRigUnit_RigLogic_Data
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SkelMeshComponent;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FFO[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   CurrentLOD;                                              // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHJQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigLogicModule.RigUnit_RigLogic
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_RigLogic : public FRigUnitMutable
	{
	public:
		struct FRigUnit_RigLogic_Data                              Data;                                                    // 0x00D0(0x0030) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
