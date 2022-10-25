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
	 * DynamicClass BP_Prop_Telephone_01.BP_Prop_Telephone_01_C
	 * Size -> 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
	 */
	class ABP_Prop_Telephone_01_C : public APropBreakable
	{
	public:
		unsigned char                                              UnknownData_AUGQ[0x8];                                   // 0x0438(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
