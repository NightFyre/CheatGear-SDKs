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
	 * BlueprintGeneratedClass StandIn_Beastmaster_RakkAttack.StandIn_Beastmaster_RakkAttack_C
	 * Size -> 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
	 */
	class AStandIn_Beastmaster_RakkAttack_C : public AStandInAuxiliaryActor
	{
	public:
		unsigned char                                              UnknownData_0JNT[0x8];                                   // 0x0578(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_StandIn_Beastmaster_RakkAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
