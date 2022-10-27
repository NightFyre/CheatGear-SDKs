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
	 * BlueprintGeneratedClass Init_SR_BipodMode_SpeedScale.Init_SR_BipodMode_SpeedScale_C
	 * Size -> 0x0004 (FullSize[0x0034] - InheritedSize[0x0030])
	 */
	class UInit_SR_BipodMode_SpeedScale_C : public UAttributeInitializer
	{
	public:
		float                                                      FootspeedScale;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
