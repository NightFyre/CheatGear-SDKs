#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum GbxRuntime.EConditionRefreshRate
	 */
	enum class EConditionRefreshRate : uint8_t
	{
		OncePerThreeSeconds = 0,
		OncePerSecond       = 1,
		TwicePerSecond      = 2,
		FourTimesPerSecond  = 3,
		Immediately         = 4,
		MAX                 = 5
	};

	/**
	 * Enum GbxRuntime.ENumericRangeEditMode
	 */
	enum class ENumericRangeEditMode : uint8_t
	{
		MinMax        = 0,
		ValueVariance = 1,
		Variance      = 2,
		Value         = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxRuntime.NumericRange
	 * Size -> 0x0008
	 */
	struct FNumericRange
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Variance;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxRuntime.GbxStructPtrParam
	 * Size -> 0x0008
	 */
	struct FGbxStructPtrParam
	{
	public:
		unsigned char                                              UnknownData_UQEM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxRuntime.GbxTriggerProperty
	 * Size -> 0x0001
	 */
	struct FGbxTriggerProperty
	{
	public:
		unsigned char                                              UnknownData_PH2I[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxRuntime.SceneBasedPosition
	 * Size -> 0x0038
	 */
	struct FSceneBasedPosition
	{
	public:
		class USceneComponent*                                     Base;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedBaseLocation;                                      // 0x0014(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CachedBaseRotation;                                      // 0x0020(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CachedTransPosition;                                     // 0x002C(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
