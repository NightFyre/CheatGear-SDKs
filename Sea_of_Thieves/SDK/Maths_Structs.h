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
	 * Enum Maths.EBuoyancyBlend
	 */
	enum class EBuoyancyBlend : uint8_t
	{
		PrimaryToSecondary  = 0,
		SecondaryToTertiary = 1,
		MAX                 = 2
	};

	/**
	 * Enum Maths.EPlaneLineIntersectionType
	 */
	enum class EPlaneLineIntersectionType : uint8_t
	{
		IntersectionWithinLineSegment    = 0,
		IntersectionOutsideOfLineSegment = 1,
		PlaneAndLineParallel             = 2,
		MAX                              = 3
	};

	/**
	 * Enum Maths.ESpatialOffsetMethod
	 */
	enum class ESpatialOffsetMethod : uint8_t
	{
		ThreeDimensional = 0,
		Horizontal       = 1,
		Vertical         = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Maths.OrientedPoint
	 * Size -> 0x0018
	 */
	struct FOrientedPoint
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Maths.RotationUpdateResult
	 * Size -> 0x0018
	 */
	struct FRotationUpdateResult
	{
	public:
		struct FRotator                                            UpdatedRotation;                                         // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SpinAngle;                                               // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TiltAngle;                                               // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TiltDirection;                                           // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Maths.TimedBuffer
	 * Size -> 0x0018
	 */
	struct FTimedBuffer
	{
	public:
		unsigned char                                              UnknownData_47IC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maths.WeightedProbabilityRange
	 * Size -> 0x0020
	 */
	struct FWeightedProbabilityRange
	{
	public:
		unsigned char                                              UnknownData_2HBR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Min;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   Max;                                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct Maths.WeightedProbabilityRangeOfRangesFloatPair
	 * Size -> 0x0008
	 */
	struct FWeightedProbabilityRangeOfRangesFloatPair
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max;                                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Maths.WeightedProbabilityRangeOfRanges
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FWeightedProbabilityRangeOfRanges : public FWeightedProbabilityRange
	{
	public:
		TArray<struct FWeightedProbabilityRangeOfRangesFloatPair>  SubRanges;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
	};

	/**
	 * ScriptStruct Maths.FixedStepInterpCurvePointVector2D
	 * Size -> 0x0010
	 */
	struct FFixedStepInterpCurvePointVector2D
	{
	public:
		struct FVector2D                                           OutVal;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Tangent;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Maths.FixedStepInterpCurveVector2D
	 * Size -> 0x0018
	 */
	struct FFixedStepInterpCurveVector2D
	{
	public:
		TArray<struct FFixedStepInterpCurvePointVector2D>          Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      StepTime;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLooped;                                                // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I2P5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maths.InertialSmoothedFloat
	 * Size -> 0x0010
	 */
	struct FInertialSmoothedFloat
	{
	public:
		float                                                      AccelerationMagnitude;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeed;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentVelocity;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentValue;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Maths.SpatialOffset
	 * Size -> 0x0008
	 */
	struct FSpatialOffset
	{
	public:
		float                                                      OffsetValue;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESpatialOffsetMethod                                       OffsetMethod;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AYR8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
