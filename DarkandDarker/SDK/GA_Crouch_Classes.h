#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass GA_Crouch.GA_Crouch_C
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UGA_Crouch_C : public UDCGameplayAbilityBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventReceived_F8111BF74E13C0F203A0A2A357F51B3A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB();
		void OnChange_1B5403AA43F34E6E271364B87A6DC3AC(EMovementMode NewMovementMode);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Crouch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
