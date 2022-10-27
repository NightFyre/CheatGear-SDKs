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
	 * BlueprintGeneratedClass BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C
	 * Size -> 0x0010 (FullSize[0x0768] - InheritedSize[0x0758])
	 */
	class UBP_ZoneMapDynamicPOI_C : public UZoneMapPOIComponent
	{
	public:
		unsigned char                                              UnknownData_N7XK[0x8];                                   // 0x0758(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0760(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ZoneMapDynamicPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
