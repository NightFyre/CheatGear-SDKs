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
	 * DynamicClass BP_Prop_GasPump.BP_Prop_GasPump_C
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class ABP_Prop_GasPump_C : public APropVehicle
	{
	public:
		int32_t                                                    Mesh;                                                    // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FERA[0xC];                                   // 0x02F4(0x000C) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
