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
	 * BlueprintGeneratedClass IBPChar_Beastmaster.IBPChar_Beastmaster_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_Beastmaster_C : public UInterface
	{
	public:
		void TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes);
		void SetNewPetThreatScale(float NewScale);
		void PlayPetAudioCallAndResponse(Enum_BeastmasterDialogAction DialogType);
		void GetCurrentPet(class AOakCharacter** res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
