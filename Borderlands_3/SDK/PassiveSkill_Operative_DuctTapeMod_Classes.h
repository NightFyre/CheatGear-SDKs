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
	 * BlueprintGeneratedClass PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C
	 * Size -> 0x0078 (FullSize[0x0228] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_DuctTapeMod_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_DuctTapeMod; // 0x01B8(0x0028)
		struct FDataTableValueHandle                               Chance;                                                  // 0x01E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AGrenade*                                            SpawnedGrenade;                                          // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Operative_DuctTapeMod; // 0x0200(0x0028)

	public:
		void GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result);
		void GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result);
		void OnActivated();
		void DuctTape_OnWeaponReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
		void DuctTape_OnWeaponUsed(class AWeapon* EventWeapon);
		void ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
