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
	 * AIActionBlueprintGeneratedClass AIAction_PetShared_Commands.AIAction_PetShared_Commands_C
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UAIAction_PetShared_Commands_C : public UAIAction_Priority
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient

	public:
		void BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void BndEvt__Mod1_TauntOverride_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void CleanupFadeAwayTaunt(class AActor* Actor);
		void BndEvt__PlayGbxAction_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
		void ExecuteUbergraph_AIAction_PetShared_Commands(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
