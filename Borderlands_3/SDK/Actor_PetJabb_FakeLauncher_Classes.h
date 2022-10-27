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
	 * BlueprintGeneratedClass Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class AActor_PetJabb_FakeLauncher_C : public AActor
	{
	public:
		class UGbxSkeletalMeshComponent*                           GbxSkeletalMesh;                                         // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
