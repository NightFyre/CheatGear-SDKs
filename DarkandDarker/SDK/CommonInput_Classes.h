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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CommonInput.CommonUIInputData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCommonUIInputData : public UObject
	{
	public:
		struct FDataTableRowHandle                                 DefaultClickAction;                                      // 0x0028(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 DefaultBackAction;                                       // 0x0038(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputBaseControllerData
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UCommonInputBaseControllerData : public UObject
	{
	public:
		ECommonInputType                                           InputType;                                               // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEZ9[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GamepadName;                                             // 0x002C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMAP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                GamepadDisplayName;                                      // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                GamepadCategory;                                         // 0x0050(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                GamepadPlatformName;                                     // 0x0068(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FInputDeviceIdentifierPair>                  GamepadHardwareIdMapping;                                // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              ControllerTexture[0x28];                                 // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ControllerButtonMaskTexture[0x28];                       // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FCommonInputKeyBrushConfiguration>           InputBrushDataMap;                                       // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCommonInputKeySetBrushConfiguration>        InputBrushKeySets;                                       // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		TArray<class FName> STATIC_GetRegisteredGamepads();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputPlatformSettings
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UCommonInputPlatformSettings : public UPlatformSettings
	{
	public:
		ECommonInputType                                           DefaultInputType;                                        // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsMouseAndKeyboard;                               // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsTouch;                                          // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsGamepad;                                        // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                DefaultGamepadName;                                      // 0x0044(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanChangeGamepadType;                                   // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BUTH[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ControllerData[0x10];                                    // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UClass*>                                      ControllerDataClasses;                                   // 0x0060(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputSettings
	 * Size -> 0x00B0 (FullSize[0x00E8] - InheritedSize[0x0038])
	 */
	class UCommonInputSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              InputData[0x28];                                         // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FPerPlatformSettings                                PlatformInput;                                           // 0x0060(0x0010) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, struct FCommonInputPlatformBaseData>     CommonInputPlatformData;                                 // 0x0070(0x0050) Config, Deprecated, NativeAccessSpecifierPrivate
		bool                                                       bEnableInputMethodThrashingProtection;                   // 0x00C0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZZIA[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputMethodThrashingLimit;                               // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     InputMethodThrashingWindowInSeconds;                     // 0x00C8(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     InputMethodThrashingCooldownInSeconds;                   // 0x00D0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowOutOfFocusDeviceInput;                             // 0x00D8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D8V6[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InputDataClass;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputSubsystem
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UCommonInputSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_2XQ5[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInputMethodChanged;                                    // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		int32_t                                                    NumberOfInputMethodChangesRecently;                      // 0x0068(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YV35[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastInputMethodChangeTime;                               // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     LastTimeInputMethodThrashingBegan;                       // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputType                                           LastInputType;                                           // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputType                                           CurrentInputType;                                        // 0x0081(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BRGH[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GamepadInputType;                                        // 0x0084(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CITO[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, ECommonInputType>                        CurrentInputLocks;                                       // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OFV5[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsGamepadSimulatedClick;                                // 0x00F8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DESS[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowInputKeys();
		void SetGamepadInputType(const class FName& InGamepadInputType);
		void SetCurrentInputType(ECommonInputType NewInputType);
		bool IsUsingPointerInput();
		bool IsInputMethodActive(ECommonInputType InputMethod);
		ECommonInputType GetDefaultInputType();
		ECommonInputType GetCurrentInputType();
		class FName GetCurrentGamepadName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
