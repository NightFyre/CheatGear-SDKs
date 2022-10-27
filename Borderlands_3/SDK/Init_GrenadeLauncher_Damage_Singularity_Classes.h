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
	 * BlueprintGeneratedClass Init_GrenadeLauncher_Damage_Singularity.Init_GrenadeLauncher_Damage_Singularity_C
	 * Size -> 0x0004 (FullSize[0x0034] - InheritedSize[0x0030])
	 */
	class UInit_GrenadeLauncher_Damage_Singularity_C : public UInit_IronBearHardpoint_DamageCalc_C
	{
	public:
		float                                                      Test;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
