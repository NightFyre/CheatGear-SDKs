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
	 * BlueprintGeneratedClass Init_Siren_CM_Raid1.Init_Siren_CM_Raid1_C
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UInit_Siren_CM_Raid1_C : public UAttributeInitializer
	{
	public:
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0030(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableValueHandle                               Scalar;                                                  // 0x00A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
