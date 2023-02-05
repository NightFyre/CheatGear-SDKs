#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum CommonInput.ECommonInputType
	 */
	enum class ECommonInputType : uint8_t
	{
		MouseAndKeyboard = 0,
		Gamepad          = 1,
		Touch            = 2,
		Count            = 3,
		MAX              = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CommonInput.InputDeviceIdentifierPair
	 * Size -> 0x0018
	 */
	struct FInputDeviceIdentifierPair
	{
	public:
		class FName                                                InputDeviceName;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HardwareDeviceIdentifier;                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
	 * Size -> 0x00F0
	 */
	struct FCommonInputKeyBrushConfiguration
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BLS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         KeyBrush;                                                // 0x0020(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
	 * Size -> 0x00E0
	 */
	struct FCommonInputKeySetBrushConfiguration
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         KeyBrush;                                                // 0x0010(0x00D0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonInput.CommonInputPlatformBaseData
	 * Size -> 0x0038
	 */
	struct FCommonInputPlatformBaseData
	{
	public:
		unsigned char                                              UnknownData_AD8A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECommonInputType                                           DefaultInputType;                                        // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsMouseAndKeyboard;                               // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsGamepad;                                        // 0x000A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OZS0[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultGamepadName;                                      // 0x000C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanChangeGamepadType;                                   // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsTouch;                                          // 0x0015(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MRTF[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ControllerData[0x10];                                    // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UClass*>                                      ControllerDataClasses;                                   // 0x0028(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
