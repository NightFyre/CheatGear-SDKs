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
	 * DynamicClass BP_Prop_CeilingFan.BP_Prop_CeilingFan_C
	 * Size -> 0x0010 (FullSize[0x0480] - InheritedSize[0x0470])
	 */
	class ABP_Prop_CeilingFan_C : public APropFan
	{
	public:
		int32_t                                                    FanMesh;                                                 // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7D2[0xC];                                   // 0x0474(0x000C) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
