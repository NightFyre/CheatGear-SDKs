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
	 * BlueprintGeneratedClass StandIn_Operative_Barrier.StandIn_Operative_Barrier_C
	 * Size -> 0x0010 (FullSize[0x0588] - InheritedSize[0x0578])
	 */
	class AStandIn_Operative_Barrier_C : public AStandInAuxiliaryActor
	{
	public:
		unsigned char                                              UnknownData_U21B[0x8];                                   // 0x0578(0x0008) Fix Super Size
		class UGbxSkeletalMeshComponent*                           Barrier;                                                 // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
