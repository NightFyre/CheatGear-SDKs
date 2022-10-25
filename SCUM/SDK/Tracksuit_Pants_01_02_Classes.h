#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass Tracksuit_Pants_01_02.Tracksuit_Pants_01_02_C
	 * Size -> 0x0008 (FullSize[0x0A20] - InheritedSize[0x0A18])
	 */
	class ATracksuit_Pants_01_02_C : public AClothesItem
	{
	public:
		unsigned char                                              UnknownData_WCRN[0x8];                                   // 0x0A18(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
