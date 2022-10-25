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
	 * BlueprintGeneratedClass Mission_Ep06_MeetMaya.Mission_Ep06_MeetMaya_C
	 * Size -> 0x02F0 (FullSize[0x0800] - InheritedSize[0x0510])
	 */
	class UMission_Ep06_MeetMaya_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_MonasteryTitleCard_ObjSetVar;                        // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlanetTitleCard_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetMaya_ObjSetVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DIALOG_MayaGreeting_ObjVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMayaArea_ObjVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetMaya_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMayaArea_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearMayaArea_ObjSetVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RingBell_ObjSetVar;                                  // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearMayaArea_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RingBell_ObjVar;                                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaTitleCard_ObjSetVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaTitleCard_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaLeadToCheckpoint01_ObjSetVar;                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaLeadToCheckpoint01_ObjVar;                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaLeadToBell_ObjSetVar;                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MonkOpensGate_ObjVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaLeadToBell_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetVaultKey_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaLeadToBell2_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaLeadToBell2_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetAva_ObjVar;                                      // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetAva_ObjSetVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AvaTitleCard_ObjSetVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AvaTitleCard_ObjVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetVaultKey_ObjVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilith_ObjSetVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilith_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSanctuary_ObjSetVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanctuary_ObjVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearMayaAreaEarly_ObjVar;                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RingBell2_ObjSetVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingBell2_ObjVar;                                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RingBell3_ObjSetVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingBell3_ObjVar;                                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GateOpened_ObjVar;                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAva_ObjSetVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAva_ObjVar;                                      // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ObtainEridiumPieces_ObjSetVar;                       // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ObtainEridium_ObjVar;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchCrypt_ObjSetVar;                               // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ObtainEridiumPiece2_ObjSetVar;                       // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnlockTomb1_ObjSetVar;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockTomb1_ObjVar;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnlockTomb2_ObjSetVar;                               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockTomb2_ObjVar;                                  // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchMausoleum_ObjVar;                              // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnlockTomb3_ObjSetVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockTomb3_ObjVar;                                  // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_WarpAnchorRatchSpawned_ObjVar;                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToGatehouse_ObjSetVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGatehouse_ObjVar;                                // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoorOpened_ObjVar;                                   // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetMayaAtCourtyard_ObjSetVar;                       // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetMayaAtCourtyard_ObjVar;                          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaWalkMoment_ObjSetVar;                            // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaWalkMoment_ObjVar;                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveMayaEridium_ObjSetVar;                           // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMayaEridium_ObjVar;                              // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTheDoor_ObjVar;                                  // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveOn_ObjVar;                                       // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaOpenChest_ObjVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UseDropPod_OnSanctuary_ObjSetVar;                    // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReNavigate_Athenas_ObjVar;                           // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilithFirstTime_ObjSetVar;                     // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilithFirstTime_ObjVar;                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_Athenas_ObjSetVar;                          // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_Athenas_ObjVar;                             // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_OnPlanet_ObjSetVar;                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SearchCrypt_ObjVar;                                  // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   ObjInvis_CemeteryDropship_ObjVar;                        // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMausoleumRatch_ObjSetVar;                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillMausoleumRatch_ObjVar;                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillWarpAnchorRatch_ObjSetVar;                       // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillWarpAnchorRatch_ObjVar;                          // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSanctuary_ObjSetVar;                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSanctuary_ObjVar;                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveFragmentToTannis_ObjSetVar;                      // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveFragmentToTannis_ObjVar;                         // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   StartConvo_AvaMeetsClaptrap_ObjVar;                      // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaVideo_ObjSetVar;                                 // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaVideo_ObjVar;                                    // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Convo_AvaMeetsClaptrap_ObjVar;                           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   StartConvo_MayaMeetsLilith_ObjVar;                       // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Convo_MayaMeetsLilith_ObjVar;                            // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INVIS_AvaOpensCemeteryGate_ObjVar;                   // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaLeadTocheckpoint2_ObjVar;                        // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForAvaToUnlockGate_ObjVar;                       // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_113();
		void OnDialogSequenceFinished_112();
		void OnDialogSequenceFinished_111();
		void OnDialogSequenceFinished_110();
		void OnDialogSequenceFinished_109();
		void OnDialogSequenceFinished_108();
		void OnDialogSequenceFinished_107();
		void OnDialogSequenceFinished_106();
		void OnDialogSequenceFinished_105();
		void OnDialogSequenceFinished_104();
		void OnDialogSequenceFinished_103();
		void OnDialogSequenceFinished_102();
		void OnDialogSequenceFinished_101();
		void OnDialogSequenceFinished_100();
		void OnDialogSequenceFinished_99();
		void OnDialogSequenceFinished_98();
		void OnDialogSequenceFinished_97();
		void OnDialogSequenceFinished_96();
		void OnDialogSequenceFinished_95();
		void OnDialogSequenceFinished_94();
		void OnDialogSequenceFinished_93();
		void OnDialogSequenceFinished_92();
		void OnDialogSequenceFinished_91();
		void OnDialogSequenceFinished_90();
		void OnDialogSequenceFinished_89();
		void OnDialogSequenceFinished_88();
		void OnDialogSequenceFinished_87();
		void OnDialogSequenceFinished_86();
		void OnDialogSequenceFinished_85();
		void OnDialogSequenceFinished_84();
		void OnDialogSequenceFinished_83();
		void OnDialogSequenceFinished_82();
		void OnDialogSequenceFinished_81();
		void OnDialogSequenceFinished_80();
		void OnDialogSequenceFinished_79();
		void OnDialogSequenceFinished_78();
		void OnDialogSequenceFinished_77();
		void OnDialogSequenceFinished_76();
		void OnDialogSequenceFinished_75();
		void OnDialogSequenceFinished_74();
		void OnDialogSequenceFinished_73();
		void OnDialogSequenceFinished_72();
		void OnDialogSequenceFinished_71();
		void OnDialogSequenceFinished_70();
		void OnDialogSequenceFinished_69();
		void OnDialogSequenceFinished_68();
		void OnDialogSequenceFinished_67();
		void OnDialogSequenceFinished_66();
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
		void Set_GoToMayaArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetMaya_Objective_PROXY();
		void Obj_MeetMaya_Objective_PROXY_1();
		void Obj_ClearMayaArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetMaya_Objective_PROXY_2();
		void OBJ_RingBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearMayaArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_RingBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MayaTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MayaTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UPDATE_RingBell(class UObject* Context);
		void MCE_UPDATE_MeetMaya(class UObject* Context);
		void MCE_UPDATE_ClearMayaArea(class UObject* Context);
		void Set_MayaLeadToCheckpoint01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MayaLeadToCheckpoint01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATEMayaLeadToCheckpoint01(class UObject* Context);
		void Obj_MayaLeadToBell2_Objective_PROXY_3();
		void MCE_UPDATE_MayaArea(class UObject* Context);
		void MCE_UPDATE_FightWithMaya(class UObject* Context);
		void Set_MayaLeadToBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MonkOpensGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MayaLeadToBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MidGateOpened(class UObject* Context);
		void Obj_MayaLeadToBell2_Objective_PROXY_4();
		void UPDATEMayaLeadToBell(class UObject* Context);
		void Obj_GoToMayaArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MayaLeadToBell2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MayaLeadToBell2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATEMayaLeadToBell2(class UObject* Context);
		void Obj_MeetAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UPDATE_MeetAva(class UObject* Context);
		void Set_AvaTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AvaTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillBoss(class UObject* Context);
		void Set_TalkToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UPDATE_TalkToLilith(class UObject* Context);
		void MCE_DIALOG_MayaGreeting(class UObject* Context);
		void Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UPDATE_GoToSanctuary(class UObject* Context);
		void Obj_DIALOG_MayaGreeting(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearMayaAreaEarly(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearMayaAreaEarly_Objective_PROXY_5();
		void Set_an_Objective_in_the_Details();
		void Obj_RingBell2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RingBell2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_RungBell2(class UObject* Context);
		void Set_MeetMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RingBell3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RingBell3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RungBell3(class UObject* Context);
		void Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GateOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenedGate3(class UObject* Context);
		void Set_FindAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FoundAva(class UObject* Context);
		void Set_ObtainEridiumPieces(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ObtainEridium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ObtainEridiumPiece2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_UnlockTomb1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UnlockTomb1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_UnlockedTomb1(class UObject* Context);
		void Set_UnlockTomb2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UnlockTomb2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_UnlockedTomb2(class UObject* Context);
		void Obj_SearchMausoleum(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Thwart_SearchMausoleum(class UObject* Context);
		void Set_UnlockTomb3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UnlockTomb3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjInvis_WarpAnchorRatchSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToGatehouse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToGatehouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MonasteryTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DoorOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BridgeDoorOpened(class UObject* Context);
		void Set_MeetMayaAtCourtyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetMayaAtCourtyard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtCourtyard(class UObject* Context);
		void Update_AvaAtGate(class UObject* Context);
		void Set_MayaWalkMoment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MayaWalkMoment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveMayaEridium(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveMayaEridium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EridiumGiven(class UObject* Context);
		void Advance_GiveMayaEridium(class UObject* Context);
		void Obj_OpenTheDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenVaultDoor(class UObject* Context);
		void Obj_MoveOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MoveOn(class UObject* Context);
		void Obj_MayaOpenChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenVaultChest(class UObject* Context);
		void SET_UseDropPod_OnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReNavigate_Athenas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReNavigate_Athenas(class UObject* Context);
		void Set_TalkToLilithFirstTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLilithFirstTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToLilithFirstTime(class UObject* Context);
		void Set_Navigate_Athenas(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_Athenas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_Athenas(class UObject* Context);
		void ADVANCE_Navigate_Athenas(class UObject* Context);
		void AdvanceTo_PlanetTitleCard(class UObject* Context);
		void Set_UseDropPod_OnPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_UseDropPod_Objective_PROXY_7();
		void OBJ_SearchCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SearchCrypt(class UObject* Context);
		void ObjInvis_CemeteryDropship(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CemeteryDropship(class UObject* Context);
		void Set_KillMausoleumRatch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillMausoleumRatch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Thwart_UnlockTomb3(class UObject* Context);
		void SET_KillWarpAnchorRatch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillWarpAnchorRatch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GiveFragmentToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveFragmentToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveFragmentToTannis_Objective_PROXY_8();
		void Update_GiveFragmentToTannis(class UObject* Context);
		void Update_ReturnToSanctuary(class UObject* Context);
		void StartConvo_AvaMeetsClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void StartConvo_AvaMeetsClaptrap_Objective_PROXY_9();
		void ConvoStart_AvaMeetsClaptrap(class UObject* Context);
		void Set_MayaVideo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MayaVideo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MayaVideo(class UObject* Context);
		void Convo_AvaMeetsClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ConvoEnd_AvaMeetsClaptrap(class UObject* Context);
		void StartConvo_MayaMeetsLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ConvoStart_MayaMeetsLilith(class UObject* Context);
		void Convo_MayaMeetsLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ConvoEnd_MayaMeetsLilith(class UObject* Context);
		void OBJ_INVIS_AvaOpensCemeteryGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATEAvaOpensCemeteryGate(class UObject* Context);
		void Update_Kickoff(class UObject* Context);
		void MCE_ClaptrapArrivesAtTerminal(class UObject* Context);
		void MCE_PlayerAtAreaToListenTo_Maya(class UObject* Context);
		void UPDATE_MayaLeadToCheckpoint2(class UObject* Context);
		void Obj_MayaLeadTocheckpoint2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_MayaMovesOnAfterTrauntFirstTaunt();
		void Obj_WaitForAvaToUnlockGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_WaitForAvaToUnlockGate(class UObject* Context);
		void MissionKickoff();
		void PlayMonkDoorVO(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep06_MeetMaya(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
