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
	 * BlueprintGeneratedClass Passive_Siren_Infusion.Passive_Siren_Infusion_C
	 * Size -> 0x0038 (FullSize[0x0220] - InheritedSize[0x01E8])
	 */
	class UPassive_Siren_Infusion_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Passive_Siren_Gentrification; // 0x01F0(0x0028)
		class UWeaponShotModifier*                                 ShotModifier;                                            // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetShotModifier(class UWeaponShotModifier** res);
		void AddShotModifier();
		void RemoveAllShotModifiers();
		void OnAttunedElementChanged();
		void ExecuteUbergraph_Passive_Siren_Infusion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
