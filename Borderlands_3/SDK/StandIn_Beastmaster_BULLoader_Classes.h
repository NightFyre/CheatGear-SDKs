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
	 * BlueprintGeneratedClass StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C
	 * Size -> 0x0010 (FullSize[0x0590] - InheritedSize[0x0580])
	 */
	class AStandIn_Beastmaster_BULLoader_C : public AStandIn_BeastMaster_PetBase_C
	{
	public:
		class UGbxSkeletalMeshComponent*                           GbxSkeletalMesh_ColorizationTarget;                      // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Mesh;                                                    // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
