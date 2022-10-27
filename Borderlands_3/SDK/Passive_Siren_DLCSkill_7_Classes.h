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
	 * BlueprintGeneratedClass Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C
	 * Size -> 0x0048 (FullSize[0x01F8] - InheritedSize[0x01B0])
	 */
	class UPassive_Siren_DLCSkill_6_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_7; // 0x01B8(0x0028)
		struct FDataTableValueHandle                               Scalar;                                                  // 0x01E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void DLCSkill6_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_Passive_Siren_DLCSkill_7(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
