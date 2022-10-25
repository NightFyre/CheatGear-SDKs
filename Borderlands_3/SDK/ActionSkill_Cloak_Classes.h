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
	 * BlueprintGeneratedClass ActionSkill_Cloak.ActionSkill_Cloak_C
	 * Size -> 0x0008 (FullSize[0x0308] - InheritedSize[0x0300])
	 */
	class UActionSkill_Cloak_C : public UOakActionAbility_Cloak
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) Transient, DuplicateTransient

	public:
		void TryMod4Effect();
		void TryMod1Effect();
		bool GetMaxDurationModifier(EGbxAttributeModifierType* ModifierType, float* Value);
		void OnStartActionAbility();
		void OnStopActionAbility();
		void ExecuteUbergraph_ActionSkill_Cloak(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
