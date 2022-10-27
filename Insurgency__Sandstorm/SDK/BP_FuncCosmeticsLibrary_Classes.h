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
	 * DynamicClass BP_FuncCosmeticsLibrary.BP_FuncCosmeticsLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FuncCosmeticsLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetIconPatches(EAppearancePatchesSubSlot bpp__SubSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Icon__pf);
		void STATIC_GetIconCharacter(EAppearanceCharacterSubSlot bpp__SubSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Icon__pf);
		void STATIC_GetIconAppearence(ECharacterAppearanceSlot bpp__AppearenceSlot__pf, int32_t bpp__CosmeticSlot__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__IconAppearance__pf, class UTexture2D** bpp__IconCosmetic__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
