#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Enum MagicLeapARPin.EMagicLeapAutoPinType
	 */
	enum class EMagicLeapAutoPinType : uint8_t
	{
		OnlyOnDataRestoration = 0,
		Always                = 1,
		Never                 = 2,
		MAX                   = 3
	};

	/**
	 * Enum MagicLeapARPin.EMagicLeapPassableWorldError
	 */
	enum class EMagicLeapPassableWorldError : uint8_t
	{
		None                    = 0,
		LowMapQuality           = 1,
		UnableToLocalize        = 2,
		Unavailable             = 3,
		PrivilegeDenied         = 4,
		InvalidParam            = 5,
		UnspecifiedFailure      = 6,
		PrivilegeRequestPending = 7,
		StartupPending          = 8,
		NotImplemented          = 9,
		PinNotFound             = 10,
		MAX                     = 11
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinState
	 * Size -> 0x0010
	 */
	struct FMagicLeapARPinState
	{
	public:
		float                                                      Confidence;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationError;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationError;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
