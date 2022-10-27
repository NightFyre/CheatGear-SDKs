#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BPWeap_MAL_BaseWeapon.BPWeap_MAL_BaseWeapon_C
	 * Size -> 0x007C (FullSize[0x0A48] - InheritedSize[0x09CC])
	 */
	class ABPWeap_MAL_BaseWeapon_C : public ABPWeap_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_R99W[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) Transient, DuplicateTransient
		float                                                      ElementalInterpolationTimeline_ElementalAlpha_491B51944C4C5F786231C2B7EA1D51DB; // 0x09D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ElementalInterpolationTimeline__Direction_491B51944C4C5F786231C2B7EA1D51DB; // 0x09DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_29MP[0x3];                                   // 0x09DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ElementalInterpolationTimeline;                          // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponChargeComponent*                              ChargeComponent_Mode_01;                                 // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponChargeComponent*                              ChargeComponent_Mode_02;                                 // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Em_ReloadCurve;                                          // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Em_ModeSwitchCurve;                                      // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PrimaryElementalBaseColor;                               // 0x0A08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PrimaryElementalHighlightColor;                          // 0x0A18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SecondaryElementalBaseColor;                             // 0x0A28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SecondaryElementalHighlightColor;                        // 0x0A38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetChargePercent(float* ChargePercent);
		void UserConstructionScript();
		void ElementalInterpolationTimeline__FinishedFunc();
		void ElementalInterpolationTimeline__UpdateFunc();
		void SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
		void OnSwitchToPrimary();
		void OnSwitchToSecondary();
		void Initialize_Elemental_Emissive();
		void SetPrimary();
		void SetSecondary();
		void K2_OnWeaponSkinApplied();
		void ReceiveBeginPlay();
		void Notify_ReloadStarted(bool bAutoReload);
		void Weapon_NotifyEquipped();
		void Event_ModeSwitched();
		void SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
		void PutDown_Event(class AWeapon* EventWeapon);
		void WeaponAttached();
		void ExecuteUbergraph_BPWeap_MAL_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
