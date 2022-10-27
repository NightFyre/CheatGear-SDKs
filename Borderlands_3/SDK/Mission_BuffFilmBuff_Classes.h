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
	 * BlueprintGeneratedClass Mission_BuffFilmBuff.Mission_BuffFilmBuff_C
	 * Size -> 0x0148 (FullSize[0x0658] - InheritedSize[0x0510])
	 */
	class UMission_BuffFilmBuff_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindHardDrive_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchTrashPiles_Counter_ObjVar;                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindProjectorRoom_ObjSetVar;                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AttachHardDrive_ObjSetVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMiniboss_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeLightBulb_ObjSetVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReplaceLightBulb_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindProjectorRoom_ObjVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttachHardDrive_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMiniboss_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeLightBulb_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReplaceLightBulb_ObjVar;                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetHardDrive_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetHardDrive_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             InstigatorPlayer;                                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PreMission_ObjSetVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PreMission_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchTrash_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Trash1_ObjVar;                                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Trash3_ObjVar;                                       // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Trash2_ObjVar;                                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ProjectorPlaysBuffMovieFake_ObjSetVar;               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BuffMovieFake_Inv_ObjVar;                            // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_COVVideo_Inv_ObjVar;                                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BuffMovieReal_Inv_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WalkIntoCamp_ObjSetVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WalkIntoCamp_Video_Inv_ObjVar;                       // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ProjectorBlewUp_ObjSetVar;                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProjectorBlewUp_Inv_ObjVar;                          // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BuffCampDoor_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBulbStash_ObjSetVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBulbStash_ObjVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LightbulbAreaWaypoint_Inv_ObjVar;                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BulbHolder_Inv_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Int_CompleteECHOObjective;                               // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SUL1[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_TurnOffProjector_ObjSetVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnOffProjector_ObjVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnGoliathVO_ObjVar;                               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void MCE_FindProjectorRoom(class UObject* Context);
		void Set_PreMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SpeakBuffIntro(class UObject* Context);
		void Obj_GetHardDrive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FindHardDrives(class UObject* Context);
		void Obj_PreMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnIn(class UObject* Context);
		void MCE_ReplaceLightBulb(class UObject* Context);
		void MCE_KillMiniBoss(class UObject* Context);
		void MCE_PlaceHardDrive(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReplaceLightBulb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeLightBulb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AttachHardDrive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindProjectorRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReplaceLightBulb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeLightBulb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillMiniboss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_AttachHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindProjectorRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchTrashPiles_Counter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchTrash(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SearchTrash(class UObject* Context);
		void Obj_Trash1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Trash2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Trash3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Trash1(class UObject* Context);
		void MCE_Update_Trash2(class UObject* Context);
		void MCE_Update_Trash3(class UObject* Context);
		void MCE_Update_TakeLightBulb(class UObject* Context);
		void Set_ProjectorPlaysBuffMovieFake(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BuffMovieFake_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_COVVideo_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_COVVideo_Inv_Objective_PROXY();
		void Obj_COVVideo_Inv_Objective_PROXY_1();
		void Obj_COVVideo_Inv_Objective_PROXY_2();
		void Obj_BuffMovieReal_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BuffMovieFake(class UObject* Context);
		void Set_WalkIntoCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_COVVideo_Inv_Objective_PROXY_3();
		void Obj_SearchTrash_Objective_PROXY_4();
		void Obj_SearchTrashPiles_Counter_Objective_PROXY_5();
		void Obj_Trash1_Objective_PROXY_6();
		void Obj_Trash2_Objective_PROXY_7();
		void Obj_Trash3_Objective_PROXY_8();
		void MCE_EnterCamp_PlayVideo(class UObject* Context);
		void Obj_WalkIntoCamp_Video_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ProjectorBlewUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ProjectorBlewUp_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BuffCampDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BuffCampDoor(class UObject* Context);
		void Obj_BuffCampDoor_Objective_PROXY_9();
		void Set_GoToBulbStash(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBulbStash(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GoToBulbStash(class UObject* Context);
		void Obj_LightbulbAreaWaypoint_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LightbulbAreaWaypoint_Inv(class UObject* Context);
		void Obj_TakeLightBulb_Objective_PROXY_10();
		void Obj_BulbHolder_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinishPickupDialog(class UObject* Context);
		void MCE_MovieFinished(class UObject* Context);
		void Set_TurnOffProjector(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnOffProjector(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TurnOffProjector(class UObject* Context);
		void MCE_ProjectorBroke(class UObject* Context);
		void Obj_SpawnGoliathVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnGoliathVO(class UObject* Context);
		void Obj_AttachHardDrive_Objective_PROXY_11();
		void Obj_AttachHardDrive_Objective_PROXY_12();
		void Obj_AttachHardDrive_Objective_PROXY_13();
		void MCE_FirstViedoFinished(class UObject* Context);
		void MCE_SecondVideoFinished(class UObject* Context);
		void MCE_BuffVideoFinished(class UObject* Context);
		void ExecuteUbergraph_Mission_BuffFilmBuff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
