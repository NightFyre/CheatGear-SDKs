#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BPI_GameModifierSettings.BPI_GameModifierSettings_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_GameModifierSettings_C : public UInterface
	{
	public:
		void GetTravelURLOptions(class FString* Options);
		void IsEnabled(bool* bEnabled);
		void SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
