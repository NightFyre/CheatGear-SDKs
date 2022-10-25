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
	 * DynamicClass BP_Prop_Vehicle_Moped.BP_Prop_Vehicle_Moped_C
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class ABP_Prop_Vehicle_Moped_C : public ABP_Prop_Vehicle_Base_C
	{
	public:
		int32_t                                                    Mesh;                                                    // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DEJ[0xC];                                   // 0x0384(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
