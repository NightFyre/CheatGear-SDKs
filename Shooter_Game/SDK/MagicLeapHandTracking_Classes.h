#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
		bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
		bool IsHoldingControl(EControllerHand hand);
		float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
		bool GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource);
		bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
		bool GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
		bool GetHandKeypointForMotionSource(const class FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint);
		bool GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
		bool GetHandCenterNormalized(EControllerHand hand, struct FVector* HandCenterNormalized);
		bool GetHandCenter(EControllerHand hand, struct FTransform* HandCenter);
		bool GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
		bool GetGestureKeypoints(EControllerHand hand, TArray<struct FTransform>* Keypoints);
		bool GetCurrentGestureConfidence(EControllerHand hand, float* Confidence);
		bool GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture* Gesture);
		bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
