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
	 * BlueprintGeneratedClass Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInit_IronBearHardpoint_DamageCalc_C : public UAttributeInitializer
	{
	public:
		void GetStrengthThroughBalanceScalar(class AOakCharacter_IronBear* InIronBear, float* res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
