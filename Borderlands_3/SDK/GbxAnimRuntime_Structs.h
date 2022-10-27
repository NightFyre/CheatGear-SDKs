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
	 * Enum GbxAnimRuntime.EGbxCustomEventContext
	 */
	enum class EGbxCustomEventContext : uint8_t
	{
		Owner      = 0,
		Instigator = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxAnimRuntime.EFloatComparisonType
	 */
	enum class EFloatComparisonType : uint8_t
	{
		Equal              = 0,
		NotEqual           = 1,
		GreaterThan        = 2,
		GreaterThanOrEqual = 3,
		LessThan           = 4,
		LessThanOrEqual    = 5,
		MAX                = 6
	};

	/**
	 * Enum GbxAnimRuntime.EWeightTypeToUse
	 */
	enum class EWeightTypeToUse : uint8_t
	{
		Zero    = 0,
		One     = 1,
		Cached  = 2,
		Dynamic = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_AnimTable
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FGbxAnimNode_AnimTable : public FAnimNode_AssetPlayerBase
	{
	public:
		class UGbxAnimTable*                                       AnimTable;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxAnimInstance*                                    GbxAnimInstance;                                         // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleRateByMeshScale;                                   // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8H4K[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatComparison
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FGbxAnimNode_BlendListByFloatComparison : public FAnimNode_BlendListBase
	{
	public:
		float                                                      ValueA;                                                  // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueB;                                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFloatComparisonType                                       Comparison;                                              // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33NN[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.FloatMinMaxRange
	 * Size -> 0x0008
	 */
	struct FFloatMinMaxRange
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatInRange
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FGbxAnimNode_BlendListByFloatInRange : public FAnimNode_BlendListBase
	{
	public:
		float                                                      BlendValue;                                              // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E7B[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFloatMinMaxRange>                           MinMaxRanges;                                            // 0x00D0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRangeIndex;                                       // 0x00E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NC1[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.IntMinMaxRange
	 * Size -> 0x0008
	 */
	struct FIntMinMaxRange
	{
	public:
		int32_t                                                    MinValue;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByIntInRange
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FGbxAnimNode_BlendListByIntInRange : public FAnimNode_BlendListBase
	{
	public:
		int32_t                                                    BlendValue;                                              // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9FE[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIntMinMaxRange>                             MinMaxRanges;                                            // 0x00D0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRangeIndex;                                       // 0x00E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVV9[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.BoneWeightCurveOverride
	 * Size -> 0x0038
	 */
	struct FBoneWeightCurveOverride
	{
	public:
		ECurveOverrideType                                         CurveOverrideType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX9U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNormalizeCurvesOverride                            NormalizeCurveOverrideData;                              // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FName                                                SingleOverrideCurveName;                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CacheWeightIndicesToUpdate;                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendTwoPosesPerBone
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	struct FGbxAnimNode_BlendTwoPosesPerBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           PoseA;                                                   // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           PoseB;                                                   // 0x0048(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<float>                                              CachedBlendWeights;                                      // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              DynamicCachedBlendWeights;                               // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBoneWeightCurveOverride>                    BoneWeightCurveOverrides;                                // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UGbxAnimInstance*                                    GbxAnimInstance;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               SkeletonGuid;                                            // 0x0098(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               VirtualBoneGuid;                                         // 0x00A8(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxBoneSet*                                         BoneSet;                                                 // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               BoneSetGuid;                                             // 0x00C0(0x0010) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ActionSlotName;                                          // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XHPL[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_CopyParentTransforms
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FGbxAnimNode_CopyParentTransforms : public FAnimNode_Base
	{
	public:
		unsigned char                                              UnknownData_AUG8[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_HandIK
	 * Size -> 0x00E0 (FullSize[0x0370] - InheritedSize[0x0290])
	 */
	struct FGbxAnimNode_HandIK : public FAnimNode_TwoBoneIK
	{
	public:
		struct FBoneReference                                      ObjectBone;                                              // 0x0290(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7RI[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ObjectOffset;                                            // 0x02B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x02E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          HandOffsetToIkWorld;                                     // 0x0310(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bWorldIkOverride;                                        // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU3R[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EffectorAlignmentBone;                                   // 0x0348(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AlignToObjectAlpha;                                      // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSPY[0xC];                                   // 0x0364(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.InputTransforms
	 * Size -> 0x0010
	 */
	struct FInputTransforms
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_ModifyBoneList
	 * Size -> 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_ModifyBoneList : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FBoneReference>                              BonesToModify;                                           // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x0152(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x0153(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x0154(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x0155(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S56B[0x2];                                   // 0x0156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputTransforms                                    InputTransforms;                                         // 0x0158(0x0010) Edit, EditFixedSize, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COJN[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_Print
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FGbxAnimNode_Print : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              inString;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintToLog;                                             // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintToScreen;                                          // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGC2[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TextColor;                                               // 0x005C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAnimRuntime.GbxAnimNode_Spin
	 * Size -> 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_Spin : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x0140(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationAmount;                                          // 0x0158(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3V7[0xC];                                   // 0x0164(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBoneControlSpace                                          RotationSpace;                                           // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9BA[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
