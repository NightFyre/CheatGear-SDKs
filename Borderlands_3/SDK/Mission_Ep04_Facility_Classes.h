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
	 * BlueprintGeneratedClass Mission_Ep04_Facility.Mission_Ep04_Facility_C
	 * Size -> 0x01A8 (FullSize[0x06B8] - InheritedSize[0x0510])
	 */
	class UMission_Ep04_Facility_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		EMissionObjectiveEvent                                     ObjStatus_ChaddUsesLift;                                 // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LM7Z[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_MeetJuno_ObjSetVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetJuno_ObjVar;                                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseRetinaScanner_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseRetinaScanner_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDigiLine01_ObjVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToFacility_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToFacility_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearGuards_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearGuards_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenDoor_ObjSetVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor_ObjVar;                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAnotherWayIn_ObjSetVar;                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAnotherWayIn_ObjVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopDigiBomb_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DescendElevator_ObjSetVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DescendElevator_ObjVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopDigiBomb03_ObjSetVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_StopDigiBomb03_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatIronBearBoss_ObjSetVar;                        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatIronBearBoss_ObjVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDigiLine01_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   InvisObj_StopDigiBombWaypoint_ObjVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopDigiBomb04_ObjSetVar;                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_StopDigiBomb04_ObjVar;                          // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ChaseRose_ObjSetVar;                                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaseRose_ObjVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopDigiBomb02_ObjSetVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   InvisObj_StopDigiBombWaypoint02_ObjVar;                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_BossTitleCard_ObjVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RidePlatform_ObjSetVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_RidePlatform_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseEntranceDigiline_ObjSetVar;                       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseEntranceDigiline_ObjVar;                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaseRoseBreadcrumb01_ObjVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaseRoseBreadcrumb02_ObjVar;                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeKeyCard_ObjVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeKeyCard_ObjSetVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StopDigiBombLaunch_ObjVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BraceForImpact_ObjSetVar;                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BraceForImpact_ObjVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjINVIS_CloseDoor_ObjVar;                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjINVIS_RedForceField_ObjVar;                           // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_BreakGlass_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetJuno02_ObjSetVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDevilRiders_ObjVar;                              // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjINVIS_DoorScanner_ObjVar;                             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_IronBearDoor_ObjVar;                            // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IronBearDoor_ObjSetVar;                              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjINVIS_UnhideCrater_ObjVar;                            // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillFrontierDevilRiders_ObjSetVar;                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void Update_UseRetinaScanner(class UObject* Context);
		void Set_StopDigiBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindAnotherWayIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindAnotherWayIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatIronBearBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatIronBearBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_UseEntranceDigiline(class UObject* Context);
		void Obj_UseEntranceDigiline(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseEntranceDigiline(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_UseDigiLine01(class UObject* Context);
		void Obj_UseDigiLine01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseRetinaScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseDigiLine01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_UseRetinaScanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_DescendElevator(class UObject* Context);
		void Thwart_OpenDoor(class UObject* Context);
		void Obj_MeetJuno(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetJuno(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ClearGuards(class UObject* Context);
		void Update_StopDigiBomb03(class UObject* Context);
		void ObjInvis_StopDigiBomb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StopDigiBomb03(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DescendElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DescendElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_OpenDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearGuards(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToFacility(class UObject* Context);
		void Obj_StopDigiBombLaunch_Objective_PROXY();
		void Obj_StopDigiBombLaunch_Objective_PROXY_1();
		void Obj_StopDigiBombLaunch_Objective_PROXY_2();
		void Obj_StopDigiBombLaunch_Objective_PROXY_3();
		void Obj_StopDigiBombLaunch_Objective_PROXY_4();
		void InvisObj_StopDigiBombWaypoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StopDigiBombLaunch_Objective_PROXY_5();
		void Obj_StopDigiBombLaunch_Objective_PROXY_6();
		void Obj_StopDigiBombLaunch_Objective_PROXY_7();
		void Set_StopDigiBomb04(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ObjInvis_StopDigiBomb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_StopDigiBomb04(class UObject* Context);
		void Set_ClearGuards(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToFacility(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToFacility(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StopDigiBombLaunch_Objective_PROXY_8();
		void Set_ChaseRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChaseRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Thwart_CancelDigiBombDrop(class UObject* Context);
		void Update_FindAnotherWayIn(class UObject* Context);
		void Set_StopDigiBomb02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StopDigiBombLaunch_Objective_PROXY_9();
		void Update_StopDigiBomb02(class UObject* Context);
		void Update_StopDigiBomb(class UObject* Context);
		void InvisObj_StopDigiBombWaypoint02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefeatIronBearBoss(class UObject* Context);
		void Update_ChaseRose(class UObject* Context);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ObjInvis_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BossTitleCard(class UObject* Context);
		void Set_RidePlatform(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ObjInvis_RidePlatform(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RidePlatform(class UObject* Context);
		void Obj_StopDigiBombLaunch_Objective_PROXY_10();
		void Obj_ChaseRoseBreadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChaseRoseBreadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ChaseRoseBreadcrumb(class UObject* Context);
		void Set_TakeKeyCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeKeyCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StopDigiBombLaunch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MeetDakota(class UObject* Context);
		void Update_TakeKeyCard(class UObject* Context);
		void Set_BraceForImpact(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BraceForImpact(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BraceForImpact(class UObject* Context);
		void ObjINVIS_CloseDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjINVIS_RedForceField(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjInvis_BreakGlass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BreakGlass(class UObject* Context);
		void Set_MeetJuno02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillDevilRiders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_KillDevilRiders(class UObject* Context);
		void Update_KillDevilRiders(class UObject* Context);
		void ObjINVIS_DoorScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AccessDenied(class UObject* Context);
		void ObjInvis_IronBearDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_IronBearDoor(class UObject* Context);
		void Set_IronBearDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StopDigiBombLaunch_Objective_PROXY_11();
		void ObjINVIS_UnhideCrater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetJuno_Objective_PROXY_12();
		void SET_KillFrontierDevilRiders(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ep04_Facility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
