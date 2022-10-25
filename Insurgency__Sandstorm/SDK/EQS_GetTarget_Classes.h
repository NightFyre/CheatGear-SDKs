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
	 * DynamicClass EQS_GetTarget.EQS_GetTarget_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEQS_GetTarget_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		void ProvideSingleActor(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, class AActor** bpp__ResultingActor__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
