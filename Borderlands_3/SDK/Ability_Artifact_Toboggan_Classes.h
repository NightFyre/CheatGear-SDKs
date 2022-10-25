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
	 * BlueprintGeneratedClass Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C
	 * Size -> 0x006E (FullSize[0x0188] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_Toboggan_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_UXX7[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElDragonJr; // 0x0128(0x0028)
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Artifact_Toboggan; // 0x0158(0x0028)
		struct FTimerHandle                                        BubbleTimerHandle;                                       // 0x0180(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void OnDeactivated();
		void WeaponFired(class AWeapon* EventWeapon);
		void StartedSliding();
		void BubbleExpired();
		void ExecuteUbergraph_Ability_Artifact_Toboggan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
