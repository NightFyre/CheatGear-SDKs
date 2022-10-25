#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class CustomServerLocalisation.CustomServerLocalisationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomServerLocalisationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomServerLocalisation.CustomServerLocalisationService
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class ACustomServerLocalisationService : public AActor
	{
	public:
		unsigned char                                              UnknownData_RV0C[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomServerLocalisationData>               LocalisationData;                                        // 0x03D0(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_BVUF[0x80];                                  // 0x03E0(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnRep_GenerateLocalisationData();
		void BeginPlay();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
