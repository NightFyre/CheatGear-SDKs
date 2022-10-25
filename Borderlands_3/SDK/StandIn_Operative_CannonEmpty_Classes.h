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
	 * BlueprintGeneratedClass StandIn_Operative_CannonEmpty.StandIn_Operative_CannonEmpty_C
	 * Size -> 0x0020 (FullSize[0x0598] - InheritedSize[0x0578])
	 */
	class AStandIn_Operative_CannonEmpty_C : public AStandInAuxiliaryActor
	{
	public:
		unsigned char                                              UnknownData_1EMM[0x8];                                   // 0x0578(0x0008) Fix Super Size
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Cannon;                                                  // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABPChar_StandIn_Operative_SkillScreen_C*             AssociatedStandIn;                                       // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
