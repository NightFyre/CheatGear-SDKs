#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum FantasticPerspectivePlugin.EFantasticPerspectiveStereoscopicPass
	 */
	enum class EFantasticPerspectiveStereoscopicPass : uint8_t
	{
		eFPSSP_FULL           = 0,
		eFPSSP_LEFT_EYE       = 1,
		eFPSSP_RIGHT_EYE      = 2,
		eFPSSP_LEFT_EYE_SIDE  = 3,
		eFPSSP_RIGHT_EYE_SIDE = 4,
		eFPSSP_MAX            = 5
	};

	/**
	 * Enum FantasticPerspectivePlugin.EFantasticPerspectiveType
	 */
	enum class EFantasticPerspectiveType : uint8_t
	{
		eFPT_EFFECTS = 0,
		eFPT_POINTS  = 1,
		eFPT_MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectiveDollyZoom
	 * Size -> 0x0008
	 */
	struct FFantasticPerspectiveDollyZoom
	{
	public:
		float                                                      DollyZoom;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocalDistance;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectiveFrustum
	 * Size -> 0x0044
	 */
	struct FFantasticPerspectiveFrustum
	{
	public:
		struct FVector2D                                           LensShift;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LensTilt;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PositionShift;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Skew;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PreAspectScale;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PostAspectScale;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ClippingPlaneSkew;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFantasticPerspectiveDollyZoom                      DollyZoom;                                               // 0x0038(0x0008) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CompensateAspectRatio;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CompensateFOV;                                           // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SeamlessLensTilt;                                        // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y87C[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectivePoints
	 * Size -> 0x0048
	 */
	struct FFantasticPerspectivePoints
	{
	public:
		bool                                                       OverrideViewTransform;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1I0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ViewOrigin;                                              // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearClipPlane;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoFrustumDepth;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftBottom;                                              // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftTop;                                                 // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightTop;                                                // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightBottom;                                             // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectiveTransform
	 * Size -> 0x003C
	 */
	struct FFantasticPerspectiveTransform
	{
	public:
		struct FVector                                             ViewOriginWorldOffset;                                   // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldTranslation;                                        // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WorldRotation;                                           // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalTranslation;                                        // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotation;                                           // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectiveDebug
	 * Size -> 0x0018
	 */
	struct FFantasticPerspectiveDebug
	{
	public:
		bool                                                       DrawOriginalFrustum;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFYX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              OriginalFrustumColor;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawAdjustedFrustum;                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40QA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              AdjustedFrustumColor;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrustumDepth;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FantasticPerspectivePlugin.FantasticPerspectiveSettings
	 * Size -> 0x00E4
	 */
	struct FFantasticPerspectiveSettings
	{
	public:
		EFantasticPerspectiveType                                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79BV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFantasticPerspectiveFrustum                        Frustum;                                                 // 0x0004(0x0044) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFantasticPerspectivePoints                         Points;                                                  // 0x0048(0x0048) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFantasticPerspectiveTransform                      Transform;                                               // 0x0090(0x003C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFantasticPerspectiveDebug                          Debug;                                                   // 0x00CC(0x0018) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
