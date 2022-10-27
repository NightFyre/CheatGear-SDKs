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
	 * WidgetBlueprintGeneratedClass WBP_PlayerStatus.WBP_PlayerStatus_C
	 * Size -> 0x0058 (FullSize[0x02B0] - InheritedSize[0x0258])
	 */
	class UWBP_PlayerStatus_C : public UHDUIUWPlayerStatus
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    EffectChangeUIAnim;                                      // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    StanceChangeUIAnim;                                      // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AllStaminaFullUIAnim;                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SprintInputUIAnim;                                       // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              AmmoResupplyFXIcon;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      EffectStack;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MobilityStatusBar_C*                            JumpStaminaBar;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MedicHealFXIcon;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MobilityStatusBar_C*                            SprintStaminaBar;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StanceIndicator_C*                              StanceIndicator;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetPlayerEffectVisibility(class UWidget* EffectWidget, bool bVisible);
		void SetMedicHealingEffectVisibility(bool bVisible);
		void SetAmmoResupplyEffectVisibility(bool bVisible);
		void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerStartSprint();
		void OwnerEndSprint();
		void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
		void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
		void Construct();
		void OwnerActivatePlayerEffect(class UWidget* EffectIndicatorWidget);
		void OwnerDeactivatePlayerEffect(class UWidget* EffectIndicatorWidget);
		void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void ExecuteUbergraph_WBP_PlayerStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
