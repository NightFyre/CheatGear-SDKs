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
	 * DynamicClass EnvQueryContext_HelicopterDestination.EnvQueryContext_HelicopterDestination_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_HelicopterDestination_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		void ProvideSingleLocation(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, struct FVector* bpp__ResultingLocation__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
