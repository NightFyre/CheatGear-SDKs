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
	 * DynamicClass BP_Prop_VendingMachine_01a.BP_Prop_VendingMachine_01a_C
	 * Size -> 0x0028 (FullSize[0x0510] - InheritedSize[0x04E8])
	 */
	class ABP_Prop_VendingMachine_01a_C : public ABP_Prop_VendingMachine_Parent_C
	{
	public:
		class UBreakableComponent*                                 Bottle04;                                                // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Bottle03;                                                // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Bottle02;                                                // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Bottle01;                                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IT4[0x8];                                   // 0x0508(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
