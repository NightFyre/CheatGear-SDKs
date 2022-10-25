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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioExtensions.SoundModulationParameter
	 * Size -> 0x0014
	 */
	struct FSoundModulationParameter
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPVL[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioExtensions.SoundModulation
	 * Size -> 0x0010
	 */
	struct FSoundModulation
	{
	public:
		TArray<class USoundModulationPluginSourceSettingsBase*>    Settings;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
