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
	 * Class AudioExtensions.SoundfieldEncodingSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEncodingSettingsBase : public UObject
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
	 * Class AudioExtensions.AudioParameterControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioParameterControllerInterface : public UInterface
	{
	public:
		void SetTriggerParameter(const class FName& InName);
		void SetStringParameter(const class FName& InName, const class FString& InValue);
		void SetStringArrayParameter(const class FName& InName, TArray<class FString> InValue);
		void SetParameters_Blueprint(TArray<struct FAudioParameter> InParameters);
		void SetObjectParameter(const class FName& InName, class UObject* InValue);
		void SetObjectArrayParameter(const class FName& InName, TArray<class UObject*> InValue);
		void SetIntParameter(const class FName& InName, int32_t inInt);
		void SetIntArrayParameter(const class FName& InName, TArray<int32_t> InValue);
		void SetFloatParameter(const class FName& InName, float InFloat);
		void SetFloatArrayParameter(const class FName& InName, TArray<float> InValue);
		void SetBoolParameter(const class FName& InName, bool InBool);
		void SetBoolArrayParameter(const class FName& InName, TArray<bool> InValue);
		void ResetParameters();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.AudioCodecEncoderSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAudioCodecEncoderSettings : public UObject
	{
	public:
		int32_t                                                    Version;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JZZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

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
	 * Class AudioExtensions.DummyEndpointSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDummyEndpointSettings : public UAudioEndpointSettingsBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USourceDataOverridePluginSourceSettingsBase : public UObject
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
	 * Class AudioExtensions.ReverbPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReverbPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundModulatorBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USoundModulatorBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_0UYA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

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
		class USoundfieldEffectSettingsBase*                       Settings;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.AudioPcmEncoderSettings
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
	{
	public:
		EPcmBitDepthConversion                                     BitDepthConversion;                                      // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QSX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
