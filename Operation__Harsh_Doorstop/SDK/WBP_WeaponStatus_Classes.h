#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_WeaponStatus.WBP_WeaponStatus_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UWBP_WeaponStatus_C : public UHDUIUWWeaponStatus
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MagCounterChangeUIAnim;                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AimStyleInputUIAnim;                                     // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FireModeInputUIAnim;                                     // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          AimStyleText;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FireModeText;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MagCounterText;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Separator;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ShouldDisplayTotalAmmo(bool* bDisplayTotalAmmo);
		void UpdateElementVisibility();
		void PreConstruct(bool IsDesignTime);
		void BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap);
		void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
		void BPOwnerWeaponAmmoUpdated(const struct FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
		void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void ExecuteUbergraph_WBP_WeaponStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
