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
	 * BlueprintGeneratedClass Init_Beastmaster_DLCSkill_9_BonusDamage.Init_Beastmaster_DLCSkill_9_BonusDamage_C
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UInit_Beastmaster_DLCSkill_9_BonusDamage_C : public UInit_Players_PassiveAbility_Parent_C
	{
	public:
		struct FDataTableValueHandle                               Scalar;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
