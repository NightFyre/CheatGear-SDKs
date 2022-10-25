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
	 * BlueprintGeneratedClass BPChar_StandIn_Operative.BPChar_StandIn_Operative_C
	 * Size -> 0x0018 (FullSize[0x23A8] - InheritedSize[0x2390])
	 */
	class ABPChar_StandIn_Operative_C : public ABPChar_StandInPlayer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2390(0x0008) Transient, DuplicateTransient
		class UGbxSkeletalMeshComponent*                           ActionSkillDevice;                                       // 0x2398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOperativeStandInComponent*                          OperativeStandIn;                                        // 0x23A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ShowActionSkillDevice();
		void HideActionSkillDevice();
		void ExecuteUbergraph_BPChar_StandIn_Operative(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
