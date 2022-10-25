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
	 * BlueprintGeneratedClass Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C
	 * Size -> 0x000E (FullSize[0x0128] - InheritedSize[0x011A])
	 */
	class UAbility_ArtifactStat_Tediore_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_4GR2[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient

	public:
		void OnActivated();
		void ExecuteUbergraph_Ability_ArtifactStat_Tediore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
