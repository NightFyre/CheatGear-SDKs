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
	 * BlueprintGeneratedClass BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C
	 * Size -> 0x0024 (FullSize[0x050C] - InheritedSize[0x04E8])
	 */
	class ABP_ShieldBoosterPickup_Clover_Luck_C : public AShieldChargeInventoryPickup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E8(0x0008) Transient, DuplicateTransient
		float                                                      Ammo_Value;                                              // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shield_Value;                                            // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter_Player*                                PickerUpper;                                             // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStatusEffectData*                                   StatusEffect;                                            // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void PickedUp(class AOakCharacter* PickupInstigator);
		void ExecuteUbergraph_BP_ShieldBoosterPickup_Clover_Luck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
