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
	 * BlueprintGeneratedClass Mission_EchoNetNeutrality.Mission_EchoNetNeutrality_C
	 * Size -> 0x0100 (FullSize[0x0610] - InheritedSize[0x0510])
	 */
	class UMission_EchoNetNeutrality_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToEchoNetHub_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToEchoNetHub_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyUgThak_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoV_Wave2_ObjSetVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenPipes_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyUgThak_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_ObjVar;                                      // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipes_ObjVar;                                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillRealUgThak_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LocateUgThak_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LocateUgThak_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRealUgThak_ObjVar;                               // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenControlRoom_ObjSetVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenControlRoom_INVS_ObjVar;                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DamageUgThak_INVS_ObjVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveShack_INVS_ObjVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindControlRoom_INVS_ObjVar;                         // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindControlRoom_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TriggerBadassAttack_INVS_ObjVar;                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoV_Wave1_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_Wave1_INVS_ObjVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_Wave2_INVS_ObjVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipe1_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipe2_ObjVar;                                    // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipe3_ObjVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipe4_ObjVar;                                    // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPipe5_ObjVar;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLordOfSkags_ObjSetVar;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToEdgren_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_23();
		void Set_LocateUgThak(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LocateUgThak(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillRealUgThak(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_LocateUgThak(class UObject* Context);
		void UPDATE_DamageUgThak(class UObject* Context);
		void Obj_KillRealUgThak(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillRealUgThak(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenPipes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCoV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenControlRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenControlRoom_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenControlRoom(class UObject* Context);
		void Obj_DamageUgThak_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LeaveShack_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_LeaveShack(class UObject* Context);
		void Obj_FindControlRoom_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FindControlRoom(class UObject* Context);
		void Set_FindControlRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LocateUgThak_Objective_PROXY();
		void Obj_LocateUgThak_Objective_PROXY_1();
		void Obj_TriggerBadassAttack_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TriggerBadassAttack(class UObject* Context);
		void Set_KillCoV_Wave1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoV_Wave1_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillCoV_Wave1(class UObject* Context);
		void Obj_KillCoV_Objective_PROXY_2();
		void Obj_KillCoV_Wave2_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillCoV_Wave2(class UObject* Context);
		void Obj_OpenPipe1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenPipe2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenPipe3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenPipe4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenPipe5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenedPipe(class UObject* Context);
		void UPDATE_OpenPipe1(class UObject* Context);
		void UPDATE_OpenPipe2(class UObject* Context);
		void UPDATE_OpenPipe3(class UObject* Context);
		void UPDATE_OpenPipe4(class UObject* Context);
		void UPDATE_OpenPipe5(class UObject* Context);
		void MissionKickoff();
		void Obj_DestroyUgThak(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToLordOfSkags(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToEdgren(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToEdgren(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_OpenPipes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_GoToEchoNetHub(class UObject* Context);
		void Set_KillCoV_Wave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DestroyUgThak(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TurnIn(class UObject* Context);
		void Set_GoToEchoNetHub(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToEchoNetHub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_EchoNetNeutrality(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
