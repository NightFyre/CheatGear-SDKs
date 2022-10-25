#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum CoherentUIGTPlugin.ECoherentUIGTKeys
	 */
	enum class ECoherentUIGTKeys : uint8_t
	{
		LeftMouseButton          = 0,
		RightMouseButton         = 1,
		MiddleMouseButton        = 2,
		ThumbMouseButton         = 3,
		ThumbMouseButton2        = 4,
		BackSpace                = 5,
		Tab                      = 6,
		Enter                    = 7,
		Pause                    = 8,
		CapsLock                 = 9,
		Escape                   = 10,
		SpaceBar                 = 11,
		PageUp                   = 12,
		PageDown                 = 13,
		End                      = 14,
		Home                     = 15,
		Left                     = 16,
		Up                       = 17,
		Right                    = 18,
		Down                     = 19,
		Insert                   = 20,
		Delete                   = 21,
		Zero                     = 22,
		One                      = 23,
		Two                      = 24,
		Three                    = 25,
		Four                     = 26,
		Five                     = 27,
		Six                      = 28,
		Seven                    = 29,
		Eight                    = 30,
		Nine                     = 31,
		A                        = 32,
		B                        = 33,
		C                        = 34,
		D                        = 35,
		E                        = 36,
		F                        = 37,
		G                        = 38,
		H                        = 39,
		I                        = 40,
		J                        = 41,
		K                        = 42,
		L                        = 43,
		M                        = 44,
		N                        = 45,
		O                        = 46,
		P                        = 47,
		Q                        = 48,
		R                        = 49,
		S                        = 50,
		T                        = 51,
		U                        = 52,
		V                        = 53,
		W                        = 54,
		X                        = 55,
		Y                        = 56,
		Z                        = 57,
		NumPadZero               = 58,
		NumPadOne                = 59,
		NumPadTwo                = 60,
		NumPadThree              = 61,
		NumPadFour               = 62,
		NumPadFive               = 63,
		NumPadSix                = 64,
		NumPadSeven              = 65,
		NumPadEight              = 66,
		NumPadNine               = 67,
		Multiply                 = 68,
		Add                      = 69,
		Subtract                 = 70,
		Decimal                  = 71,
		Divide                   = 72,
		F1                       = 73,
		F2                       = 74,
		F3                       = 75,
		F4                       = 76,
		F5                       = 77,
		F6                       = 78,
		F7                       = 79,
		F8                       = 80,
		F9                       = 81,
		F10                      = 82,
		F11                      = 83,
		F12                      = 84,
		Gamepad_Special_Left     = 85,
		Gamepad_Special_Right    = 86,
		MouseScrollUp            = 87,
		MouseScrollDown          = 88,
		Gamepad_RightStick_Left  = 89,
		Gamepad_RightStick_Up    = 90,
		Gamepad_RightStick_Right = 91,
		Gamepad_RightStick_Down  = 92,
		NumLock                  = 93,
		ScrollLock               = 94,
		LeftShift                = 95,
		RightShift               = 96,
		LeftControl              = 97,
		RightControl             = 98,
		LeftAlt                  = 99,
		RightAlt                 = 100,
		LeftCommand              = 101,
		RightCommand             = 102,
		Semicolon                = 103,
		Equals                   = 104,
		Comma                    = 105,
		Underscore               = 106,
		Period                   = 107,
		Slash                    = 108,
		Tilde                    = 109,
		LeftBracket              = 110,
		Backslash                = 111,
		RightBracket             = 112,
		Quote                    = 113,
		Unknown                  = 114,
		MAX                      = 115
	};

	/**
	 * Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
	 */
	enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
	{
		None                = 0,
		Keyboard            = 1,
		Joystick            = 2,
		KeyboardAndJoystick = 3,
		MAX                 = 4
	};

	/**
	 * Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
	 */
	enum class EGamepadBehaviourOnFocusLost : uint8_t
	{
		ResetState          = 0,
		UseCurrentState     = 1,
		UseStateBeforeReset = 2,
		MAX                 = 3
	};

	/**
	 * Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
	 */
	enum class EGTInputWidgetLineTraceMode : uint8_t
	{
		GTInputLineTrace_Single = 0,
		GTInputLineTrace_Multi  = 1,
		GTInputLineTrace_MAX    = 2
	};

	/**
	 * Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
	 */
	enum class EGTInputWidgetRaycastQuality : uint8_t
	{
		RaycastQuality_Fast     = 0,
		RaycastQuality_Balanced = 1,
		RaycastQuality_Accurate = 2,
		RaycastQuality_MAX      = 3
	};

	/**
	 * Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
	 */
	enum class ECoherentUIGTMSAA : uint8_t
	{
		MSAA_1x  = 0,
		MSAA_2x  = 1,
		MSAA_4x  = 2,
		MSAA_MAX = 3
	};

	/**
	 * Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
	 */
	enum class ECoherentUIGTSettingsSeverity : uint8_t
	{
		Trace         = 0,
		Debug         = 1,
		Info          = 2,
		Warning       = 3,
		AssertFailure = 4,
		Error         = 5,
		MAX           = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
	 * Size -> 0x0018
	 */
	struct FCoherentUIGTLoadingScreenSettings
	{
	public:
		float                                                      MinimumLoadingScreenDisplayTime;                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAutoCompleteWhenLoadingCompletes;                       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bWaitForManualStop;                                      // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGEJ[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
	 * Size -> 0x0014
	 */
	struct FCoherentUIGTViewInfo
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTransparent;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94G7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClickThroughAlphaThreshold;                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationFrameDefer;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
