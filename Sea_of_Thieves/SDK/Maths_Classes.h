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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Maths.AngleMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAngleMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_CalculateEulerAngle(float FromAngle, float ToAngle);
		float STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate);
		float STATIC_AngleMod360(float Angle);
		float STATIC_AngleMod180(float Angle);
		float STATIC_AngleLerpShortest(float Start, float End, float Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.BuoyancyMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBuoyancyMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity);
		float STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, EBuoyancyBlend BlendType);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.CircleMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCircleMaths : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int32_t NumberOfSectors, float IgnoredFraction);
		float STATIC_Area(float InRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.CurveMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCurveMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
		float STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
		struct FVector STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
		float STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline);
		struct FVector STATIC_GetCentre(class USplineComponent* Spline);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.Density
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDensity : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_Water();
		float STATIC_SeaWater();
		float STATIC_Min();
		float STATIC_Max();
		bool STATIC_IsValid(float InValue);
		float STATIC_Air();
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.DragCoefficients
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDragCoefficients : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_Sphere();
		float STATIC_PlanePerpendicularToFlow();
		float STATIC_PlaneParallelToFlow();
		float STATIC_Min();
		float STATIC_Max();
		bool STATIC_IsValid(float Value);
		float STATIC_Cube();
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.DragMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDragMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.FloatMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFloatMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit);
		float STATIC_WrapToPositiveRange(float Input, float UpperLimit);
		float STATIC_WrapAroundPivot(float Input, float Pivot, float Range);
		float STATIC_MoveTowards(float From, float To, float Speed, float Time);
		float STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp);
		bool STATIC_IncrementCounter(float* Counter, float Delta, float CounterMax);
		float STATIC_GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit);
		float STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit);
		float STATIC_Bound(float ValueToBound, float Bound1, float Bound2);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.Gravity
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGravity : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_Earth();
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.OrientedPointBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrientedPointBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FTransform STATIC_GetPointAsTransform(const struct FOrientedPoint& Point);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.PoissonDiscSampling
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPoissonDiscSampling : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FVector> STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int32_t InRNGSeed);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.ProjectileMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProjectileMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height);
		float STATIC_FindProjectileSpeedModifierToHitTarget(const struct FVector& From, const struct FVector& Target, float Pitch, float ProjectileSpeed, float Gravity);
		bool STATIC_FindAimDirectionToHitTarget(struct FRotator* OutAimDirection, const struct FVector& From, const struct FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles);
		bool STATIC_CalculateLaunchVelocity(struct FVector* OutLaunchVelocty, float* OutFlightTime, const struct FVector& From, const struct FVector& Target, const struct FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.RotationMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URotationMaths : public UBlueprintFunctionLibrary
	{
	public:
		struct FTransform STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation);
		struct FQuat STATIC_RotatorToQuat(const struct FRotator& Rotation);
		struct FVector STATIC_RotateDirectionInterpConstantTo(const struct FVector& CurrentDirectionNormalised, const struct FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec);
		void STATIC_FindRotationAxisAndRadAngleBetweenVectors(const struct FVector& FromVectorNormalised, const struct FVector& ToVectorNormalised, struct FVector* OutRotationAxis, float* OutRotationAngleRadians);
		bool STATIC_AreRotatorsTheSameRotation(const struct FRotator& Rotator1, const struct FRotator& Rotator2, float ErrorTolerance);
		struct FRotationUpdateResult STATIC_AdvanceRotationBySpinAndTiltSynced(const struct FRotator& StartRotation, const struct FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.ShapeMathsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShapeMathsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsPointOnOrWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint);
		struct FVector STATIC_FindClosestPointWithinASphere(class USphereComponent* SphereComponent, const struct FVector& WorldSpaceReferencePoint);
		struct FVector STATIC_FindClosestPointWithinACylinder(class UCapsuleComponent* CylinderComponent, const struct FVector& WorldSpaceReferencePoint);
		struct FVector STATIC_FindClosestPointWithinACapsule(class UCapsuleComponent* CapsuleComponent, const struct FVector& WorldSpaceReferencePoint);
		struct FVector STATIC_FindClosestPointWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.SphereMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USphereMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_VolumeFromRadius(float InRadius);
		float STATIC_SurfaceAreaFromRadius(float InRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.SphericalCapMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USphericalCapMaths : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_Volume(float InRadius, float InHeight);
		float STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight);
		float STATIC_BaseRadius(float InRadius, float InHeight);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.StatisticsMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStatisticsMaths : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.TimedBufferFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimedBufferFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateInterval(struct FTimedBuffer* TimedBuffer, float DeltaTime, float Value);
		bool STATIC_GetValueRange(struct FTimedBuffer* TimedBuffer, float MinWindowLength, float* ValueRange);
		struct FTimedBuffer STATIC_CreateTimedBuffer(float WindowLength);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.TimeMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeMaths : public UBlueprintFunctionLibrary
	{
	public:
		struct FTimespan STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B);
		static UClass* StaticClass();
	};

	/**
	 * Class Maths.VectorMaths
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVectorMaths : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint);
		bool STATIC_LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance);
		bool STATIC_LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance);
		EPlaneLineIntersectionType STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment);
		float STATIC_Distance(const struct FVector& A, const struct FVector& B);
		float STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
