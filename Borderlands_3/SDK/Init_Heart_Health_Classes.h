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
	 * BlueprintGeneratedClass Init_Heart_Health.Init_Heart_Health_C
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UInit_Heart_Health_C : public UAttributeInitializer
	{
	public:
		struct FDataTableValueHandle                               HealthMultiplier_Ghost;                                  // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
