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
	 * BlueprintGeneratedClass Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C
	 * Size -> 0x0120 (FullSize[0x0630] - InheritedSize[0x0510])
	 */
	class UMission_Ep23_TyreenFinalBoss_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillTyreen_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTyreen_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterPortalToPandora_ObjSetVar;                      // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPortalToPandora_ObjVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilithGameOver_ObjSetVar;                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilithGameOver_ObjVar;                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EndGameCinematic_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EndGameCinematic_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TyreenTitleCard_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TyreenTitleCard_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTyreen_ObjSetVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTyreen_ObjVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootVault_ObjSetVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootVault_ObjVar;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb03_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTannisGameOver_ObjSetVar;                      // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTannisGameOver_ObjVar;                         // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetVaultKey_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSanctuary_ObjSetVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSanctuary_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenEridianChest_ObjVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenEridianChest_ObjSetVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTannisAgain_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTannisAgain_ObjVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceArtifact_ObjSetVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceArtifact_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShowCredits_ObjSetVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShowCredits_ObjVar;                                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveVault_ObjVar;                                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVault_ObjVar;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TyreenDeadCine_ObjSetVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TyreenDeadCine_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLilithsRoom_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void Set_FindTyreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTyreen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Final_Boss_Map_Entered(class UObject* Context);
		void Obj_EnterPortalToPandora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LootVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterPortalToPandora(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_Loot_Vault(class UObject* Context);
		void Update_Breadcrumb01(class UObject* Context);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb02(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb03(class UObject* Context);
		void Obj_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToTannisGameOver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToTannisGameOver(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_Talked_To_Tannis_Game_Over(class UObject* Context);
		void MissionKickoff();
		void Update_Talked_To_Lilith_Game_Over(class UObject* Context);
		void Obj_GetVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToSanctuary(class UObject* Context);
		void Obj_TyreenTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenEridianChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenEridianChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_OpenEridianChest(class UObject* Context);
		void Set_TyreenTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceTo_OpenEridianChest(class UObject* Context);
		void Set_TalkToTannisAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToTannisAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToTannisAgain(class UObject* Context);
		void Set_PlaceArtifact(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceArtifact(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_UseMayhemDevice(class UObject* Context);
		void Update_Play_Cinematic(class UObject* Context);
		void Obj_TalkToTannisGameOver_Objective_PROXY();
		void Set_ShowCredits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShowCredits(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ShowCredits(class UObject* Context);
		void AdvanceTo_EndGameCinematic(class UObject* Context);
		void Obj_EndGameCinematic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_LootVault(class UObject* Context);
		void Set_EndGameCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LeaveVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayersInsideVault(class UObject* Context);
		void PlayersOutsideVault(class UObject* Context);
		void Set_TalkToLilithGameOver(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TyreenDeadCine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TyreenDeadCine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToLilithGameOver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillTyreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GoToLilithsRoom(class UObject* Context);
		void Obj_GoToLilithsRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillTyreen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Portal_Entered(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep23_TyreenFinalBoss(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
