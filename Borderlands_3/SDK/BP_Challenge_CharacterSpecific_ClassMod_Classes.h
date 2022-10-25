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
	 * BlueprintGeneratedClass BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C
	 * Size -> 0x0017 (FullSize[0x0280] - InheritedSize[0x0269])
	 */
	class UBP_Challenge_CharacterSpecific_ClassMod_C : public UBP_Challenge_CharacterSpecific_C
	{
	public:
		unsigned char                                              UnknownData_O71A[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) Transient, DuplicateTransient
		class AOakCharacter*                                       PlayerCharacter;                                         // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckClassMod(class AActor* EquippedActor, class UInventorySlotData* SlotData);
		void SetBinds(class AOakCharacter* Character, bool* BindSet);
		void ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
