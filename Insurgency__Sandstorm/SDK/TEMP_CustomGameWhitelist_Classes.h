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
	 * DynamicClass TEMP_CustomGameWhitelist.TEMP_CustomGameWhitelist_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTEMP_CustomGameWhitelist_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CanPlayScenarioInCustom(const class FString& bpp__Scenario__pf__const, class UObject* bpp____WorldContext__pf, bool* bpp__bCanPlay__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
