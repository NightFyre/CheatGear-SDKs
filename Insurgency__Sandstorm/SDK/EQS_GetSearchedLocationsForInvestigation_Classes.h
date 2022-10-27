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
	 * DynamicClass EQS_GetSearchedLocationsForInvestigation.EQS_GetSearchedLocationsForInvestigation_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEQS_GetSearchedLocationsForInvestigation_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		void ProvideLocationsSet(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, TArray<struct FVector>* bpp__ResultingLocationSet__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
