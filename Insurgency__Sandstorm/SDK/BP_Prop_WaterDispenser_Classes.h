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
	 * DynamicClass BP_Prop_WaterDispenser.BP_Prop_WaterDispenser_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABP_Prop_WaterDispenser_C : public AStaticMeshActor
	{
	public:
		class UBreakableComponent*                                 WaterBottle;                                             // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
