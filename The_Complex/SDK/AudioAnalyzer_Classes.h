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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AudioAnalyzer.AudioAnalyzerAssetBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerAssetBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRTSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRT
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationInSeconds;                                       // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0B9[0x44];                                  // 0x0034(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzer
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzer : public UObject
	{
	public:
		class UAudioBus*                                           AudioBus;                                                // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPSV[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioAnalyzerSubsystem*                             AudioAnalyzerSubsystem;                                  // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JV6J[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		void StopAnalyzing(class UObject* WorldContextObject);
		void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerSubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAudioAnalyzerSubsystem : public UEngineSubsystem
	{
	public:
		TArray<class UAudioAnalyzer*>                              AudioAnalyzers;                                          // 0x0030(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W095[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
