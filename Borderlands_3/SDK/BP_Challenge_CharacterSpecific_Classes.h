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
	 * BlueprintGeneratedClass BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C
	 * Size -> 0x0009 (FullSize[0x0269] - InheritedSize[0x0260])
	 */
	class UBP_Challenge_CharacterSpecific_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		Enum_PlayerCharacter                                       PlayerChar;                                              // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetBinds(class AOakCharacter* Character, bool* BindSet);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void ExecuteUbergraph_BP_Challenge_CharacterSpecific(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
