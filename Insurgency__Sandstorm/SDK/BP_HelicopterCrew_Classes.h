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
	 * DynamicClass BP_HelicopterCrew.BP_HelicopterCrew_C
	 * Size -> 0x0000 (FullSize[0x0730] - InheritedSize[0x0730])
	 */
	class ABP_HelicopterCrew_C : public AFireSupportCharacter
	{
	public:
		void ReceiveBeginPlay();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
