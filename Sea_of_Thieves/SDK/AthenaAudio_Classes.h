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
	 * Class AthenaAudio.AthenaAudioConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAthenaAudioConfig : public UDataAsset
	{
	public:
		class UWwiseObjectPoolWrapper*                             ItemProxyPool;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseObjectPoolWrapper*                             AnimNotifyPool;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.AthenaAudioModuleSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAthenaAudioModuleSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               AudioConfigAsset;                                        // 0x0038(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.AudioPortalComponent
	 * Size -> 0x0060 (FullSize[0x0340] - InheritedSize[0x02E0])
	 */
	class UAudioPortalComponent : public USceneComponent
	{
	public:
		float                                                      PortalTriggerDistance;                                   // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InsideRtpcUpdateDistance;                                // 0x02E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutsideRtpcUpdateDistance;                               // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrackAttachmentToActor;                                  // 0x02EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0YW0[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioSpaceDataAsset*                                AudioInsideSpace;                                        // 0x02F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioSpaceDataAsset*                                AudioOutsideSpace;                                       // 0x02F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioSpaceDataAsset*                                ActiveAudioInsideSpace;                                  // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioSpaceDataAsset*                                ActiveAudioOutsideSpace;                                 // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStoryDrivenAudioPortalCollectionDataAsset*          CollectionAsset;                                         // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2YPY[0x28];                                  // 0x0318(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetParentShip(class AActor* ParentShip);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.AudioPortalInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPortalInterface : public UInterface
	{
	public:
		void UnregisterPortal(class UAudioPortalComponent* AudioPortal);
		void RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor);
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor);
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortals();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.AudioPortalService
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UAudioPortalService : public UObject
	{
	public:
		unsigned char                                              UnknownData_M6UA[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.MultiEmitter
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class AMultiEmitter : public AActor
	{
	public:
		class UMultiEmitterRootComponent*                          MultiEmitterRootComponent;                               // 0x03C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_L10P[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ResetNamingCount();
		void CreateAndAddMergedEmitterComponentToRoot(const class FName& InName, const struct FVector& InOffset, class UWwiseEvent* InWwiseEvent, class UWwiseObjectPoolWrapper* InPool);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.StoryDrivenAudioPortalDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UStoryDrivenAudioPortalDataAsset : public UDataAsset
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0028(0x0008) Edit
		TArray<struct FStoryDrivenAudioPortalSetting>              Stories;                                                 // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAudio.StoryDrivenAudioPortalCollectionDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UStoryDrivenAudioPortalCollectionDataAsset : public UDataAsset
	{
	public:
		TArray<class UStoryDrivenAudioPortalDataAsset*>            AssetsList;                                              // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
