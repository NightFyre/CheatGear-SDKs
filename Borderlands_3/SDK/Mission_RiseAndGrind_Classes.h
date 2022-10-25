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
	 * BlueprintGeneratedClass Mission_RiseAndGrind.Mission_RiseAndGrind_C
	 * Size -> 0x01A0 (FullSize[0x06B0] - InheritedSize[0x0510])
	 */
	class UMission_RiseAndGrind_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToRiseAndGrind_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RequestService_ObjSetVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillPowerhouse_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InsertPowerCore_ObjSetVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCoffeeBotFirstTime_ObjSetVar;                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RequestService_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillPowerhouse_ObjVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InsertPowerCore_ObjVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCoffeeBotFirstTime_ObjVar;                     // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_StealThermoses_ObjSetVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToRiseAndGrind_ObjSetVar;                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RescueBaristaBot_ObjSetVar;                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceThermos_ObjSetVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_StealThermoses_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToRiseAndGrind_ObjVar;                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RescueBaristaBot_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceThermos_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToRiseAndGrind_ObjVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringCoffeeToAtlas_ObjSetVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HelpAtlasDefend_ObjSetVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_HelpAtlasDefend_ObjVar;                              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BringCoffeeToAtlas_ObjVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeFilledThermos_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeFilledThermos_ObjVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RequestService_SecondTime_ObjSetVar;                 // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RequestService_SecondTime_ObjVar;                    // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpPowerCore_ObjSetVar;                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpPowerCore_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BotPouredCoffee1_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BotInPosition_ObjVar;                                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FuseExplodes_ObjVar;                                 // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LightsOff_ObjVar;                                    // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ChangeWaypoints_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToBot_ObjSetVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBot_ObjVar;                                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ExitAtlas_ObjVar;                                    // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EnteredRiseAndGrind_ObjVar;                          // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave1_ObjVar;                                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ThermosFightWave1_ObjSetVar;                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ThermosFightWave2_ObjSetVar;                         // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave2_ObjVar;                                        // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ThermosFightCommander_ObjSetVar;                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave3_ObjVar;                                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnCarl_ObjVar;                                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 LoreleiBloodyClose;                                      // 0x0688(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VOZ0[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_FindCommander_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindCommander_ObjVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoffeeCupAttackWaves_ObjVar;                         // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void SET_RescueBaristaBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_PlaceThermos(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_StealThermoses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReturnToRiseAndGrind(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RescueBaristaBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlaceThermos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GoToRiseAndGrind(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToRiseAndGrind(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_StealThermoses(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToCoffeeBotFirstTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_InsertPowerCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KillPowerhouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_HelpAtlasDefend(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_BringCoffeeToAtlas(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_HelpAtlasDefend(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RequestService(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToCoffeeBotFirstTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GoToRiseAndGrind(class UObject* Context);
		void Update_RequestService(class UObject* Context);
		void Update_KillPowerhouse(class UObject* Context);
		void Update_InsertPowerCore(class UObject* Context);
		void Update_TalkToCoffeeBotFirstTime(class UObject* Context);
		void Update_StealThermos(class UObject* Context);
		void Update_ReturnToRiseAndGrind(class UObject* Context);
		void Update_RescueBaristaBot(class UObject* Context);
		void Update_PlaceThermos(class UObject* Context);
		void Update_HelpAtlasDefend(class UObject* Context);
		void Update_TurnIn(class UObject* Context);
		void OBJ_BringCoffeeToAtlas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeFilledThermos(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TakeFilledThermos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RequestService_SecondTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RequestService_SecondTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_RequestService_SecondTime(class UObject* Context);
		void OBJ_PickUpPowerCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpPowerCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PickUpPowerCore(class UObject* Context);
		void OBJ_BotPouredCoffee1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Coffee1Poured(class UObject* Context);
		void Set_GoToRiseAndGrind(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PlacedCoffee(class UObject* Context);
		void OBJ_BotInPosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BotInPosition(class UObject* Context);
		void SET_InsertPowerCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FuseExplodes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FuseExplodes(class UObject* Context);
		void OBJ_LightsOff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LightsOff(class UObject* Context);
		void OBJ_ChangeWaypoints(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ChangeWaypoints(class UObject* Context);
		void SET_TalkToBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkedToBot(class UObject* Context);
		void SET_KillPowerhouse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ExitAtlas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ExitedAtlas(class UObject* Context);
		void OBJ_EnteredRiseAndGrind(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredRiseAndGrind(class UObject* Context);
		void OBJ_Wave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Wave1Cleared(class UObject* Context);
		void OBJ_Wave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Wave2Cleared(class UObject* Context);
		void SET_ThermosFightWave1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ThermosFightWave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ThermosFightCommander(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Wave3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Wave3Cleared(class UObject* Context);
		void OBJ_SpawnCarl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SpawnCarl(class UObject* Context);
		void Set_FindCommander(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindCommander(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_ThermosFightWave1(class UObject* Context);
		void SET_RequestService(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindCommander_Objective_PROXY();
		void Obj_FindCommander_Objective_PROXY_1();
		void Obj_CoffeeCupAttackWaves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CoffeeCupAttackWaves_Objective_PROXY_2();
		void Obj_CoffeeCupAttackWaves_Objective_PROXY_3();
		void Obj_CoffeeCupAttackWaves_Objective_PROXY_4();
		void ExecuteUbergraph_Mission_RiseAndGrind(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
