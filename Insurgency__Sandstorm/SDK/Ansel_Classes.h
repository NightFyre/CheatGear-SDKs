#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class Ansel.AnselFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnselFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopSession(class UObject* WorldContextObject);
		void STATIC_StartSession(class UObject* WorldContextObject);
		void STATIC_SetUIControlVisibility(class UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible);
		void STATIC_SetSettleFrames(int32_t NumSettleFrames);
		void STATIC_SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
		void STATIC_SetCameraMovementSpeed(float TranslationSpeed);
		void STATIC_SetCameraConstraintDistance(float MaxCameraDistance);
		void STATIC_SetCameraConstraintCameraSize(float CameraSize);
		void STATIC_SetAutoPostprocess(bool bShouldAutoPostprocess);
		void STATIC_SetAutoPause(bool bShouldAutoPause);
		bool STATIC_IsPhotographyAvailable();
		bool STATIC_IsPhotographyAllowed();
		void STATIC_ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
		void STATIC_ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
