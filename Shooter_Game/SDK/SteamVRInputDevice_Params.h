#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
	 */
	struct USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params
	{
	public:
		struct FSteamVRAction                                      SteamVRAction;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FSteamVRActionSet                                   SteamVRActionSet;                                        // 0x0028(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
	 */
	struct USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Params
	{	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
	 */
	struct USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
	 */
	struct USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params
	{
	public:
		bool                                                       bUseSkeletonPose;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
	 */
	struct USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params
	{
	public:
		bool                                                       NewLeftHandState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewRightHandState;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
	 */
	struct USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
	 */
	struct USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params
	{
	public:
		ESteamVRHand                                               hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4MO0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartSecondsFromNow;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurationSeconds;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Frequency;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Amplitude;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params
	{
	public:
		struct FSteamVRAction                                      SteamVRAction;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FSteamVRInputOriginInfo                             InputOriginInfo;                                         // 0x0028(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params
	{
	public:
		struct FSteamVRAction                                      SteamVRAction;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<ESteamVRInputStringBits>                            LocalizedParts;                                          // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              OriginLocalizedName;                                     // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params
	{
	public:
		struct FSteamVRAction                                      SteamVRActionHandle;                                     // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FSteamVRInputBindingInfo>                    ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ESteamVRHand                                               hand;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9W05[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PredictedSecondsFromNow;                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params
	{
	public:
		TArray<struct FSteamVRActionSet>                           SteamVRActionSets;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params
	{
	public:
		TArray<struct FSteamVRAction>                              SteamVRActions;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params
	{
	public:
		struct FSteamVRSkeletonTransform                           LeftHand;                                                // 0x0000(0x05D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSteamVRSkeletonTransform                           RightHand;                                               // 0x05D0(0x05D0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWithController;                                         // 0x0BA0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params
	{
	public:
		bool                                                       LeftHandState;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RightHandState;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params
	{
	public:
		bool                                                       bUsingSkeletonPose;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params
	{
	public:
		EHand                                                      hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GW0L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSteamVRFingerCurls                                 FingerCurls;                                             // 0x0004(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FSteamVRFingerSplays                                FingerSplays;                                            // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ESkeletalSummaryDataType                                   SummaryDataType;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params
	{
	public:
		bool                                                       LeftHandState;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RightHandState;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
	 */
	struct USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params
	{
	public:
		EControllerFidelity                                        LeftControllerFidelity;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerFidelity                                        RightControllerFidelity;                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
	 */
	struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8FJJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSteamVRInputOriginInfo                             InputOriginInfo;                                         // 0x0010(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FName                                                ActionSet;                                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
	 */
	struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionSet;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamVRInputBindingInfo>                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
	 */
	struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionSet;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
	 */
	struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KV7K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSteamVRAction                                      FoundAction;                                             // 0x0010(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FSteamVRActionSet                                   FoundActionSet;                                          // 0x0038(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FName                                                ActionSet;                                               // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
	 */
	struct USteamVRTrackingReferences_ShowTrackingReferences_Params
	{
	public:
		class UStaticMesh*                                         TrackingReferenceMesh;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
	 */
	struct USteamVRTrackingReferences_HideTrackingReferences_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
