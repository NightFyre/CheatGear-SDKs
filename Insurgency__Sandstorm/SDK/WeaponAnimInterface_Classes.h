#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass WeaponAnimInterface.WeaponAnimInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponAnimInterface_C : public UInterface
	{
	public:
		void UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const);
		void ToggleOpticState(bool bpp__Enable__pf);
		void StopToggleOpticMontage();
		void InterfaceUpdateSimulationBlend(float bpp__State__pf);
		void ForceToggleOpticState(bool bpp__bEnable__pf);
		void ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
