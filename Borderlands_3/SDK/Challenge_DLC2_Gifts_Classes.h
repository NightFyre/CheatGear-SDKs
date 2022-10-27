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
	 * BlueprintGeneratedClass Challenge_DLC2_Gifts.Challenge_DLC2_Gifts_C
	 * Size -> 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
	 */
	class UChallenge_DLC2_Gifts_C : public UDLC2_Challenge_Crew_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) Transient, DuplicateTransient
		class UGameStatData*                                       GiftsRewardStat;                                         // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_DLC2_Gifts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
