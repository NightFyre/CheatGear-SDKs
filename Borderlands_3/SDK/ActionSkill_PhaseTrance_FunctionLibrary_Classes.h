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
	 * BlueprintGeneratedClass ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActionSkill_PhaseTrance_FunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CanPerformPassiveGhostArmAction(class AOakCharacter_Player* Player, class UObject* __WorldContext, bool* bRes);
		void STATIC_TriggerPhaseTrancePassives(class AOakCharacter_Player* Player, class UObject* __WorldContext);
		void STATIC_IsImmuneToPhaseLock(class AActor* GraspTarget, class UObject* __WorldContext, bool* bRes);
		void STATIC_CalculatePhaseTranceDamage(class AOakCharacter_Player* ContextSource, const struct FPhaseTranceActivationComboData& ComboData, class UObject* __WorldContext, float* res);
		void STATIC_GetSirenStatusEffectInfo(class UObject* __WorldContext, struct FCauseDamageStatusEffectOverrides* StatusEffectOverride);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
