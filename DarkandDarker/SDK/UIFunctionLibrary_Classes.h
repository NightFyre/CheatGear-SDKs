#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetAttributeTextColor(const struct FGameplayAttributeData& GameplayAttributeData, class UObject* __WorldContext, struct FSlateColor* SlateColor);
		void GetAttributeTextColor_OverloadedValue(double BaseValue, double CurrentValue, class UObject* __WorldContext, struct FSlateColor* SlateColor);
		void STATIC_GetSpellTypeColor(const struct FGameplayTag& SpellSourceType, class UObject* __WorldContext, struct FSlateColor* OutlineColor);
		void STATIC_GetFirstKeyByInputAction(class UInputAction* InputAction, ECommonInputType InputType, class UObject* __WorldContext, class FText* KeyDisplayName);
		void STATIC_GetRadialSelectedIndexByInputDirection(const struct FVector2D& Direction, double SectionDegreeSize, class UObject* __WorldContext, int32_t* RadialIndex);
		void STATIC_UpdateRadialDirectionWithMousePosition(class UObject* __WorldContext, struct FVector2D* Direction);
		void STATIC_GetGamepadButtonImage(const struct FKey& Key, class UObject* __WorldContext, class UTexture2D** Image);
		void STATIC_GetPlayerCharacterEffectTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemRaritySlateColor(const struct FGameplayTag& Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor);
		void STATIC_GetItemEffectValueText(const struct FGameplayTag& EffectTag, int32_t EffectValue, class UObject* __WorldContext, class FText* EffectValueText);
		void STATIC_GetItemEffectTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemUtilityTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemArmorTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemWeaponTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemHandTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		void STATIC_GetItemSlotTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
