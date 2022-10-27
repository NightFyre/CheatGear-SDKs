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
	 * BlueprintGeneratedClass Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C
	 * Size -> 0x000F (FullSize[0x01D0] - InheritedSize[0x01C1])
	 */
	class UAbility_All_SkillEnd_CyberSpike_C : public UAbility_AnointParent_SkillEnd_C
	{
	public:
		unsigned char                                              UnknownData_FNGJ[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void SpawnSkillProjectile();
		void ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
