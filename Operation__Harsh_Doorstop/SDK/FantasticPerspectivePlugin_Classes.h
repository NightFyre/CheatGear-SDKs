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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FantasticPerspectivePlugin.FantasticPerspectiveActor
	 * Size -> 0x0148 (FullSize[0x0368] - InheritedSize[0x0220])
	 */
	class AFantasticPerspectiveActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_J19Z[0x60];                                  // 0x0220(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFantasticPerspectiveSettings                       Settings;                                                // 0x0280(0x00E4) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Cache;                                                   // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28ZR[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (PADDING)

	public:
		bool Apply(class APlayerController* PlayerController, EFantasticPerspectiveStereoscopicPass StereoPass, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		static UClass* StaticClass();
	};

	/**
	 * Class FantasticPerspectivePlugin.FantasticPerspectiveComponent
	 * Size -> 0x0148 (FullSize[0x01F8] - InheritedSize[0x00B0])
	 */
	class UFantasticPerspectiveComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VF2T[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFantasticPerspectiveSettings                       Settings;                                                // 0x0110(0x00E4) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Cache;                                                   // 0x01F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A67R[0x3];                                   // 0x01F5(0x0003) MISSED OFFSET (PADDING)

	public:
		bool Apply(class APlayerController* PlayerController, EFantasticPerspectiveStereoscopicPass StereoPass, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		static UClass* StaticClass();
	};

	/**
	 * Class FantasticPerspectivePlugin.FantasticPerspectiveFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFantasticPerspectiveFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FRotator STATIC_WorldToScreenConversionRotator();
		struct FMatrix STATIC_WorldToScreenConversionMatrix();
		void STATIC_SetTransformSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveTransform& Transform);
		void STATIC_SetFrustumSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveFrustum& Frustum);
		void STATIC_SetDebugSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveDebug& Debug);
		struct FRotator STATIC_ScreenToWorldConversionRotator();
		struct FMatrix STATIC_ScreenToWorldConversionMatrix();
		void STATIC_ResetSettings(struct FFantasticPerspectiveSettings* Target);
		void STATIC_ResetCache();
		struct FFantasticPerspectiveTransform STATIC_GetTransformSettings(const struct FFantasticPerspectiveSettings& Target);
		struct FFantasticPerspectiveFrustum STATIC_GetFrustumSettings(const struct FFantasticPerspectiveSettings& Target);
		struct FFantasticPerspectiveDebug STATIC_GetDebugSettings(const struct FFantasticPerspectiveSettings& Target);
		void STATIC_DrawDebugPositionedFrustum(class UObject* WorldContextObject, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, const struct FLinearColor& Color, float PerspectiveFrustumDepth, bool bPersistentLines, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_ApplyTransformEffects(const struct FFantasticPerspectiveTransform& Transform, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix);
		void STATIC_ApplyToSceneCapture2D(class USceneCaptureComponent2D* SceneCapture, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix);
		void STATIC_ApplySettingsAndDrawDebug(class UObject* WorldContextObject, const struct FFantasticPerspectiveSettings& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		void STATIC_ApplySettings(const struct FFantasticPerspectiveSettings& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		void STATIC_ApplyPointsBasing(const struct FFantasticPerspectivePoints& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		void STATIC_ApplyFrustumEffects(const struct FFantasticPerspectiveFrustum& Frustum, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix);
		static UClass* StaticClass();
	};

	/**
	 * Class FantasticPerspectivePlugin.FantasticPerspectiveLocalPlayer
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UFantasticPerspectiveLocalPlayer : public ULocalPlayer
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
