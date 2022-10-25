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
	 * BlueprintGeneratedClass Init_Operative_NotOrdinaryOrdnance_CooldownCalc.Init_Operative_NotOrdinaryOrdnance_CooldownCalc_C
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UInit_Operative_NotOrdinaryOrdnance_CooldownCalc_C : public UInit_Operative_KillSkill_Parent_C
	{
	public:
		struct FDataTableValueHandle                               CooldownTime;                                            // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               ActiveSkillTime;                                         // 0x0048(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
