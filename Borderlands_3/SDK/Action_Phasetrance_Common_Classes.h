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
	 * BlueprintGeneratedClass Action_Phasetrance_Common.Action_Phasetrance_Common_C
	 * Size -> 0x0009 (FullSize[0x02B9] - InheritedSize[0x02B0])
	 */
	class UAction_Phasetrance_Common_C : public UOakAction_Anim_ActionAbility_PhaseTrance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) Transient, DuplicateTransient
		EPhasetranceAttackAction                                   AttackAction;                                            // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FPhaseTranceActivationComboData AssembleActivationCombo();
		void PlayPhaseTranceHandEffects();
		void TriggerActionSkillReactDialogue();
		void TriggerActionSkillUseDialogue();
		void Cleanup();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_TryEffectComponents();
		void OnServerBegin(class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void AN_TryImpulse();
		void AN_TryNova();
		void AN_Remove3pGhostArms();
		void AN_Remove1pGhostArms();
		void ExecuteUbergraph_Action_Phasetrance_Common(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
