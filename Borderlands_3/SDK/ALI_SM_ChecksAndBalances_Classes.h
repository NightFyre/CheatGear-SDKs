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
	 * BlueprintGeneratedClass ALI_SM_ChecksAndBalances.ALI_SM_ChecksAndBalances_C
	 * Size -> 0x0198 (FullSize[0x0690] - InheritedSize[0x04F8])
	 */
	class UALI_SM_ChecksAndBalances_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		int32_t                                                    OldCount;                                                // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_52LP[0x4];                                   // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_FindClues_ObjSetVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindClues_ObjVar;                                    // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindThadeus_ObjVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowCarrots_ObjSetVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowCarrots_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowCarrots_BC1_ObjVar;                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowCarrots_BC2_ObjVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowCarrots_BC3_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeingThaddeus_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToThadeus_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_DidNotFindClue_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToSpawnEnforcer_ObjVar;                     // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEnforcer_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetKey_ObjVar;                                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeThaddeus_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowThaddeus_1_ObjSetVar;                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowThaddeus_1_ObjVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowThaddeus_2_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowThaddeus_2_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckMate_ObjSetVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeThaddeusPlace_ObjVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEnforcer_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEnforcerAndCrew_ObjSetVar;                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCrew_ObjVar;                                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_KilledEnforcerAndCrew_ObjVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeThaddeus_ObjSetVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveToCheckmatePosition_ObjVar;                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttackEnemyKing_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBlackheartArmy_ObjVar;                         // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Knighting_ObjSetVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_ObjVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KneelInFrontOfKrieg_ObjVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForDancingFinish_ObjVar;                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillEnforcerPreCheck_ObjVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerArrived_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ThaddeusArrived_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DefeatBlackheartArmy_King_ObjVar;                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DefeatBlackheartArmy_Minions_ObjVar;             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_MayaBackToPosition_ObjVar;                           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_KreigBackInPosition_ObjVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ThaddeusBackInPosition_ObjVar;                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillCrew_PreCheck_ObjVar;                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindDistort_ObjSetVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDistort_ObjVar;                                  // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkKrieg_ObjSetVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkKrieg_ObjVar;                                    // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OPT_Obj_SpeakToKriegAboutTale_ObjVar;                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FollowThaddeus_1_StartMove_ObjVar;               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FollowThaddeus_2_StartMove_ObjVar;               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Set_FindClues(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindThadeus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindClues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundClue(class UObject* Context);
		void Obj_FollowCarrots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowedCarrots(class UObject* Context);
		void Set_FollowCarrots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowCarrots_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowCarrots_BC1(class UObject* Context);
		void Obj_FollowCarrots_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowCarrots_BC2(class UObject* Context);
		void Obj_FollowCarrots_BC3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowCarrots_BC3(class UObject* Context);
		void Obj_TalkToThadeus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToThadeus(class UObject* Context);
		void Set_FreeingThaddeus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindThadeus_Objective_PROXY();
		void INV_DidNotFindClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DidNotFindClue(class UObject* Context);
		void INV_Obj_ReadyToSpawnEnforcer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToSpawnEnforcer(class UObject* Context);
		void Obj_KillEnforcer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledEnforcer(class UObject* Context);
		void Obj_GetKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetKey(class UObject* Context);
		void Obj_FreeThaddeus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FreedThaddeus(class UObject* Context);
		void Obj_FollowThaddeus_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowThaddeus_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowThaddeus_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrived(class UObject* Context);
		void Set_FollowThaddeus_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeThaddeusPlace(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TookThaddeusPlace(class UObject* Context);
		void Set_CheckMate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillEnforcer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillEnforcerAndCrew(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCrew(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledCrew(class UObject* Context);
		void INV_KilledEnforcerAndCrew(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FreeThaddeus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MoveToCheckmatePosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MovedToCheckmatePosition(class UObject* Context);
		void Obj_AttackEnemyKing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AttackedEnemyKing(class UObject* Context);
		void Obj_DefeatBlackheartArmy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedBlackheartArmy(class UObject* Context);
		void Obj_TalkToKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToKingKrieg(class UObject* Context);
		void Set_Knighting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KneelInFrontOfKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KneeledInFrontOfKrieg(class UObject* Context);
		void INV_Obj_ReadyForDancingFinish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_KillEnforcerPreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ThaddeusArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ThaddeusArrived(class UObject* Context);
		void MCE_PlayerLeft(class UObject* Context);
		void INV_Obj_DefeatBlackheartArmy_King(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedBlackheartArmy_King(class UObject* Context);
		void INV_Obj_DefeatBlackheartArmy_Minions(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedBlackheartArmy_Minions(class UObject* Context);
		void INV_MayaBackToPosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MayaBackInPosition(class UObject* Context);
		void INV_KreigBackInPosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KriegBackInPosition(class UObject* Context);
		void INV_ThaddeusBackInPosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ThaddeusBackInPostion(class UObject* Context);
		void INV_Obj_KillCrew_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedKrieg(class UObject* Context);
		void SET_TalkKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindDistort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundDistort(class UObject* Context);
		void Set_FindDistort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OPT_Obj_SpeakToKriegAboutTale(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpokeToKriegAboutTale(class UObject* Context);
		void Obj_INV_FollowThaddeus_1_StartMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FollowThaddeus_2_StartMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FollowThaddeus_1_StartMove(class UObject* Context);
		void MCE_INV_FollowThaddeus_2_StartMove(class UObject* Context);
		void ExecuteUbergraph_ALI_SM_ChecksAndBalances(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
