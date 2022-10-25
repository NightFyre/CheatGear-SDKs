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
	 * BlueprintGeneratedClass Challenge_Crew_Ger_Tannery_00_AllComplete.Challenge_Crew_Ger_Tannery_00_AllComplete_C
	 * Size -> 0x001C (FullSize[0x0358] - InheritedSize[0x033C])
	 */
	class UChallenge_Crew_Ger_Tannery_00_AllComplete_C : public UChallenge_Crew_Geranium_Tannery_C
	{
	public:
		unsigned char                                              UnknownData_XCGS[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 CrewChallengeMailRow;                                    // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_Crew_Ger_Tannery_00_AllComplete(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
