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
	 * BlueprintGeneratedClass Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C
	 * Size -> 0x0000 (FullSize[0x01C1] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_SkillEnd_C : public UAbility_AnointParent_C
	{
	public:
		void AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
