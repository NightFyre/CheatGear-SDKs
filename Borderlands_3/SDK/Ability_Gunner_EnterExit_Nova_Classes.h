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
	 * BlueprintGeneratedClass Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C
	 * Size -> 0x000D (FullSize[0x0218] - InheritedSize[0x020B])
	 */
	class UAbility_Gunner_EnterExit_Nova_C : public UAbility_AnointParent_Gunner_C
	{
	public:
		unsigned char                                              UnknownData_X2DG[0x5];                                   // 0x020B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear);
		void AnointIronBearEnded();
		void ExecuteUbergraph_Ability_Gunner_EnterExit_Nova(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
