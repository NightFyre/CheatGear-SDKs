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
	 * BlueprintGeneratedClass Init_EridiumCostConversion.Init_EridiumCostConversion_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInit_EridiumCostConversion_C : public UAttributeInitializer
	{
	public:
		void MoneyMultiplier(class AActor* GearItem, float GearTypeMult, float* GearMoneyMult);
		void GearTypeMultiplier(class AActor* GearItem, float* GearTypeMult);
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
