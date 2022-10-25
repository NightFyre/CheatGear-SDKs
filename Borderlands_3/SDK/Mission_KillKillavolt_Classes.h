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
	 * BlueprintGeneratedClass Mission_KillKillavolt.Mission_KillKillavolt_C
	 * Size -> 0x01B0 (FullSize[0x06C0] - InheritedSize[0x0510])
	 */
	class UMission_KillKillavolt_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjective*                                   Obj_KillBadGuy1_ObjVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadGuy2_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadGuy3_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBadGuys_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AcceptToken_ObjSetVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AcceptToken_ObjVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetMoxxie_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetMoxxie_ObjVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerDown1_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveToken1_ObjSetVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveToken1_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveToken2_ObjSetVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveToken2_ObjVar;                                   // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveToken3_ObjSetVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveToken3_ObjVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveToken4_ObjSetVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveToken4_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetKillaVolt_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetKillaVolt_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToKillaCam_ObjSetVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKillaCam_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GivePieces_ObjSetVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GivePieces_ObjVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBadGuys2_ObjSetVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerDown2_ObjVar;                                   // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerDown3_ObjVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BadGuy1Spawn_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CraneSpawnSEQ_ObjVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BadGuy2Spawn_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectPowerCells_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectHelm_ObjSetVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_collectHelm_ObjVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MountHelm_ObjSetVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MountHelm_ObjVar;                                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkMox_ObjSetVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkMox_ObjVar;                                      // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTowers_ObjSetVar;                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTowers_ObjVar;                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterGameshow_ObjSetVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterGameshow_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TokensCollected;                                         // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BatteriesCollected;                                      // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INV_BatteryProgress_ObjVar;                          // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INV_TokensProgress_ObjVar;                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTokensActive;                                          // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBetteriesActive;                                       // 0x0681(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUYB[0x2];                                   // 0x0682(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogConversation                                 Dialog_DeathSpeach;                                      // 0x0684(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AttendToken_ObjSetVar;                               // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttendToken_ObjVar;                                  // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BadGuy2Sign_ObjVar;                              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BadGuy3Spawn_ObjVar;                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BadGuy3Sign_ObjVar;                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TrudySign_ObjVar;                                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Obj_PowerDown1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveToken1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGiveToken1(class UObject* Context);
		void Obj_GiveToken1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveToken2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveToken2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGiveToken2(class UObject* Context);
		void Set_GiveToken3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGiveToken3(class UObject* Context);
		void Obj_GiveToken3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveToken4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGiveToken4(class UObject* Context);
		void Obj_GiveToken4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetKillaVolt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateMeetKillKillaVolt(class UObject* Context);
		void Obj_MeetKillaVolt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToKillaCam(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateTalkToKillaCam(class UObject* Context);
		void Obj_TalkToKillaCam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GivePieces(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GivePieces(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGivePieces(class UObject* Context);
		void AdvToAcceptToken(class UObject* Context);
		void Update_KillBadGuy1(class UObject* Context);
		void Update_KillBadGuys2(class UObject* Context);
		void Update_KillBadGuy3(class UObject* Context);
		void AdvTo_KillBadGuys1(class UObject* Context);
		void Set_KillBadGuys2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PowerDown2(class UObject* Context);
		void Obj_PowerDown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PowerDown3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PowerDown3(class UObject* Context);
		void Obj_INV_BadGuy1Spawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BadGuy1Spawn(class UObject* Context);
		void Obj_INV_CraneSpawnSEQ(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CraneSpawnSEQ(class UObject* Context);
		void Obj_INV_BadGuy2Spawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BadGuy2Spawn(class UObject* Context);
		void Adv2_KillKillaVolt(class UObject* Context);
		void Obj_CollectPowerCells(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CollectPowerCells(class UObject* Context);
		void Obj_collectHelm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectHelm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_MountHelm(class UObject* Context);
		void Obj_MountHelm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MountHelm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkMox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkMox(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TalkMox(class UObject* Context);
		void Update_CollectHelm(class UObject* Context);
		void Dialog_InstallPack(class UObject* Context);
		void Obj_GoToTowers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToTowers(class UObject* Context);
		void Set_GoToTowers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvToKillBadGuys2(class UObject* Context);
		void Update_EnterGameshow(class UObject* Context);
		void Set_EnterGameshow(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterGameshow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CheckBatteryState(class UObject* Context);
		void Dialog_TrudyDead(class UObject* Context);
		void Update_PowerDown1(class UObject* Context);
		void OBJ_INV_BatteryProgress(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_BatteryProgress(class UObject* Context);
		void ME_UpdateMeetMoxxie(class UObject* Context);
		void Update_INV_TokenProgress(class UObject* Context);
		void OBJ_INV_TokensProgress(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialog_TrudyHnut(class UObject* Context);
		void Set_MeetMoxxie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Dialog_JennyDeath(class UObject* Context);
		void Dialog_LeenaDeath(class UObject* Context);
		void Dialog_WinnerCheck(class UObject* Context);
		void Obj_MeetMoxxie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UpdateAcceptToken(class UObject* Context);
		void Dialog_JennyIntrol(class UObject* Context);
		void Dialog_LeenaIntro(class UObject* Context);
		void Dialog_TrudyIntro(class UObject* Context);
		void Obj_AcceptToken(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AcceptToken(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Adv_GivePieces(class UObject* Context);
		void Obj_AttendToken(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AttendToken(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_AttendToken(class UObject* Context);
		void ME_UpdateKillBoss(class UObject* Context);
		void Obj_KillBadGuy1_Objective_PROXY();
		void Obj_KillBadGuy2_Objective_PROXY_1();
		void Obj_KillBadGuy3_Objective_PROXY_2();
		void Set_KillBadGuys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_BadGuy2Sign(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_BadGuy2Sign(class UObject* Context);
		void Update_BadGuy3Spawn(class UObject* Context);
		void Obj_INV_BadGuy3Spawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_BadGuy3Sign(class UObject* Context);
		void Obj_INV_BadGuy3Sign(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBadGuy3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialog_WhereHellGoing(class UObject* Context);
		void Dialog_GetBack(class UObject* Context);
		void Dialog_GoBackBattle(class UObject* Context);
		void Dialog_InteruptStartingConversation(class UObject* Context);
		void Obj_KillBadGuy2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TrudySign(class UObject* Context);
		void Obj_INV_TrudySign(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBadGuy1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_KillKillavolt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
