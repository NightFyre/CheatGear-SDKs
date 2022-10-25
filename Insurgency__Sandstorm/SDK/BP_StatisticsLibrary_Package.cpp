/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04ECCDB0
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.SetConsoleAchievementIcons
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_SetConsoleAchievementIcons(class UObject* bpp____WorldContext__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.SetConsoleAchievementIcons");
		
		UBP_StatisticsLibrary_C_SetConsoleAchievementIcons_Params params {};
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECCB30
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Is Slot Has Sub Slots
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           bpp__Slot__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bSubSlots__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_Is_Slot_Has_Sub_Slots(ECharacterAppearanceSlot bpp__Slot__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bSubSlots__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Is Slot Has Sub Slots");
		
		UBP_StatisticsLibrary_C_Is_Slot_Has_Sub_Slots_Params params {};
		params.bpp__Slot__pf = bpp__Slot__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bSubSlots__pf != nullptr)
			*bpp__bSubSlots__pf = params.bpp__bSubSlots__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC870
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Get Achievement Icon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__IsAchieved__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__AchievementName__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 bpp__SlateBrushOut__pf                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_Get_Achievement_Icon(bool bpp__IsAchieved__pf, const class FName& bpp__AchievementName__pf, class UObject* bpp____WorldContext__pf, struct FSlateBrush* bpp__SlateBrushOut__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Get Achievement Icon");
		
		UBP_StatisticsLibrary_C_Get_Achievement_Icon_Params params {};
		params.bpp__IsAchieved__pf = bpp__IsAchieved__pf;
		params.bpp__AchievementName__pf = bpp__AchievementName__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__SlateBrushOut__pf != nullptr)
			*bpp__SlateBrushOut__pf = params.bpp__SlateBrushOut__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC730
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetWeaponIconClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      bpp__WeaponName__pf__const                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetWeaponIconClass(const class FString& bpp__WeaponName__pf__const, class UObject* bpp____WorldContext__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetWeaponIconClass");
		
		UBP_StatisticsLibrary_C_GetWeaponIconClass_Params params {};
		params.bpp__WeaponName__pf__const = bpp__WeaponName__pf__const;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC630
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetTextureForRank
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__PlayerRank__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__RankTexture__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetTextureForRank(int32_t bpp__PlayerRank__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__RankTexture__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetTextureForRank");
		
		UBP_StatisticsLibrary_C_GetTextureForRank_Params params {};
		params.bpp__PlayerRank__pf = bpp__PlayerRank__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RankTexture__pf != nullptr)
			*bpp__RankTexture__pf = params.bpp__RankTexture__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC530
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetRarityColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		ECollectibleRarity                                 bpp__Rarity__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__RarityColor__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetRarityColor(ECollectibleRarity bpp__Rarity__pf, class UObject* bpp____WorldContext__pf, struct FLinearColor* bpp__RarityColor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetRarityColor");
		
		UBP_StatisticsLibrary_C_GetRarityColor_Params params {};
		params.bpp__Rarity__pf = bpp__Rarity__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RarityColor__pf != nullptr)
			*bpp__RarityColor__pf = params.bpp__RarityColor__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC410
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetFireSupportIconByName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      bpp__SupportName__pf__const                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__OutputTexture__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetFireSupportIconByName(const class FString& bpp__SupportName__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__OutputTexture__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetFireSupportIconByName");
		
		UBP_StatisticsLibrary_C_GetFireSupportIconByName_Params params {};
		params.bpp__SupportName__pf__const = bpp__SupportName__pf__const;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__OutputTexture__pf != nullptr)
			*bpp__OutputTexture__pf = params.bpp__OutputTexture__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC2D0
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetColorForRank
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__PlayerRank__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateColor                                 bpp__RankTexture__pf                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetColorForRank(int32_t bpp__PlayerRank__pf, class UObject* bpp____WorldContext__pf, struct FSlateColor* bpp__RankTexture__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetColorForRank");
		
		UBP_StatisticsLibrary_C_GetColorForRank_Params params {};
		params.bpp__PlayerRank__pf = bpp__PlayerRank__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RankTexture__pf != nullptr)
			*bpp__RankTexture__pf = params.bpp__RankTexture__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ECC180
	 * 		Name   -> Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetClassIconByName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      bpp__PlayerClassName__pf__const                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__TeamId__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  bpp__PlayerClassIcon__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_StatisticsLibrary_C::STATIC_GetClassIconByName(const class FString& bpp__PlayerClassName__pf__const, int32_t bpp__TeamId__pf, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__PlayerClassIcon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetClassIconByName");
		
		UBP_StatisticsLibrary_C_GetClassIconByName_Params params {};
		params.bpp__PlayerClassName__pf__const = bpp__PlayerClassName__pf__const;
		params.bpp__TeamId__pf = bpp__TeamId__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PlayerClassIcon__pf != nullptr)
			*bpp__PlayerClassIcon__pf = params.bpp__PlayerClassIcon__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatisticsLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatisticsLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_StatisticsLibrary.BP_StatisticsLibrary_C");
		return ptr;
	}

}


