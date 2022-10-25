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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C
	 * Size -> 0x0050 (FullSize[0x0200] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged11_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGameResourcePoolReference                          NewResourcePool;                                         // 0x01B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FRandomStream                                       Stream_RandomChance;                                     // 0x01D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged11; // 0x01D8(0x0028)

	public:
		void NewFunction_1();
		EGbxAbilityState CalculateAbilityState();
		bool RandomChanceByGrade();
		void OnResumed();
		void OnCausedDamage_Ranged11(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void OnActivated();
		void ExecuteUbergraph_Passive_Beastmaster_Ranged11(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
