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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class StatsCollector.AutotestCamera
	 * Size -> 0x0010 (FullSize[0x07A0] - InheritedSize[0x0790])
	 */
	class AAutotestCamera : public ACameraActor
	{
	public:
		int32_t                                                    Index;                                                   // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISOQ[0xC];                                   // 0x0794(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatsCollector.CustomStatsCollector
	 * Size -> 0x02D0 (FullSize[0x02F8] - InheritedSize[0x0028])
	 */
	class UCustomStatsCollector : public UObject
	{
	public:
		unsigned char                                              UnknownData_8OOG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       TickEnabled;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MIEY[0x77];                                  // 0x0031(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FFloatDataItem>                 FloatStats;                                              // 0x00A8(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, struct FIntDataItem>                   IntStats;                                                // 0x00F8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DGTA[0x158];                                 // 0x0148(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         FPSCounterWidget;                                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsWasShowWidget;                                        // 0x02A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XH2F[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelStreamingDynamic*                              AutotestLevel;                                           // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0G5F[0x20];                                  // 0x02B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelStreamingDynamic*                              SequenceLevel;                                           // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P5D0[0x18];                                  // 0x02E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTickEnabled(bool bInEnabled);
		void OnSequanceLevelUnloaded();
		void OnSequanceLevelStopped();
		void OnSequanceLevelLoaded();
		void OnAutotestLevelUnloaded();
		void OnAutotestLevelLoaded();
		void NewFrame(int64_t targetFrame);
		static UClass* StaticClass();
	};

	/**
	 * Class StatsCollector.StatsCollectorSettings
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UStatsCollectorSettings : public UDeveloperSettings
	{
	public:
		class UClass*                                              StatCollectorMenuWidget;                                 // 0x0038(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetFPSCounter;                                        // 0x0040(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PackageMaps[0x10];                                       // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bShowFPSCounter;                                         // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugWidget;                                      // 0x0059(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3AO[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StatsCollector.FPSCounterWidget
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UFPSCounterWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_5AVI[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateFrameCount(class UTextBlock* FPSTextBlock, class UTextBlock* MAX_FPSTextBlock, class UTextBlock* AVR_FPSTextBlock, float DeltaTime);
		float GetMaxFPS();
		float GetCurrentFPS();
		float GetAvrFPS();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
