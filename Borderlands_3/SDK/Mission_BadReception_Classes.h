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
	 * BlueprintGeneratedClass Mission_BadReception.Mission_BadReception_C
	 * Size -> 0x00D4 (FullSize[0x05E4] - InheritedSize[0x0510])
	 */
	class UMission_BadReception_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KickOffDialogue_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchAndCollect_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToSal_ObjVar;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillSal_ObjVar;                                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectTinfoil_ObjVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ButtslamDoor_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetHanger_ObjVar;                                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchLaundry_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchTinfoilArea_ObjVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchSatelliteArea_ObjVar;                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakSatellite_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAntenna_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchUmbrellaArea_ObjVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectUmbrella_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obk_SearchUtensilArea_ObjVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectUtensil_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroySatelliteOne_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToSalAgain_ObjVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroySatelliteTwo_ObjVar;                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroySatelliteThree_ObjVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpeakLineForTink;                                        // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q4SE[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_PlayerRetort_ObjVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation;                                            // 0x05D8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_TalkToClaptrap(class UObject* Context);
		void Set_KickOffDialogue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_SearchAndCollect(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToSal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillSal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectTinfoil(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchLaundry(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ButtslamDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ButtslamDoor(class UObject* Context);
		void Obj_GetHanger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchTinfoilArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SearchLaundry(class UObject* Context);
		void Advance_SearchTinfoilArea(class UObject* Context);
		void Advance_SpeaktoSal(class UObject* Context);
		void Advance_KillSal(class UObject* Context);
		void Obj_BreakSatellite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchSatelliteArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SearchSatelliteArea(class UObject* Context);
		void Obj_GetAntenna(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BreakSatellite(class UObject* Context);
		void Obj_CollectUmbrella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectUtensil(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchUmbrellaArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SearchUmbrellaArea(class UObject* Context);
		void Obk_SearchUtensilArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SearchUtensilArea(class UObject* Context);
		void Advance_CollectTinfoil(class UObject* Context);
		void Obj_DestroySatelliteOne(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroySatelliteOne(class UObject* Context);
		void Advance_SpeakToSalAgain(class UObject* Context);
		void Obj_SpeakToSalAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroySatelliteTwo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroySatelliteThree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroySatelliteTwo(class UObject* Context);
		void Update_DestroySatelliteThree(class UObject* Context);
		void Update_HelpPlayerButtSlamOne(class UObject* Context);
		void Update_HelpPlayerButtSlamTwo(class UObject* Context);
		void Update_HelpPlayerButtSlamThree(class UObject* Context);
		void Update_HelpPlayerButtSlamFour(class UObject* Context);
		void Update_HelpPlayerMantleOne(class UObject* Context);
		void Update_HelpPlayerMantleTwo(class UObject* Context);
		void Update_HelpPlayerMantleThree(class UObject* Context);
		void Update_HelpPlayerMantleFour(class UObject* Context);
		void Update_HelpPlayerElectricOne(class UObject* Context);
		void Update_HelpPlayerElectricTwo(class UObject* Context);
		void Update_HelpPlayerElectricThree(class UObject* Context);
		void Update_HelpPlayerElectricFour(class UObject* Context);
		void Update_SwitchWasShot(class UObject* Context);
		void Update_HelpPlayerSlideOne(class UObject* Context);
		void Update_HelpPlayerSlideTwo(class UObject* Context);
		void Update_HelpPlayerSlideThree(class UObject* Context);
		void Update_HelpPlayerSlideFour(class UObject* Context);
		void Upadate_SpeakLineForTink(class UObject* Context);
		void Obj_PlayerRetort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void MCE_MissionDelivery(class UObject* Context);
		void ExecuteUbergraph_Mission_BadReception(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
