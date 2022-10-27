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
	 * BlueprintGeneratedClass Challenge_Crew_Ger_TreasureMap_00_AllComplete.Challenge_Crew_Ger_TreasureMap_00_AllComplete_C
	 * Size -> 0x00BC (FullSize[0x03F8] - InheritedSize[0x033C])
	 */
	class UChallenge_Crew_Ger_TreasureMap_00_AllComplete_C : public UChallenge_Crew_Geranium_TreasureMap_C
	{
	public:
		unsigned char                                              UnknownData_4ALD[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 CrewChallengeMailRow;                                    // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FText                                                Beastmaster;                                             // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Operative;                                               // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Gunner;                                                  // 0x0388(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SirenBrawler;                                            // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 CrewChallengeMailRow_Beastmaster;                        // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CrewChallengeMailRow_Gunner;                             // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CrewChallengeMailRow_Operative;                          // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CrewChallengeMailRow_Siren;                              // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_Crew_Ger_TreasureMap_00_AllComplete(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
