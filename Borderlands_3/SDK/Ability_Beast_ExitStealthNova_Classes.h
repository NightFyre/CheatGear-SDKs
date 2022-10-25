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
	 * BlueprintGeneratedClass Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C
	 * Size -> 0x000E (FullSize[0x0218] - InheritedSize[0x020A])
	 */
	class UAbility_Beast_ExitStealthNova_C : public UAbility_AnointParent_Beastmaster_C
	{
	public:
		unsigned char                                              UnknownData_FIHZ[0x6];                                   // 0x020A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void ExitStealth();
		void ExecuteUbergraph_Ability_Beast_ExitStealthNova(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
