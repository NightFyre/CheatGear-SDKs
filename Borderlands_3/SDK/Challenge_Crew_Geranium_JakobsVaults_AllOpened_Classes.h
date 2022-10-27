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
	 * BlueprintGeneratedClass Challenge_Crew_Geranium_JakobsVaults_AllOpened.Challenge_Crew_Geranium_JakobsVaults_AllOpened_C
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class UChallenge_Crew_Geranium_JakobsVaults_AllOpened_C : public UChallenge_Crew_Geranium_OpenJakobsVault_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 CrewChallengeMailRow;                                    // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_Crew_Geranium_JakobsVaults_AllOpened(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
