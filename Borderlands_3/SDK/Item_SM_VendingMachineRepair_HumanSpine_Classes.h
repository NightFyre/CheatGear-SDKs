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
	 * BlueprintGeneratedClass Item_SM_VendingMachineRepair_HumanSpine.Item_SM_VendingMachineRepair_HumanSpine_C
	 * Size -> 0x0008 (FullSize[0x05C0] - InheritedSize[0x05B8])
	 */
	class AItem_SM_VendingMachineRepair_HumanSpine_C : public ABP_OakMissionItem_C
	{
	public:
		class UStaticMeshComponent*                                SM_HumanSpine;                                           // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
