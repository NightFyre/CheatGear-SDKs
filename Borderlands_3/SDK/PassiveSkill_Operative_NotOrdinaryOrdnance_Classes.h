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
	 * BlueprintGeneratedClass PassiveSkill_Operative_NotOrdinaryOrdnance.PassiveSkill_Operative_NotOrdinaryOrdnance_C
	 * Size -> 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
	 */
	class UPassiveSkill_Operative_NotOrdinaryOrdnance_C : public UPassiveSkill_Operative_KillSkillParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               DamageCalc;                                              // 0x01E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Radius;                                                  // 0x0200(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x0218(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               ActiveSkillTime;                                         // 0x0230(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy);
		void ExecuteUbergraph_PassiveSkill_Operative_NotOrdinaryOrdnance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
