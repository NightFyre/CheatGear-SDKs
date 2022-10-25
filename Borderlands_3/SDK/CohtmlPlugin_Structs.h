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
	 * Enum CohtmlPlugin.ECohtmlKeys
	 */
	enum class ECohtmlKeys : uint8_t
	{
		LeftMouseButton   = 0,
		RightMouseButton  = 1,
		MiddleMouseButton = 2,
		ThumbMouseButton  = 3,
		ThumbMouseButton2 = 4,
		BackSpace         = 5,
		Tab               = 6,
		Enter             = 7,
		Pause             = 8,
		CapsLock          = 9,
		Escape            = 10,
		SpaceBar          = 11,
		PageUp            = 12,
		PageDown          = 13,
		End               = 14,
		Home              = 15,
		Left              = 16,
		Up                = 17,
		Right             = 18,
		Down              = 19,
		Insert            = 20,
		Delete            = 21,
		Zero              = 22,
		One               = 23,
		Two               = 24,
		Three             = 25,
		Four              = 26,
		Five              = 27,
		Six               = 28,
		Seven             = 29,
		Eight             = 30,
		Nine              = 31,
		A                 = 32,
		B                 = 33,
		C                 = 34,
		D                 = 35,
		E                 = 36,
		F                 = 37,
		G                 = 38,
		H                 = 39,
		I                 = 40,
		J                 = 41,
		K                 = 42,
		L                 = 43,
		M                 = 44,
		N                 = 45,
		O                 = 46,
		P                 = 47,
		Q                 = 48,
		R                 = 49,
		S                 = 50,
		T                 = 51,
		U                 = 52,
		V                 = 53,
		W                 = 54,
		X                 = 55,
		Y                 = 56,
		Z                 = 57,
		NumPadZero        = 58,
		NumPadOne         = 59,
		NumPadTwo         = 60,
		NumPadThree       = 61,
		NumPadFour        = 62,
		NumPadFive        = 63,
		NumPadSix         = 64,
		NumPadSeven       = 65,
		NumPadEight       = 66,
		NumPadNine        = 67,
		Multiply          = 68,
		Add               = 69,
		Subtract          = 70,
		Decimal           = 71,
		Divide            = 72,
		F1                = 73,
		F2                = 74,
		F3                = 75,
		F4                = 76,
		F5                = 77,
		F6                = 78,
		F7                = 79,
		F8                = 80,
		F9                = 81,
		F10               = 82,
		F11               = 83,
		F12               = 84,
		NumLock           = 85,
		ScrollLock        = 86,
		LeftShift         = 87,
		RightShift        = 88,
		LeftControl       = 89,
		RightControl      = 90,
		LeftAlt           = 91,
		RightAlt          = 92,
		LeftCommand       = 93,
		RightCommand      = 94,
		Semicolon         = 95,
		Equals            = 96,
		Comma             = 97,
		Underscore        = 98,
		Period            = 99,
		Slash             = 100,
		Tilde             = 101,
		LeftBracket       = 102,
		Backslash         = 103,
		RightBracket      = 104,
		Quote             = 105,
		Unknown           = 106,
		MAX               = 107
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlImageFormat
	 */
	enum class ECohtmlImageFormat : uint8_t
	{
		PNG  = 0,
		TGA  = 1,
		JPEG = 2,
		PSD  = 3,
		SVG  = 4,
		DDS  = 5,
		BMP  = 6,
		ASTC = 7,
		PKM  = 8,
		KTX  = 9,
		MAX  = 10
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlMSAA
	 */
	enum class ECohtmlMSAA : uint8_t
	{
		MSAA_1x  = 0,
		MSAA_2x  = 1,
		MSAA_4x  = 2,
		MSAA_MAX = 3
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlSettingsSeverity
	 */
	enum class ECohtmlSettingsSeverity : uint8_t
	{
		Trace         = 0,
		Debug         = 1,
		Info          = 2,
		Warning       = 3,
		AssertFailure = 4,
		Error         = 5,
		MAX           = 6
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlInputPropagationBehaviour
	 */
	enum class ECohtmlInputPropagationBehaviour : uint8_t
	{
		None                = 0,
		Keyboard            = 1,
		Joystick            = 2,
		KeyboardAndJoystick = 3,
		MAX                 = 4
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlGamepadBehaviourOnFocusLost
	 */
	enum class ECohtmlGamepadBehaviourOnFocusLost : uint8_t
	{
		CohtmlResetState          = 0,
		CohtmlUseCurrentState     = 1,
		CohtmlUseStateBeforeReset = 2,
		MAX                       = 3
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlInputWidgetLineTraceMode
	 */
	enum class ECohtmlInputWidgetLineTraceMode : uint8_t
	{
		CohtmlInputLineTrace_Single = 0,
		CohtmlInputLineTrace_Multi  = 1,
		CohtmlInputLineTrace_MAX    = 2
	};

	/**
	 * Enum CohtmlPlugin.ECohtmlInputWidgetRaycastQuality
	 */
	enum class ECohtmlInputWidgetRaycastQuality : uint8_t
	{
		CohtmlRaycastQuality_Fast     = 0,
		CohtmlRaycastQuality_Balanced = 1,
		CohtmlRaycastQuality_Accurate = 2,
		CohtmlRaycastQuality_MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CohtmlPlugin.CohtmlSound
	 * Size -> 0x0018
	 */
	struct FCohtmlSound
	{
	public:
		class UAudioComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWaveProcedural*                                Stream;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QKI[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CohtmlPlugin.SingleFormatFallbacks
	 * Size -> 0x0018
	 */
	struct FSingleFormatFallbacks
	{
	public:
		ECohtmlImageFormat                                         BaseFormat;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96JW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECohtmlImageFormat>                                 PossibleFallbacks;                                       // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CohtmlPlugin.ProtocolPathDef
	 * Size -> 0x0040
	 */
	struct FProtocolPathDef
	{
	public:
		class FString                                              Protocol;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RootPath;                                                // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RelativePrefix;                                          // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WatcherPrefix;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CohtmlPlugin.TextureAtlasMetaData
	 * Size -> 0x0100
	 */
	struct FTextureAtlasMetaData
	{
	public:
		TMap<class FString, class UCohtmlAtlasContainedTextures*>  AtlasContainedTextures;                                  // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class UCohtmlTextureAtlasDetails*>     AtlasDetails;                                            // 0x0050(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDYZ[0x60];                                  // 0x00A0(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CohtmlPlugin.TextureAtlasMappingInfo
	 * Size -> 0x0020
	 */
	struct FTextureAtlasMappingInfo
	{
	public:
		class FString                                              AtlasPath;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OriginX;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OriginY;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CohtmlPlugin.CohtmlViewSettings
	 * Size -> 0x0010
	 */
	struct FCohtmlViewSettings
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTransparent;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2JQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationFrameDefer;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
