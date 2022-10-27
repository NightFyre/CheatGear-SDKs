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
	 * DynamicClass BP_ProfileCharacter.BP_ProfileCharacter_C
	 * Size -> 0x0378 (FullSize[0x06C0] - InheritedSize[0x0348])
	 */
	class ABP_ProfileCharacter_C : public AProfileCharacter
	{
	public:
		class UPlayerInventoryComponent*                           PlayerInventory;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPostProcessComponent*                               Post_Process;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02O1[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Target_Transform;                                        // 0x0360(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ECharacterAppearanceSlot                                   Current_Slot;                                            // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWOY[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Current_Sub_Slot;                                        // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterGender                                           Gender;                                                  // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUZ0[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentArmorLevel;                                       // 0x039C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentCarrierLevel;                                     // 0x03A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS9V[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EItemGearLevel, class UClass*>                        SecurityCarrierClasses;                                  // 0x03B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemGearLevel, class UClass*>                        SecurityArmorClasses;                                    // 0x0400(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemGearLevel, class UClass*>                        InsurgentCarrierClasses;                                 // 0x0450(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemGearLevel, class UClass*>                        InsurgentArmorClasses;                                   // 0x04A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable;                                      // 0x04F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TOZ[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Temp_softclass_Variable[0x28];                           // 0x04F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Temp_softclass_Variable_2[0x28];                         // 0x0520(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0548(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AINSBasePlayerController*                            K2Node_DynamicCast_AsINSBase_Player_Controller;          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0560(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KSR[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_CustomEvent_CosmeticAssets[0x10];                 // 0x0568(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class AMenuPlayerController*                               K2Node_DynamicCast_AsMenu_Player_Controller;             // 0x0578(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x0580(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_358E[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSelectedCosmetic                                   K2Node_CustomEvent_Cosmetic;                             // 0x0588(0x0050) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		ECharacterAppearanceSlot                                   K2Node_CustomEvent_Slot_2;                               // 0x05D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGRW[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_SubSlot_2;                            // 0x05DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_bActive;                              // 0x05E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XNS[0x3];                                   // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_CustomEvent_Faction;                              // 0x05E4(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterAppearanceSlot                                   K2Node_CustomEvent_Slot;                                 // 0x05EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2CB[0x3];                                   // 0x05ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_SubSlot;                              // 0x05F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x05F4(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_3;                  // 0x0604(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_4;                  // 0x0614(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_5;                  // 0x0624(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_6;                  // 0x0634(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_bNewHide;                             // 0x0644(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VA55[0x3];                                   // 0x0645(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_Select_Default[0x28];                             // 0x0648(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class AProfileCharacter*                                   K2Node_CustomEvent_Character;                            // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                K2Node_CustomEvent_NewFaction;                           // 0x0678(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBasicLoadoutItem                                   CallFunc_Map_Find_Value;                                 // 0x0680(0x0038) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQH7[0x8];                                   // 0x06B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateGearLevels(const class FName& bpp__ArmorLevel__pf, const class FName& bpp__CarrierLevel__pf);
		void RefreshPreviewWeapon();
		void RefreshCosmetics();
		void ReceiveBeginPlay();
		void RebuildCosmetics();
		void PreferredFactionChanged(const class FName& bpp__Faction__pf);
		void OnCharacterSwitchFaction(class AProfileCharacter* bpp__Character__pf, const class FName& bpp__NewFaction__pf);
		void IsLoadingCosmetics(bool* bpp__bLoadingCosmetics__pf);
		void HidePreviewWeapon(bool bpp__bNewHide__pf);
		void GenderCheck(class UOnlineInventorySubsystem* bpp__OnlineInventory__pf);
		void CosmeticsRemoved(ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf);
		void CosmeticsChanged(const struct FSelectedCosmetic& bpp__Cosmetic__pf__const, ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf, bool bpp__bActive__pf);
		void ConverNameToGearLevel(const class FName& bpp__AsName__pf, EItemGearLevel* bpp__AsEnum__pf);
		void Apply_Items();
		void AddPreviewWeapon();
		void RefreshCosmeticsDelegate__DelegateSignature();
		void OnProfileCharacterChangeFaction__DelegateSignature(class AProfileCharacter* bpp__Character__pf, const class FName& bpp__NewFaction__pf);
		void OnPreferredFactionChangedDelegate__DelegateSignature(const class FName& bpp__Faction__pf);
		void OnPlayerGearLevelChanged__DelegateSignature(const class FName& bpp__ArmorLevel__pf, const class FName& bpp__CarrierLevel__pf);
		void OnCosmeticRemovedFromSlotDelegate__DelegateSignature(ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf);
		void OnCosmeticEquippedDelegate__DelegateSignature(const struct FSelectedCosmetic& bpp__Cosmetic__pf, ECharacterAppearanceSlot bpp__Slot__pf, int32_t bpp__SubSlot__pf, bool bpp__bActive__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
