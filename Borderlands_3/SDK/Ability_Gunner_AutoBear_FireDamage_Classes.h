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
	 * BlueprintGeneratedClass Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C
	 * Size -> 0x000D (FullSize[0x0218] - InheritedSize[0x020B])
	 */
	class UAbility_Gunner_AutoBear_FireDamage_C : public UAbility_AnointParent_Gunner_C
	{
	public:
		unsigned char                                              UnknownData_W5Y5[0x5];                                   // 0x020B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient

	public:
		void AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget);
		void ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
