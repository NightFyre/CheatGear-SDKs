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
	 * BlueprintGeneratedClass Init_Operative_Violent_Momentum_WeaponDamageCalc.Init_Operative_Violent_Momentum_WeaponDamageCalc_C
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UInit_Operative_Violent_Momentum_WeaponDamageCalc_C : public UInit_Operative_KillSkill_Parent_C
	{
	public:
		struct FRuntimeFloatCurve                                  Scalar;                                                  // 0x0030(0x0078) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
