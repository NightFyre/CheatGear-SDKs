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
	 * BlueprintGeneratedClass Mission_DestroyerOfWorlds.Mission_DestroyerOfWorlds_C
	 * Size -> 0x02D8 (FullSize[0x07E8] - InheritedSize[0x0510])
	 */
	class UMission_DestroyerOfWorlds_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FindCartridge_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindCartridge_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GotoDestination1_ObjSetVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCreativeDirector1_ObjSetVar;                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GotoDestination1_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCreativeDirector1_ObjVar;                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal1_Route1_ObjSetVar;                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal1_Route1_ObjVar;                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Popup1_ObjSetVar;                                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Popup1_ObjVar;                                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal1_Route2_ObjSetVar;                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal1_Route2_ObjVar;                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destroy_Portal1_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destroy_Portal1_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal2_Route1_ObjSetVar;                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Popup2_ObjSetVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal2_Route2_ObjSetVar;                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal2_Route1_ObjVar;                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Popup2_ObjVar;                                       // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal2_Route2_ObjVar;                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destroy_Portal2_ObjSetVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destroy_Portal2_ObjVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal3_Route1_ObjSetVar;                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal3_Route1_ObjVar;                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Popup3_ObjSetVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Popup3_ObjVar;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal3_Route2_ObjSetVar;                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal3_Route2_ObjVar;                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destroy_Portal3_ObjSetVar;                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destroy_Portal3_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GotoDestination2_ObjSetVar;                          // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GotoDestination2_ObjVar;                             // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCreativeDirector2_ObjSetVar;                   // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCreativeDirector2_ObjVar;                      // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCube_ObjSetVar;                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destroy_Portal4_ObjSetVar;                           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destroy_Portal4_ObjVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCubes_ObjSetVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCubes_ObjVar;                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GIveCubesToNPC_ObjSetVar;                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GiveCubesToNPC_ObjVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_HelperObj_GiveCubes_ObjVar;                          // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToDirector_EndFetch_ObjVar;                      // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GotoDestination3_ObjSetVar;                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GotoDestination3_ObjVar;                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCreativeDirector3_ObjSetVar;                   // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCreativeDirector3_ObjVar;                      // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatDestroyerOfWorlds_ObjSetVar;                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatDestroyerOfWorlds_ObjVar;                      // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCreativeDirector4_ObjSetVar;                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destroy_Portal5_ObjSetVar;                           // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Desetroy_Portal5_ObjVar;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCreativeDirector4_ObjVar;                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnNPCPortal2_ObjVar;                              // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Popup4_ObjVar;                                       // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GeneratePopup4_ObjVar;                               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CollectionCount;                                         // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C1PX[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_SpawnNPCandPortal_ObjVar;                            // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnBoss_ObjVar;                                    // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GeneratePopup5_ObjVar;                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Popup5_ObjVar;                                       // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnCreativeDirector0_ObjVar;                       // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToCreativeDirector0_ObjSetVar;                   // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToCreativeDirector0_ObjVar;                      // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube2_ObjVar;                            // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCube2_ObjSetVar;                         // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCube3_ObjSetVar;                         // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube3_ObjVar;                            // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCube4_ObjSetVar;                         // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube4_ObjVar;                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y7ZU[0x4];                                   // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_GatherEnergyCube6_ObjSetVar;                         // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube6_ObjVar;                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherEnergyCube5_ObjSetVar;                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GatherEnergyCube5_ObjVar;                            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal1_ObjSetVar;                         // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal1_ObjVar;                            // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal2_ObjSetVar;                         // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal2_ObjVar;                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EscortNPC_Portal3_ObjSetVar;                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EscortNPC_Portal3_ObjVar;                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GatherMTXBought;                                         // 0x07A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCX8[0x7];                                   // 0x07A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_TalkToDirector_EndEscort_ObjSetVar;                  // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToDirector_EndEscort_ObjVar;                     // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToDirector_EndFetch_ObjSetVar;                   // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WaitForNPC_ObjVar;                                   // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EndVREffect_Fetch_ObjVar;                            // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EndVREffect_Boss_ObjVar;                             // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EndVREffect_Escort_ObjVar;                           // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
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
		void SET_TalkToCreativeDirector1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GotoDestination1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotoDestination1(class UObject* Context);
		void OBJ_TalkToCreativeDirector1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToCreativeDirector1(class UObject* Context);
		void SET_EscortNPC_Portal1_Route1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal1_Route1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Popup1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EscortNPC_Portal1_Route1(class UObject* Context);
		void OBJ_Popup1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Popup1(class UObject* Context);
		void SET_EscortNPC_Portal1_Route2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal1_Route2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EscortNPC_Portal1_Route2(class UObject* Context);
		void SET_Destroy_Portal1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Destroy_Portal1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Destroy_Portal1(class UObject* Context);
		void SET_EscortNPC_Portal2_Route1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_Popup2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_EscortNPC_Portal2_Route2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal2_Route1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Popup2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_EscortNPC_Portal2_Route2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Popup2(class UObject* Context);
		void SET_Destroy_Portal2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EscortNPC_Portal2_Route2(class UObject* Context);
		void OBJ_Destroy_Portal2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Destroy_Portal2(class UObject* Context);
		void SET_EscortNPC_Portal3_Route1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal3_Route1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Popup3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Popup3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Popup3(class UObject* Context);
		void SET_EscortNPC_Portal3_Route2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal3_Route2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Destroy_Portal3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Destroy_Portal3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Destroy_Portal3(class UObject* Context);
		void OBJ_GotoDestination2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GotoDestination2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EscortNPC_Portal3_Route2(class UObject* Context);
		void MCE_GotoDestination2(class UObject* Context);
		void SET_TalkToCreativeDirector2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToCreativeDirector2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToCreativeDirector2(class UObject* Context);
		void SET_GatherEnergyCube(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GatherEnergyCube(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Destroy_Portal4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Destroy_Portal4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Destroy_Portal4(class UObject* Context);
		void MCE_GatherEnergyCube(class UObject* Context);
		void SET_GatherEnergyCubes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GatherEnergyCubes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GatherEnergyCubes(class UObject* Context);
		void SET_GIveCubesToNPC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GiveCubesToNPC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_HelperObj_GiveCubes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HelperObj_GiveCubes(class UObject* Context);
		void MCE_GiveCubesToNPC(class UObject* Context);
		void OBJ_TalkToDirector_EndFetch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToDirector_EndFetch(class UObject* Context);
		void SET_GotoDestination3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GotoDestination3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotoDestination3(class UObject* Context);
		void SET_TalkToCreativeDirector3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToCreativeDirector3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToCreativeDirector3(class UObject* Context);
		void SET_DefeatDestroyerOfWorlds(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefeatDestroyerOfWorlds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToCreativeDirector4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_Destroy_Portal5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Desetroy_Portal5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TalkToCreativeDirector4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatDestroyerOfWorlds(class UObject* Context);
		void MCE_Destroy_Portal5(class UObject* Context);
		void OBJ_SpawnNPCPortal2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnNPCPortal2(class UObject* Context);
		void MCE_TalkToCreativeDirector4(class UObject* Context);
		void OBJ_Popup4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Popup4(class UObject* Context);
		void OBJ_GeneratePopup4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GeneratePopup4(class UObject* Context);
		void OBJ_SpawnNPCandPortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnNPCandPortal(class UObject* Context);
		void OBJ_SpawnBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnBoss(class UObject* Context);
		void OBJ_GeneratePopup5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Popup5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Popup5(class UObject* Context);
		void MCE_GeneratePopup5(class UObject* Context);
		void OBJ_SpawnCreativeDirector0(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToCreativeDirector0(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToCreativeDirector0(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnCreativeDirector0(class UObject* Context);
		void MCE_TalkToCreativeDirector0(class UObject* Context);
		void OBJ_GatherEnergyCube2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GatherEnergyCube3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GatherEnergyCube2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GatherEnergyCube3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GatherEnergyCube4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GatherEnergyCube4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GatherEnergyCube6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GatherEnergyCube6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GatherEnergyCube5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GatherEnergyCube5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_EscortNPC_Portal1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EscortNPC_Portal1(class UObject* Context);
		void OBJ_EscortNPC_Portal1_Objective_PROXY();
		void OBJ_EscortNPC_Portal1_Objective_PROXY_1();
		void OBJ_EscortNPC_Portal1_Objective_PROXY_2();
		void MCE_EscortNPC_Portal2_Route1(class UObject* Context);
		void SET_EscortNPC_Portal2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EscortNPC_Portal2(class UObject* Context);
		void OBJ_EscortNPC_Portal2_Objective_PROXY_3();
		void OBJ_EscortNPC_Portal2_Objective_PROXY_4();
		void OBJ_EscortNPC_Portal2_Objective_PROXY_5();
		void MCE_EscortNPC_Portal3_Route1(class UObject* Context);
		void SET_EscortNPC_Portal3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EscortNPC_Portal3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EscortNPC_Portal3(class UObject* Context);
		void OBJ_EscortNPC_Portal3_Objective_PROXY_6();
		void OBJ_EscortNPC_Portal3_Objective_PROXY_7();
		void OBJ_EscortNPC_Portal3_Objective_PROXY_8();
		void SET_TalkToDirector_EndEscort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToDirector_EndEscort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToDirector_EndEscort(class UObject* Context);
		void SET_TalkToDirector_EndFetch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FindCartridge(class UObject* Context);
		void MissionKickoff();
		void OBJ_FindCartridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GotoDestination1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_WaitForNPC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WaitForNPC(class UObject* Context);
		void SET_FindCartridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_EndVREffect_Fetch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EndVREffect_Fetch(class UObject* Context);
		void OBJ_EndVREffect_Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EndVREffect_Boss(class UObject* Context);
		void OBJ_EndVREffect_Escort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EndVREffect_Escort(class UObject* Context);
		void ExecuteUbergraph_Mission_DestroyerOfWorlds(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
