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
	 * BlueprintGeneratedClass Passive_Siren_Transcend.Passive_Siren_Transcend_C
	 * Size -> 0x0008 (FullSize[0x01E8] - InheritedSize[0x01E0])
	 */
	class UPassive_Siren_Transcend_C : public UPassiveSkill_Siren_ActionAbilityTriggered_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient

	public:
		void SirenActionAbilityTrigger();
		void ExecuteUbergraph_Passive_Siren_Transcend(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
