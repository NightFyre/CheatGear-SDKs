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
	 * BlueprintGeneratedClass SideMission_DLC2_SinisterSounds.SideMission_DLC2_SinisterSounds_C
	 * Size -> 0x0138 (FullSize[0x0648] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_SinisterSounds_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_PickUpRecorder_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpRecorder_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RecordSinisterSounds_ObjVar;                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RunOverFrostbiters_ObjSetVar;                        // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RunOverFrostbiters_ObjVar;                           // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillBadassWolven_ObjSetVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadassWolven_ObjVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindBanshee_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBanshee_ObjVar;                                  // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UseDoorBell_ObjSetVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDoorBell_ObjVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpECHO_ObjSetVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpECHO_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSpinsmouthCamp_ObjSetVar;                        // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSpinsmouthCamp_ObjVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillDJSpinsmouth_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDJSpinsmouth_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FreeBanshee_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeBanshee_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalktoBanshee_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBanshee_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GiveRecorder_ObjSetVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveRecorder_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ListenToDarkMix_ObjSetVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToDarkMix_ObjVar;                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToLake_ObjSetVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLake_ObjVar;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_StartRecordSinisterSounds_ObjVar;                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_KillWolven_ObjVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_FindBanshee_ObjVar;                       // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillAmbushers_ObjSetVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAmbushers_ObjVar;                                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PlayDarkMix_ObjVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SecureArea_ObjSetVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureArea_ObjVar;                                   // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BansheeScream01_ObjVar;                          // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BansheeScream02_ObjVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Precheck_ObjVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void MCE_PickUpECHO(class UObject* Context);
		void SET_PickUpECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToSpinsmouthCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToSpinsmouthCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GoToSpinsmouthCamp(class UObject* Context);
		void Obj_KillDJSpinsmouth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillDJSpinsmouth(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillDJSpinsmouth(class UObject* Context);
		void MCE_UseDoorBell(class UObject* Context);
		void SET_UseDoorBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeBanshee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FreeBanshee(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FreeBanshee(class UObject* Context);
		void Obj_UseDoorBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToBanshee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalktoBanshee(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkToBanshee(class UObject* Context);
		void MCE_FindBanshee(class UObject* Context);
		void Obj_GiveRecorder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GiveRecorder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GiveRecorder(class UObject* Context);
		void SET_FindBanshee(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBanshee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ListenToDarkMix(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ListenToDarkMix(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ListenToDarkMix(class UObject* Context);
		void MCE_KillBadassWolven(class UObject* Context);
		void SET_KillBadassWolven(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBadassWolven(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToLake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToLake(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GoToLake(class UObject* Context);
		void MCE_RunOverFrostbiters(class UObject* Context);
		void SET_RunOverFrostbiters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RecordSinisterSounds_Objective_PROXY();
		void Obj_RecordSinisterSounds_Objective_PROXY_1();
		void Obj_RecordSinisterSounds_Objective_PROXY_2();
		void Obj_RecordSinisterSounds_Objective_PROXY_3();
		void Obj_RecordSinisterSounds_Objective_PROXY_4();
		void Obj_RecordSinisterSounds_Objective_PROXY_5();
		void Obj_RecordSinisterSounds_Objective_PROXY_6();
		void Obj_RecordSinisterSounds_Objective_PROXY_7();
		void Obj_RecordSinisterSounds_Objective_PROXY_8();
		void Obj_RecordSinisterSounds_Objective_PROXY_9();
		void Obj_INV_StartRecordSinisterSounds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickUpRecorder(class UObject* Context);
		void SET_PickUpRecorder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpRecorder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CustomEvent_OnEchoLog_1_Finished();
		void Obj_Breadcrumb_KillWolven(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Breadcrumb_KillWolven(class UObject* Context);
		void Obj_Breadcrumb_FindBanshee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Breadcrumb_FindBanshee(class UObject* Context);
		void Obj_RunOverFrostbiters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillAmbushers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillAmbushers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillAmbushers(class UObject* Context);
		void Obj_RecordSinisterSounds_Objective_PROXY_10();
		void Obj_INV_PlayDarkMix(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayDarkMix(class UObject* Context);
		void MCE_RecordSinisterSounds(class UObject* Context);
		void Obj_SecureArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_SecureArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SecureArea(class UObject* Context);
		void Obj_RecordSinisterSounds_Objective_PROXY_11();
		void Obj_INV_BansheeScream01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_BansheeScream02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RecordSinisterSounds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void ExecuteUbergraph_SideMission_DLC2_SinisterSounds(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
