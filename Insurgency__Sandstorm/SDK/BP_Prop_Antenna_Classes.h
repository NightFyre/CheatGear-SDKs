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
	 * DynamicClass BP_Prop_Antenna.BP_Prop_Antenna_C
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class ABP_Prop_Antenna_C : public ABP_Prop_RandomStream_Base_C
	{
	public:
		int32_t                                                    Antenna_Mesh;                                            // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Random_Antenna;                                          // 0x0444(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZR6X[0xB];                                   // 0x0445(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
