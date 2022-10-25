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
	 * Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_BroadcastOceanCrawlerAbilityAudioEvent : public UBTTaskNode
	{
	public:
		EOceanCrawlerAbilityAudioKey                               OceanCrawlerAudioKeyToBroadcast;                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B3D8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UOceanCrawlerAudioParamsDataAsset : public UDataAsset
	{
	public:
		class UWwiseObjectPoolWrapper*                             WwiseObjectPoolWrapper;                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FOceanCrawlerAudioKeyPair>                   AudioKeyPairs;                                           // 0x0030(0x0010) Edit, ZeroConstructor
		struct FWeightedProbabilityRangeOfRanges                   BuffThankDelay;                                          // 0x0040(0x0030) Edit
		struct FOceanCrawlerBuffAudioSettings                      CrabBuffAudioSettings;                                   // 0x0070(0x0010) Edit
		struct FOceanCrawlerBuffAudioSettings                      EelBuffAudioSettings;                                    // 0x0080(0x0010) Edit
		struct FOceanCrawlerBuffAudioSettings                      HermitBuffAudioSettings;                                 // 0x0090(0x0010) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OceanCrawlers.OceanCrawlerAudioBroadcaster
	 * Size -> 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
	 */
	class UOceanCrawlerAudioBroadcaster : public UActorComponent
	{
	public:
		class UOceanCrawlerAudioParamsDataAsset*                   AudioDataAsset;                                          // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CachedOwner;                                             // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQ6I[0xC8];                                  // 0x00D8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest);
		void Multicast_PlayAudio(EOceanCrawlerAbilityAudioKey InAudioKey, float InAudioDelay);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
