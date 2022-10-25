#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass BPI_Ai.BPI_Ai_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Ai_C : public UInterface
	{
	public:
		void Ai_CheckSetMyInitialAmmoCount();
		void Ai_TurnOnOffDebugText(bool TurnOn);
		void Ai_StoreBaseMissRate(float BaseMissRate);
		void Ai_SetMyGoal(const class FString& CurrentPlan);
		void PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
