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
	 * Class RareMediaComponents.MediaSubtitleComponent
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	class UMediaSubtitleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KTK7[0x68];                                  // 0x00C8(0x0068) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
		class UMediaPlayer* GetMediaPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class RareMediaComponents.WwiseMediaSoundComponent
	 * Size -> 0x00E0 (FullSize[0x03C0] - InheritedSize[0x02E0])
	 */
	class UWwiseMediaSoundComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_WYSS[0x88];                                  // 0x02E0(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         MediaSoundEvent;                                         // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A68X[0x40];                                  // 0x0370(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelativeBufferSize;                                      // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AIIA[0xC];                                   // 0x03B4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
