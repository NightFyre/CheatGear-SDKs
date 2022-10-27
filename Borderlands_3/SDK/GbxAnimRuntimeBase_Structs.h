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
	 * Enum GbxAnimRuntimeBase.EGbxLookAxisOption
	 */
	enum class EGbxLookAxisOption : uint8_t
	{
		X     = 0,
		Y     = 1,
		Z     = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		MAX   = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LegIK
	 * Size -> 0x0740 (FullSize[0x08B0] - InheritedSize[0x0170])
	 */
	struct FGbxAnimNode_LegIK : public FAnimNode_LegIK
	{
	public:
		float                                                      FootIKTraceUpScale;                                      // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIKTraceDownScale;                                    // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootIKOffsetInterpSpeed;                                 // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FootIKTargetOffset;                                      // 0x017C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FootIKLODThreshold;                                      // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12ZO[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                FootIkTraceScreenSizeThreshold;                          // 0x0190(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFootIkTraceScreenSizeThreshold;                      // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGJ9[0x62F];                                 // 0x01A9(0x062F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNumericRange                                       MeshOffsetCharacterSpeedRange;                           // 0x07D8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MeshIKOffsetInterpSpeed;                                 // 0x07E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLimitFootDistanceToMeshOffset;                    // 0x07E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9EZ[0x27];                                  // 0x07E5(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SlopeAdaptation;                                         // 0x080C(0x000C) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JRM[0x10];                                  // 0x0818(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      SlopeAdaptationBone;                                     // 0x0828(0x0018) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      MaxSlopeAngle;                                           // 0x0840(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeNormalMinInterpSpeed;                               // 0x0844(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeNormalMaxInterpSpeed;                               // 0x0848(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       SlopeNormalCharacterSpeedRange;                          // 0x084C(0x0008) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX6Y[0x4C];                                  // 0x0854(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinVelocity;                                             // 0x08A0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxVelocity;                                             // 0x08A4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BD18[0x8];                                   // 0x08A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntimeBase.BoneBlendParams
	 * Size -> 0x0050
	 */
	struct FBoneBlendParams
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawWeight;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchWeight;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       YawClamp;                                                // 0x0024(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FNumericRange                                       PitchClamp;                                              // 0x002C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0034(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseRotationOffset;                                      // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX5X[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtClamp;                                             // 0x0044(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxLookAxisOption                                         LookAxis;                                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxLookAxisOption                                         UpAxis;                                                  // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP59[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LookAt
	 * Size -> 0x0190 (FullSize[0x02D0] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0140(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ParentBoneToModify;                                      // 0x0158(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EGbxLookAxisOption                                         ParentLookAxis;                                          // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6OJ[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneBlendParams>                            BonesToModify;                                           // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneBlendParams>                            EyeBonesToModify;                                        // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             HeadLookAtLocation;                                      // 0x0198(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EyeLookAtLocation;                                       // 0x01A4(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadLookPercentage;                                      // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebug;                                            // 0x01B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEyeMovement;                                         // 0x01B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YC6[0x2];                                   // 0x01B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            EyeShiftMin;                                             // 0x01B8(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeShiftMax;                                             // 0x01C4(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeGlanceMin;                                            // 0x01D0(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EyeGlanceMax;                                            // 0x01DC(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EyeFocusTimeMin;                                         // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeFocusTimeMax;                                         // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeGlanceTimeMin;                                        // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeGlanceTimeMax;                                        // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeShiftTimeMin;                                         // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeShiftTimeMax;                                         // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EyeLODThreshold;                                         // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB2J[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenSizeSelection                                EyeScreenSizeThreshold;                                  // 0x0208(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseEyeScreenSizeThreshold;                              // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAB4[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseLink                                           ReferencePoseLink;                                       // 0x0228(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0VE[0x90];                                  // 0x0240(0x0090) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
