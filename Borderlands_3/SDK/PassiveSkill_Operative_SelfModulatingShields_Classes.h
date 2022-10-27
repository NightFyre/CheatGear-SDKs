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
	 * BlueprintGeneratedClass PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C
	 * Size -> 0x0068 (FullSize[0x0218] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_SelfModulatingShields_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FStatusEffectInstanceReference                      Status_Effect_Modifier;                                  // 0x01B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_SelfModulatingShields; // 0x01D8(0x0028)
		struct FDataTableValueHandle                               RegenDuration;                                           // 0x0200(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void Remove_Status_Effect_Modifier();
		void Add_Status_Effect_Modifier();
		void OnActivated();
		void Self_Modulating_Shields_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
