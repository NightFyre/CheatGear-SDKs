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
	 * BlueprintGeneratedClass A_PetSpiderant_Pound.A_PetSpiderant_Pound_C
	 * Size -> 0x0009 (FullSize[0x0231] - InheritedSize[0x0228])
	 */
	class UA_PetSpiderant_Pound_C : public UA_Pet_AttackCommand_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) Transient, DuplicateTransient
		EOakActionAbilityPetEvolutionType                          NewPetEvolutionType;                                     // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Melee();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_A_PetSpiderant_Pound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
