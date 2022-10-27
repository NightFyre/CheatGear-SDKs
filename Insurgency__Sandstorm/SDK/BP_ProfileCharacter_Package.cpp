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
	 * 		RVA    -> 0x04E4EE40
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.UpdateGearLevels
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__ArmorLevel__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__CarrierLevel__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::UpdateGearLevels(const class FName& bpp__ArmorLevel__pf, const class FName& bpp__CarrierLevel__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.UpdateGearLevels");
		
		ABP_ProfileCharacter_C_UpdateGearLevels_Params params {};
		params.bpp__ArmorLevel__pf = bpp__ArmorLevel__pf;
		params.bpp__CarrierLevel__pf = bpp__CarrierLevel__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3C40
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshPreviewWeapon
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_ProfileCharacter_C::RefreshPreviewWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshPreviewWeapon");
		
		ABP_ProfileCharacter_C_RefreshPreviewWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4ED60
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmetics
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 */
	void ABP_ProfileCharacter_C::RefreshCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmetics");
		
		ABP_ProfileCharacter_C_RefreshCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFFC0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_ProfileCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.ReceiveBeginPlay");
		
		ABP_ProfileCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD4D0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.RebuildCosmetics
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_ProfileCharacter_C::RebuildCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.RebuildCosmetics");
		
		ABP_ProfileCharacter_C_RebuildCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4ECD0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.PreferredFactionChanged
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::PreferredFactionChanged(const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.PreferredFactionChanged");
		
		ABP_ProfileCharacter_C_PreferredFactionChanged_Params params {};
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4EC00
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.OnCharacterSwitchFaction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AProfileCharacter*                           bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewFaction__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnCharacterSwitchFaction(class AProfileCharacter* bpp__Character__pf, const class FName& bpp__NewFaction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.OnCharacterSwitchFaction");
		
		ABP_ProfileCharacter_C_OnCharacterSwitchFaction_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__NewFaction__pf = bpp__NewFaction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4EAD0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.IsLoadingCosmetics
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__bLoadingCosmetics__pf                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::IsLoadingCosmetics(bool* bpp__bLoadingCosmetics__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.IsLoadingCosmetics");
		
		ABP_ProfileCharacter_C_IsLoadingCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bLoadingCosmetics__pf != nullptr)
			*bpp__bLoadingCosmetics__pf = params.bpp__bLoadingCosmetics__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4EA40
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.HidePreviewWeapon
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bNewHide__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::HidePreviewWeapon(bool bpp__bNewHide__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.HidePreviewWeapon");
		
		ABP_ProfileCharacter_C_HidePreviewWeapon_Params params {};
		params.bpp__bNewHide__pf = bpp__bNewHide__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20B80
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.GenderCheck
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOnlineInventorySubsystem*                   bpp__OnlineInventory__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::GenderCheck(class UOnlineInventorySubsystem* bpp__OnlineInventory__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.GenderCheck");
		
		ABP_ProfileCharacter_C_GenderCheck_Params params {};
		params.bpp__OnlineInventory__pf = bpp__OnlineInventory__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4E970
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsRemoved
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           bpp__Slot__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::CosmeticsRemoved(ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsRemoved");
		
		ABP_ProfileCharacter_C_CosmeticsRemoved_Params params {};
		params.bpp__Slot__pf = bpp__Slot__pf;
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4E7C0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsChanged
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSelectedCosmetic                           bpp__Cosmetic__pf__const                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECharacterAppearanceSlot                           bpp__Slot__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bActive__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::CosmeticsChanged(const struct FSelectedCosmetic& bpp__Cosmetic__pf__const, ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf, bool bpp__bActive__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsChanged");
		
		ABP_ProfileCharacter_C_CosmeticsChanged_Params params {};
		params.bpp__Cosmetic__pf__const = bpp__Cosmetic__pf__const;
		params.bpp__Slot__pf = bpp__Slot__pf;
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		params.bpp__bActive__pf = bpp__bActive__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E4E6E0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.ConverNameToGearLevel
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        bpp__AsName__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemGearLevel                                     bpp__AsEnum__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::ConverNameToGearLevel(const class FName& bpp__AsName__pf, EItemGearLevel* bpp__AsEnum__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.ConverNameToGearLevel");
		
		ABP_ProfileCharacter_C_ConverNameToGearLevel_Params params {};
		params.bpp__AsName__pf = bpp__AsName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AsEnum__pf != nullptr)
			*bpp__AsEnum__pf = params.bpp__AsEnum__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5080
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.Apply Items
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_ProfileCharacter_C::Apply_Items()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.Apply Items");
		
		ABP_ProfileCharacter_C_Apply_Items_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4EA0
	 * 		Name   -> Function BP_ProfileCharacter.BP_ProfileCharacter_C.AddPreviewWeapon
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_ProfileCharacter_C::AddPreviewWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileCharacter.BP_ProfileCharacter_C.AddPreviewWeapon");
		
		ABP_ProfileCharacter_C_AddPreviewWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmeticsDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 */
	void ABP_ProfileCharacter_C::RefreshCosmeticsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmeticsDelegate__DelegateSignature");
		
		ABP_ProfileCharacter_C_RefreshCosmeticsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnProfileCharacterChangeFaction__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AProfileCharacter*                           bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewFaction__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnProfileCharacterChangeFaction__DelegateSignature(class AProfileCharacter* bpp__Character__pf, const class FName& bpp__NewFaction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnProfileCharacterChangeFaction__DelegateSignature");
		
		ABP_ProfileCharacter_C_OnProfileCharacterChangeFaction__DelegateSignature_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__NewFaction__pf = bpp__NewFaction__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPreferredFactionChangedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class FName                                        bpp__Faction__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnPreferredFactionChangedDelegate__DelegateSignature(const class FName& bpp__Faction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPreferredFactionChangedDelegate__DelegateSignature");
		
		ABP_ProfileCharacter_C_OnPreferredFactionChangedDelegate__DelegateSignature_Params params {};
		params.bpp__Faction__pf = bpp__Faction__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPlayerGearLevelChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class FName                                        bpp__ArmorLevel__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__CarrierLevel__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnPlayerGearLevelChanged__DelegateSignature(const class FName& bpp__ArmorLevel__pf, const class FName& bpp__CarrierLevel__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPlayerGearLevelChanged__DelegateSignature");
		
		ABP_ProfileCharacter_C_OnPlayerGearLevelChanged__DelegateSignature_Params params {};
		params.bpp__ArmorLevel__pf = bpp__ArmorLevel__pf;
		params.bpp__CarrierLevel__pf = bpp__CarrierLevel__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticRemovedFromSlotDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		ECharacterAppearanceSlot                           bpp__Slot__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnCosmeticRemovedFromSlotDelegate__DelegateSignature(ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticRemovedFromSlotDelegate__DelegateSignature");
		
		ABP_ProfileCharacter_C_OnCosmeticRemovedFromSlotDelegate__DelegateSignature_Params params {};
		params.bpp__Slot__pf = bpp__Slot__pf;
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticEquippedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FSelectedCosmetic                           bpp__Cosmetic__pf                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECharacterAppearanceSlot                           bpp__Slot__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__SubSlot__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bActive__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ProfileCharacter_C::OnCosmeticEquippedDelegate__DelegateSignature(const struct FSelectedCosmetic& bpp__Cosmetic__pf, ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf, bool bpp__bActive__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticEquippedDelegate__DelegateSignature");
		
		ABP_ProfileCharacter_C_OnCosmeticEquippedDelegate__DelegateSignature_Params params {};
		params.bpp__Cosmetic__pf = bpp__Cosmetic__pf;
		params.bpp__Slot__pf = bpp__Slot__pf;
		params.bpp__SubSlot__pf = bpp__SubSlot__pf;
		params.bpp__bActive__pf = bpp__bActive__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProfileCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProfileCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_ProfileCharacter.BP_ProfileCharacter_C");
		return ptr;
	}

}


