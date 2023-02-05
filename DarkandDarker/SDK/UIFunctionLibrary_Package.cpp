/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetAttributeTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      GameplayAttributeData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::GetAttributeTextColor(const struct FGameplayAttributeData& GameplayAttributeData, class UObject* __WorldContext, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetAttributeTextColor");
		
		UUIFunctionLibrary_C_GetAttributeTextColor_Params params {};
		params.GameplayAttributeData = GameplayAttributeData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetAttributeTextColor_OverloadedValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::GetAttributeTextColor_OverloadedValue(double BaseValue, double CurrentValue, class UObject* __WorldContext, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetAttributeTextColor_OverloadedValue");
		
		UUIFunctionLibrary_C_GetAttributeTextColor_OverloadedValue_Params params {};
		params.BaseValue = BaseValue;
		params.CurrentValue = CurrentValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetSpellTypeColor
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                SpellSourceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 OutlineColor                                               (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetSpellTypeColor(const struct FGameplayTag& SpellSourceType, class UObject* __WorldContext, struct FSlateColor* OutlineColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSpellTypeColor");
		
		UUIFunctionLibrary_C_GetSpellTypeColor_Params params {};
		params.SpellSourceType = SpellSourceType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutlineColor != nullptr)
			*OutlineColor = params.OutlineColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetFirstKeyByInputAction
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputAction*                                InputAction                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECommonInputType                                   InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        KeyDisplayName                                             (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetFirstKeyByInputAction(class UInputAction* InputAction, ECommonInputType InputType, class UObject* __WorldContext, class FText* KeyDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFirstKeyByInputAction");
		
		UUIFunctionLibrary_C_GetFirstKeyByInputAction_Params params {};
		params.InputAction = InputAction;
		params.InputType = InputType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyDisplayName != nullptr)
			*KeyDisplayName = params.KeyDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRadialSelectedIndexByInputDirection
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SectionDegreeSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RadialIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctionLibrary_C::STATIC_GetRadialSelectedIndexByInputDirection(const struct FVector2D& Direction, double SectionDegreeSize, class UObject* __WorldContext, int32_t* RadialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRadialSelectedIndexByInputDirection");
		
		UUIFunctionLibrary_C_GetRadialSelectedIndexByInputDirection_Params params {};
		params.Direction = Direction;
		params.SectionDegreeSize = SectionDegreeSize;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadialIndex != nullptr)
			*RadialIndex = params.RadialIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateRadialDirectionWithMousePosition
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctionLibrary_C::STATIC_UpdateRadialDirectionWithMousePosition(class UObject* __WorldContext, struct FVector2D* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateRadialDirectionWithMousePosition");
		
		UUIFunctionLibrary_C_UpdateRadialDirectionWithMousePosition_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetGamepadButtonImage
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctionLibrary_C::STATIC_GetGamepadButtonImage(const struct FKey& Key, class UObject* __WorldContext, class UTexture2D** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetGamepadButtonImage");
		
		UUIFunctionLibrary_C_GetGamepadButtonImage_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlayerCharacterEffectTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetPlayerCharacterEffectTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlayerCharacterEffectTypeText");
		
		UUIFunctionLibrary_C_GetPlayerCharacterEffectTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemRaritySlateColor
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemRaritySlateColor(const struct FGameplayTag& Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemRaritySlateColor");
		
		UUIFunctionLibrary_C_GetItemRaritySlateColor_Params params {};
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemEffectValueText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EffectTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EffectValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        EffectValueText                                            (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemEffectValueText(const struct FGameplayTag& EffectTag, int32_t EffectValue, class UObject* __WorldContext, class FText* EffectValueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemEffectValueText");
		
		UUIFunctionLibrary_C_GetItemEffectValueText_Params params {};
		params.EffectTag = EffectTag;
		params.EffectValue = EffectValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EffectValueText != nullptr)
			*EffectValueText = params.EffectValueText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemEffectTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemEffectTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemEffectTypeText");
		
		UUIFunctionLibrary_C_GetItemEffectTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemUtilityTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemUtilityTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemUtilityTypeText");
		
		UUIFunctionLibrary_C_GetItemUtilityTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemArmorTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemArmorTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemArmorTypeText");
		
		UUIFunctionLibrary_C_GetItemArmorTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemWeaponTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemWeaponTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemWeaponTypeText");
		
		UUIFunctionLibrary_C_GetItemWeaponTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemHandTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemHandTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemHandTypeText");
		
		UUIFunctionLibrary_C_GetItemHandTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemSlotTypeText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUIFunctionLibrary_C::STATIC_GetItemSlotTypeText(const struct FGameplayTag& GameplayTag, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemSlotTypeText");
		
		UUIFunctionLibrary_C_GetItemSlotTypeText_Params params {};
		params.GameplayTag = GameplayTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C");
		return ptr;
	}

}


