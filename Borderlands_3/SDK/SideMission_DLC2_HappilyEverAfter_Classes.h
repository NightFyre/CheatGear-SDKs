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
	 * BlueprintGeneratedClass SideMission_DLC2_HappilyEverAfter.SideMission_DLC2_HappilyEverAfter_C
	 * Size -> 0x0150 (FullSize[0x0660] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_HappilyEverAfter_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToGaige_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGaige_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachDropPod_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachDropPod_ObjVar;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillFrostBiters_ObjSetVar;                           // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFrostBiter_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SearchDropPod_ObjSetVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchDropPod_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindThief_ObjSetVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindThief_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenDoor_ObjSetVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor_ObjVar;                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetFireworks_ObjSetVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFireworks_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpDetonator_ObjSetVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpDetonator_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_FireworksBoxDropped_ObjVar;                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachLaunchArea_ObjSetVar;                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachLaunchArea_ObjVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceFireworks_ObjSetVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFireworks_ObjVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToLodge_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToLodge_ObjVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToGaigeLodge_ObjSetVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGaigeLodge_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DanceWithClaptrap_ObjSetVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DanceWithClaptrap_ObjVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMancubus_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMancubus_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToWainwright_ObjSetVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToWainwright_ObjVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceDetonator_ObjSetVar;                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDetonator_ObjVar;                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ChooseFireworks_ObjSetVar;                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChooseLove_ObjVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChooseHW_ObjVar;                                     // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DetonateFireworks_ObjSetVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DetonateFireworks_ObjVar;                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChooseSymbol_ObjVar;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_14();
		void SET_GetFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetFireworks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateFireworks(class UObject* Context);
		void MCE_DoorOpened(class UObject* Context);
		void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpDetonator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpDetonator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DetonatorPickedUp(class UObject* Context);
		void Inv_Obj_FireworksBoxDropped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateFireworkDropped(class UObject* Context);
		void SET_ReachLaunchArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_OpenDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachLaunchArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LaunchAreaReached(class UObject* Context);
		void MCE_ThiefFounded(class UObject* Context);
		void SET_PlaceFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceFireworks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FireworksPlaced(class UObject* Context);
		void Obj_FindThief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindThief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReturnToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToLodge(class UObject* Context);
		void Set_TalkToGaigeLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToGaigeLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToGaigeLodge(class UObject* Context);
		void MCE_DropPodSearched(class UObject* Context);
		void Obj_SearchDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToClaptrap(class UObject* Context);
		void SET_SearchDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DanceWithClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DanceWithClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DancedWithClaptrap(class UObject* Context);
		void SET_TalkToMancubus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMancubus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MancubusTalkedTo(class UObject* Context);
		void MCE_FrostBitersKilled(class UObject* Context);
		void SET_TalkToWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CongradulationDone(class UObject* Context);
		void Obj_KillFrostBiter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillFrostBiters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_PlaceDetonator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceDetonator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DetonatorPlaced(class UObject* Context);
		void SET_ChooseFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChooseLove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChooseHW(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LoveChoosen(class UObject* Context);
		void MCE_HMChoosen(class UObject* Context);
		void MCE_DropPodReached(class UObject* Context);
		void SET_DetonateFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DetonateFireworks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Detonated(class UObject* Context);
		void MissionKickoff();
		void Obj_ChooseSymbol(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeTalkedTo(class UObject* Context);
		void SET_ReachDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkToGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_SideMission_DLC2_HappilyEverAfter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
