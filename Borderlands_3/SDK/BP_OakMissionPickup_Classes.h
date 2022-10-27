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
	 * BlueprintGeneratedClass BP_OakMissionPickup.BP_OakMissionPickup_C
	 * Size -> 0x0010 (FullSize[0x0740] - InheritedSize[0x0730])
	 */
	class ABP_OakMissionPickup_C : public ABP_OakInventoryItemPickup_C
	{
	public:
		class UOakMissionIconComponent*                            OakMissionIcon;                                          // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionObserverComponent*                           MissionObserver;                                         // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
