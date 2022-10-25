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
	 * BlueprintGeneratedClass MIssion_Ep09_AtlasHQ.MIssion_Ep09_AtlasHQ_C
	 * Size -> 0x02A8 (FullSize[0x07B8] - InheritedSize[0x0510])
	 */
	class UMIssion_Ep09_AtlasHQ_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_ClaptrapPhoneRhys_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToAtlas_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateFailure_ObjSetVar;                        // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateFailure_ObjVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyCommandShip_ObjSetVar;                        // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCommandShip_ObjVar;                           // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HelpRhys_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HelpRhys_ObjVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatBoss_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBoss_ObjVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefenseFail_Inv_ObjVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CannonsOne_ObjSetVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CanonsOne_ObjVar;                                    // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CannonsThree_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CannonsThree_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysFinale_ObjSetVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysFinale_ObjVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_Inv_ObjVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FinalDefenseControls_ObjSetVar;                      // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalDefenseControls_ObjVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ElevatorState_Inv_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeElevators_ObjSetVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeElevators_ObjVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave1_ObjVar;                                        // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave2_ObjVar;                                        // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave1_ObjSetVar;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave2_ObjSetVar;                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave3_ObjSetVar;                                     // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Wave3_ObjVar;                                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillFrontrunner_ObjSetVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFrontrunner_ObjVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillFrontrunners_ObjSetVar;                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFrontrunners_ObjVar;                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb03_ObjVar;                                 // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb04_ObjVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DropDown_ObjSetVar;                                  // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DropDown_ObjVar;                                     // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_InAtlas_ObjVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_Reveal_ObjVar;                                    // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_InsideMan_ObjVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_NeedTurrets_ObjVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_NeedTurrets2_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_Mechs_ObjVar;                                     // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 RhysKatagawa_Conversation_2;                             // 0x0688(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9IC8[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_VO_DeathScene_ObjVar;                                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 RhysKatagawa_Conversation;                               // 0x06A0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YWX2[0x4];                                   // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_VO_DogKill_ObjVar;                                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 CourtyardFightVO;                                        // 0x06B8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FQ01[0x4];                                   // 0x06C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_VO_InLobby_ObjVar;                                   // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 UpperTierConversation;                                   // 0x06D0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 InsideLobbyConversation;                                 // 0x06DC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 BackcourtyardConversation;                               // 0x06E8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 ElevatorConversation;                                    // 0x06F4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToAtlasHQ_ObjSetVar;                             // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToCity_ObjSetVar;                                // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToCity_ObjVar;                                   // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapPhoneRhys_ObjVar;                            // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ListenToRhys_ObjSetVar;                              // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToRhys_ObjVar;                                 // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToSecretEntrance_ObjSetVar;                      // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToSecretEntrance_ObjVar;                         // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb0A_ObjVar;                                 // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Rhys_MustacheKeep_ObjVar;                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysFinale_Sync_ObjVar;                              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysFinale_Mustache_ObjSetVar;                       // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysFinale_TakeShard_ObjSetVar;                      // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Rhys_MustacheRemove_ObjVar;                          // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01A_ObjVar;                                // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysFinale_Decision_ObjSetVar;                       // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysFinale_Decision_ObjVar;                          // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenDesk_ObjSetVar;                                  // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDesk_ObjVar;                                     // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockFirstDoor_ObjVar;                              // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb035_ObjVar;                                // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Hidden_CommandShipIOState_ObjVar;                    // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   HackRewardBullshit_ObjVar;                               // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void Set_ClaptrapPhoneRhys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HeadToAtlas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateFailure(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvestigateFailure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyCommandShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyCommandShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HelpRhys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HelpRhys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_Player_sees_defenses_go_dead(class UObject* Context);
		void ME_PlayeSeesFrontrunner(class UObject* Context);
		void ME_Player_defeats_the_inhibitor_carrying_mechs(class UObject* Context);
		void ME_PlayerDefeatsWave3(class UObject* Context);
		void ME_Player_enters_the_boss_arena(class UObject* Context);
		void ME_Player_defeats_Negative_Zero(class UObject* Context);
		void Obj_DefenseFail_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CannonsOne(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CanonsOne(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CannonsThree(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CannonsThree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_Player_reactivates_the_first_cannons(class UObject* Context);
		void ME_Player_reactivates_the_final_cannons(class UObject* Context);
		void Set_RhysFinale(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RhysFinale(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_Player_takes_the_key_fragment_from_Rhys(class UObject* Context);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BossTitleCard_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FinalDefenseControls(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FinalDefenseControls(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ElevatorState_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeElevators(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeElevators(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_Player_arrives_at_the_big_Atlas_reveal(class UObject* Context);
		void ME_PlayerDefeatsWave1(class UObject* Context);
		void OBJ_Wave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Wave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Wave1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Wave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlayerDefeatsWave2(class UObject* Context);
		void OBJ_Wave3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Wave3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillFrontrunner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillFrontrunner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillFrontrunners(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillFrontrunners(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FrontrunnersKilled(class UObject* Context);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb01(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb02(class UObject* Context);
		void Obj_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb03(class UObject* Context);
		void Obj_Breadcrumb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb04(class UObject* Context);
		void Obj_DropDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DropDown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_ReachedOffice(class UObject* Context);
		void ME_PlayerEnteredAtlas(class UObject* Context);
		void Obj_VO_InAtlas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VO_Reveal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerArrivesFrontCourtayrd(class UObject* Context);
		void Obj_VO_InsideMan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VO_NeedTurrets(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_NeedTurrets(class UObject* Context);
		void Obj_VO_NeedTurrets2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_NeedTurrets2(class UObject* Context);
		void Obj_VO_Mechs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_Mechs(class UObject* Context);
		void Obj_VO_DeathScene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_DeathScene(class UObject* Context);
		void Obj_VO_DogKill(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_DogKill(class UObject* Context);
		void Obj_VO_InLobby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VO_InLobby(class UObject* Context);
		void ME_VO_Elevator(class UObject* Context);
		void Set_HeadToAtlasHQ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_HeadToCity(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HeadToCity(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ArrivedAtCity(class UObject* Context);
		void Obj_ClaptrapPhoneRhys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_RhysPhonedIn(class UObject* Context);
		void Set_ListenToRhys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ListenToRhys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HeadToSecretEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HeadToSecretEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_ArrivedAtSecretEntrance(class UObject* Context);
		void Obj_Breadcrumb0A(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb0A(class UObject* Context);
		void Obj_Rhys_MustacheKeep(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RhysFinale_Sync(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RhysFinale_Mustache(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RhysFinale_TakeShard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlayerMeetsRhys(class UObject* Context);
		void MRE_KeepMustache(class UObject* Context);
		void Obj_Rhys_MustacheRemove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_RemoveMustache(class UObject* Context);
		void Obj_Breadcrumb01A(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UPDATE_Breadcrumb01A(class UObject* Context);
		void Obj_RhysFinale_Decision(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RhysFinale_Decision(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_OpenDesk(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenDesk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_DeskOpened(class UObject* Context);
		void ME_UpdateListenToRhys(class UObject* Context);
		void MRE_OpenDoorAtlasComplete(class UObject* Context);
		void Obj_UnlockFirstDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb035(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_VOMainLobby(class UObject* Context);
		void Obj_Hidden_CommandShipIOState(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_RearTurretSequenceComplete(class UObject* Context);
		void HackRewardBullshit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_MIssion_Ep09_AtlasHQ(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
