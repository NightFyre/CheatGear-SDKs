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
	 * BlueprintGeneratedClass Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C
	 * Size -> 0x0014 (FullSize[0x0350] - InheritedSize[0x033C])
	 */
	class UChallenge_Crew_Geranium_TreasureMap_Open_C : public UChallenge_Crew_Geranium_C
	{
	public:
		unsigned char                                              UnknownData_DCYV[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) Transient, DuplicateTransient
		class UClass*                                              UnlockedChallenge;                                       // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnChallengeActivated();
		void ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
