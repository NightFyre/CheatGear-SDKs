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
	 * Enum ControlRigSpline.ESplineType
	 */
	enum class ESplineType : uint8_t
	{
		BSpline = 0,
		Hermite = 1,
		Max     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ControlRigSpline.ControlRigSplineImpl
	 * Size -> 0x0060
	 */
	struct FControlRigSplineImpl
	{
	public:
		unsigned char                                              UnknownData_EJO3[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.ControlRigSpline
	 * Size -> 0x0018
	 */
	struct FControlRigSpline
	{
	public:
		unsigned char                                              UnknownData_PRK6[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlRigSplineBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ESplineType                                                SplineMode;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLJQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SamplesPerSegment;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Compression;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x0028(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_SetSplinePoints : public FRigUnitMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x00E0(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RV3Y[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP2X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0040(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NILB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Tangent;                                                 // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x00D0(0x0018) NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x00E8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF3S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
	 * Size -> 0x01D0 (FullSize[0x02A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x00E0(0x0018) NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BZX[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTEM[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQWN[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0170(0x0090) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0200(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGUD[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
	 * Size -> 0x01D0 (FullSize[0x02A0] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x00E0(0x0018) NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LC17[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EControlRigAnimEasingType                                  RotationEaseType;                                        // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6243[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YO4[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0170(0x0090) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0200(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_955Z[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x00D0(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x00E0(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HSO[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FControlRigSpline                                   Spline;                                                  // 0x00E0(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIQC[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG6A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
	{
	public:
		struct FControlRigSpline                                   Spline;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
		float                                                      Percentage;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
