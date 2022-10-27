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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C
	 * Size -> 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged_Capstone_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Beastmaster_Ranged_Capstone; // 0x01B8(0x0028)

	public:
		void OnActivated();
		void ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
