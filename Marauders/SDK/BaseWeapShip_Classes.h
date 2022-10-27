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
	 * BlueprintGeneratedClass BaseWeapShip.BaseWeapShip_C
	 * Size -> 0x0004 (FullSize[0x0950] - InheritedSize[0x094C])
	 */
	class ABaseWeapShip_C : public ARaidWeapon_Instant
	{
	public:
		unsigned char                                              UnknownData_ZE5U[0x4];                                   // 0x094C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
