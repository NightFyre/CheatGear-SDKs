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
	 * BlueprintGeneratedClass Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C
	 * Size -> 0x001B (FullSize[0x0228] - InheritedSize[0x020D])
	 */
	class UAbility_Siren_Grasp_ConstantNova_C : public UAbility_AnointParent_Siren_C
	{
	public:
		unsigned char                                              UnknownData_2F3P[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		class UClass*                                              ActionSkillElement;                                      // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        NovaTimer;                                               // 0x0220(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void TriggerNova();
		void AnointRemoveEffect();
		void StartTriggeringNovas();
		void AnointGraspEnded(bool Killed);
		void ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
