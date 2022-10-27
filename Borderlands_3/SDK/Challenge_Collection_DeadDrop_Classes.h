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
	 * BlueprintGeneratedClass Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C
	 * Size -> 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
	 */
	class UChallenge_Collection_DeadDrop_C : public UChallenge_Crew_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) Transient, DuplicateTransient
		class UClass*                                              ActiveChallenge;                                         // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnChallengeActivated();
		void ExecuteUbergraph_Challenge_Collection_DeadDrop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
