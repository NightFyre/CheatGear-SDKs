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
	 * DynamicClass BP_FuncLibrary_Region.BP_FuncLibrary_Region_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FuncLibrary_Region_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetRegionTextFromName(const class FName& bpp__RegionName__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Output__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
