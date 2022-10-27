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
	 * DynamicClass BP_RankLibrary.BP_RankLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_RankLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetRankIconForLevel(int32_t bpp__Level__pf, int32_t bpp__TeamId__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__RankIcon__pf);
		void STATIC_GetRankBandForLevel(int32_t bpp__PlayerLevel__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TextureOut__pf);
		void STATIC_GetRankBandForExp(int32_t bpp__PlayerxExperience__pfT, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__TextureOut__pf);
		void STATIC_GetRankBandColorForExp(int32_t bpp__PlayerExperience__pf, class UObject* bpp____WorldContext__pf, struct FLinearColor* bpp__RankColor__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
