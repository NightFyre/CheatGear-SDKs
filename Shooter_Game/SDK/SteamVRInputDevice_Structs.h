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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SteamVRInputDevice.ESkeletalSummaryDataType
	 */
	enum class ESkeletalSummaryDataType : uint8_t
	{
		VR_SummaryType_FromAnimation = 0,
		VR_SummaryType_FromDevice    = 1,
		VR_SummaryType_MAX           = 2
	};

	/**
	 * Enum SteamVRInputDevice.ESteamVRInputStringBits
	 */
	enum class ESteamVRInputStringBits : uint8_t
	{
		VR_InputString_Hand           = 0,
		VR_InputString_ControllerType = 1,
		VR_InputString_InputSource    = 2,
		VR_InputString_All            = 3,
		VR_InputString_MAX            = 4
	};

	/**
	 * Enum SteamVRInputDevice.EControllerFidelity
	 */
	enum class EControllerFidelity : uint8_t
	{
		VR_ControllerFidelity_Estimated = 0,
		VR_ControllerFidelity_Full      = 1,
		VR_ControllerFidelity_Partial   = 2,
		VR_ControllerFidelity_MAX       = 3
	};

	/**
	 * Enum SteamVRInputDevice.EHandSkeleton
	 */
	enum class EHandSkeleton : uint8_t
	{
		VR_SteamVRHandSkeleton = 0,
		VR_UE4HandSkeleton     = 1,
		VR_MAX                 = 2
	};

	/**
	 * Enum SteamVRInputDevice.EHand
	 */
	enum class EHand : uint8_t
	{
		VR_LeftHand  = 0,
		VR_RightHand = 1,
		VR_MAX       = 2
	};

	/**
	 * Enum SteamVRInputDevice.EMotionRange
	 */
	enum class EMotionRange : uint8_t
	{
		VR_WithoutController = 0,
		VR_WithController    = 1,
		VR_MAX               = 2
	};

	/**
	 * Enum SteamVRInputDevice.ESteamVRHand
	 */
	enum class ESteamVRHand : uint8_t
	{
		VR_Left  = 0,
		VR_Right = 1,
		VR_MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
	 * Size -> 0x05D0
	 */
	struct FSteamVRSkeletonTransform
	{
	public:
		struct FTransform                                          Root;                                                    // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          wrist;                                                   // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Thumb_1;                                                 // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Thumb_2;                                                 // 0x0090(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Thumb_3;                                                 // 0x00C0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Thumb_4;                                                 // 0x00F0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Index_1;                                                 // 0x0120(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Index_2;                                                 // 0x0150(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Index_3;                                                 // 0x0180(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Index_4;                                                 // 0x01B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Index_5;                                                 // 0x01E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Middle_1;                                                // 0x0210(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Middle_2;                                                // 0x0240(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Middle_3;                                                // 0x0270(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Middle_4;                                                // 0x02A0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Middle_5;                                                // 0x02D0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Ring_1;                                                  // 0x0300(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Ring_2;                                                  // 0x0330(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Ring_3;                                                  // 0x0360(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Ring_4;                                                  // 0x0390(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Ring_5;                                                  // 0x03C0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Pinky_1;                                                 // 0x03F0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Pinky_2;                                                 // 0x0420(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Pinky_3;                                                 // 0x0450(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Pinky_4;                                                 // 0x0480(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Pinky_5;                                                 // 0x04B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Aux_Thumb;                                               // 0x04E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Aux_Index;                                               // 0x0510(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Aux_Middle;                                              // 0x0540(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Aux_Ring;                                                // 0x0570(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Aux_Pinky;                                               // 0x05A0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
	 * Size -> 0x0028
	 */
	struct FUE4RetargettingRefs
	{
	public:
		bool                                                       bIsInitialized;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRightHanded;                                          // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIJ6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             KnuckleAverageMS_UE4;                                    // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WristSideDirectionLS_UE4;                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WristForwardLS_UE4;                                      // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
	 * Size -> 0x0610 (FullSize[0x0620] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
	{
	public:
		EMotionRange                                               MotionRange;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHand                                                      hand;                                                    // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHandSkeleton                                              HandSkeleton;                                            // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mirror;                                                  // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJJA[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamVRSkeletonTransform                           SteamVRSkeletalTransform;                                // 0x0020(0x05D0) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FUE4RetargettingRefs                                UE4RetargettingRefs;                                     // 0x05F0(0x0028) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8LT[0x8];                                   // 0x0618(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           ReferencePose;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EHandSkeleton                                              HandSkeleton;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPQ3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseLink                                           TargetPose;                                              // 0x0028(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YH1I[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
	 * Size -> 0x0020
	 */
	struct FSteamVRInputBindingInfo
	{
	public:
		class FName                                                DevicePathName;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InputPathName;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ModeName;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
	 * Size -> 0x0028
	 */
	struct FSteamVRInputOriginInfo
	{
	public:
		int32_t                                                    TrackedDeviceIndex;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHIY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RenderModelComponentName;                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TrackedDeviceModel;                                      // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRActionSet
	 * Size -> 0x0018
	 */
	struct FSteamVRActionSet
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYYF[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRAction
	 * Size -> 0x0028
	 */
	struct FSteamVRAction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODEZ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
	 * Size -> 0x0010
	 */
	struct FSteamVRFingerSplays
	{
	public:
		float                                                      Thumb_Index;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Index_Middle;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Middle_Ring;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ring_Pinky;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
	 * Size -> 0x0014
	 */
	struct FSteamVRFingerCurls
	{
	public:
		float                                                      Thumb;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Middle;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ring;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pinky;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
