#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_Prop_ElectricSignBase.BP_Prop_ElectricSignBase_C
	 * Size -> 0x0018 (FullSize[0x0450] - InheritedSize[0x0438])
	 */
	class ABP_Prop_ElectricSignBase_C : public APropBreakable
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShopLight;                                               // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQM5[0xF];                                   // 0x0441(0x000F) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void OnReset();
		void BlueprintOnBreak();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
