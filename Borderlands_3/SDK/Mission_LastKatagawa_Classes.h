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
	 * BlueprintGeneratedClass Mission_LastKatagawa.Mission_LastKatagawa_C
	 * Size -> 0x0140 (FullSize[0x0650] - InheritedSize[0x0510])
	 */
	class UMission_LastKatagawa_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToHideout_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToHideout_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseBuzzer_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseBuzzer_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPiliceHQ_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPoliceHQ_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyCopBots_ObjSetVar;                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCopBots_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeGangMember_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeGangMember_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectHead_ObjSetVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectHead_ObjVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BackToBase_ObjSetVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BackToBase_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseHead_ObjSetVar;                                   // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseHead_ObjVar;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillParty_ObjSetVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillParty_ObjVar;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeKatagawa_ObjSetVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeKatagawa_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnBouncer_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GangMemberSpawn_ObjVar;                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBadGuy_ObjSetVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseIntercom_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadGuy_ObjVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseIntercom_ObjVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CopGate_ObjVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BaseDoor_ObjVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BossDoor_ObjVar;                                 // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCopsBase_ObjSetVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCopsBase_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBroSis_ObjSetVar;                                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBro_ObjVar;                                      // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMother_ObjSetVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMother_ObjVar;                                   // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBFF_ObjSetVar;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBFF_ObjVar;                                      // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillSis_ObjVar;                                      // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrashWedding_ObjVar;                                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void Set_GoToPiliceHQ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGoToPoliceHQ(class UObject* Context);
		void Obj_GoToPoliceHQ(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroyCopBots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyCopBots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateDestroyCopBots(class UObject* Context);
		void Set_FreeGangMember(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateFreeGangMember(class UObject* Context);
		void Obj_FreeGangMember(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCollectHead(class UObject* Context);
		void Obj_BackToBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BackToBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BackToBase(class UObject* Context);
		void Obj_UseHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateUseHead(class UObject* Context);
		void Obj_KillParty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillParty(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillParty(class UObject* Context);
		void Obj_FreeKatagawa(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FreeKatagawa(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateFreeKatagawa(class UObject* Context);
		void Update_SpawnBouncer(class UObject* Context);
		void Obj_INV_SpawnBouncer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GangMemberSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBadGuy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBadGuy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillBadGuy(class UObject* Context);
		void Update_GangMemberSpawn(class UObject* Context);
		void AdvTo_CollectHead(class UObject* Context);
		void AdvTo_KillBadGuy(class UObject* Context);
		void Dialog_IC_FreedGangYell(class UObject* Context);
		void Update_UseIntercom(class UObject* Context);
		void Set_UseIntercom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseIntercom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_CopGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_BaseDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_BaseDoor(class UObject* Context);
		void Dialog_BloodShineReturn(class UObject* Context);
		void Obj_INV_BossDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCopsBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillCopsBase(class UObject* Context);
		void Obj_KillCopsBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Adv_KillCopsBase(class UObject* Context);
		void Dialog_CopBotsBase(class UObject* Context);
		void Obj_UseBuzzer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBroSis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillBro(class UObject* Context);
		void Obj_KillMother(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillMother(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillMother(class UObject* Context);
		void Obj_KillBFF(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBFF(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillBFF(class UObject* Context);
		void Obj_KillSis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillSis(class UObject* Context);
		void SpawnAllFamily(class UObject* Context);
		void Adv_KillBFF(class UObject* Context);
		void Obj_CrashWedding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateUseBuzzer(class UObject* Context);
		void Set_UseBuzzer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGoToHideout(class UObject* Context);
		void Obj_GoToHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToHideout(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_LastKatagawa(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
