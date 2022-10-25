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
	 * BlueprintGeneratedClass SideMission_DLC2_PrivateEyePart1.SideMission_DLC2_PrivateEyePart1_C
	 * Size -> 0x01C0 (FullSize[0x06D0] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_PrivateEyePart1_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindNotes_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindJournal_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindEchoLog_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveItemsToBurton_ObjSetVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveEchoToBurton_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetBurtonCemetery_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetBurtonCemetery_ObjVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckTombstones_ObjSetVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckTombstones_ObjVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToCrypt_ObjSetVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCrypt_ObjVar;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCrypt_ObjSetVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCrypt_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchClues_Crypt_ObjSetVar;                         // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchClues_Crypt_ObjVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExaminePainting_ObjSetVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerExaminePaintingPiece_ObjVar;                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePainting_ObjSetVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePainting_ObjVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlacePainting_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePainting_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateCrypt_ObjSetVar;                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateCrypt_ObjVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchClues_FinalRoom_ObjSetVar;                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchClues_FinalRoom_ObjVar;                        // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveBoxToBurton_ObjSetVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveBoxToBurton_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SurviveAmbush_ObjSetVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveAmbush_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeBox_ObjSetVar;                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeBox_ObjVar;                                      // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_TombstoneLyle_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_Tombstone_Aubre_ObjVar;                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_Tombstone_Bradd_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerFailedToFind_ObjVar;                       // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FindEchoLogAndJournal_ObjVar;                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Intro_ObjSetVar;                                     // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Intro_ObjVar;                                    // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_ReadingATombstone_ObjVar;                        // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenCrypt_ObjSetVar;                                 // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_NPCUseCryptButton_ObjVar;                        // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_CryptOpen_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonReadyToExaminePaintingPiece_ObjVar;        // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonSpawnedInCemetary_ObjVar;                  // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonReadyToPutPaintingAway_ObjVar;             // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonDonePuttingPaintingAway_ObjVar;            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveJournalToBurton_ObjVar;                          // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToReadJournal_ObjVar;                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_DoneReadingJournal_ObjVar;                           // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_JournalClosed_ObjVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonEnteredBlackPlaneAfterOffice_ObjVar;       // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonDoneLookingAtCrypt_ObjVar;                 // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BurtonArrivedAtCrypt_ObjVar;                     // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForOpenCrypt_ObjVar;                        // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForAmbushSpawn_ObjVar;                          // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void Obj_GiveEchoToBurton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveItemsToBurton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeetBurtonCemetery(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetBurtonCemetery(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckTombstones(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CheckTombstones(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchClues_Crypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchClues_Crypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ExaminePainting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlayerExaminePaintingPiece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakePainting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakePainting(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlacePainting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlacePainting(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvestigateCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchClues_FinalRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchClues_FinalRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveBoxToBurton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBoxToBurton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SurviveAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SurviveAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeBox(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeBox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void FoundJournal(class UObject* Context);
		void FoundEchoLog(class UObject* Context);
		void GaveEchoToBurton(class UObject* Context);
		void MetBurtonCemetery(class UObject* Context);
		void WentToCrypt(class UObject* Context);
		void EnteredCrypt(class UObject* Context);
		void FoundClues_Crypt(class UObject* Context);
		void ExaminedPainting(class UObject* Context);
		void TookPainting(class UObject* Context);
		void PlacedPainting(class UObject* Context);
		void InvestigatedCrypt(class UObject* Context);
		void FoundClues_FinalRoom(class UObject* Context);
		void GaveBoxToBurton(class UObject* Context);
		void SurvivedAmbush(class UObject* Context);
		void TookBox(class UObject* Context);
		void Obj_FindJournal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindNotes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CheckedTombstone_Lyle(class UObject* Context);
		void CheckedTombstone_Bradd(class UObject* Context);
		void CheckedTombstone_Aubre(class UObject* Context);
		void Inv_Obj_TombstoneLyle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_Tombstone_Bradd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_Tombstone_Aubre(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void EndMission(class UObject* Context);
		void INV_Obj_PlayerFailedToFind(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerFailedToFind(class UObject* Context);
		void INV_Obj_FindEchoLogAndJournal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Intro(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_Intro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_ReadingATombstone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_NPCUseCryptButton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void NPCUsedCryptButton(class UObject* Context);
		void INV_Obj_CryptOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CryptOpen(class UObject* Context);
		void INV_Obj_BurtonReadyToExaminePaintingPiece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BurtonSpawnedInCemetary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BurtonReadyToPutPaintingAway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BurtonDonePuttingPaintingAway(class UObject* Context);
		void INV_Obj_BurtonDonePuttingPaintingAway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveJournalToBurton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void GaveJournalToBurton(class UObject* Context);
		void INV_ReadyToReadJournal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_DoneReadingJournal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_JournalClosed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void JournalClosed(class UObject* Context);
		void INV_Obj_BurtonEnteredBlackPlaneAfterOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BurtonEnteredBlackPlaneAfterOffice(class UObject* Context);
		void INV_Obj_BurtonDoneLookingAtCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BurtonArrivedAtCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BurtonArrivedAtCrypt(class UObject* Context);
		void INV_Obj_ReadyForOpenCrypt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForAmbushSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CustomEvent_OnEchoLog_Finished();
		void MCE_DEBUG_PRIVATE01_JumpToEndMission(class UObject* Context);
		void Obj_FindEchoLog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_SideMission_DLC2_PrivateEyePart1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
