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
	 * Enum Water.EWaterHeightType
	 */
	enum class EWaterHeightType : uint8_t
	{
		Dynamic = 0,
		Static  = 1,
		MAX     = 2
	};

	/**
	 * Enum Water.EWaterSplashProbeType
	 */
	enum class EWaterSplashProbeType : uint8_t
	{
		ThresholdedRateOfChange = 0,
		StateChangeWaterToAir   = 1,
		StateChangeAirToWater   = 2,
		StateChangeAny          = 3,
		Continuous              = 4,
		MAX                     = 5
	};

	/**
	 * Enum Water.EWaterQueryResult
	 */
	enum class EWaterQueryResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		NoWater = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum Water.EBuoyancyDragSampleType
	 */
	enum class EBuoyancyDragSampleType : uint8_t
	{
		Spherical = 0,
		Planar    = 1,
		MAX       = 2
	};

	/**
	 * Enum Water.EBuoyancySampleType
	 */
	enum class EBuoyancySampleType : uint8_t
	{
		Spherical  = 0,
		Cuboidal   = 1,
		ProbeCurve = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Water.WaterSplashProbe
	 * Size -> 0x00D8
	 */
	struct FWaterSplashProbe
	{
	public:
		unsigned char                                              UnknownData_WQG5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProbeDebugName;                                          // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             LocalOffset;                                             // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Height;                                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pitch;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw;                                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Roll;                                                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RateOfChangeThreshold;                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocalOffsetAdjustment;                                   // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LocalOffsetAdjustmentDuration;                           // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWaterSplashProbeType                                      Type;                                                    // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWaterHeightType                                           WaterHeightType;                                         // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TYEI[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticWaterHeightValue;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOZP[0x88];                                  // 0x0050(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.SplashProbe
	 * Size -> 0x0128
	 */
	struct FSplashProbe
	{
	public:
		unsigned char                                              UnknownData_9C0F[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWaterSplashProbe                                   Probe;                                                   // 0x0008(0x00D8) Edit, DisableEditOnInstance
		float                                                      ProbeSamplingTime;                                       // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBetweenProbeVfx;                                     // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ParticleSystem;                                          // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EVfxUnderwaterUsage                                        UnderwaterUsage;                                         // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnAttached;                                           // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AttachToWaterSurface;                                    // 0x00F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAttachLocation                                            SplashAttachType;                                        // 0x00F3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VfxSpawnOffset;                                          // 0x00F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Enabled;                                                 // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IK3[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CurrentlyPlayingVFX;                                     // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7XVG[0x18];                                  // 0x0110(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.WaterSpout
	 * Size -> 0x0070
	 */
	struct FWaterSpout
	{
	public:
		struct FTransform                                          SpoutLocatorTransform;                                   // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            SpoutParticleSystem;                                     // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SplashParticleSystem;                                    // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QGV8[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.WaterInformation
	 * Size -> 0x0010
	 */
	struct FWaterInformation
	{
	public:
		class UClass*                                              WaterType;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       CanSwim;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SDIA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.BuoyancyVolumeSample
	 * Size -> 0x0058
	 */
	struct FBuoyancyVolumeSample
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBuoyancySampleType                                        Type;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRelevantForSubmersionVolumeCalculation;                 // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1C76[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scalar;                                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DampingScalar;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1D1Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistUnderwaterVSBuoyancyForce;                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DistUnderwaterVSBuoyancyForceSecondary;                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DistUnderwaterVSBuoyancyForceTertiary;                   // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FakeZOffsetGeneratorCurve;                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FakeZOffsetAmp;                                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FakeZOffsetGeneratorTimeScale;                           // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S5A4[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.BuoyancyDragSample
	 * Size -> 0x0090
	 */
	struct FBuoyancyDragSample
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Tangent;                                                 // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DragCoefficient;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBuoyancyDragSampleType                                    Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NJR6[0x63];                                  // 0x002D(0x0063) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.WaterBuoyancy
	 * Size -> 0x0130
	 */
	struct FWaterBuoyancy
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverallBuyoancyScalar;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DampingPerSample;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditionalAngularDampingWhenSubmerged;                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZHLP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBuoyancyVolumeSample>                       VolumeSamples;                                           // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBuoyancyDragSample>                         DragSamples;                                             // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UCurveFloat*                                         BuyoancySampleZSpeedVSDampeningScalar;                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QuadSubmersionTestSampleResolution;                      // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FCQV[0xEC];                                  // 0x0044(0x00EC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
	 * Size -> 0x0018
	 */
	struct FBuoyancySampleMovementConfigurationEntry
	{
	public:
		struct FVector                                             SampleOffset;                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GNUN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         BuoyancyScaleCurve;                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Water.BuoyancySampleMovementConfiguration
	 * Size -> 0x0038
	 */
	struct FBuoyancySampleMovementConfiguration
	{
	public:
		class UCurveVector*                                        CenterOfMassOffsetCurve;                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBuoyancySampleMovementConfigurationEntry>   SampleMoveData;                                          // 0x0008(0x0010) Edit, ZeroConstructor
		float                                                      OverallBuoyancyScalar;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LUD9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         OverallBuoyancyScalarBlendCurve;                         // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ProbeMovementBlendCurve;                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V1IY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.BuoyancySampleMovement
	 * Size -> 0x0068
	 */
	struct FBuoyancySampleMovement
	{
	public:
		TArray<struct FBuoyancySampleMovementConfiguration>        Configurations;                                          // 0x0000(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_YP7X[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         BuoyancyScalarCurve;                                     // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ProbeMovementCurve;                                      // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4UCI[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.WaterSplashProbesContainer
	 * Size -> 0x0018
	 */
	struct FWaterSplashProbesContainer
	{
	public:
		TArray<struct FWaterSplashProbe>                           Probes;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      ProbeSamplingTime;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZPZC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.EventCurrentWaterPlaneChange
	 * Size -> 0x0010
	 */
	struct FEventCurrentWaterPlaneChange
	{
	public:
		class UBaseWaterComponent*                                 FormerWaterPlane;                                        // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseWaterComponent*                                 NewWaterPlane;                                           // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Water.EventLeftWaterExclusionZone
	 * Size -> 0x0001
	 */
	struct FEventLeftWaterExclusionZone
	{
	public:
		unsigned char                                              UnknownData_A6NH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.EventEnteredWaterExclusionZone
	 * Size -> 0x0001
	 */
	struct FEventEnteredWaterExclusionZone
	{
	public:
		unsigned char                                              UnknownData_NF5K[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Water.FFTWaterQueryResult
	 * Size -> 0x001C
	 */
	struct FFFTWaterQueryResult
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Choppiness;                                              // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		EWaterQueryResult                                          WaterQueryResult;                                        // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J1IP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
