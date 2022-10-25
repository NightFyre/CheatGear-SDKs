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
	 * BlueprintGeneratedClass Mission_DLC1_Side_DoItForDigby_Part2.Mission_DLC1_Side_DoItForDigby_Part2_C
	 * Size -> 0x0108 (FullSize[0x0618] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Side_DoItForDigby_Part2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_PawnShop_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPawnShop_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindStreetPerformer_ObjSetVar;                       // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindStreetPerfomer_ObjVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMime_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMime_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TipMime_ObjSetVar;                                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Emote_ObjSetVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Emote_ObjVar;                                        // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMime_ObjSetVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMime_ObjVar;                                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_NearlyKilledMime_ObjVar;                         // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BuzzDoor_ObjVar;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TipMime_ObjVar;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBloodBucket_ObjSetVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBloodBucket_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBloodBucket_ObjSetVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBloodBucket_ObjVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetSax_ObjSetVar;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToDigby_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToDigby_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveSax_ObjSetVar;                                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveSax_ObjVar;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetDelilah_ObjSetVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetDelilah_ObjVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BuzzDoor_ObjSetVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TalkToMime_StartAnim_ObjVar;                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TalkToMime_EndAnim_ObjVar;                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TipMime_StartAnim_ObjVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TipMime_EndAnim_ObjVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FinishPlayingSax_ObjVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PIckUpDelilah_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_17();
		void MCE_PlayerEmoted(class UObject* Context);
		void MCE_PlayerTalkedToMime(class UObject* Context);
		void MCE_PlayerNearlyKilledMime(class UObject* Context);
		void Obj_BuzzDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerBuzzedDoor(class UObject* Context);
		void MCE_PlayerFoundStreetPerformer(class UObject* Context);
		void Obj_TipMime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTippedMime(class UObject* Context);
		void Set_Emote(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBloodBucket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindBloodBucket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerFoundBloodBucket(class UObject* Context);
		void Obj_Emote(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToMime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBloodBucket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBloodBucket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerKilledBloodBucket(class UObject* Context);
		void Obj_TalkToMime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetSax(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToDigby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToDigby(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerReturnedToDigby(class UObject* Context);
		void INV_Obj_NearlyKilledMime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveSax(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveSax(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerGaveDigbySax(class UObject* Context);
		void MissionKickoff();
		void Set_KillMime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetDelilah(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetDelilah(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetDelilah_Objective_PROXY();
		void Obj_GetDelilah_Objective_PROXY_1();
		void Obj_GetDelilah_Objective_PROXY_2();
		void Obj_GetDelilah_Objective_PROXY_3();
		void Obj_GetDelilah_Objective_PROXY_4();
		void Obj_GetDelilah_Objective_PROXY_5();
		void Obj_GetDelilah_Objective_PROXY_6();
		void Obj_GetDelilah_Objective_PROXY_7();
		void Obj_GetDelilah_Objective_PROXY_8();
		void Obj_KillMime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TipMime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_BuzzDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetDelilah_Objective_PROXY_9();
		void MCE_GotSax(class UObject* Context);
		void Obj_INV_TalkToMime_StartAnim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_TalkToMime_EndAnim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TalkedToMime_EndAnim(class UObject* Context);
		void Obj_INV_TipMime_StartAnim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_TipMime_EndAnim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TipMime_EndAnim(class UObject* Context);
		void INV_Obj_FinishPlayingSax(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FinishedPlayingSax(class UObject* Context);
		void INV_Obj_PIckUpDelilah(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindStreetPerformer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindStreetPerfomer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToPawnShop(class UObject* Context);
		void Set_PawnShop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPawnShop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DLC1_Side_DoItForDigby_Part2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
