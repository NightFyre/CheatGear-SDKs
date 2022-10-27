#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class AudioExtensions.SoundfieldEncodingSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEncodingSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.AudioEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SpatializationPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpatializationPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.OcclusionPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOcclusionPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundModulationPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundModulationPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.ReverbPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReverbPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEffectSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USoundfieldEffectBase : public UObject
	{
	public:
		class USoundfieldEffectSettingsBase*                       Settings;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
