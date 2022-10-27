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
	 * BlueprintGeneratedClass BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C
	 * Size -> 0x000F (FullSize[0x0278] - InheritedSize[0x0269])
	 */
	class UBP_Challenge_CharacterSpecific_FinishGame_C : public UBP_Challenge_CharacterSpecific_C
	{
	public:
		unsigned char                                              UnknownData_PJV8[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) Transient, DuplicateTransient

	public:
		void CompletedAllPlotMissions();
		void SetBinds(class AOakCharacter* Character, bool* BindSet);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
