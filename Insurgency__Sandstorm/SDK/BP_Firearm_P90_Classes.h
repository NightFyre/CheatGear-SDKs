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
	 * DynamicClass BP_Firearm_P90.BP_Firearm_P90_C
	 * Size -> 0x0000 (FullSize[0x4660] - InheritedSize[0x4660])
	 */
	class ABP_Firearm_P90_C : public ABP_Firearm_SMGBase_C
	{
	public:
		class FName UpdateSocketName(const class FName& bpp__ParentSocket__pf);
		bool HasMovableUpgrade();
		class UWeaponUpgradeComponent* GetMovableUpgrade();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
