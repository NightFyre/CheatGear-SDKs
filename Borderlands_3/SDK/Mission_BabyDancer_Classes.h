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
	 * BlueprintGeneratedClass Mission_BabyDancer.Mission_BabyDancer_C
	 * Size -> 0x00B0 (FullSize[0x05C0] - InheritedSize[0x0510])
	 */
	class UMission_BabyDancer_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FollowClaptrap2_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrap_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RingDoorbell_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetBaby_ObjSetVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RingDoorbell_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetBaby_ObjVar;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrap2_INVS_ObjVar;                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetClaptrapOnPandora_ObjSetVar;                     // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetClaptrapOnPandora_ObjVar;                        // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrap1_ObjSetVar;                           // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrap1_INVS_ObjVar;                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrap3_ObjSetVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrap3_INVS_ObjVar;                         // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Dancing_ObjVar;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayersDance_ObjSetVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayersDance_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BabyDance_ObjSetVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayTheMusic_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor_ObjVar;                                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void MCE_Update_Dancing(class UObject* Context);
		void Obj_Dancing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void VO_FollowClaptrap3(class UObject* Context);
		void Set_MeetClaptrapOnPandora(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetClaptrapOnPandora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClaptrap3_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowClaptrap3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_MeetClaptrapOnPandora(class UObject* Context);
		void MCE_Update_FollowClaptrap(class UObject* Context);
		void MCE_Update_FollowClaptrap3(class UObject* Context);
		void Obj_FollowClaptrap_Objective_PROXY();
		void Set_PlayersDance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlayersDance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PlayersDance(class UObject* Context);
		void MCE_Update_FollowClaptrap2(class UObject* Context);
		void Obj_FollowClaptrap1_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowClaptrap1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_BabyDance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlayTheMusic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClaptrap2_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PlayTheMusic(class UObject* Context);
		void UPDATE_TalkToClaptrap(class UObject* Context);
		void MissionKickoff();
		void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenDoor(class UObject* Context);
		void UPDATE_MeetBaby(class UObject* Context);
		void UPDATE_RingDoorbell(class UObject* Context);
		void MCE_Update_FollowClaptrap1(class UObject* Context);
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetBaby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RingDoorbell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeetBaby(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_RingDoorbell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClaptrap2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_BabyDancer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
