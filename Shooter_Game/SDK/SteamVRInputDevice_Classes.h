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
	 * Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet);
		void ShowAllSteamVR_ActionOrigins();
		float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
		void SetPoseSource(bool bUseSkeletonPose);
		void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
		bool ResetSeatedPosition();
		void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
		float GetUserIPD();
		bool GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo);
		void GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, class FString* OriginLocalizedName);
		TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle);
		bool GetSteamVR_HandPoseRelativeToNow(struct FVector* Position, struct FRotator* Orientation, ESteamVRHand hand, float PredictedSecondsFromNow);
		float GetSteamVR_GlobalPredictedSecondsFromNow();
		void GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets);
		void GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions);
		void GetSkeletalTransform(struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand, bool bWithController);
		void GetSkeletalState(bool* LeftHandState, bool* RightHandState);
		void GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
		void GetPoseSource(bool* bUsingSkeletonPose);
		void GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
		void GetFingerCurlsAndSplays(EHand hand, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays, ESkeletalSummaryDataType SummaryDataType);
		void GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState);
		void GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity);
		void FindSteamVR_OriginTrackedDeviceInfo(const class FName& ActionName, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo, const class FName& ActionSet);
		TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(const class FName& ActionName, const class FName& ActionSet);
		bool FindSteamVR_ActionOrigin(const class FName& ActionName, const class FName& ActionSet);
		void FindSteamVR_Action(const class FName& ActionName, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet, const class FName& ActionSet);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamVRInputDevice.SteamVRTrackingReferences
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class USteamVRTrackingReferences : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTrackedDeviceActivated;                                // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTrackedDeviceDeactivated;                              // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      ActiveDevicePollFrequency;                               // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TrackingReferenceScale;                                  // 0x00D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMeshComponent*>                        TrackingReferences;                                      // 0x00E0(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSYS[0x18];                                  // 0x00F0(0x0018) MISSED OFFSET (PADDING)

	public:
		bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
		void HideTrackingReferences();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
