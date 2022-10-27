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
	 * Enum Foliage.EFoliageScaling
	 */
	enum class EFoliageScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		LockXZ  = 3,
		LockYZ  = 4,
		MAX     = 5
	};

	/**
	 * Enum Foliage.FoliageVertexColorMask
	 */
	enum class EFoliageVertexColorMask : uint8_t
	{
		FOLIAGEVERTEXCOLORMASK_Disabled = 0,
		FOLIAGEVERTEXCOLORMASK_Red      = 1,
		FOLIAGEVERTEXCOLORMASK_Green    = 2,
		FOLIAGEVERTEXCOLORMASK_Blue     = 3,
		FOLIAGEVERTEXCOLORMASK_Alpha    = 4,
		FOLIAGEVERTEXCOLORMASK_MAX      = 5
	};

	/**
	 * Enum Foliage.ESimulationQuery
	 */
	enum class ESimulationQuery : uint8_t
	{
		CollisionOverlap = 0,
		ShadeOverlap     = 1,
		AnyOverlap       = 2,
		MAX              = 3
	};

	/**
	 * Enum Foliage.ESimulationOverlap
	 */
	enum class ESimulationOverlap : uint8_t
	{
		CollisionOverlap = 0,
		ShadeOverlap     = 1,
		None             = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Foliage.FoliageTypeObject
	 * Size -> 0x0020
	 */
	struct FFoliageTypeObject
	{
	public:
		class UObject*                                             FoliageTypeObject;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFoliageType_InstancedStaticMesh*                    TypeInstance;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAsset;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T5CV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Type;                                                    // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Foliage.ProceduralFoliageInstance
	 * Size -> 0x0060
	 */
	struct FProceduralFoliageInstance
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6T03[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor
		struct FVector                                             Normal;                                                  // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Age;                                                     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MNKA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType_InstancedStaticMesh*                    Type;                                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S5JQ[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Foliage.ConsoleCommands
	 * Size -> 0x0001
	 */
	struct FConsoleCommands
	{
	public:
		unsigned char                                              UnknownData_MEAW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
