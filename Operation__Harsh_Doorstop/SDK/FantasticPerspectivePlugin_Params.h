#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveActor.Apply
	 */
	struct AFantasticPerspectiveActor_Apply_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFantasticPerspectiveStereoscopicPass                      StereoPass;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W4UN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ViewOrigin;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KUEG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0020(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0060(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x00A0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5VPO[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x00B0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x00F0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveComponent.Apply
	 */
	struct UFantasticPerspectiveComponent_Apply_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFantasticPerspectiveStereoscopicPass                      StereoPass;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NRN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ViewOrigin;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N6R6[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0020(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0060(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x00A0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CQD8[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x00B0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x00F0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionRotator
	 */
	struct UFantasticPerspectiveFunctions_WorldToScreenConversionRotator_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionMatrix
	 */
	struct UFantasticPerspectiveFunctions_WorldToScreenConversionMatrix_Params
	{
	public:
		struct FMatrix                                             ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetTransformSettings
	 */
	struct UFantasticPerspectiveFunctions_SetTransformSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveTransform                      Transform;                                               // 0x00E4(0x003C)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetFrustumSettings
	 */
	struct UFantasticPerspectiveFunctions_SetFrustumSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveFrustum                        Frustum;                                                 // 0x00E4(0x0044)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetDebugSettings
	 */
	struct UFantasticPerspectiveFunctions_SetDebugSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveDebug                          Debug;                                                   // 0x00E4(0x0018)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionRotator
	 */
	struct UFantasticPerspectiveFunctions_ScreenToWorldConversionRotator_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionMatrix
	 */
	struct UFantasticPerspectiveFunctions_ScreenToWorldConversionMatrix_Params
	{
	public:
		struct FMatrix                                             ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetSettings
	 */
	struct UFantasticPerspectiveFunctions_ResetSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetCache
	 */
	struct UFantasticPerspectiveFunctions_ResetCache_Params
	{	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetTransformSettings
	 */
	struct UFantasticPerspectiveFunctions_GetTransformSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveTransform                      ReturnValue;                                             // 0x00E4(0x003C)  (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetFrustumSettings
	 */
	struct UFantasticPerspectiveFunctions_GetFrustumSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveFrustum                        ReturnValue;                                             // 0x00E4(0x0044)  (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetDebugSettings
	 */
	struct UFantasticPerspectiveFunctions_GetDebugSettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Target;                                                  // 0x0000(0x00E4)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveDebug                          ReturnValue;                                             // 0x00E4(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.DrawDebugPositionedFrustum
	 */
	struct UFantasticPerspectiveFunctions_DrawDebugPositionedFrustum_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1UFL[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0020(0x0040)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0060(0x0040)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x00A0(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PerspectiveFrustumDepth;                                 // 0x00B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistentLines;                                        // 0x00B4(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QXOW[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x00BC(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LY2J[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyTransformEffects
	 */
	struct UFantasticPerspectiveFunctions_ApplyTransformEffects_Params
	{
	public:
		struct FFantasticPerspectiveTransform                      Transform;                                               // 0x0000(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YCFM[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0050(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VLRT[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x00A0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyToSceneCapture2D
	 */
	struct UFantasticPerspectiveFunctions_ApplyToSceneCapture2D_Params
	{
	public:
		class USceneCaptureComponent2D*                            SceneCapture;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4BA1[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0020(0x0040)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0060(0x0040)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettingsAndDrawDebug
	 */
	struct UFantasticPerspectiveFunctions_ApplySettingsAndDrawDebug_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFantasticPerspectiveSettings                       Settings;                                                // 0x0008(0x00E4)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x00EC(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4GWW[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0100(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0140(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x0180(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MDNS[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x0190(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x01D0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettings
	 */
	struct UFantasticPerspectiveFunctions_ApplySettings_Params
	{
	public:
		struct FFantasticPerspectiveSettings                       Settings;                                                // 0x0000(0x00E4)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x00E4(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x00F0(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0130(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x0170(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_82D0[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x0180(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x01C0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyPointsBasing
	 */
	struct UFantasticPerspectiveFunctions_ApplyPointsBasing_Params
	{
	public:
		struct FFantasticPerspectivePoints                         Settings;                                                // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z9NH[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0060(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x00A0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ADLU[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x00B0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x00F0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyFrustumEffects
	 */
	struct UFantasticPerspectiveFunctions_ApplyFrustumEffects_Params
	{
	public:
		struct FFantasticPerspectiveFrustum                        Frustum;                                                 // 0x0000(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ViewOrigin;                                              // 0x0044(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                             ViewRotationMatrix;                                      // 0x0050(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0090(0x0040)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutViewOrigin;                                           // 0x00D0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8KRQ[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             OutViewRotationMatrix;                                   // 0x00E0(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             OutProjectionMatrix;                                     // 0x0120(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
