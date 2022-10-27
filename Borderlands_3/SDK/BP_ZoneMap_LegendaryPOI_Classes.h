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
	 * BlueprintGeneratedClass BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C
	 * Size -> 0x0008 (FullSize[0x0768] - InheritedSize[0x0760])
	 */
	class UBP_ZoneMap_LegendaryPOI_C : public UZoneMapPOILegendaryComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0760(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ZoneMap_LegendaryPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
