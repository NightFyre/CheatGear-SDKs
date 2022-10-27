#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BP_Mus_MainMenu.BP_Mus_MainMenu_C
	 * Size -> 0x0021 (FullSize[0x0521] - InheritedSize[0x0500])
	 */
	class ABP_Mus_MainMenu_C : public AOakMusicProvider
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) Transient, DuplicateTransient
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0508(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       MenuMusicShouldPlay;                                     // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Mus_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
