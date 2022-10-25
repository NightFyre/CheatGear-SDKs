#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.UpdateGearLevels
	 */
	struct ABP_ProfileCharacter_C_UpdateGearLevels_Params
	{
	public:
		class FName                                                bpp__ArmorLevel__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__CarrierLevel__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshPreviewWeapon
	 */
	struct ABP_ProfileCharacter_C_RefreshPreviewWeapon_Params
	{	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmetics
	 */
	struct ABP_ProfileCharacter_C_RefreshCosmetics_Params
	{	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_ProfileCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.RebuildCosmetics
	 */
	struct ABP_ProfileCharacter_C_RebuildCosmetics_Params
	{	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.PreferredFactionChanged
	 */
	struct ABP_ProfileCharacter_C_PreferredFactionChanged_Params
	{
	public:
		class FName                                                bpp__Faction__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.OnCharacterSwitchFaction
	 */
	struct ABP_ProfileCharacter_C_OnCharacterSwitchFaction_Params
	{
	public:
		class AProfileCharacter*                                   bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewFaction__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.IsLoadingCosmetics
	 */
	struct ABP_ProfileCharacter_C_IsLoadingCosmetics_Params
	{
	public:
		bool                                                       bpp__bLoadingCosmetics__pf;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.HidePreviewWeapon
	 */
	struct ABP_ProfileCharacter_C_HidePreviewWeapon_Params
	{
	public:
		bool                                                       bpp__bNewHide__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.GenderCheck
	 */
	struct ABP_ProfileCharacter_C_GenderCheck_Params
	{
	public:
		class UOnlineInventorySubsystem*                           bpp__OnlineInventory__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsRemoved
	 */
	struct ABP_ProfileCharacter_C_CosmeticsRemoved_Params
	{
	public:
		ECharacterAppearanceSlot                                   bpp__Slot__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DS62[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bpp__SubSlot__pf;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.CosmeticsChanged
	 */
	struct ABP_ProfileCharacter_C_CosmeticsChanged_Params
	{
	public:
		struct FSelectedCosmetic                                   bpp__Cosmetic__pf__const;                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ECharacterAppearanceSlot                                   bpp__Slot__pf;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_61V9[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bpp__SubSlot__pf;                                        // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bActive__pf;                                        // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.ConverNameToGearLevel
	 */
	struct ABP_ProfileCharacter_C_ConverNameToGearLevel_Params
	{
	public:
		class FName                                                bpp__AsName__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemGearLevel                                             bpp__AsEnum__pf;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.Apply Items
	 */
	struct ABP_ProfileCharacter_C_Apply_Items_Params
	{	};

	/**
	 * Function BP_ProfileCharacter.BP_ProfileCharacter_C.AddPreviewWeapon
	 */
	struct ABP_ProfileCharacter_C_AddPreviewWeapon_Params
	{	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.RefreshCosmeticsDelegate__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_RefreshCosmeticsDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnProfileCharacterChangeFaction__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_OnProfileCharacterChangeFaction__DelegateSignature_Params
	{
	public:
		class AProfileCharacter*                                   bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewFaction__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPreferredFactionChangedDelegate__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_OnPreferredFactionChangedDelegate__DelegateSignature_Params
	{
	public:
		class FName                                                bpp__Faction__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnPlayerGearLevelChanged__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_OnPlayerGearLevelChanged__DelegateSignature_Params
	{
	public:
		class FName                                                bpp__ArmorLevel__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__CarrierLevel__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticRemovedFromSlotDelegate__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_OnCosmeticRemovedFromSlotDelegate__DelegateSignature_Params
	{
	public:
		ECharacterAppearanceSlot                                   bpp__Slot__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H9AC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bpp__SubSlot__pf;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_ProfileCharacter.BP_ProfileCharacter_C.OnCosmeticEquippedDelegate__DelegateSignature
	 */
	struct ABP_ProfileCharacter_C_OnCosmeticEquippedDelegate__DelegateSignature_Params
	{
	public:
		struct FSelectedCosmetic                                   bpp__Cosmetic__pf;                                       // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ECharacterAppearanceSlot                                   bpp__Slot__pf;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R5VD[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bpp__SubSlot__pf;                                        // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bActive__pf;                                        // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
