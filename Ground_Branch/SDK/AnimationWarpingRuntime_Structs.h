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
	 * Enum AnimationWarpingRuntime.EWarpingVectorMode
	 */
	enum class EWarpingVectorMode : uint8_t
	{
		ComponentSpaceVector       = 0,
		ActorSpaceVector           = 1,
		WorldSpaceVector           = 2,
		IKFootRootLocalSpaceVector = 3,
		MAX                        = 4
	};

	/**
	 * Enum AnimationWarpingRuntime.EWarpingEvaluationMode
	 */
	enum class EWarpingEvaluationMode : uint8_t
	{
		Manual = 0,
		Graph  = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
	 * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      OrientationAngle;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YB8[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              SpineBones;                                              // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKFootBones;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EAxis                                                      RotationAxis;                                            // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGPT[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistributedBoneOrientationAlpha;                         // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationInterpSpeed;                                     // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88BA[0x34];                                  // 0x010C(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
	 * Size -> 0x0028
	 */
	struct FSlopeWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootSize;                                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
	 * Size -> 0x0060
	 */
	struct FSlopeWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_SM3I[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
	 * Size -> 0x0160 (FullSize[0x0228] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_3P5E[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootDefinition>                 FeetDefinitions;                                         // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootData>                       FeetData;                                                // 0x0110(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        PelvisOffsetInterpolator;                                // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORDS[0x34];                                  // 0x0128(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityDir;                                              // 0x015C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CustomFloorOffset;                                       // 0x0168(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedDeltaTime;                                         // 0x0174(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetFloorNormalWorldSpace;                             // 0x0178(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        FloorNormalInterpolator;                                 // 0x0184(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4SL[0x34];                                  // 0x018C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetFloorOffsetLocalSpace;                             // 0x01C0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        FloorOffsetInterpolator;                                 // 0x01CC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U2Y[0x34];                                  // 0x01D4(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStepHeight;                                           // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKeepMeshInsideOfCapsule : 1;                            // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPullPelvisDown : 1;                                     // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseCustomFloorOffset : 1;                               // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWasOnGround : 1;                                        // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowDebug : 1;                                          // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFloorSmoothingInitialized : 1;                          // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AXA[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ActorLocation;                                           // 0x0210(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityDirCompSpace;                                     // 0x021C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
	 * Size -> 0x0030
	 */
	struct FStrideWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ThighBone;                                               // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.InputClampConstants
	 * Size -> 0x0014
	 */
	struct FInputClampConstants
	{
	public:
		bool                                                       bClampResult;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFV6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedIncreasing;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.WarpingVectorValue
	 * Size -> 0x0010
	 */
	struct FWarpingVectorValue
	{
	public:
		EWarpingVectorMode                                         Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Value;                                                   // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.IKFootPelvisPullDownSolver
	 * Size -> 0x004C
	 */
	struct FIKFootPelvisPullDownSolver
	{
	public:
		struct FVectorRK4SpringInterpolator                        PelvisAdjustmentInterp;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZYV[0x34];                                  // 0x0008(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PelvisAdjustmentInterpAlpha;                             // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PelvisAdjustmentMaxDistance;                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PelvisAdjustmentErrorTolerance;                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PelvisAdjustmentMaxIter;                                 // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
	 * Size -> 0x0100 (FullSize[0x01C8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                             StrideDirection;                                         // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrideScale;                                             // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FStrideWarpingFootDefinition>                FootDefinitions;                                         // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FInputClampConstants                                StrideScaleModifier;                                     // 0x0108(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWarpingVectorValue                                 FloorNormalDirection;                                    // 0x011C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWarpingVectorValue                                 GravityDirection;                                        // 0x012C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FIKFootPelvisPullDownSolver                         PelvisIKFootSolver;                                      // 0x013C(0x004C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOrientStrideDirectionUsingFloorNormal;                  // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompensateIKUsingFKThighRotation;                       // 0x0189(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampIKUsingFKLimits;                                   // 0x018A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1WK[0x3D];                                  // 0x018B(0x003D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.InputScaleBiasClampState
	 * Size -> 0x0008
	 */
	struct FInputScaleBiasClampState
	{
	public:
		unsigned char                                              UnknownData_PNC6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.InputScaleBiasClampConstants
	 * Size -> 0x002C
	 */
	struct FInputScaleBiasClampConstants
	{
	public:
		bool                                                       bMapRange;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RI5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x000C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMin;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedIncreasing;                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.InputClampState
	 * Size -> 0x0008
	 */
	struct FInputClampState
	{
	public:
		unsigned char                                              UnknownData_11EF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
