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
	 * BlueprintGeneratedClass Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C
	 * Size -> 0x0050 (FullSize[0x0200] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Bond2_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		bool                                                       bWasPetKill;                                             // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RU4Y[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameResourcePoolReference                          NewResourcePool;                                         // 0x01C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond2; // 0x01D8(0x0028)

	public:
		void TryRefillAttackCommandPool();
		bool RandomChanceByGrade();
		void OnKilledEnemy_Bond2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void OnActivated();
		void DoCooldownReduction_Bond2();
		void ExecuteUbergraph_Passive_Beastmaster_Bond2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
