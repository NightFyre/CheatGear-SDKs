#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class WaterSlide.WaterSlideParamsDataAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UWaterSlideParamsDataAsset : public UDataAsset
	{
	public:
		struct FWaterSlideParams                                   WaterSlideParams;                                        // 0x0028(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlide
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class AWaterSlide : public AActor
	{
	public:
		unsigned char                                              UnknownData_P28Y[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SlideSpline;                                             // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UWaterSlideParamsDataAsset*                          WaterSlideParamsDataAsset;                               // 0x03E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UPrimitiveComponent*                                 EntranceCollisionComponent;                              // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AWaterSlide*                                         ContinuedWaterSlideRoute;                                // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AWaterSlide*                                         LeftWaterSlideRoute;                                     // 0x03F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AWaterSlide*                                         RightWaterSlideRoute;                                    // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       IsEndOfSlide;                                            // 0x0408(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_XC3E[0x3];                                   // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EndOfSlideLaunchForce;                                   // 0x040C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class UWaterSlideAudioParams*                              WaterSlideAudioParams;                                   // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_105N[0x20];                                  // 0x0420(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent);
		void ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlideActionStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterSlideActionStateId : public UActionStateId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlideAudioParams
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UWaterSlideAudioParams : public UDataAsset
	{
	public:
		class UWwiseEvent*                                         WaterSlideStart;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WaterSlideEnd;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WaterSlideIsEndOneShot;                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WaterSlideChangeForkOneShot;                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PlayerSpeedOnWaterSlideRTPC;                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerSpeedThatMapsToOne;                                // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerSpeedThatMapsToZero;                               // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlideInputComponent
	 * Size -> 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
	 */
	class UWaterSlideInputComponent : public ULookAtOffsetInputComponent
	{
	public:
		unsigned char                                              UnknownData_ETNV[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlidePlayerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterSlidePlayerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlidePlayerComponent
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UWaterSlidePlayerComponent : public UDoubleIntentComponent
	{
	public:
		unsigned char                                              UnknownData_4SNS[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            PlayerWaterSlideSplashingVFXComponent;                   // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UParticleSystem*                                     PlayerWaterSlideSplashingVFX;                            // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SpawnLocationZOffset;                                    // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_UBIE[0x14];                                  // 0x00FC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWaterSlide*                                         CurrentWaterSlide;                                       // 0x0110(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WaterSlide.WaterSlideVeeringAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UWaterSlideVeeringAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
