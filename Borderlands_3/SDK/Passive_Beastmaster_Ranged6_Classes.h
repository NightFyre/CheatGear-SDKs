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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged6.Passive_Beastmaster_Ranged6_C
	 * Size -> 0x0070 (FullSize[0x0220] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged6_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGameplayTagContainer                               Tags_Badass;                                             // 0x01B8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged6; // 0x01D8(0x0028)
		class UBPEventHub_Beastmaster_C*                           OwnerEventHub;                                           // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               PetEffectDuration;                                       // 0x0208(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnCausedDeath_Ranged3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor);
		void HandleTriggeredAbility(class AActor* DamagedActor);
		void OnActivated();
		void ExecuteUbergraph_Passive_Beastmaster_Ranged6(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
