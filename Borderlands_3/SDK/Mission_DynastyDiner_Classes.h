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
	 * BlueprintGeneratedClass Mission_DynastyDiner.Mission_DynastyDiner_C
	 * Size -> 0x01B8 (FullSize[0x06C8] - InheritedSize[0x0510])
	 */
	class UMission_DynastyDiner_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FollowServiceBot_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillArcherRowe_ObjSetVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillMaliwan_ObjSetVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMaliwan_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowServiceBot_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillArcherRowe_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectRoastedRatch_ObjSetVar;                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectRatchMeat_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceRatchMeat_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceRatchMeat_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillRatchLarva_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillRatchLarva_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SpawnBurgerBot_SecondTime_ObjSetVar;                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnBurgerBot_SecondTime_ObjVar;                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToDD_SecondTime_ObjSetVar;                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToDD_SecondTime_ObjVar;                        // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterEmployeeArea_ObjSetVar;                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EnterEmployeeArea_ObjVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MakeBurgerAttempt_ObjSetVar;                         // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MakerBurgerAttempt_ObjVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BurgerBotMoving_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToLorelei_ObjSetVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToLorelei_ObjVar;                              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerAtDoor_ObjVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BothObjectivesComplete_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveOn_ObjVar;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeetBeau_ObjSetVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetBeau_ObjVar;                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillRatchHive_ObjSetVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillRatchHive_ObjVar;                                // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpMeal_ObjSetVar;                                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpMeal_ObjVar;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendBurgerBot_ObjSetVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendBurgerBot_ObjVar;                              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowServiceBot2_ObjSetVar;                         // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowServiceBot2_ObjVar;                            // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerAtDefense_ObjVar;                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BothDefensePointCompleted_ObjVar;                    // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerExitsAtlasBase_ObjVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BeauBeckon_ObjVar;                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BotDefense2_ObjSetVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendBot2_ObjVar;                                   // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowServiceBot3_ObjSetVar;                         // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BotMove3_ObjVar;                                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DropBurger_ObjVar;                                   // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AllObjectivesCompleted_ObjVar;                       // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerAtPoint2_ObjVar;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Follow1FakeVisibleObjective_ObjVar;                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BothObjectivesUpdated2_ObjVar;                       // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Follow2FakeVisibleObjective_ObjVar;                  // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Follow3FakeVisibleObjective_ObjVar;                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DropBurgerOnLoad_ObjVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RatchAdvice_ObjVar;                                  // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteMission_ObjVar;                              // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void OBJ_ReturnToDD_SecondTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceRatchMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToDD_SecondTime(class UObject* Context);
		void Update_PlaceRatchMeat(class UObject* Context);
		void Update_FollowServiceBot(class UObject* Context);
		void SET_KillRatchLarva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillRatchLarva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillRatchLarva(class UObject* Context);
		void OBJ_SpawnBurgerBot_SecondTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_SpawnBurgerBot_SecondTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_PlaceRatchMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReturnToDD_SecondTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CollectRatchMeat(class UObject* Context);
		void Update_SpawnBurgerBot_SecondTime(class UObject* Context);
		void OBJ_CollectRatchMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_EnterEmployeeArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredEmployeeArea(class UObject* Context);
		void SET_EnterEmployeeArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_MakeBurgerAttempt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MakerBurgerAttempt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AttemptedBurger(class UObject* Context);
		void OBJ_BurgerBotMoving(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BurgerBotMoving(class UObject* Context);
		void SET_ReturnToLorelei(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToLorelei(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TurnInQuest(class UObject* Context);
		void SET_CollectRoastedRatch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillMaliwan(class UObject* Context);
		void OBJ_KillArcherRowe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlayerAtDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerAtDoor(class UObject* Context);
		void OBJ_BothObjectivesComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BothObjCompleted(class UObject* Context);
		void Obj_MoveOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DoorSequenceCompleted(class UObject* Context);
		void SET_MeetBeau(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MeetBeau(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MetBeau(class UObject* Context);
		void OBJ_FollowServiceBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillRatchHive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillRatchHive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillRatchHive(class UObject* Context);
		void SET_PickUpMeal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUpMeal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MealPickedUp(class UObject* Context);
		void SET_DefendBurgerBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendBurgerBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefendedBot(class UObject* Context);
		void SET_FollowServiceBot2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowServiceBot2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowedBotRound2(class UObject* Context);
		void Obj_KillMaliwan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillArcherRowe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FollowServiceBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlayerAtDefense(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerAtDefense(class UObject* Context);
		void OBJ_BothDefensePointCompleted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlayerExitsAtlasBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialogue_ExitAtlas(class UObject* Context);
		void OBJ_BeauBeckon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BeauBeckon(class UObject* Context);
		void SET_BotDefense2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendBot2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefendBot2(class UObject* Context);
		void SET_FollowServiceBot3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BotMove3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BotMove3(class UObject* Context);
		void SET_KillMaliwan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DropBurger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_AllObjectivesCompleted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BurgerDropped(class UObject* Context);
		void OBJ_PlayerAtPoint2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerAtPoint2(class UObject* Context);
		void OBJ_Follow1FakeVisibleObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_BothObjectivesUpdated2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Follow2FakeVisibleObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Follow3FakeVisibleObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClearedEnemies(class UObject* Context);
		void OBJ_DropBurgerOnLoad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RatchAdvice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RatchAdvice(class UObject* Context);
		void OBJ_CompleteMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DynastyDiner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
