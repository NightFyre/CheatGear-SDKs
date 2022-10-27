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
	 * BlueprintGeneratedClass Mission_InvasionOfPrivacy.Mission_InvasionOfPrivacy_C
	 * Size -> 0x0138 (FullSize[0x0648] - InheritedSize[0x0510])
	 */
	class UMission_InvasionOfPrivacy_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_CollectBelongings_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetDiary_ObjSetVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBeans_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OMGStopBeans_ObjSetVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReallyGuysFindBeans_ObjSetVar;                       // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeOutBeans_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetWeaponsCache_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToAva_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBelongings_ObjVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetDiary_ObjVar;                                     // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBeans_ObjVar;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OMGStopBeans_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReallyGuysFindBeans_ObjVar;                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeOutBeans_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetHideAKey_ObjVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SecureWeaponsCache_ObjVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToAva_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBelongings_Bowl_ObjVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBelongings_GameConsole_ObjVar;                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBelongings_Keytar_ObjVar;                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindHideAKey_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectingBelingings_BonsaiTree_ObjVar;              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceAvasBelongings_ObjSetVar;                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceAvasBelongings_ObjVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBelongings_Bonsai_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBelongings_Bowl_ObjVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBelongings_Console_ObjVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBelongings_Controller_ObjVar;                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBelongings_Keytar_ObjVar;                       // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToAvasRoom_ObjSetVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToAvasRoom_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSanctuary_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectBelongings_Controller_ObjVar;                 // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToAthenas_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToAthenas_ObjVar;                                  // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FindStuffCount;                                          // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D0F1[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_CollectBelongingsPart2_ObjSetVar;                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectionBelongingsPart2_ObjVar;                    // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_24();
		void SET_CollectBelongings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetDiary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_OMGStopBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReallyGuysFindBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TakeOutBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetWeaponsCache(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReturnToAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBelongings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetDiary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OMGStopBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReallyGuysFindBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeOutBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GetHideAKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_SecureWeaponsCache(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReturnToAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectBelongings_Bowl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectBelongings_GameConsole(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectBelongings_Keytar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenedSafe(class UObject* Context);
		void MCE_OpenedHideAKey(class UObject* Context);
		void SET_FindHideAKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectingBelingings_BonsaiTree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceAvasBelongings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceAvasBelongings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceBelongings_Bonsai(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceBelongings_Bowl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceBelongings_Console(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceBelongings_Controller(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceBelongings_Keytar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedBonsai(class UObject* Context);
		void MCE_ReturnedBowl(class UObject* Context);
		void MCE_ReturnedConsole(class UObject* Context);
		void MCE_ReturnedController(class UObject* Context);
		void MCE_ReturnedKeytar(class UObject* Context);
		void MCE_ReturnedBelongingsToAva(class UObject* Context);
		void SET_ReturnToAvasRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToAvasRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToRoom(class UObject* Context);
		void OBJ_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToSactuary(class UObject* Context);
		void Obj_CollectBelongings_Controller(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToAthenas(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToAthenas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedOnAthenas(class UObject* Context);
		void MCE_FoundStuff(class UObject* Context);
		void MCE_ApproachDiaryPage1(class UObject* Context);
		void MCE_ApproachDiaryPage2(class UObject* Context);
		void MCE_ApproachDiaryPage3(class UObject* Context);
		void MCE_BeansReinforcements(class UObject* Context);
		void MCE_FoundStuff2(class UObject* Context);
		void SET_CollectBelongingsPart2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectionBelongingsPart2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WhereAreTheFarts(class UObject* Context);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_InvasionOfPrivacy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
