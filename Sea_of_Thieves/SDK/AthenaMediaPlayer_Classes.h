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
	 * Class AthenaMediaPlayer.AthenaMediaPlayer
	 * Size -> 0x0020 (FullSize[0x0198] - InheritedSize[0x0178])
	 */
	class UAthenaMediaPlayer : public UMediaPlayer
	{
	public:
		unsigned char                                              UnknownData_CKJC[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseMediaSoundComponent*                           SoundComponent;                                          // 0x0180(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMediaSubtitleComponent*                             SubtitleComponent;                                       // 0x0188(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1LHP[0x8];                                   // 0x0190(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
