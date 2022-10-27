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
	 * DynamicClass BP_UG_Foregrip_Aiming_Base.BP_UG_Foregrip_Aiming_Base_C
	 * Size -> 0x0050 (FullSize[0x0438] - InheritedSize[0x03E8])
	 */
	class UBP_UG_Foregrip_Aiming_Base_C : public UBP_UG_Foregrip_Base_C
	{
	public:
		TMap<class UClass*, bool>                                  CustomADSMap;                                            // 0x03E8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
