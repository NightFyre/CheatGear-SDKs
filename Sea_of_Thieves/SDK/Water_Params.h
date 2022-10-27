#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Water.SplashProbeVFXComponent.IsProbeEnabled
	 */
	struct USplashProbeVFXComponent_IsProbeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.SplashProbeVFXComponent.EnableSplashProbe
	 */
	struct USplashProbeVFXComponent_EnableSplashProbe_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterSplashProbeFunctionLibrary.TickProbes
	 */
	struct UWaterSplashProbeFunctionLibrary_TickProbes_Params
	{
	public:
		class AActor*                                              InOwner;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FWaterSplashProbe>                           InSplashProbes;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      InDeltaTime;                                             // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterSplashProbeFunctionLibrary.TickProbe
	 */
	struct UWaterSplashProbeFunctionLibrary_TickProbe_Params
	{
	public:
		class AActor*                                              InOwner;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWaterSplashProbe                                   InSplashProbe;                                           // 0x0008(0x00D8)  (Parm, OutParm, ReferenceParm)
		float                                                      InDeltaTime;                                             // 0x00E0(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
	 */
	struct UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params
	{
	public:
		TArray<struct FWaterSplashProbe>                           InSplashProbes;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      SamplingTime;                                            // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
	 */
	struct UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params
	{
	public:
		TArray<struct FWaterSplashProbe>                           InSplashProbes;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ProbeIndex;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
	 */
	struct UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params
	{
	public:
		struct FWaterSpout                                         WaterSplashLocator;                                      // 0x0000(0x0070)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
	 */
	struct UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params
	{	};

	/**
	 * Function Water.FFTWaterInterface.SetExtendedPlaneComponent
	 */
	struct UFFTWaterInterface_SetExtendedPlaneComponent_Params
	{
	public:
		class UFFTWaterExtendedPlaneComponent*                     InFFTWaterComponent;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FFTWaterInterface.SetComponent
	 */
	struct UFFTWaterInterface_SetComponent_Params
	{
	public:
		class UFFTWaterComponent*                                  InFFTWaterComponent;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FFTWaterInterface.SetActor
	 */
	struct UFFTWaterInterface_SetActor_Params
	{
	public:
		class AAthenaFFTWater*                                     InFFTWaterActor;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FFTWaterInterface.GetExtendedPlaneComponent
	 */
	struct UFFTWaterInterface_GetExtendedPlaneComponent_Params
	{
	public:
		class UFFTWaterExtendedPlaneComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FFTWaterInterface.GetComponent
	 */
	struct UFFTWaterInterface_GetComponent_Params
	{
	public:
		class UFFTWaterComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FFTWaterInterface.GetActor
	 */
	struct UFFTWaterInterface_GetActor_Params
	{
	public:
		class AAthenaFFTWater*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.IsReadyToBeQueried
	 */
	struct UWaterInterface_IsReadyToBeQueried_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
	 */
	struct UWaterInterface_GetWaterInformationWithScaledChoppyness_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Height;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ApproxVelocity;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5C1H[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChoppynessScalar;                                        // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaterQueryResult                                          ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.GetWaterInformationBatched
	 */
	struct UWaterInterface_GetWaterInformationBatched_Params
	{
	public:
		TArray<struct FVector2D>                                   SamplePositions;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              Heights;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FVector2D>                                   ApproxVelocities;                                        // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FVector>                                     Normals;                                                 // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
		class AActor*                                              Actor;                                                   // 0x0040(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaterQueryResult                                          ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.GetWaterInformation
	 */
	struct UWaterInterface_GetWaterInformation_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Height;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ApproxVelocity;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HV0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaterQueryResult                                          ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
	 */
	struct UWaterInterface_GetWaterHeightWithScaledChoppyness_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YAQI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Interpolate;                                             // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9QS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Height;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChoppynessScalar;                                        // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaterQueryResult                                          ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.GetWaterHeight
	 */
	struct UWaterInterface_GetWaterHeight_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L63O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Interpolate;                                             // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7IK3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Height;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWaterQueryResult                                          ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInterface.GetActorWaterPlane
	 */
	struct UWaterInterface_GetActorWaterPlane_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XH9L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterSimPlane                                      ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Water.WaterInterface.GetActorWaterInformation
	 */
	struct UWaterInterface_GetActorWaterInformation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWaterInformation                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Water.FFTWaterService.OnRep_FFTWaterComponent
	 */
	struct AFFTWaterService_OnRep_FFTWaterComponent_Params
	{	};

	/**
	 * Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
	 */
	struct AFFTWaterService_OnRep_ExtendedPlaneComponent_Params
	{	};

	/**
	 * Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
	 */
	struct UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
	 */
	struct UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
	 */
	struct UFlatWaterPlaneComponent_ConvertToWaterSpace_Params
	{
	public:
		struct FVector                                             WorldSpacePosition;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
	 */
	struct UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params
	{
	public:
		class AActor*                                              InOwner;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XF7H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      InDeltaTime;                                             // 0x0140(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChoppinessScalar;                                      // 0x0144(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FakeZOffsetGeneratorScalar;                              // 0x0148(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x014C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
	 */
	struct UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params
	{
	public:
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      ZOffset;                                                 // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
	 */
	struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params
	{
	public:
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      UnaryBlendOverride;                                      // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
	 */
	struct UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params
	{
	public:
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0000(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      Blend;                                                   // 0x0130(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBuoyancyBlend                                             BlendType;                                               // 0x0134(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
	 */
	struct UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PV9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FBuoyancySampleMovement                             InSampleMovement;                                        // 0x0140(0x0068)  (Parm, OutParm)
		float                                                      DeltaTime;                                               // 0x01A8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
	 */
	struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOUJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FBuoyancySampleMovement                             InSampleMovement;                                        // 0x0140(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
	 */
	struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NF21[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FBuoyancySampleMovement                             InSampleMovement;                                        // 0x0140(0x0068)  (Parm, OutParm)
		int32_t                                                    ConfigurationIndex;                                      // 0x01A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
	 */
	struct UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X0RW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWaterBuoyancy                                      InWaterBuoyancy;                                         // 0x0010(0x0130)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FBuoyancySampleMovement                             InSampleMovement;                                        // 0x0140(0x0068)  (Parm, OutParm)
		class UCurveVector*                                        InCenterOfMassOffsetCurve;                               // 0x01A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FBuoyancySampleMovementConfigurationEntry>   NewSampleData;                                           // 0x01B0(0x0010)  (Parm, OutParm, ZeroConstructor)
		float                                                      BuoyancyScalarAtNewPosition;                             // 0x01C0(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ITVY[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         BuoyancyScalarCurve;                                     // 0x01C8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         ProbeMovementCurve;                                      // 0x01D0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveTime;                                                // 0x01D8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInteractionComponent.LeaveWaterPlane
	 */
	struct UWaterInteractionComponent_LeaveWaterPlane_Params
	{
	public:
		class UBaseWaterComponent*                                 WaterComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
	 */
	struct UWaterInteractionComponent_LeaveWaterExclusionZone_Params
	{	};

	/**
	 * Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
	 */
	struct UWaterInteractionComponent_IsUsingWaterExcludedZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
	 */
	struct UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterInteractionComponent.IsInWaterExcludedZone
	 */
	struct UWaterInteractionComponent_IsInWaterExcludedZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Water.WaterInteractionComponent.GetWaterPlaneComponent
	 */
	struct UWaterInteractionComponent_GetWaterPlaneComponent_Params
	{
	public:
		class UBaseWaterComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
	 */
	struct UWaterInteractionComponent_GetNumberOfWaterPlanes_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInteractionComponent.EnterWaterPlane
	 */
	struct UWaterInteractionComponent_EnterWaterPlane_Params
	{
	public:
		class UBaseWaterComponent*                                 WaterComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterInteractionComponent.EnterWaterExclusionZone
	 */
	struct UWaterInteractionComponent_EnterWaterExclusionZone_Params
	{	};

	/**
	 * Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
	 */
	struct UWaterPlaneExclusionComponent_OnOverlapEnd_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
	 */
	struct UWaterPlaneExclusionComponent_OnOverlapBegin_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSweep;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JG6G[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
