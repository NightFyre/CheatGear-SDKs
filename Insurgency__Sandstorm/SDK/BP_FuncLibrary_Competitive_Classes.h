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
	 * DynamicClass BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FuncLibrary_Competitive_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetTierTexture(int32_t bpp__Tier__pf, int32_t bpp__Division__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TierIcon__pf);
		void STATIC_GetTierBandTexture(int32_t bpp__Tier__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TierBand__pf);
		void STATIC_GetCompTierName(int32_t bpp__Tier__pf, bool bpp__bAppendDivision__pf, int32_t bpp__Division__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__TierName__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
