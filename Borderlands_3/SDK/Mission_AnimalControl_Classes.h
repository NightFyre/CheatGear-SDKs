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
	 * BlueprintGeneratedClass Mission_AnimalControl.Mission_AnimalControl_C
	 * Size -> 0x010C (FullSize[0x061C] - InheritedSize[0x0510])
	 */
	class UMission_AnimalControl_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_MeetGranny_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetGranny_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToGranny_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGranny_ObjVar;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePants_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePants_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetGrogMeat_ObjSetVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetShockMeat_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetRadMeat_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceShockMeat_ObjSetVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceShockMeat_ObjVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceRadMeat_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceRadMeat_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceGrogMeat_ObjSetVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatBiobeasts_ObjSetVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBiobeasts_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlacePants_ObjSetVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePants_ObjVar;                                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowBella_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowBella_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShockMeatPlaced_ObjSetVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RadMeatPlaced_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_GrannySpawned_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_EatMeat_ObjVar;                                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_ShowBugs_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FirstTalkToGranny_ObjSetVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FirstTalkToGranny_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetGrogMeat_ObjVar;                                  // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceGrogMeat_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InitialGetGrogMeat_ObjSetVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_FollowBellaCombat_ObjVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 MeatPlaceConvo;                                          // 0x0610(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void Update_FollowBella(class UObject* Context);
		void Obj_FollowBella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowBella(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PlacePants(class UObject* Context);
		void Obj_PlacePants(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShockMeatPlaced(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceShockMeat_Objective_PROXY_4();
		void Set_PlacePants(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_DefeatBiobeasts(class UObject* Context);
		void Obj_DefeatBiobeasts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatBiobeasts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RadMeatPlaced(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceRadMeat_Objective_PROXY_5();
		void JumpTo_PlacePants(class UObject* Context);
		void Advance_PlacePants(class UObject* Context);
		void Update_TalkToGranny(class UObject* Context);
		void Obj_PlaceRadMeat_Objective_PROXY_3();
		void Invs_GrannySpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GrannySpawned(class UObject* Context);
		void Invs_EatMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EatMeat(class UObject* Context);
		void Invs_ShowBugs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ShowBugs(class UObject* Context);
		void Invs_ShowBugs_Objective_PROXY_6();
		void Invs_EatMeat_Objective_PROXY_7();
		void Obj_PlaceShockMeat_Objective_PROXY_2();
		void Set_PlaceGrogMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetShockMeat_Objective_PROXY_1();
		void Update_PlaceRadMeat(class UObject* Context);
		void Set_FirstTalkToGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FirstTalkToGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FirstTalkToGranny(class UObject* Context);
		void Advance_FirstTalkToGranny(class UObject* Context);
		void Obj_GetGrogMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceGrogMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceGrogMeat_Objective_PROXY_8();
		void Obj_PlaceGrogMeat_Objective_PROXY_9();
		void Obj_PlaceRadMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceRadMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetRadMeat_Objective_PROXY();
		void Update_PlaceShockMeat(class UObject* Context);
		void Set_InitialGetGrogMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetGrogMeat_Objective_PROXY_10();
		void Advance_FollowBella(class UObject* Context);
		void Obj_PlaceShockMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceShockMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ApproachedLureVO(class UObject* Context);
		void Invs_FollowBellaCombat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowBellaCombat(class UObject* Context);
		void Update_GetRadMeat(class UObject* Context);
		void MCE_CompleteAnimalControl(class UObject* Context);
		void Obj_GetRadMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetShockMeat(class UObject* Context);
		void Obj_TalkToGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetShockMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetGrogMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TakePants(class UObject* Context);
		void Obj_TakePants(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MeetGranny(class UObject* Context);
		void Obj_MeetGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakePants(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_AnimalControl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
