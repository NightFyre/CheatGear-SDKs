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
	 * DynamicClass BP_Prop_Shelf_Base.BP_Prop_Shelf_Base_C
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ABP_Prop_Shelf_Base_C : public AStaticMeshActor
	{
	public:
		struct FRandomStream                                       RandomStream;                                            // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Random_Seed;                                             // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G12R[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
