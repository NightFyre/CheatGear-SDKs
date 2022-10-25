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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxCameraModes.ECameraBehaviorLookAxis
	 */
	enum class ECameraBehaviorLookAxis : uint8_t
	{
		Pitch = 0,
		Yaw   = 1,
		Roll  = 2,
		MAX   = 3
	};

	/**
	 * Enum GbxCameraModes.ECameraLookSpaces
	 */
	enum class ECameraLookSpaces : uint8_t
	{
		World          = 0,
		ViewTarget     = 1,
		ViewTargetBase = 2,
		MAX            = 3
	};

	/**
	 * Enum GbxCameraModes.ECameraModeTransitionBlendType
	 */
	enum class ECameraModeTransitionBlendType : uint8_t
	{
		None = 0,
		Full = 1,
		FOV  = 2,
		MAX  = 3
	};

	/**
	 * Enum GbxCameraModes.EViewTargetRotationUpdateMethod
	 */
	enum class EViewTargetRotationUpdateMethod : uint8_t
	{
		FromCamera     = 0,
		Fixed          = 1,
		FromInputDelta = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxCameraModes.InitialRotationAxisParams
	 * Size -> 0x0030
	 */
	struct FInitialRotationAxisParams
	{
	public:
		float                                                      MinAngle;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngle;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToBase;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearInterpolation;                                    // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3E1[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SpeedScaleCurve;                                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGHF[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxCameraModes.CameraBehaviorLookAxis
	 * Size -> 0x0018
	 */
	struct FCameraBehaviorLookAxis
	{
	public:
		float                                                      InputScale;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimit : 1;                                              // 0x0004(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L37B[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinAngle;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngle;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeatheringAngle;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeatheringInputScale;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxCameraModes.ReplicatedCameraModeState
	 * Size -> 0x0010
	 */
	struct FReplicatedCameraModeState
	{
	public:
		class FName                                                ModeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTimeOverride;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJK5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxCameraModes.CameraStatePostProcessBlend
	 * Size -> 0x0610
	 */
	struct FCameraStatePostProcessBlend
	{
	public:
		unsigned char                                              UnknownData_ONM9[0x610];                                 // 0x0000(0x0610) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
