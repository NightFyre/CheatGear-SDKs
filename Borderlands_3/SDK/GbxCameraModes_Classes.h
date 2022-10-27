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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxCameraModes.CameraBehavior
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCameraBehavior : public UObject
	{
	public:
		unsigned char                                              bEnabled : 1;                                            // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUpdatePreViewTarget : 1;                                // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUpdateForRemoteClient : 1;                              // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8S0F[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		void Update(float DeltaTime, class UCameraState* State);
		void Start(class UCameraState* State);
		void End(class UCameraState* State);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_InitialRotation
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_InitialRotation : public UCameraBehavior
	{
	public:
		unsigned char                                              bControlPitch : 1;                                       // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bControlYaw : 1;                                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterruptedByInput : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableInput : 1;                                       // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60AU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInitialRotationAxisParams                          Pitch;                                                   // 0x0038(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FInitialRotationAxisParams                          Yaw;                                                     // 0x0068(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       InitialCondition;                                        // 0x0098(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L10E[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_BlendToFOV
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_BlendToFOV : public UCameraBehavior
	{
	public:
		class UCurveFloat*                                         FOVCurve;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddModifierToBaseFOV;                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O4A[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FOVModifier;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFOV;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInDelay;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       BlendInCondition;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendOutWhenBlendInFails;                               // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3Z6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       BlendOutCondition;                                       // 0x0060(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentDelay;                                            // 0x0068(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxFOVModifier;                                          // 0x006C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendPct;                                                // 0x0070(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransitioningToTargetFoV;                               // 0x0074(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N06M[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_Look
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_Look : public UCameraBehavior
	{
	public:
		ECameraLookSpaces                                          UpAxis;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34EQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      YawSpeedScale;                                           // 0x0034(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchSpeedScale;                                         // 0x0038(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RollSpeedScale;                                          // 0x003C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSnapOnStart : 1;                                        // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVAY[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraBehaviorLookAxis                             AXIS[0x3];                                               // 0x0044(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      FeatheringFunction;                                      // 0x008C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIBM[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_FOV
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_FOV : public UCameraBehavior
	{
	public:
		float                                                      FOV;                                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMZX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_OffsetViewModel
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_OffsetViewModel : public UCameraBehavior
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x003C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             SplitScreenLocationOffset;                               // 0x0048(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VerticalSplitScreenLocationOffset;                       // 0x0054(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             QuadSplitScreenLocationOffset;                           // 0x0060(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPXG[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.PlayerCameraModesManager
	 * Size -> 0x0038 (FullSize[0x2CB8] - InheritedSize[0x2C80])
	 */
	class APlayerCameraModesManager : public AGbxPlayerCameraManager
	{
	public:
		unsigned char                                              UnknownData_E4XL[0x18];                                  // 0x2C80(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ViewTargetClippingRadius;                                // 0x2C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW2U[0x4];                                   // 0x2C9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraModesManager*                                 CameraModesManager;                                      // 0x2CA0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              LastViewTarget;                                          // 0x2CA8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ViewTargetFlags;                                         // 0x2CB0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9YCL[0x4];                                   // 0x2CB4(0x0004) Fix size for supers

	public:
		void UpdateCameraShakeFromGbxFeedback(const struct FActiveGbxFeedbackEffect& TrackedFeedback);
		void UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraInputs
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UCameraInputs : public UObject
	{
	public:
		float                                                      CurrentTime;                                             // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationInput;                                           // 0x002C(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AdditionalInput;                                         // 0x0038(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalRoll;                                          // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultFOV;                                              // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultForegroundFOV;                                    // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EyeLocation;                                             // 0x0050(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBTQ[0xC];                                   // 0x005C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            EyeRotation;                                             // 0x0068(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20AB[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FacingRotation;                                          // 0x0080(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CollisionSafeLocation;                                   // 0x008C(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewTarget;                                              // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerController*                                   Controller;                                              // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AttachComponent;                                         // 0x00A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocket;                                            // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_AnchorToEyeLocation : public UCameraBehavior
	{
	public:
		unsigned char                                              bSetRotation : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ31[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_AnchorToSocket
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_AnchorToSocket : public UCameraBehavior
	{
	public:
		unsigned char                                              bSetLocation : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetRotation : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJW0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_AutoFollowRotation
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_AutoFollowRotation : public UCameraBehavior
	{
	public:
		unsigned char                                              bKeepRelativeRotation : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRelativeToBase : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFollowPitch : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFollowYaw : 1;                                          // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFollowRoll : 1;                                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L22R[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationRate;                                            // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F6JS[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_CollisionOffsetTrace : public UCameraBehavior
	{
	public:
		float                                                      CollisionRadius;                                         // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceOffsetZ;                                            // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAnchorAsStartLocation;                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreChildToViewTarget;                                // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreViewTargetAttachParent;                           // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YR02[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_DefaultFOV
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_DefaultFOV : public UCameraBehavior
	{
	public:
		float                                                      Scale;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleSplitScreenHorizontal;                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleSplitScreenVertical;                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleSplitScreenQuad;                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFOV;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M13P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_FromAnimation
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_FromAnimation : public UCameraBehavior
	{
	public:
		unsigned char                                              bSetLocation : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetRotation : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27TW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_LimitLook
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_LimitLook : public UCameraBehavior
	{
	public:
		struct FRotator                                            Min;                                                     // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Max;                                                     // 0x003C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bYawRelativeToBase : 1;                                  // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPitchRelativeToBase : 1;                                // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRollRelativeToBase : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSnapOnStart : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96A9[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_LimitPitch
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_LimitPitch : public UCameraBehavior
	{
	public:
		float                                                      MinPitch;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitch;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInitialPitch;                                        // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXOQ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialPitch;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_OffsetAbsolute
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_OffsetAbsolute : public UCameraBehavior
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y9J[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_OffsetCameraRelative
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_OffsetCameraRelative : public UCameraBehavior
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x003C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_OffsetCameraRelativeFromInputs : public UCameraBehavior
	{
	public:
		bool                                                       bHackForDayOnePatch;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3RW[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitPitch;                                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                MoveLimit;                                               // 0x0040(0x001C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9PJ[0x44];                                  // 0x005C(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_RestoreControllerRotation
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_RestoreControllerRotation : public UCameraBehavior
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraBehavior_RestoreStartRotation
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraBehavior_RestoreStartRotation : public UCameraBehavior
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0030(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2K4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraMode
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UCameraMode : public UObject
	{
	public:
		class UCameraModeData*                                     Data;                                                    // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCameraBehavior*>                             Behaviors;                                               // 0x0030(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7J6[0x48];                                  // 0x0040(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraModeData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UCameraModeData : public UGbxDataAsset
	{
	public:
		class FName                                                ModeName;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlendOut : 1;                                           // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsFirstPerson : 1;                                      // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowViewModel : 1;                                      // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPitchInversion : 1;                                // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoPerspectiveOverride : 1;                            // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bResetCameraRollOnStart : 1;                             // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowIntentionalClipping : 1;                           // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterruptTransitionWhenClipping : 1;                    // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeInDebugRotation : 1;                             // 0x003D(0x0001) BIT_FIELD Edit, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36OW[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EViewTargetRotationUpdateMethod                            ViewTargetRotationUpdateMethod;                          // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK1W[0x3];                                   // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ECameraModeTransitionBlendType                             FirstPersonBlendType;                                    // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraModeTransitionBlendType                             ThirdPersonBlendType;                                    // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKLK[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCameraBehavior*>                             Behaviors;                                               // 0x0048(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bDisableSeparateTranslucency : 1;                        // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM1M[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraModeSet
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCameraModeSet : public UObject
	{
	public:
		class UCameraModeSetData*                                  Data;                                                    // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCameraMode*>                                 Modes;                                                   // 0x0030(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraModeSetData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCameraModeSetData : public UGbxDataAsset
	{
	public:
		TArray<class UCameraModeData*>                             Modes;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraModesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraModesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode);
		void STATIC_ResetCameraRotation(class APlayerController* Controller, const struct FRotator& NewRotation);
		void STATIC_RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
		void STATIC_PushCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport);
		void STATIC_PopCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport);
		void STATIC_ApplyCameraRotation(class APlayerController* Controller, const struct FRotator& DeltaRotation);
		void STATIC_AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraModesManager
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UCameraModesManager : public UObject
	{
	public:
		bool                                                       bIsClient;                                               // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRemote;                                               // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HFY[0x36];                                  // 0x002A(0x0036) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedCameraModeState                          ReplicatedModeState;                                     // 0x0060(0x0010) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bRemoteIsFirstPerson;                                    // 0x0070(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6YVS[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ModeNameStack;                                           // 0x0078(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UCameraMode*                                         CurrentMode;                                             // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCameraModeSet*>                              ModeSets;                                                // 0x0090(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UCameraInputs*                                       Inputs;                                                  // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraState*                                        State;                                                   // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PL3M[0x78];                                  // 0x00B0(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      CameraStateClassName;                                    // 0x0128(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      CameraInputsClassName;                                   // 0x0140(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraState
	 * Size -> 0x06D8 (FullSize[0x0700] - InheritedSize[0x0028])
	 */
	class UCameraState : public UObject
	{
	public:
		class UCameraInputs*                                       Inputs;                                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPOV                                                POV;                                                     // 0x0030(0x001C) BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DefaultFOV;                                              // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AbsoluteLocationOffset;                                  // 0x0050(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseLocationOffset;                                      // 0x005C(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BaseRotationOffset;                                      // 0x0068(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BaseFOVOffset;                                           // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CameraLocationOffset;                                    // 0x0078(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraRotationOffset;                                    // 0x0084(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ViewModelLocationOffset;                                 // 0x0090(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ViewModelRotationOffset;                                 // 0x009C(0x000C) BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ViewModelFOV;                                            // 0x00A8(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultViewModelFOV;                                     // 0x00AC(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x00B0(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bConstrainAspectRatio : 1;                               // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsTransitioning : 1;                                    // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsColliding : 1;                                        // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowViewModel : 1;                                      // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableSeparateTranslucency : 1;                        // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZL0 : 1;                                    // 0x00B4(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bUpdatingInitialPitchRotation : 1;                       // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdatingInitialYawRotation : 1;                         // 0x00B4(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEPV[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ClampedLookRotationRemainder;                            // 0x00B8(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLCS[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCameraStatePostProcessBlend>                PostProcessBlends;                                       // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      FocusDistance;                                           // 0x00D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2Q4[0x624];                                 // 0x00DC(0x0624) MISSED OFFSET (PADDING)

	public:
		void SetViewModelFOV(float NewFOV, bool bDefault);
		void SetBaseRotation(const struct FRotator& NewRotation);
		void SetBaseLocation(const struct FVector& NewLocation);
		void SetBaseFOV(float NewFOV, bool bDefault);
		struct FRotator GetBaseRotation();
		struct FVector GetBaseLocation();
		float GetBaseFOV();
		bool CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, ECollisionChannel TraceChannel, unsigned char IgnoreMask, struct FHitResult* OutHit);
		void AddPostProcessBlend(const struct FPostProcessSettings& Settings, float BlendWeight);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxCameraModes.CameraViewTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraViewTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
