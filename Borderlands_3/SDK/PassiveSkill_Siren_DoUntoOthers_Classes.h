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
	 * BlueprintGeneratedClass PassiveSkill_Siren_DoUntoOthers.PassiveSkill_Siren_DoUntoOthers_C
	 * Size -> 0x0070 (FullSize[0x0258] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_DoUntoOthers_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		float                                                      Cooldown_Time;                                           // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OUAV[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Homing_Target;                                           // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Damage_Per_Rank;                                         // 0x0200(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_DoUntoOthers; // 0x0218(0x0028)
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x0240(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void IsActionSkillActionActive(bool* res);
		EGbxAbilityState CalculateAbilityState();
		void OnActivated();
		void Do_Harm_On_Took_Damage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_Siren_DoUntoOthers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
