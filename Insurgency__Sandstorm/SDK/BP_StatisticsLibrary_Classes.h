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
	 * DynamicClass BP_StatisticsLibrary.BP_StatisticsLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_StatisticsLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetConsoleAchievementIcons(class UObject* bpp____WorldContext__pf);
		void STATIC_Is_Slot_Has_Sub_Slots(ECharacterAppearanceSlot bpp__Slot__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bSubSlots__pf);
		void STATIC_Get_Achievement_Icon(bool bpp__IsAchieved__pf, const class FName& bpp__AchievementName__pf, class UObject* bpp____WorldContext__pf, struct FSlateBrush* bpp__SlateBrushOut__pf);
		void STATIC_GetWeaponIconClass(const class FString& bpp__WeaponName__pf__const, class UObject* bpp____WorldContext__pf);
		void STATIC_GetTextureForRank(int32_t bpp__PlayerRank__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__RankTexture__pf);
		void STATIC_GetRarityColor(ECollectibleRarity bpp__Rarity__pf, class UObject* bpp____WorldContext__pf, struct FLinearColor* bpp__RarityColor__pf);
		void STATIC_GetFireSupportIconByName(const class FString& bpp__SupportName__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__OutputTexture__pf);
		void STATIC_GetColorForRank(int32_t bpp__PlayerRank__pf, class UObject* bpp____WorldContext__pf, struct FSlateColor* bpp__RankTexture__pf);
		void STATIC_GetClassIconByName(const class FString& bpp__PlayerClassName__pf__const, int32_t bpp__TeamId__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__PlayerClassIcon__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
