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
	 * BlueprintGeneratedClass Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C
	 * Size -> 0x002F (FullSize[0x02E8] - InheritedSize[0x02B9])
	 */
	class UAction_Phasetrance_RecallOrb_C : public UAction_Phasetrance_Common_C
	{
	public:
		unsigned char                                              UnknownData_12HP[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) Transient, DuplicateTransient
		class UActionSkill_Siren_Phasetrance_C*                    Phasetrance;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*           Orb;                                                     // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           GhostArms3rd;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           GhostArms1st;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AN_SummonOrb();
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Action_Phasetrance_RecallOrb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
