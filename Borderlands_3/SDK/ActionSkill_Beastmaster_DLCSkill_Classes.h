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
	 * BlueprintGeneratedClass ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C
	 * Size -> 0x0032 (FullSize[0x029A] - InheritedSize[0x0268])
	 */
	class UActionSkill_Beastmaster_DLCSkill_C : public UOakActionAbility_Beastmaster
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_Beastmaster_DLCSkill; // 0x0270(0x0028)
		bool                                                       bTrapEndedEarly;                                         // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTrailFailedToSpawn;                                     // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TrapFailedToSpawn(bool* res);
		void EndTrapEarly(bool* res);
		float GetCooldownRestartPercent();
		void OnActivated();
		void BeastmasterDLCSkill_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnStartActionAbility();
		void ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
