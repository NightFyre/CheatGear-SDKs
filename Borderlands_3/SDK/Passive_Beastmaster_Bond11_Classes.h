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
	 * BlueprintGeneratedClass Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C
	 * Size -> 0x005C (FullSize[0x020C] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Bond11_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond11; // 0x01B8(0x0028)
		struct FGameplayTagContainer                               BossTags;                                                // 0x01E0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ClampedDamage;                                           // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BossMaxHealthClamp;                                      // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyMaxHealthClamp;                                     // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DoReflectedDamage();
		void OnActivated();
		void RegisterDelegate(class AOakCharacter* Pet);
		void PetSpawned_Bond11(class AOakCharacter* Pet);
		void PetReleased_Bond11(class AOakCharacter* Pet);
		void OnTakeAnyDamage_Pet_Bond11(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void UnregisterDelegate(class AOakCharacter* Pet);
		void ExecuteUbergraph_Passive_Beastmaster_Bond11(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
