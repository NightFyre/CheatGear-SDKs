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
	 * BlueprintGeneratedClass ALI_SM_ExposureTherapy.ALI_SM_ExposureTherapy_C
	 * Size -> 0x0188 (FullSize[0x0680] - InheritedSize[0x04F8])
	 */
	class UALI_SM_ExposureTherapy_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_MeleeWall1_ObjSetVar;                                // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeWall1_ObjVar;                                   // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeleeWall2_ObjSetVar;                                // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeWall2_ObjVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeleeWall3_ObjSetVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeWall3_ObjVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillBerserkPatients_ObjSetVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBerserkPatients_ObjVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickupPlant_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupPlant_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlacePlant_ObjSetVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePlant_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DealWithNeighbor_ObjSetVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DealWithNeighbor_ObjVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillNeighbor_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillNeighbor_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReviveNeighbor_ObjSetVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveNeighbor_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickupPartyLights_ObjSetVar;                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupPartyLights_ObjVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceLights_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceLights_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeMemoryOrb_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeMemoryOrb_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ChangeMusic_ObjSetVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChangeMusic_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindComputer_ObjSetVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindComputer_ObjVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DrawCaretakerOut1_ObjSetVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DrawCaretakerOut1_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillOfficers_ObjSetVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillOfficers_ObjVar;                                 // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DrawCaretakerOut2_ObjSetVar;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DrawCaretakerOut2_ObjVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillBots_ObjSetVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBots_ObjVar;                                     // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DrawCaretakerOut3_ObjSetVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DrawCaretakerOut3_ObjVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillCaretaker_ObjSetVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCaretaker_ObjVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickupPortrait_ObjSetVar;                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupPortrait_ObjVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HangPortrait_ObjSetVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HangPortrait_ObjVar;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindDistorted_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDistorted_ObjVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkKrieg_ObjSetVar;                                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkKrieg_ObjVar;                                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void SET_PickupPartyLights(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupPartyLights(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickupPartyLights(class UObject* Context);
		void MCE_ReviveNeighbor(class UObject* Context);
		void SET_PlaceLights(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceLights(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlaceLights(class UObject* Context);
		void Obj_ReviveNeighbor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReviveNeighbor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TakeMemoryOrb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeMemoryOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TakeMemoryOrb(class UObject* Context);
		void SET_ChangeMusic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChangeMusic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ChangeMusic(class UObject* Context);
		void MCE_KillNeighbor(class UObject* Context);
		void Obj_KillNeighbor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindComputer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindComputer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindComputer(class UObject* Context);
		void SET_KillNeighbor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DrawCaretakerOut1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DrawCaretakerOut1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DrawCaretakerOut1(class UObject* Context);
		void MCE_DealWithNeighbor(class UObject* Context);
		void SET_DrawCaretakerOut2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DrawCaretakerOut2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DrawCaretakerOut2(class UObject* Context);
		void Obj_DealWithNeighbor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DealWithNeighbor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_KillOfficers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillOfficers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillOfficers(class UObject* Context);
		void SET_KillBots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillBots(class UObject* Context);
		void MCE_PlacePlant(class UObject* Context);
		void Obj_PlacePlant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DrawCaretakerOut3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DrawCaretakerOut3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DrawCaretakerOut3(class UObject* Context);
		void SET_PlacePlant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_KillCaretaker(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCaretaker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillCaretaker(class UObject* Context);
		void MCE_PickupPlant(class UObject* Context);
		void SET_PickupPortrait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupPortrait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickupPortrait(class UObject* Context);
		void Obj_PickupPlant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickupPlant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_HangPortrait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HangPortrait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HangPortrait(class UObject* Context);
		void MCE_KillBerserkPatients(class UObject* Context);
		void Obj_KillBerserkPatients(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillBerserkPatients(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MeleeWall2(class UObject* Context);
		void Obj_MeleeWall2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_MeleeWall2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FindDistorted(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindDistorted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundDistorted(class UObject* Context);
		void SET_TalkKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedKrieg(class UObject* Context);
		void MCE_MeleeWall3(class UObject* Context);
		void Obj_MeleeWall3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_MeleeWall3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MeleeWall1(class UObject* Context);
		void Obj_MeleeWall1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_MeleeWall1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_ALI_SM_ExposureTherapy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
