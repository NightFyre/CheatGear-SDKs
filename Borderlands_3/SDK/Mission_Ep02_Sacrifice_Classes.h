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
	 * BlueprintGeneratedClass Mission_Ep02_Sacrifice.Mission_Ep02_Sacrifice_C
	 * Size -> 0x0170 (FullSize[0x0680] - InheritedSize[0x0510])
	 */
	class UMission_Ep02_Sacrifice_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_BeginHolyBroadCastMission_ObjSetVar;                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowLilithTosHIVS_ObjSetVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowLilithToShivs_ObjVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetIntoShivsOffice_ObjVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLever;                                                // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NKIS[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_MeetLilithsContact_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetLilithsContact_ObjVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootVaughnDown_ObjSetVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootDownVaugn_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LilithUsesComputer_ObjSetVar;                        // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WaveOneCount;                                            // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OG43[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GetIntoShivsOffice_ObjSetVar;                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LilithUsesShivsComputer_ObjVar;                      // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerSpeaksWithLilithAfterFight_ObjVar;             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowLilithPervasive_ObjVar;                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LilithGoesToHerOffice_ObjVar;                        // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnTitleCard_ObjVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentLine;                                             // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OAVW[0x4];                                   // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_WatchVaughnTitleCard_ObjSetVar;                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation;                                            // 0x05B0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CPVY[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_ClaptrapToFinalSpot_ObjVar;                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeVaughnToLilith_ObjSetVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TellVaughnYouAreReady_ObjVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscortVaughnToLilith_ObjSetVar;                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToLilithAfterVaughnEscort_ObjVar;               // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetLilithsContact_Breadcrumb01_ObjVar;              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillSkagsIfNeeded_ObjSetVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToZeroSkags_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EscortVaughnToSkagRidge_ObjVar;                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LilithOpensDoorsToZone_ObjVar;                       // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FightWithLilith_ObjVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LilithBackAtPoint_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LilithWantsToGoToShivsOffice_ObjSetVar;              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WatchMouthpieceMovie_ObjSetVar;                      // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchMovie_ObjVar;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnSpeaksAboutCoVTrashingCamp_ObjVar;             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnArrives_ObjVar;                                // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilithAfterEscortingVaughnn_ObjSetVar;         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnLeaps_ObjVar;                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoorsFullyOpened_ObjVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVAttackLilith_ObjSetVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToLilithAboutGrenadeMod_ObjVar;                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             NewVar_1;                                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToLilithNoGrenadeMod_ObjVar;                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void Set_ShootVaughnDown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootDownVaugn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LilithUsesComputer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetLilithsContact(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ShootDownVaughn(class UObject* Context);
		void Set_GetIntoShivsOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_PlayerAndLilithInShivsOffice(class UObject* Context);
		void Set_MeetLilithsContact(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LilithUsesShivsComputer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_LilithUsesShivsComputer(class UObject* Context);
		void Obj_PlayerSpeaksWithLilithAfterFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowLilithPervasive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowLilithPervasive_Objective_PROXY();
		void Advance_LilithOpenedShivsDoors(class UObject* Context);
		void Obj_LilithGoesToHerOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LilithGoesToHerOffice(class UObject* Context);
		void Obj_VaughnTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_LilithOpensDoorsToZone(class UObject* Context);
		void Set_WatchVaughnTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClaptrapToFinalSpot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClaptrapToFinalSpot(class UObject* Context);
		void Set_TakeVaughnToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TellVaughnYouAreReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EscortVaughnToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToLilithAfterVaughnEscort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SpokeToLilithAfterVaughnEscort(class UObject* Context);
		void Obj_GetIntoShivsOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_VaughnBeginsLeadingPlayer();
		void Update_TellVaughnYouAreReady(class UObject* Context);
		void Obj_MeetLilithsContact_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MeetLilithsContact_Breadcrumb01(class UObject* Context);
		void Set_KillSkagsIfNeeded(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToZeroSkags(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SkagsExist(class UObject* Context);
		void Advance_GetToZeroSkags(class UObject* Context);
		void Obj_FollowLilithToShivs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EscortVaughnToSkagRidge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_EscortVaughnToSkagRidge(class UObject* Context);
		void Obj_LilithOpensDoorsToZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FightWithLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_FightWithLilith(class UObject* Context);
		void Advance_LilithBackAtPoint(class UObject* Context);
		void Obj_LilithBackAtPoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LilithWantsToGoToShivsOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_PlayerSpeaksWithLilithAfterFight(class UObject* Context);
		void Set_FollowLilithToShivs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ClaptrapMakesKarateNoises(class UObject* Context);
		void Set_WatchMouthpieceMovie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WatchMovie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_MouthpieceMovieEndedInShivsOffice(class UObject* Context);
		void MCE_LilithAndPlayerOutsideShivsOffice(class UObject* Context);
		void Advance_MeetLilithsContact(class UObject* Context);
		void MCE_LilithSpeaksAboutSunSmashers(class UObject* Context);
		void MCE_LilithVoGRambling(class UObject* Context);
		void Advance_VaughnSpeaksAboutCoVTrashingCamp(class UObject* Context);
		void Obj_VaughnSpeaksAboutCoVTrashingCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_VaughnArrives(class UObject* Context);
		void Obj_VaughnArrives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToLilithAfterEscortingVaughnn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_BeginHolyBroadCastMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_VaughnLeaps(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_VaughnLeaps(class UObject* Context);
		void Update_DoorOpened(class UObject* Context);
		void Update_LilithFindsComputer(class UObject* Context);
		void Update_LilithUsesKeyboardToOpenDoors(class UObject* Context);
		void Obj_DoorsFullyOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_DoorsFullyOpened(class UObject* Context);
		void Set_CoVAttackLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToLilithAboutGrenadeMod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SpeakToLilithAboutGrenadeMod(class UObject* Context);
		void Obj_SpeakToLilithNoGrenadeMod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceSpeakToLilithNoGrenadeMod(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep02_Sacrifice(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
