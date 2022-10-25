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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaAudio.StoryDrivenAudioPortalSetting
	 * Size -> 0x0018
	 */
	struct FStoryDrivenAudioPortalSetting
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		class UAudioSpaceDataAsset*                                AudioInsideSpace;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioSpaceDataAsset*                                AudioOutsideSpace;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAudio.AnimNotify_SoundSwitch
	 * Size -> 0x0018
	 */
	struct FAnimNotify_SoundSwitch
	{
	public:
		struct FStringAssetReference                               SkeletalMeshReference;                                   // 0x0000(0x0010) Edit, ZeroConstructor
		class FName                                                SkeletalMeshCategoryName;                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
