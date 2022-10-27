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
	 * BlueprintGeneratedClass Mission_Ep16_DesertVault.Mission_Ep16_DesertVault_C
	 * Size -> 0x02B0 (FullSize[0x07C0] - InheritedSize[0x0510])
	 */
	class UMission_Ep16_DesertVault_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_DriveToFortress_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DriveToFortress_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowAva_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowAva_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindTroy_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindTroy_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillTroy_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillTroy_ObjVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInToLilith_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TurnInToLilith_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ClearTurretArea_ObjSetVar;                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ClearTurretArea_ObjVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToPandora_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToPandora_ObjVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilith_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToVaughn_ObjSetVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilith_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToVaughn_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToGate_ObjSetVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToGate_ObjVar;                                   // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootExplosive_ObjSetVar;                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootExplosive_ObjVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetTannis_ObjSetVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetTannis_ObjVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearOuterDefenses_ObjSetVar;                        // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootVault_ObjSetVar;                                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootVault_ObjVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCathedral_ObjSetVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCathedral_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RaisePressure_ObjSetVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootEffigy_ObjSetVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootEffigy_ObjVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set04_DropDownPipe_ObjSetVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj05_DropDownPipe_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FightToCathedral_ObjSetVar;                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FightToCathedral_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenCathedralDoor_ObjSetVar;                         // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJOpenCathedralDoor_ObjVar;                             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TroyTitleCard_ObjSetVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TroyTitleCard_ObjVar;                                // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TroyDeathCinematic_ObjSetVar;                        // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TroyDeathCinematic_ObjVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJInvisible_OpenGateHouseDoor_ObjVar;                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillAnnointedGoon_ObjSetVar;                         // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAnnointedGoon_ObjVar;                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LookOutWindow_ObjSetVar;                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SayGoodbyes_ObjSetVar;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LookOutWindow_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvisibleMoonPhaseLocked_ObjVar;                     // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToLilith_ObjVar;                               // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToTannis_ObjVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToAva_ObjVar;                                  // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToEllie_ObjVar;                                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToMarcus_ObjVar;                               // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToMoxxi_ObjVar;                                // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToHammerlock_ObjVar;                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToZero_ObjVar;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SayByeToClaptrap_ObjVar;                             // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_UseSlotMachine_ObjVar;                               // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   InvisOBJ_WallDoorController_ObjVar;                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TroyPhaseLocksMoonAgain_ObjSetVar;                   // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvisibleMoonPhaseLocked2_ObjVar;                    // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_ElpisPhaseLockVidscreen_ObjVar;                 // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ElpisVidscreen_ObjSetVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSanctuary_ObjSetVar;                             // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanctuary_ObjVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpECHO_ObjSetVar;                                // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpECHO_ObjVar;                                   // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvisibleObjectiveForSkinReward_ObjVar;              // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeHamerlocksPistol_ObjVar;                         // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SeeEcho_ObjSetVar;                                   // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisLine_ObjVar;                                   // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTannis_ObjSetVar;                              // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToTannis_ObjVar;                                 // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVault_ObjVar;                                   // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveVault_ObjVar;                                   // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvisUnhideExplosives_ObjVar;                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RaisePressure_ObjVar;                                // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ClearOuterDefenses_ObjVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RaisePressureValve01_ObjVar;                         // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RaisePressureValve02_ObjVar;                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RaisePressureValve03_ObjVar;                         // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RaisePressureValve04_ObjVar;                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvisibleWinSlotMachine_ObjVar;                      // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EmergencyKlaxon_ObjVar;                              // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_47();
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
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
		void UpdateTalkToVaughn(class UObject* Context);
		void Set_HeadToGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HeadToGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToLilithSTART(class UObject* Context);
		void Set_ShootExplosive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_ExplosiveShot(class UObject* Context);
		void Obj_ShootExplosive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DriveToTannis(class UObject* Context);
		void Set_MeetTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MeetTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateMeetTannis(class UObject* Context);
		void AdvanceToDriveToFortress(class UObject* Context);
		void UpdateHeadToGate(class UObject* Context);
		void Set_ClearOuterDefenses(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceToShootExplosive(class UObject* Context);
		void Set_LootVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LootVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterCathedral(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCathedral(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RaisePressure(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ShootEffigy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShootEffigy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set04_DropDownPipe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj05_DropDownPipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateEnterCathedral(class UObject* Context);
		void UpdateShootEffigy(class UObject* Context);
		void Set_FightToCathedral(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FightToCathedral(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenCathedralDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJOpenCathedralDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateOpenCathedralDoor(class UObject* Context);
		void UpdateFightToCathedral(class UObject* Context);
		void UpdateDropDownPipe(class UObject* Context);
		void Set_TroyTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TroyTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TroyDeathCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TroyDeathCinematic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceToTroyDeathCine(class UObject* Context);
		void Update_TannisLine(class UObject* Context);
		void Set_TalkToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateClearTurretArea(class UObject* Context);
		void OBJInvisible_OpenGateHouseDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateInvisibleGateHouseDoor(class UObject* Context);
		void AdvanceToEnterCathedral(class UObject* Context);
		void Set_KillAnnointedGoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillAnnointedGoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateKillGoon(class UObject* Context);
		void SET_SayGoodbyes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_LookOutWindow(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_LookOutWindow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_InvisibleMoonPhaseLocked(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToEllie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToMarcus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToMoxxi(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SayByeToZero(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateLookOutWindow(class UObject* Context);
		void UpdateMoonPhaseLocked(class UObject* Context);
		void AdvanceToSayGoodbyes(class UObject* Context);
		void AdvanceToLookOutWindow(class UObject* Context);
		void OBJ_UseSlotMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateSayByeToLilith(class UObject* Context);
		void UpdateSayByeToTannis(class UObject* Context);
		void UpdateSayByeToHammerlock(class UObject* Context);
		void UpdateSayByeToAva(class UObject* Context);
		void UpdateSayByeToClaptrap(class UObject* Context);
		void UpdateSayByeToEllie(class UObject* Context);
		void UpdateSayByeToZero(class UObject* Context);
		void UpdateSayByeToMarcus(class UObject* Context);
		void UpdateSayByeToMoxxi(class UObject* Context);
		void UpdateUseSlotMachine(class UObject* Context);
		void OBJ_GoToPandora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateGoToPandora(class UObject* Context);
		void SET_GoToPandora(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ClearTurretArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ClearTurretArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MRE_LilithTalkedToEND(class UObject* Context);
		void OBJ_TurnInToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TurnInToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void InvisOBJ_WallDoorController(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateInvisibleWallDoorController(class UObject* Context);
		void SET_DriveToFortress(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TroyPhaseLocksMoonAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InvisibleMoonPhaseLocked2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceToTroyPhaseLocksMoonAgain(class UObject* Context);
		void OBJ_InvisibleMoonPhaseLocked2_Objective_PROXY();
		void OBJ_InvisibleMoonPhaseLocked2_Objective_PROXY_1();
		void OBJ_KillTroy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillTroy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateFindTroy(class UObject* Context);
		void OBJ_FindTroy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindTroy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateFollowAva(class UObject* Context);
		void SET_FollowAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ObjInvis_ElpisPhaseLockVidscreen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ElpisVidscreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceToElpisVidScreen(class UObject* Context);
		void Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToSanctuary(class UObject* Context);
		void Set_TalkToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToTannis(class UObject* Context);
		void OBJ_DriveToFortress(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InvisibleObjectiveForSkinReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TakeHamerlocksPistol(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateTakePistol(class UObject* Context);
		void Set_SeeEcho(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceTo_PickUpEcho(class UObject* Context);
		void AdvanceTo_LootVault(class UObject* Context);
		void Obj_TannisLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_Complete(class UObject* Context);
		void Obj_EnterVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LeaveVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayersInsideVault(class UObject* Context);
		void PlayersOutsideVault(class UObject* Context);
		void ME_UpdateDriveToFortress(class UObject* Context);
		void UpdateUnhideExplosives(class UObject* Context);
		void Obj_InvisUnhideExplosives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RaisePressure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ClearOuterDefenses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateClearOuterDefenses(class UObject* Context);
		void OBJ_RaisePressureValve01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateRaisePressureValve03(class UObject* Context);
		void UpdateRaisePressureValve01(class UObject* Context);
		void UpdateRaisePressureValve02(class UObject* Context);
		void UpdateRaisePressureValve04(class UObject* Context);
		void OBJ_RaisePressureValve02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RaisePressureValve03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RaisePressureValve04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_InvisibleWinSlotMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateWinSlotMachine(class UObject* Context);
		void OBJ_EmergencyKlaxon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PhaselockKlaxon(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep16_DesertVault(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
