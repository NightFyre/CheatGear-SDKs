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
	 * BlueprintGeneratedClass BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C
	 * Size -> 0x0010 (FullSize[0x23B8] - InheritedSize[0x23A8])
	 */
	class ABPChar_StandIn_Operative_SkillScreen_C : public ABPChar_StandIn_Operative_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x23A8(0x0008) Transient, DuplicateTransient
		class UGbxSkeletalMeshComponent*                           CannonMesh;                                              // 0x23B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ShowShoulderCannon();
		void HideShoulderCannon();
		void ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
