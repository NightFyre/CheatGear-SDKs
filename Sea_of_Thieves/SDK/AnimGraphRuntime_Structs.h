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
	 * Enum AnimGraphRuntime.EComponentType
	 */
	enum class EComponentType : uint8_t
	{
		None         = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX    = 4,
		RotationY    = 5,
		RotationZ    = 6,
		Scale        = 7,
		ScaleX       = 8,
		ScaleY       = 9,
		ScaleZ       = 10,
		MAX          = 11
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
		MAX                = 7,
		MAX01              = 8
	};

	/**
	 * Enum AnimGraphRuntime.EAxisOption
	 */
	enum class EAxisOption : uint8_t
	{
		X     = 0,
		Y     = 1,
		Z     = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		MAX   = 6
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
	 * Enum AnimGraphRuntime.EBoneAxis
	 */
	enum class EBoneAxis : uint8_t
	{
		BA_X   = 0,
		BA_Y   = 1,
		BA_Z   = 2,
		BA_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		class USkeletalMeshComponent*                              SourceMeshComponent;                                     // 0x0030(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAttachedParent;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INZW[0x87];                                  // 0x0039(0x0087) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x004C(0x0008) Edit, BlueprintVisible
		unsigned char                                              UnknownData_S4TO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0058(0x000C) Edit
		EComponentType                                             SourceComponent;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HWDC[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DrivingCurve;                                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Multiplier;                                              // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseRange;                                               // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PC6G[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeMin;                                                // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangeMax;                                                // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RemappedMin;                                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RemappedMax;                                             // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBoneReference                                      TargetBone;                                              // 0x0088(0x000C) Edit
		EComponentType                                             TargetComponent;                                         // 0x0094(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXST[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAffectTargetTranslationX : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetTranslationY : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetTranslationZ : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetRotationX : 1;                              // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetRotationY : 1;                              // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetRotationZ : 1;                              // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetScaleX : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetScaleY : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bAffectTargetScaleZ : 1;                                 // 0x0099(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_4ZLH[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrivenBoneModificationMode                                ModificationMode;                                        // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WGHQ[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      TargetBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		bool                                                       bCopyTranslation;                                        // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCopyRotation;                                           // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCopyScale;                                              // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZIUB[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
	 * Size -> 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_4TKT[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F9Q5[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EffectorTransformBone;                                   // 0x0094(0x000C) Edit, BlueprintVisible
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KE7V[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TipBone;                                                 // 0x00A4(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      RootBone;                                                // 0x00B0(0x000C) Edit, BlueprintVisible
		float                                                      Precision;                                               // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxIterations;                                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableDebugDraw;                                        // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQU2[0xB];                                   // 0x00C5(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LeftHandFK;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      RightHandIK;                                             // 0x0070(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LeftHandIK;                                              // 0x007C(0x000C) Edit, BlueprintVisible
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      HandFKWeight;                                            // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V1FO[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LookAt
	 * Size -> 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      LookAtBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		struct FVector                                             LookAtLocation;                                          // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxisOption                                                LookAtAxis;                                              // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseLookUpAxis;                                          // 0x007D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EAxisOption                                                LookUpAxis;                                              // 0x007E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4RIK[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtClamp;                                             // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInterpolationBlend                                        InterpolationType;                                       // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I3AX[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationTime;                                       // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InterpolationTriggerThreashold;                          // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableDebug;                                            // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4G2H[0x2F];                                  // 0x0091(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0058(0x000C) Edit, BlueprintVisible
		struct FVector                                             Translation;                                             // 0x0064(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x007C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBoneModificationMode                                      TranslationMode;                                         // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneModificationMode                                      RotationMode;                                            // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneModificationMode                                      ScaleMode;                                               // 0x008A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneControlSpace                                          TranslationSpace;                                        // 0x008B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneControlSpace                                          RotationSpace;                                           // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneControlSpace                                          ScaleSpace;                                              // 0x008D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GA27[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x0058(0x000C) Edit
		EBoneControlSpace                                          DisplaySpace;                                            // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRelativeToRefPose;                                      // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YCW[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0080(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y03[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		struct FBoneReference                                      SourceBone;                                              // 0x0064(0x000C) Edit, BlueprintVisible
		float                                                      Multiplier;                                              // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneAxis                                                  RotationAxisToRefer;                                     // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAdditive;                                             // 0x0075(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66UA[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
	 * Size -> 0x0050 (FullSize[0x00A8] - InheritedSize[0x0058])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x0058(0x000C) Edit, BlueprintVisible
		bool                                                       bLimitDisplacement;                                      // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YHPZ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDisplacement;                                         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpringStiffness;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpringDamping;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ErrorResetThresh;                                        // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNoZSpring;                                              // 0x0078(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor
		bool                                                       bTranslateX;                                             // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTranslateY;                                             // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTranslateZ;                                             // 0x007B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRotateX;                                                // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRotateY;                                                // 0x007D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRotateZ;                                                // 0x007E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SYQV[0x29];                                  // 0x007F(0x0029) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Trail
	 * Size -> 0x0088 (FullSize[0x00E0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TrailBone;                                               // 0x0058(0x000C) Edit, BlueprintVisible
		int32_t                                                    ChainLength;                                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAxis                                                      ChainBoneAxis;                                           // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInvertChainBoneAxis;                                    // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLimitStretch;                                           // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_31L2[0x1];                                   // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrailRelaxation;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StretchLimit;                                            // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FakeVelocity;                                            // 0x0074(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActorSpaceFakeVel;                                      // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYKJ[0x5F];                                  // 0x0081(0x005F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x0058(0x000C) Edit, BlueprintVisible
		struct FVector                                             EffectorLocation;                                        // 0x0064(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             JointTargetLocation;                                     // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           StretchLimits;                                           // 0x007C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                EffectorSpaceBoneName;                                   // 0x0084(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bTakeRotationFromEffectorSpace : 1;                      // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bMaintainEffectorRelRot : 1;                             // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              bAllowStretching : 1;                                    // 0x008C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_4PYV[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBoneControlSpace                                          JointTargetLocationSpace;                                // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H493[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                JointTargetSpaceBoneName;                                // 0x0094(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NCYT[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
