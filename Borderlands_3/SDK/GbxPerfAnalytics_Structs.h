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
	 * Enum GbxPerfAnalytics.ESetTelemetryValue
	 */
	enum class ESetTelemetryValue : uint8_t
	{
		Overwrite = 0,
		IfNew     = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxPerfAnalytics.K2EventRef
	 * Size -> 0x0018
	 */
	struct FK2EventRef
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56BW[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxPerfAnalytics.K2TelemetryValues
	 * Size -> 0x0028
	 */
	struct FK2TelemetryValues
	{
	public:
		unsigned char                                              UnknownData_UXE8[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK2EventRef                                         Event;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
