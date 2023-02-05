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
	 * Class VolumetricAudioPlugin.BaseVolumetricAudio
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class ABaseVolumetricAudio : public AActor
	{
	public:
		bool                                                       ActivateOnBeginPlay;                                     // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Debug;                                                   // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KL13[0x6];                                   // 0x027A(0x0006) MISSED OFFSET (PADDING)

	public:
		void GetDistanceAlongSplineFromLocation(class USplineComponent* SplineComponent, const struct FVector& Location, float* DistanceOnSpline, float* NormalizedDistanceOnSpline);
		static UClass* StaticClass();
	};

	/**
	 * Class VolumetricAudioPlugin.VolumetricAudioFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVolumetricAudioFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetListener(class APawn** Listener);
		class APawn* STATIC_GetListener();
		static UClass* StaticClass();
	};

	/**
	 * Class VolumetricAudioPlugin.VolumetricAudioSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UVolumetricAudioSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
