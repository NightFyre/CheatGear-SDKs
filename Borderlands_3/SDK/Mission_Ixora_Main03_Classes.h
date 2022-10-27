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
	 * BlueprintGeneratedClass Mission_Ixora_Main03.Mission_Ixora_Main03_C
	 * Size -> 0x02E8 (FullSize[0x07F8] - InheritedSize[0x0510])
	 */
	class UMission_Ixora_Main03_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMap_ObjSetVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetCrimsonRaider_ObjSetVar;                         // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineCrimeScene_ObjSetVar;                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SkagAmbush_ObjSetVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBodyParts_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillSkags_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseIntercom_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBanditWarchief_ObjSetVar;                        // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBanditWarchief_BC1_ObjVar;                       // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBanditWarchief_ObjSetVar;                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBanditWarChief_ObjVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToClaptrap_ObjSetVar;                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ListenRecordings_ObjSetVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMap_ObjVar;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetCrimsonRaider_ObjVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineCrimeScene_ObjVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SkagAmbush_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseIntercom_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToClaptrap_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenRecordings_ObjVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBody_ObjVar;                                     // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBodyPart_First_ObjSetVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBodyPart_First_ObjVar;                            // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBodyPart_More_ObjVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBodyParts_TOOMUCH_ObjSetVar;                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBodyParts_TOOMUCH_1_ObjVar;                      // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBodyParts_TOOMUCH_2_ObjVar;                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBodyParts_TOOMUCH_3_ObjVar;                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindBodyParts_TOOMUCH_2_NotReady_ObjVar;         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindBodyParts_TOOMUCH_3_NotReady_ObjVar;         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetHead_ObjVar;                                      // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ApproachIntercom_NotReady_ObjVar;                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachIntercom_ObjVar;                             // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MeetClaptrap_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ApproachIntercom_ClaptrapMoves_ObjVar;           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ApproachIntercom_ClaptrapArrived_ObjVar;         // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetBodyPart_More_A_ObjVar;                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetBodyPart_More_B_ObjVar;                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetBodyPart_More_C_ObjVar;                       // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeTheHead_ObjSetVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeTheHead_ObjVar;                                  // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBanditWarchief_BC2_ObjVar;                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBanditWarchief_BC3_ObjVar;                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBanditWarchief_ObjVar;                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBandits_ObjSetVar;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBandits_ObjVar;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ListenToTheBanditChief_SequenceStarted_ObjVar;   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ListenToTheBanditChief_SequenceEnded_ObjVar;     // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTheHead_ObjSetVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTheHead_ObjVar;                                  // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_PlayerArrived_ObjVar;                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_SequenceEnded_ObjVar;                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ListenToTheBanditChief_ObjSetVar;                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToTheBanditChief_ObjVar;                       // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapEnters_ObjVar;               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapReady_ObjVar;                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindBody_NOTREADY_ObjVar;                        // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_SequenceStarted_ObjVar;              // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Claptrap_JunkExit_ObjVar;                        // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseIntercom_Press2_ObjSetVar;                        // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseIntercom_Press2_ObjVar;                           // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineCrimeScene_NOTREADY_ObjVar;               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClaptrapIntercomIntervenes_ObjVar;               // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnChief_ObjVar;                               // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineCrimeScene2_ObjVar;                           // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClaptrapPointsToCrimescene_ObjVar;               // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetHead_NOTREADY_ObjVar;                         // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenFacilityDoor_ObjVar;                         // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ListenToTheBanditChief_ListeningStarted_ObjVar;  // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineCrimeScene2_NOTREADY_ObjVar;              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_A_ObjVar;                              // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_B_ObjVar;                              // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_C_ObjVar;                              // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClaptrapFakeInvestigate_Start_ObjVar;            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Claptrap_JunkExitReady_ObjVar;                   // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerSiloDoor_ObjVar;                                // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PowerSiloDoor_NOTREADY_ObjVar;                   // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapAtStaircase_ObjVar;          // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapAtCrimescene2_ObjVar;        // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ListenToTheBanditChief_ListeningEnded_ObjVar;    // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ListenToTheBanditChief_ChiefPosReady_ObjVar;     // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_UseIntercom_ScreenOff_ObjVar;                    // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapElectrify_Completed_ObjVar;  // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindTheHead_ClaptrapElectrify_Ready_ObjVar;      // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredDesert_ObjVar;                            // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_A_Loot_ObjVar;                         // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_B_Loot_ObjVar;                         // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillSkags_C_Loot_ObjVar;                         // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PowerSiloDoor_Precheck_ObjVar;                   // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindBanditWarchief_ClaptrapDespawn_ObjVar;       // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
		void OnDialogSequenceFinished_57();
		void OnDialogSequenceFinished_56();
		void OnDialogSequenceFinished_55();
		void OnDialogSequenceFinished_54();
		void OnDialogSequenceFinished_53();
		void OnDialogSequenceFinished_52();
		void OnDialogSequenceFinished_51();
		void OnDialogSequenceFinished_50();
		void OnDialogSequenceFinished_49();
		void OnDialogSequenceFinished_48();
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
		void Obj_SkagAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseIntercom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReturnToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ListenRecordings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SkagAmbush(class UObject* Context);
		void MCE_TalkToClaptrap(class UObject* Context);
		void MCE_UseIntercom(class UObject* Context);
		void MCE_KillBanditWarChief_LowHealth(class UObject* Context);
		void MCE_ReturnToClaptrap(class UObject* Context);
		void MCE_ListenRecordings(class UObject* Context);
		void MCE_Update_GoToMap(class UObject* Context);
		void Obj_FindBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ExamineCrimeScene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetCrimsonRaider(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ListenRecordings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetBodyPart_First(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetBodyPart_First(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetBodyPart_First(class UObject* Context);
		void Obj_GetBodyPart_More(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBanditWarChief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBanditWarchief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBanditWarchief_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindBanditWarchief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_UseIntercom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindBodyParts_TOOMUCH(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBodyParts_TOOMUCH_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBodyParts_TOOMUCH_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBodyParts_TOOMUCH_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindBodyParts_TOOMUCH_2_NotReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindBodyParts_TOOMUCH_3_NotReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ApproachIntercom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ApproachIntercom_NotReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ApproachIntercom(class UObject* Context);
		void Obj_INV_MeetClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_MeetClaptrap(class UObject* Context);
		void Obj_INV_ApproachIntercom_ClaptrapMoves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ApproachIntercom_ClaptrapArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ApproachIntercom_ClaptrapMoves(class UObject* Context);
		void MCE_INV_ApproachIntercom_ClaptrapArrived(class UObject* Context);
		void Obj_INV_GetBodyPart_More_A(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE__INV_GetBodyPart_More_A(class UObject* Context);
		void Obj_INV_GetBodyPart_More_B(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE__INV_GetBodyPart_More_B(class UObject* Context);
		void Obj_INV_GetBodyPart_More_C(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE__INV_GetBodyPart_More_C(class UObject* Context);
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillSkags(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindBodyParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_SkagAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeTheHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeTheHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TakeTheHead(class UObject* Context);
		void Obj_FindBanditWarchief_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBanditWarchief_BC3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBanditWarchief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindBanditWarchief_BC1(class UObject* Context);
		void MCE_FindBanditWarchief_BC2(class UObject* Context);
		void MCE_FindBanditWarchief_BC3(class UObject* Context);
		void MCE_FindBanditWarchief(class UObject* Context);
		void Set_ExamineCrimeScene(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeetCrimsonRaider(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Set_KillBandits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBandits(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillBandits(class UObject* Context);
		void Obj_INV_ListenToTheBanditChief_SequenceStarted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ListenToTheBanditChief_SequenceEnded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTheHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTheHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_SequenceStarted(class UObject* Context);
		void MCE_INV_ListenToTheBanditChief_SequenceEnded(class UObject* Context);
		void Obj_INV_FindTheHead_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_SequenceEnded(class UObject* Context);
		void Obj_INV_FindTheHead_SequenceEnded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ListenToTheBanditChief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ListenToTheBanditChief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ListenToTheBanditChief_ListeningStarted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ListenToTheBanditChief_ListeningStarted(class UObject* Context);
		void Obj_FindTheHead_Objective_PROXY();
		void Obj_FindTheHead_Objective_PROXY_1();
		void Obj_FindTheHead_Objective_PROXY_2();
		void Obj_FindTheHead_Objective_PROXY_3();
		void MCE_INV_FindTheHead_ClaptrapEnters(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapEnters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_ClaptrapReady(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBody_Objective_PROXY_4();
		void Obj_INV_FindBody_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindTheHead_SequenceStarted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Claptrap_JunkExit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_Claptrap_JunkExit(class UObject* Context);
		void Set_UseIntercom_Press2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseIntercom_Press2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UseIntercom_Press2(class UObject* Context);
		void Obj_INV_ExamineCrimeScene_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClaptrapIntercomIntervenes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SpawnChief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ExamineCrimeScene2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClaptrapPointsToCrimescene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GetHead_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_OpenFacilityDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ExamineCrimeScene2_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_KillSkags_A(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_A(class UObject* Context);
		void Obj_INV_KillSkags_B(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_B(class UObject* Context);
		void Obj_INV_KillSkags_C(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_C(class UObject* Context);
		void Obj_INV_ClaptrapFakeInvestigate_Start(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Claptrap_JunkExitReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PowerSiloDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_PowerSiloDoor_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_ClaptrapAtStaircase(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapAtStaircase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_ClaptrapAtCrimescene(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapAtCrimescene2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineCrimeScene(class UObject* Context);
		void Obj_INV_ListenToTheBanditChief_ListeningEnded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ListenToTheBanditChief_ChiefPosReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ListenToTheBanditChief_ChiefPosReady(class UObject* Context);
		void MCE_INV_ListenToTheBanditChief_SequenceStarted(class UObject* Context);
		void MCE_PowerSiloDoor(class UObject* Context);
		void MCE_PowerSiloDoor_Clear(class UObject* Context);
		void Obj_INV_UseIntercom_ScreenOff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_ClaptrapElectrify_Completed(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapElectrify_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindTheHead_ClaptrapElectrify_Ready(class UObject* Context);
		void Obj_INV_FindTheHead_ClaptrapElectrify_Ready(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PowerSiloDoor_IsReady(class UObject* Context);
		void Obj_INV_EnteredDesert(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredDesert(class UObject* Context);
		void MCE_INV_ExamineCrimeScene2_NOTREADY(class UObject* Context);
		void Obj_INV_KillSkags_A_Loot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_A_Loot(class UObject* Context);
		void Obj_INV_KillSkags_B_Loot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_B_Loot(class UObject* Context);
		void Obj_INV_KillSkags_C_Loot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_KillSkags_C_Loot(class UObject* Context);
		void Obj_INV_PowerSiloDoor_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindBanditWarchief_ClaptrapDespawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ixora_Main03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
