#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Enum GameplayCameras.ECameraAnimationPlaySpace
	 */
	enum class ECameraAnimationPlaySpace : uint8_t
	{
		CameraLocal = 0,
		World       = 1,
		UserDefined = 2,
		MAX         = 3
	};

	/**
	 * Enum GameplayCameras.ECameraAnimationEasingType
	 */
	enum class ECameraAnimationEasingType : uint8_t
	{
		Linear      = 0,
		Sinusoidal  = 1,
		Quadratic   = 2,
		Cubic       = 3,
		Quartic     = 4,
		Quintic     = 5,
		Exponential = 6,
		Circular    = 7,
		MAX         = 8
	};

	/**
	 * Enum GameplayCameras.EOscillatorWaveform
	 */
	enum class EOscillatorWaveform : uint8_t
	{
		SineWave    = 0,
		PerlinNoise = 1,
		MAX         = 2
	};

	/**
	 * Enum GameplayCameras.EInitialOscillatorOffset
	 */
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero   = 1,
		EOO_MAX          = 2
	};

	/**
	 * Enum GameplayCameras.EInitialWaveOscillatorOffsetType
	 */
	enum class EInitialWaveOscillatorOffsetType : uint8_t
	{
		Random = 0,
		Zero   = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayCameras.CameraAnimationParams
	 * Size -> 0x0040
	 */
	struct FCameraAnimationParams
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraAnimationEasingType                                 EaseInType;                                              // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPFI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EaseInDuration;                                          // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraAnimationEasingType                                 EaseOutType;                                             // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJI2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EaseOutDuration;                                         // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomStartTime;                                        // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOLT[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationOverride;                                        // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraAnimationPlaySpace                                  PlaySpace;                                               // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NE4L[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserPlaySpaceRot;                                        // 0x0028(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.CameraAnimationHandle
	 * Size -> 0x0004
	 */
	struct FCameraAnimationHandle
	{
	public:
		unsigned char                                              UnknownData_ULXT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
	 * Size -> 0x0070
	 */
	struct FActiveCameraAnimationInfo
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraAnimationParams                              Params;                                                  // 0x0008(0x0040) NoDestructor, NativeAccessSpecifierPublic
		struct FCameraAnimationHandle                              Handle;                                                  // 0x0048(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQIY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnimationSequencePlayer*                      Player;                                                  // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraAnimationSequenceCameraStandIn*               CameraStandIn;                                           // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseInCurrentTime;                                       // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseOutCurrentTime;                                      // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEasingIn;                                             // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEasingOut;                                            // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEZ1[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayCameras.FOscillator
	 * Size -> 0x000C
	 */
	struct FFOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialOscillatorOffset                                   InitialOffset;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOscillatorWaveform                                        Waveform;                                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHOQ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayCameras.ROscillator
	 * Size -> 0x0024
	 */
	struct FROscillator
	{
	public:
		struct FFOscillator                                        Pitch;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Yaw;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Roll;                                                    // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.VOscillator
	 * Size -> 0x0024
	 */
	struct FVOscillator
	{
	public:
		struct FFOscillator                                        X;                                                       // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Y;                                                       // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Z;                                                       // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.PerlinNoiseShaker
	 * Size -> 0x0008
	 */
	struct FPerlinNoiseShaker
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.WaveOscillator
	 * Size -> 0x000C
	 */
	struct FWaveOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialWaveOscillatorOffsetType                           InitialOffsetType;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1OH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
