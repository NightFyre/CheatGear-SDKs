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
	 * BlueprintGeneratedClass Init_Drone_RocketDamageCalc.Init_Drone_RocketDamageCalc_C
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UInit_Drone_RocketDamageCalc_C : public UAttributeInitializer
	{
	public:
		struct FDataTableValueHandle                               Scalar;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               CryoScalar;                                              // 0x0048(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
