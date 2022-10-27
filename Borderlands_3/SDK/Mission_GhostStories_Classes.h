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
	 * BlueprintGeneratedClass Mission_GhostStories.Mission_GhostStories_C
	 * Size -> 0x0180 (FullSize[0x0690] - InheritedSize[0x0510])
	 */
	class UMission_GhostStories_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GrabFrame_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GrabFrame_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceFrame_ObjVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceMeatmanFrame_ObjSetVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BuildMeatman_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BuildMeatman_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeatmanParts_ObjVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetFuel_ObjSetVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindFuel_ObjVar;                                     // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AddFuel_ObjSetVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceFuelCanister_ObjVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GrabBanditHat_ObjSetVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GrabBanditHat_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceBanditHat_ObjSetVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBanditHat_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LightMeatman_ObjSetVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LightMeatman_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBandits_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBandits_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ConsoleOrTorture_ObjSetVar;                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToBanditLeader_ObjSetVar;                      // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToBanditLeader_ObjVar;                         // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ConsoleBanditLeader_ObjVar;                          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DisplayMeatmansWrath_ObjVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReassureBanditLeader_ObjVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_IgniteFear_ObjVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMissionGiver_ObjSetVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToMissionGiver_ObjVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeatmanGloves_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeatmanPants_ObjVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeatmanJacket_ObjVar;                                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeatmanHead_ObjVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AdvanceMission_ObjVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectBanditParts_ObjSetVar;                        // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBanditParts_ObjVar;                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectJacket_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectPants_ObjVar;                                 // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectGloves_ObjVar;                                // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectBiobeastHead_ObjSetVar;                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBiobeastHead_ObjVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GrabFrameForward_ObjVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 HouseVO;                                                 // 0x0660(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9JIP[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_HouseVO_ObjVar;                                      // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillBiobeast_ObjSetVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillBiobeast_ObjVar;                                 // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BanditSpawn_ObjVar;                                  // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void SET_BuildMeatman(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BuildMeatman(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeatmanParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GetFuel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindFuel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_AddFuel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceFuelCanister(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GrabBanditHat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GrabBanditHat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceBanditHat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceBanditHat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_LightMeatman(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_LightMeatman(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBandits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBandits(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ConsoleOrTorture(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReturnToBanditLeader(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBanditLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ConsoleBanditLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DisplayMeatmansWrath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReassureBanditLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_IgniteFear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToMissionGiver(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToMissionGiver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeatmanJacket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeatmanPants(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeatmanGloves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeatmanHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlaceJacket(class UObject* Context);
		void Update_PlacePants(class UObject* Context);
		void Update_PlaceGloves(class UObject* Context);
		void Update_PlaceHead(class UObject* Context);
		void Update_FuelAdded(class UObject* Context);
		void Update_PlacedHat(class UObject* Context);
		void Update_AllBanditsKilled(class UObject* Context);
		void Update_MeatmanLit(class UObject* Context);
		void Update_DisplayWrath(class UObject* Context);
		void Update_IgniteFear(class UObject* Context);
		void Update_ReturnedToBandit(class UObject* Context);
		void OBJ_AdvanceMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AdvanceBanditReturn(class UObject* Context);
		void Update_ConsoledBandit(class UObject* Context);
		void Update_ReassuredBandit(class UObject* Context);
		void Update_ReturnedToMG(class UObject* Context);
		void MissionKickoff();
		void OBJ_CollectBanditParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_CollectBanditParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectJacket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectPants(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectGloves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_CollectBiobeastHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBiobeastHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FramePlaced(class UObject* Context);
		void OBJ_PlaceFrame(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceMeatmanFrame(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GrabFrame(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GrabFrame(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MRE_SwitchPulled(class UObject* Context);
		void OBJ_GrabFrameForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GrabFrameForward(class UObject* Context);
		void OBJ_HouseVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Play_HouseVO(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void SET_KillBiobeast(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillBiobeast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KilledBill(class UObject* Context);
		void OBJ_BanditSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BanditSpawn(class UObject* Context);
		void ExecuteUbergraph_Mission_GhostStories(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
