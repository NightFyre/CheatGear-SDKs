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
	 * BlueprintGeneratedClass Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C
	 * Size -> 0x003E (FullSize[0x0158] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_Vengeance_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_3AQK[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Vengeance; // 0x0130(0x0028)

	public:
		void OnActivated();
		void OnSlamEnd(const struct FGroundSlamEndedDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_Vengeance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
