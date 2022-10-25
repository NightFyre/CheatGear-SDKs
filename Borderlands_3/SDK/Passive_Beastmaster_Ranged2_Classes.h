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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C
	 * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged2_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		bool                                                       ReloadSpeedBonus;                                        // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFDQ[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged2; // 0x01C0(0x0028)

	public:
		void OnActivated();
		void CausedDeath_Ranged2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void WeaponReloadEnded_Ranged2(class AWeapon* EventWeapon, bool bCompleted);
		void ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor);
		void ExecuteUbergraph_Passive_Beastmaster_Ranged2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
