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
	 * BlueprintGeneratedClass Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C
	 * Size -> 0x0036 (FullSize[0x0150] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_PhoenixTears_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_E775[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElDragonJr; // 0x0128(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void DownStateStopped();
		void ExecuteUbergraph_Ability_Artifact_PhoenixTears(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
