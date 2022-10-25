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
	 * DynamicClass EnvQueryContext_DownwardTrace.EnvQueryContext_DownwardTrace_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_DownwardTrace_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		float                                                      Distance;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ND2I[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void ProvideSingleLocation(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, struct FVector* bpp__ResultingLocation__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
