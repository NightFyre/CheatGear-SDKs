#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum AnimGraphRuntime.AnimPhysAngularConstraintType
	 */
	enum class EAnimPhysAngularConstraintType : uint8_t
	{
		AnimPhysAngularConstraintTypeAngular                           = 0,
		AnimPhysAngularConstraintTypeCone                              = 1,
		AnimPhysAngularConstraintTypeAnimPhysAngularConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysLinearConstraintType
	 */
	enum class EAnimPhysLinearConstraintType : uint8_t
	{
		AnimPhysLinearConstraintTypeFree                             = 0,
		AnimPhysLinearConstraintTypeLimited                          = 1,
		AnimPhysLinearConstraintTypeAnimPhysLinearConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysSimSpaceType
	 */
	enum class EAnimPhysSimSpaceType : uint8_t
	{
		AnimPhysSimSpaceTypeComponent                = 0,
		AnimPhysSimSpaceTypeActor                    = 1,
		AnimPhysSimSpaceTypeWorld                    = 2,
		AnimPhysSimSpaceTypeRootRelative             = 3,
		AnimPhysSimSpaceTypeBoneRelative             = 4,
		AnimPhysSimSpaceTypeAnimPhysSimSpaceType_MAX = 5
	};

	/**
	 * Enum AnimGraphRuntime.ESphericalLimitType
	 */
	enum class ESphericalLimitType : uint8_t
	{
		Inner = 0,
		Outer = 1,
		MAX   = 2
	};

	/**
	 * Enum AnimGraphRuntime.EBlendListTransitionType
	 */
	enum class EBlendListTransitionType : uint8_t
	{
		StandardBlend   = 0,
		Inertialization = 1,
		MAX             = 2
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenBoneModificationMode
	 */
	enum class EDrivenBoneModificationMode : uint8_t
	{
		AddToInput       = 0,
		ReplaceComponent = 1,
		AddToRefPose     = 2,
		MAX              = 3
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenDestinationMode
	 */
	enum class EDrivenDestinationMode : uint8_t
	{
		Bone              = 0,
		MorphTarget       = 1,
		MaterialParameter = 2,
		MAX               = 3
	};

	/**
	 * Enum AnimGraphRuntime.EAnimFunctionCallSite
	 */
	enum class EAnimFunctionCallSite : uint8_t
	{
		OnInitialize                  = 0,
		OnUpdate                      = 1,
		OnBecomeRelevant              = 2,
		OnEvaluate                    = 3,
		OnInitializePostRecursion     = 4,
		OnUpdatePostRecursion         = 5,
		OnBecomeRelevantPostRecursion = 6,
		OnEvaluatePostRecursion       = 7,
		OnStartedBlendingOut          = 8,
		OnStartedBlendingIn           = 9,
		OnFinishedBlendingOut         = 10,
		OnFinishedBlendingIn          = 11,
		MAX                           = 12
	};

	/**
	 * Enum AnimGraphRuntime.EConstraintOffsetOption
	 */
	enum class EConstraintOffsetOption : uint8_t
	{
		None           = 0,
		Offset_RefPose = 1,
		MAX            = 2
	};

	/**
	 * Enum AnimGraphRuntime.CopyBoneDeltaMode
	 */
	enum class ECopyBoneDeltaMode : uint8_t
	{
		CopyBoneDeltaModeAccumulate            = 0,
		CopyBoneDeltaModeCopy                  = 1,
		CopyBoneDeltaModeCopyBoneDeltaMode_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.ELayeredBoneBlendMode
	 */
	enum class ELayeredBoneBlendMode : uint8_t
	{
		BranchFilter = 0,
		BlendMask    = 1,
		MAX          = 2
	};

	/**
	 * Enum AnimGraphRuntime.EInterpolationBlend
	 */
	enum class EInterpolationBlend : uint8_t
	{
		Linear             = 0,
		Cubic              = 1,
		Sinusoidal         = 2,
		EaseInOutExponent2 = 3,
		EaseInOutExponent3 = 4,
		EaseInOutExponent4 = 5,
		EaseInOutExponent5 = 6,
		MAX                = 7
	};

	/**
	 * Enum AnimGraphRuntime.EBoneModificationMode
	 */
	enum class EBoneModificationMode : uint8_t
	{
		BMM_Ignore   = 0,
		BMM_Replace  = 1,
		BMM_Additive = 2,
		BMM_MAX      = 3
	};

	/**
	 * Enum AnimGraphRuntime.EModifyCurveApplyMode
	 */
	enum class EModifyCurveApplyMode : uint8_t
	{
		Add                   = 0,
		Scale                 = 1,
		Blend                 = 2,
		WeightedMovingAverage = 3,
		RemapCurve            = 4,
		MAX                   = 5
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverType
	 */
	enum class EPoseDriverType : uint8_t
	{
		SwingAndTwist = 0,
		SwingOnly     = 1,
		Translation   = 2,
		MAX           = 3
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverSource
	 */
	enum class EPoseDriverSource : uint8_t
	{
		Rotation    = 0,
		Translation = 1,
		MAX         = 2
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverOutput
	 */
	enum class EPoseDriverOutput : uint8_t
	{
		DrivePoses  = 0,
		DriveCurves = 1,
		MAX         = 2
	};

	/**
	 * Enum AnimGraphRuntime.ESnapshotSourceMode
	 */
	enum class ESnapshotSourceMode : uint8_t
	{
		NamedSnapshot = 0,
		SnapshotPin   = 1,
		MAX           = 2
	};

	/**
	 * Enum AnimGraphRuntime.ERefPoseType
	 */
	enum class ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum AnimGraphRuntime.ESimulationSpace
	 */
	enum class ESimulationSpace : uint8_t
	{
		ComponentSpace = 0,
		WorldSpace     = 1,
		BaseBoneSpace  = 2,
		MAX            = 3
	};

	/**
	 * Enum AnimGraphRuntime.EScaleChainInitialLength
	 */
	enum class EScaleChainInitialLength : uint8_t
	{
		FixedDefaultLengthValue = 0,
		Distance                = 1,
		ChainLength             = 2,
		MAX                     = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESequenceEvalReinit
	 */
	enum class ESequenceEvalReinit : uint8_t
	{
		NoReset       = 0,
		StartPosition = 1,
		ExplicitTime  = 2,
		MAX           = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESplineBoneAxis
	 */
	enum class ESplineBoneAxis : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	/**
	 * Enum AnimGraphRuntime.EWarpingEvaluationMode
	 */
	enum class EWarpingEvaluationMode : uint8_t
	{
		Manual = 0,
		Graph  = 1,
		MAX    = 2
	};

	/**
	 * Enum AnimGraphRuntime.EWarpingVectorMode
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
	 * Enum AnimGraphRuntime.EEasingFuncType
	 */
	enum class EEasingFuncType : uint8_t
	{
		Linear         = 0,
		Sinusoidal     = 1,
		Cubic          = 2,
		QuadraticInOut = 3,
		CubicInOut     = 4,
		HermiteCubic   = 5,
		QuarticInOut   = 6,
		QuinticInOut   = 7,
		CircularIn     = 8,
		CircularOut    = 9,
		CircularInOut  = 10,
		ExpIn          = 11,
		ExpOut         = 12,
		ExpInOut       = 13,
		CustomCurve    = 14,
		MAX            = 15
	};

	/**
	 * Enum AnimGraphRuntime.ERotationComponent
	 */
	enum class ERotationComponent : uint8_t
	{
		EulerX          = 0,
		EulerY          = 1,
		EulerZ          = 2,
		QuaternionAngle = 3,
		SwingAngle      = 4,
		TwistAngle      = 5,
		MAX             = 6
	};

	/**
	 * Enum AnimGraphRuntime.ERBFSolverType
	 */
	enum class ERBFSolverType : uint8_t
	{
		Additive      = 0,
		Interpolative = 1,
		MAX           = 2
	};

	/**
	 * Enum AnimGraphRuntime.ERBFFunctionType
	 */
	enum class ERBFFunctionType : uint8_t
	{
		Gaussian        = 0,
		Exponential     = 1,
		Linear          = 2,
		Cubic           = 3,
		Quintic         = 4,
		DefaultFunction = 5,
		MAX             = 6
	};

	/**
	 * Enum AnimGraphRuntime.ERBFDistanceMethod
	 */
	enum class ERBFDistanceMethod : uint8_t
	{
		Euclidean     = 0,
		Quaternion    = 1,
		SwingAngle    = 2,
		TwistAngle    = 3,
		DefaultMethod = 4,
		MAX           = 5
	};

	/**
	 * Enum AnimGraphRuntime.ERBFNormalizeMethod
	 */
	enum class ERBFNormalizeMethod : uint8_t
	{
		OnlyNormalizeAboveOne = 0,
		AlwaysNormalize       = 1,
		NormalizeWithinMedian = 2,
		NoNormalization       = 3,
		MAX                   = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimGraphRuntime.AnimationStateResultReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAnimationStateResultReference : public FAnimNodeReference
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		unsigned char                                              UnknownData_77FY[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         PreviousBlendSpace;                                      // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
	 * Size -> 0x0168 (FullSize[0x01D0] - InheritedSize[0x0068])
	 */
	struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
	{
	public:
		unsigned char                                              UnknownData_7NMT[0xC8];                                  // 0x0068(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseLink                                           BasePose;                                                // 0x0130(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSocketName;                                        // 0x0144(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PivotSocketName;                                         // 0x014C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4AP[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtLocation;                                          // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SocketAxis;                                              // 0x0170(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSR3[0x44];                                  // 0x018C(0x0044) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
	 * Size -> 0x0088
	 */
	struct FAnimPhysConstraintSetup
	{
	public:
		EAnimPhysLinearConstraintType                              LinearXLimitType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearYLimitType;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearZLimitType;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KIWA[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearAxesMin;                                           // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearAxesMax;                                           // 0x0020(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysAngularConstraintType                             AngularConstraintType;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         TwistAxis;                                               // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         AngularTargetAxis;                                       // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPAJ[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeAngle;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMin;                                        // 0x0040(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMax;                                        // 0x0058(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularTarget;                                           // 0x0070(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
	 * Size -> 0x0070
	 */
	struct FAnimPhysPlanarLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PlaneTransform;                                          // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
	 * Size -> 0x0030
	 */
	struct FAnimPhysSphericalLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             SphereLocalOffset;                                       // 0x0010(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitRadius;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF00[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVHD[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0038(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0088(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUB9[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
	 * Size -> 0x01A0
	 */
	struct FRotationRetargetingInfo
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBI8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Target;                                                  // 0x0070(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERotationComponent                                         RotationComponent;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT06[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TwistAxis;                                               // 0x00D8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAbsoluteAngle;                                       // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3964[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceMinimum;                                           // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEasingFuncType                                            EasingType;                                              // 0x0104(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4IC[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CustomCurve;                                             // 0x0108(0x0088) Edit, NativeAccessSpecifierPublic
		bool                                                       bFlipEasing;                                             // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBES[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EasingWeight;                                            // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0OP[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
	 * Size -> 0x0508 (FullSize[0x05D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      LinearDampingOverride;                                   // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDampingOverride;                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WZC[0xC0];                                  // 0x00D0(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      RelativeSpaceBone;                                       // 0x0190(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      BoundBone;                                               // 0x01A0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEnd;                                                // 0x01B0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtents;                                              // 0x01C0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalJointOffset;                                        // 0x01D8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VCK[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityOverride;                                         // 0x01F8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearSpringConstant;                                    // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularSpringConstant;                                   // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindScale;                                               // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1Q6[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0220(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x0238(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0250(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularBiasOverride;                                     // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSolverIterationsPreUpdate;                            // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSolverIterationsPostUpdate;                           // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4WA[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimPhysConstraintSetup                            ConstraintSetup;                                         // 0x0278(0x0088) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysSphericalLimit>                     SphericalLimits;                                         // 0x0300(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SphereCollisionRadius;                                   // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05BN[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExternalForce;                                           // 0x0318(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x0330(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EAnimPhysCollisionType                                     CollisionType;                                           // 0x0340(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysSimSpaceType                                      SimulationSpace;                                         // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRFB[0x2];                                   // 0x0342(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseSphericalLimits : 1;                                 // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit : 1;                                     // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUpdate : 1;                                           // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoEval : 1;                                             // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLinearDamping : 1;                              // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularBias : 1;                                // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularDamping : 1;                             // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind : 1;                                         // 0x0344(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_VGSP : 1;                                    // 0x0345(0x0001) BIT_FIELD (PADDING)
		bool                                                       bUseGravityOverride : 1;                                 // 0x0345(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGravityOverrideInSimSpace : 1;                          // 0x0345(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearSpring : 1;                                       // 0x0345(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAngularSpring : 1;                                      // 0x0345(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChain : 1;                                              // 0x0345(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGAX[0xA];                                   // 0x0346(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotationRetargetingInfo                            RetargetingSettings;                                     // 0x0350(0x01A0) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP9G[0xE0];                                  // 0x04F0(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0034(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0040(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0090(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUTV[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHH5[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AngularRangeLimit
	 * Size -> 0x0040
	 */
	struct FAngularRangeLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      bone;                                                    // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FAngularRangeLimit>                          AngularRangeLimits;                                      // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     AngularOffsets;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
	 * Size -> 0x0024
	 */
	struct FBlendBoneByChannelEntry
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBlendTranslation;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRotation;                                          // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendScale;                                             // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKGQ[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBlendBoneByChannelEntry>                    BoneDefinitions;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LM0[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DZ1[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TransformsSpace;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRLO[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0010(0x0010) Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X9ZG[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeleportToNormalizedTime;                               // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEHK[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
	{
	public:
		float                                                      X;                                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Y;                                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GroupName;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAnimGroupRole                                             GroupRole;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PO14[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         BlendSpace;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPoseLink>                                   SamplePoseLinks;                                         // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QUJ4[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DrivingCurve;                                            // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMin;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x00F4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00FC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EDrivenDestinationMode                                     DestinationMode;                                         // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrivenBoneModificationMode                                ModificationMode;                                        // 0x010D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComponentType                                             SourceComponent;                                         // 0x010E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRange : 1;                                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationX : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationY : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationZ : 1;                           // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationX : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationY : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationZ : 1;                              // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleX : 1;                                 // 0x010F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleY : 1;                                 // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleZ : 1;                                 // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9J0[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CallFunction : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LN85[0x14];                                  // 0x0020(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAnimFunctionCallSite                                      CallSite;                                                // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K8M[0x3];                                   // 0x0035(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
	 * Size -> 0x00F8 (FullSize[0x01C0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                             EffectorLocation;                                        // 0x00C8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJSV[0xF];                                   // 0x00E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x00F0(0x0090) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TipBone;                                                 // 0x0180(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x0190(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EL69[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RotationLimitPerJoints;                                  // 0x01B0(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AnimGraphRuntime.Constraint
	 * Size -> 0x001C
	 */
	struct FConstraint
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EConstraintOffsetOption                                    OffsetOption;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformConstraintType                                   TransformType;                                           // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                PerAxis;                                                 // 0x0012(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9G9[0x7];                                   // 0x0015(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Constraint
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraint>                                 ConstraintSetup;                                         // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ConstraintWeights;                                       // 0x00E8(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5PR[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x00EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ControlSpace;                                            // 0x00EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKGL[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x00EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECopyBoneDeltaMode                                         CopyMode;                                                // 0x00EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMultiplier;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMultiplier;                                      // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	 * Size -> 0x01C8 (FullSize[0x01D8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SourceMeshComponent;                                     // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttachedParent : 1;                                  // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyCurves : 1;                                         // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyCustomAttributes;                                   // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_WC0Y : 6;                                    // 0x0018(0x0001) BIT_FIELD (PADDING)
		bool                                                       bUseMeshPose : 1;                                        // 0x001A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5ZF[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RootBoneToCopy;                                          // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B8G[0x1B4];                                 // 0x0024(0x01B4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FAnimNode_CurveSource : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SourceBinding;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPJN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurveSource[0x10];                                       // 0x0030(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_1QAQ[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x00D0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0130(0x0090) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TipBone;                                                 // 0x01C0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x01D0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMEH[0x6];                                   // 0x01EA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
	 * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandFK;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandIK;                                             // 0x00E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandIK;                                              // 0x00F8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      HandFKWeight;                                            // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYK8[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
	 * Size -> 0x00D0 (FullSize[0x00E0] - InheritedSize[0x0010])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0020(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		ELayeredBoneBlendMode                                      BlendMode;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMJK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBlendProfile*>                               BlendMasks;                                              // 0x0038(0x0010) Edit, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0048(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0058(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceScaleBlend;                                    // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurveBlendOption                                          CurveBlendOption;                                        // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRootMotionBasedOnRootBone;                         // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBRP[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4Y2[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerBoneBlendWeight>                         PerBoneBlendWeights;                                     // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               SkeletonGuid;                                            // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               VirtualBoneGuid;                                         // 0x0098(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_26A8[0x38];                                  // 0x00A8(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChainLink
	 * Size -> 0x0070
	 */
	struct FIKChainLink
	{
	public:
		unsigned char                                              UnknownData_MH7O[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChain
	 * Size -> 0x0048
	 */
	struct FIKChain
	{
	public:
		unsigned char                                              UnknownData_BXXW[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
	 * Size -> 0x002C
	 */
	struct FAnimLegIKDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRotationAngle;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      FootBoneForwardAxis;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      HingeRotationAxis;                                       // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableKneeTwistCorrection;                              // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKData
	 * Size -> 0x00E0
	 */
	struct FAnimLegIKData
	{
	public:
		unsigned char                                              UnknownData_9ZFG[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LegIK
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ReachPrecision;                                          // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKDefinition>                        LegsDefinition;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4D5A[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LookAt
	 * Size -> 0x0188 (FullSize[0x0250] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNPC[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   LookAtTarget;                                            // 0x00E0(0x0090) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0170(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x0188(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpolationBlend                                        InterpolationType;                                       // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TL4[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAxis                                               LookUp_Axis;                                             // 0x01B0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClamp;                                             // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6RH[0x74];                                  // 0x01DC(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceAdditive;                                      // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7WE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MirrorBase : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LWID[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Mirror
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FAnimNode_Mirror : public FAnimNode_MirrorBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
	{
	public:
		bool                                                       bMirror;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5V1I[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMirrorDataTable*                                    MirrorDataTable;                                         // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendTime;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetChild;                                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBoneMirroring;                                          // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCurveMirroring;                                         // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttributeMirroring;                                     // 0x005F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x00D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0108(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x0122(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x0123(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x0125(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWT4[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
	 * Size -> 0x00F0 (FullSize[0x0100] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ModifyCurve : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0010(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   CurveMap;                                                // 0x0020(0x0050) Edit, BlueprintVisible, EditFixedSize, NativeAccessSpecifierPublic
		TArray<float>                                              CurveValues;                                             // 0x0070(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurveNames;                                              // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PRA[0x64];                                  // 0x0090(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModifyCurveApplyMode                                      ApplyMode;                                               // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LHO[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
	 * Size -> 0x0040 (FullSize[0x0050] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MultiWayBlend : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   Poses;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DesiredAlphas;                                           // 0x0020(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEK2[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAdditiveNode;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeAlpha;                                         // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM6L[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          DisplaySpace;                                            // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToRefPose;                                      // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH3B[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0110(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
	{
	public:
		class UPoseAsset*                                          PoseAsset;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4YK[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0090(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendOption;                                             // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7FH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
	{
	public:
		class FName                                                PoseName;                                                // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseWeight;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1AG[0xC];                                   // 0x009C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTransform
	 * Size -> 0x0030
	 */
	struct FPoseDriverTransform
	{
	public:
		struct FVector                                             TargetTranslation;                                       // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTarget
	 * Size -> 0x00C8
	 */
	struct FPoseDriverTarget
	{
	public:
		TArray<struct FPoseDriverTransform>                        BoneTransforms;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0010(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetScale;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFDistanceMethod                                         DistanceMethod;                                          // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFFunctionType                                           FunctionType;                                            // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x002E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NL0N[0x1];                                   // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0030(0x0080) Edit, NativeAccessSpecifierPublic
		class FName                                                DrivenName;                                              // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BMBU[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsHidden;                                               // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39RP[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFParams
	 * Size -> 0x0038
	 */
	struct FRBFParams
	{
	public:
		int32_t                                                    TargetDimensions;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFSolverType                                             SolverType;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H39X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticRadius;                                        // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFFunctionType                                           Function;                                                // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFDistanceMethod                                         DistanceMethod;                                          // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  TwistAxis;                                               // 0x000F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightThreshold;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFNormalizeMethod                                        NormalizeMethod;                                         // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_329C[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MedianReference;                                         // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianMin;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianMax;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
	 * Size -> 0x00F8 (FullSize[0x0188] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0090(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              SourceBones;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              OnlyDriveBones;                                          // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPoseDriverTarget>                           PoseTargets;                                             // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC0J[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EvalSpaceBone;                                           // 0x0100(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEvalFromRefPose;                                        // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLDT[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRBFParams                                          RBFParams;                                               // 0x0118(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		EPoseDriverSource                                          DriveSource;                                             // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPoseDriverOutput                                          DriveOutput;                                             // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDriveSelectedBones : 1;                             // 0x0152(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJXS[0x1];                                   // 0x0153(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF7I[0x30];                                  // 0x0158(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
	 * Size -> 0x0080 (FullSize[0x0090] - InheritedSize[0x0010])
	 */
	struct FAnimNode_PoseSnapshot : public FAnimNode_Base
	{
	public:
		class FName                                                SnapshotName;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSnapshot                                       Snapshot;                                                // 0x0018(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ESnapshotSourceMode                                        Mode;                                                    // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UADT[0x3F];                                  // 0x0051(0x003F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
	 * Size -> 0x0050
	 */
	struct FRandomPlayerSequenceEntry
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLoopCount;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLoopCount;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K8V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendIn;                                                 // 0x0020(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
	 * Size -> 0x0068 (FullSize[0x0078] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RandomPlayer : public FAnimNode_Base
	{
	public:
		TArray<struct FRandomPlayerSequenceEntry>                  Entries;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC9K[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShuffleMode;                                            // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBXT[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RefPose
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_XPQE[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.SimSpaceSettings
	 * Size -> 0x0068
	 */
	struct FSimSpaceSettings
	{
	public:
		float                                                      MasterAlpha;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityScaleZ;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearVelocity;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularVelocity;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearAcceleration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngularAcceleration;                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExternalLinearDrag;                                      // 0x0018(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XKY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExternalLinearDragV;                                     // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalLinearVelocity;                                  // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalAngularVelocity;                                 // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
	 * Size -> 0x08C8 (FullSize[0x0990] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79N6[0x128];                                 // 0x00D0(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideWorldGravity;                                    // 0x01F8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0210(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0228(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x0240(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0258(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimSpaceSettings                                   SimSpaceSettings;                                        // 0x0270(0x0068) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CachedBoundsScale;                                       // 0x02D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseBoneRef;                                             // 0x02DC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x02EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimulationSpace                                           SimulationSpace;                                         // 0x02ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableCollisionBetweenConstraintBodies;           // 0x02EE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5WQ[0x1];                                   // 0x02EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableWorldGeometry : 1;                                // 0x02F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWorldGravity : 1;                               // 0x02F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransferBoneVelocities : 1;                             // 0x02F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeIncomingPoseOnStart : 1;                          // 0x02F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampLinearTranslationLimitToRefPose : 1;               // 0x02F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAM4[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldSpaceMinimumScale;                                  // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EvaluationResetTime;                                     // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6D4Z[0x694];                                 // 0x02FC(0x0694) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
	 * Size -> 0x0098 (FullSize[0x00A8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                PitchScaleBiasClamp;                                     // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                YawScaleBiasClamp;                                       // 0x0058(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MeshToComponent;                                         // 0x0088(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LIE[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SourceBone;                                              // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  RotationAxisToRefer;                                     // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAdditive;                                             // 0x00ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8WH[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0068(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0080(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0088(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00D8(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFMI[0x4];                                   // 0x0108(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x010D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYCB[0x2];                                   // 0x010E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0068(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    LODThreshold;                                            // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0080(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0088(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                AlphaCurveName;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00D8(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8I80[0x4];                                   // 0x0108(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlphaBoolEnabled;                                       // 0x010D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BB87[0x2];                                   // 0x010E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
	 * Size -> 0x0078 (FullSize[0x0088] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ScaleChainLength : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DefaultChainLength;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainStartBone;                                          // 0x0024(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEndBone;                                            // 0x0034(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS86[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01GC[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0068(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		EScaleChainInitialLength                                   ChainInitialLength;                                      // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADLB[0x17];                                  // 0x0071(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
	{
	public:
		unsigned char                                              UnknownData_0HUT[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
	{
	public:
		class FName                                                GroupName;                                               // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimGroupRole                                             GroupRole;                                               // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimSyncMethod                                            Method;                                                  // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIgnoreForRelevancyTest;                                 // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BIVC[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExplicitTime;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldLoop;                                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTeleportToExplicitTime;                                 // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESequenceEvalReinit                                        ReinitializationBehavior;                                // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FBPH[0x1];                                   // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WIMK[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Slot
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUpdateSourcePose;                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PPF[0x1F];                                  // 0x0029(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
	 * Size -> 0x0014
	 */
	struct FSplineIKCachedBoneData
	{
	public:
		struct FBoneReference                                      bone;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RefSkeletonIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
	 * Size -> 0x01A8 (FullSize[0x0270] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x00D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESplineBoneAxis                                            BoneAxis;                                                // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateSpline;                                    // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY9W[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PointCount;                                              // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ControlPoints;                                           // 0x00F0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistStart;                                              // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistEnd;                                                // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWWE[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         TwistBlend;                                              // 0x0110(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBRA[0x128];                                 // 0x0148(0x0128) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
	 * Size -> 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxDisplacement;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringStiffness;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDamping;                                           // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorResetThresh;                                        // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8G2J[0x6C];                                  // 0x00E8(0x006C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLimitDisplacement : 1;                                  // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateX : 1;                                         // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateY : 1;                                         // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateZ : 1;                                         // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateX : 1;                                            // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateY : 1;                                            // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateZ : 1;                                            // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QH5X[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_StateResult
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FAnimNode_StateResult : public FAnimNode_Root
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Sync
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_Sync : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                GroupName;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimGroupRole                                             GroupRole;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UMQ8[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RotationLimit
	 * Size -> 0x0030
	 */
	struct FRotationLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x0018(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Trail
	 * Size -> 0x01D8 (FullSize[0x02A0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_XZ7Y[0x68];                                  // 0x00C8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TrailBone;                                               // 0x0130(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ChainLength;                                             // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      ChainBoneAxis;                                           // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertChainBoneAxis : 1;                                // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitStretch : 1;                                       // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation : 1;                                      // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit : 1;                                     // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorSpaceFakeVel : 1;                                  // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReorientParentToChild : 1;                              // 0x0145(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7V4T[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDeltaTime;                                            // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelaxationSpeedScale;                                    // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  TrailRelaxationSpeed;                                    // 0x0150(0x0088) Edit, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                RelaxationSpeedScaleInputProcessor;                      // 0x01D8(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FRotationLimit>                              RotationLimits;                                          // 0x0208(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     RotationOffsets;                                         // 0x0218(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x0228(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJL9[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FakeVelocity;                                            // 0x0240(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseJoint;                                               // 0x0258(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LastBoneRotationAnimAlphaBlend;                          // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TF5S[0x34];                                  // 0x026C(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
	 * Size -> 0x0030
	 */
	struct FReferenceBoneFrame
	{
	public:
		struct FBoneReference                                      bone;                                                    // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               Axis;                                                    // 0x0010(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
	 * Size -> 0x00A0 (FullSize[0x0168] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FReferenceBoneFrame                                 BaseFrame;                                               // 0x00C8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FReferenceBoneFrame                                 TwistFrame;                                              // 0x00F8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               TwistPlaneNormalAxis;                                    // 0x0128(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimCurveParam                                     Curve;                                                   // 0x0154(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBO0[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
	 * Size -> 0x01A8 (FullSize[0x0270] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartStretchRatio;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStretchScale;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EffectorLocation;                                        // 0x00E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVY1[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0100(0x0090) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JointTargetLocation;                                     // 0x0190(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLKI[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   JointTarget;                                             // 0x01B0(0x0090) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               TwistAxis;                                               // 0x0240(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          JointTargetLocationSpace;                                // 0x0261(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStretching : 1;                                    // 0x0262(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakeRotationFromEffectorSpace : 1;                      // 0x0262(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainEffectorRelRot : 1;                             // 0x0262(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTwist : 1;                                         // 0x0262(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UME[0xD];                                   // 0x0263(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled : 1;                                   // 0x0031(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_KBGK : 2;                                    // 0x0031(0x0001) BIT_FIELD (PADDING)
		bool                                                       bResetChildOnActivation : 1;                             // 0x0031(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_626D[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0040(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x0090(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI38[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
	 * Size -> 0x0320 (FullSize[0x0BA0] - InheritedSize[0x0880])
	 */
	struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_88BT[0x320];                                 // 0x0880(0x0320) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
	 * Size -> 0x0070
	 */
	struct FIKFootPelvisPullDownSolver
	{
	public:
		struct FVectorRK4SpringInterpolator                        PelvisAdjustmentInterp;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16BH[0x58];                                  // 0x0008(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PelvisAdjustmentInterpAlpha;                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PelvisAdjustmentMaxDistance;                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PelvisAdjustmentErrorTolerance;                          // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PelvisAdjustmentMaxIter;                                 // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.WarpingVectorValue
	 * Size -> 0x0020
	 */
	struct FWarpingVectorValue
	{
	public:
		EWarpingVectorMode                                         Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SANJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Value;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.PositionHistory
	 * Size -> 0x0030
	 */
	struct FPositionHistory
	{
	public:
		TArray<struct FVector>                                     Positions;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXTI[0x1C];                                  // 0x0014(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FLinkedAnimGraphReference : public FAnimNodeReference
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFEntry
	 * Size -> 0x0010
	 */
	struct FRBFEntry
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFTarget
	 * Size -> 0x0090 (FullSize[0x00A0] - InheritedSize[0x0010])
	 */
	struct FRBFTarget : public FRBFEntry
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IR8Z[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0018(0x0080) Edit, NativeAccessSpecifierPublic
		ERBFDistanceMethod                                         DistanceMethod;                                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFFunctionType                                           FunctionType;                                            // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCCU[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSequenceEvaluatorReference : public FAnimNodeReference
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.SequencePlayerReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSequencePlayerReference : public FAnimNodeReference
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.SkeletalControlReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSkeletalControlReference : public FAnimNodeReference
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
