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
	 * BlueprintGeneratedClass Mission_Ixora_Main04.Mission_Ixora_Main04_C
	 * Size -> 0x0380 (FullSize[0x0890] - InheritedSize[0x0510])
	 */
	class UMission_Ixora_Main04_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMap_ObjSetVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindMissingPart_ObjSetVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterTomb_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExploreTomb_ObjSetVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineGlyph1_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_JumpDown_ObjSetVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExploreTomb2_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ProtectAva_ObjSetVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExploreTomb3_ObjSetVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMap_ObjVar;                                      // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindMissingPart_ObjVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTomb_ObjVar;                                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineGlyph1_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProtectAva_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExploreTomb_ObjVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JumpDown_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindCrimsonRaider_ObjSetVar;                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindCrimsonRaider_ObjVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MeetAva_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterTomb_PlayerArrived_ObjVar;                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterTomb_AvaArrived_ObjVar;                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AbductionSequence_Started_ObjVar;                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AbductionSequence_Completed_ObjVar;              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindGlyph1_ObjVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph1_PlayerArrived_ObjVar;              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph1_AvaArrived_ObjVar;                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence1_Completed_ObjVar;                 // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindGlyph2_ObjVar;                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineGlyph2_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph2_PlayerArrived_ObjVar;              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph2_AvaArrived_ObjVar;                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence2_Completed_ObjVar;                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineGlyph2_ObjSetVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindGlyph3_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineGlyph3_ObjVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph3_PlayerArrived_ObjVar;              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph3_AvaArrived_ObjVar;                 // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence3_Completed_ObjVar;                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineGlyph3_ObjSetVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAva_ObjVar;                                      // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAva_ObjSetVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FightWithAva_ObjVar;                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PhaselockBoulder1_AvaArrived_ObjVar;             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExploreTomb4_ObjSetVar;                              // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_JumpDown2_ObjSetVar;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JumpDown2_ObjVar;                                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineGlyph4_ObjSetVar;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineGlyph4_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph4_PlayerArrived_ObjVar;              // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExamineGlyph4_AvaArrived_ObjVar;                 // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence4_Completed_ObjVar;                 // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillRedeemer_ObjSetVar;                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRedeemer_ObjVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetReward_ObjSetVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetReward_ObjVar;                                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Inv_JumpFogDisappear_ObjVar;                         // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Glyph2_AvaBubble_Started_ObjVar;                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Glyph2_AvaBubble_Completed_ObjVar;               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PhaselockBoulder1_Completed_ObjVar;              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaDisappeared_ObjVar;                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step1_ObjVar;                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step2_ObjVar;                            // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step3_ObjVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step4_ObjVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaReappeared_ObjVar;                            // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaHeadVoice_Start_ObjVar;                       // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaHeadVoice_End_ObjVar;                         // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence2_Started_ObjVar;                   // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FogCleared_ObjVar;                               // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence1_Started_ObjVar;                   // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaHears_ObjVar;                                 // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaHears_End_ObjVar;                             // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FogAppears_ObjVar;                               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_IntroVOs_Done_ObjVar;                    // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PhaselockBoulder1_PlayerArrived_ObjVar;          // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PhaselockBoulder1_Started_ObjVar;                // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step1_IconEnabled_ObjVar;                // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step2_IconEnabled_ObjVar;                // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step3_IconEnabled_ObjVar;                // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step4_IconEnabled_ObjVar;                // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaBossSlide_Completed_ObjVar;                   // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PlayerEntersWater_ObjVar;                        // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AvaEntersWater_ObjVar;                           // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PhaselockGlyph2_ObjVar;                          // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ProtectAva_Warmup_ObjVar;                        // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnAmbush_ObjVar;                              // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence3_Started_ObjVar;                   // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence4_Started_ObjVar;                   // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExploreTomb_FloorIsLavaRoom_ObjVar;              // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step1_AvaArrived_ObjVar;                 // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step2_AvaArrived_ObjVar;                 // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step3_AvaArrived_ObjVar;                 // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step1_AvaArrived_Precheck_ObjVar;        // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindCrimsonRaider_AvaArrived_ObjVar;             // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step1_StartFight_ObjVar;                 // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step3_StartFight_ObjVar;                 // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step2_StartFight_ObjVar;                 // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterMachineRoom_ObjVar;                         // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterTomb_AvaMovesToTomb_ObjVar;                 // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterTomb_OpenDoor_ObjVar;                       // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GlyphSequence4_Punched_ObjVar;                   // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenRewardCloset_ObjVar;                         // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetReward_Pickup_ObjVar;                             // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetReward_Pickup_NOTREADY_ObjVar;                // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AbductionSequence_AvaReadyToMove_ObjVar;         // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredDesolate_ObjVar;                          // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindAva_Step3_FlashEnded_ObjVar;                 // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExploreTomb_Precheck_ObjVar;                     // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_JumpDown2_Precheck_ObjVar;                       // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineGlyph2_NearPostProtect_ObjVar;                // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindGlyphReady_1_ObjVar;                         // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_53();
		void OnDialogSequenceFinished_52();
		void OnDialogSequenceFinished_51();
		void OnDialogSequenceFinished_50();
		void OnDialogSequenceFinished_49();
		void OnDialogSequenceFinished_48();
		void OnDialogSequenceFinished_47();
		void OnDialogSequenceFinished_46();
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
		void Obj_INV_MeetAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindCrimsonRaider(class UObject* Context);
		void MCE_INV_MeetAva(class UObject* Context);
		void Obj_INV_EnterTomb_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EnterTomb_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnterTomb_PlayerArrived(class UObject* Context);
		void MCE_INV_EnterTomb_AvaArrived(class UObject* Context);
		void Obj_INV_AbductionSequence_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AbductionSequence_Started(class UObject* Context);
		void Obj_INV_AbductionSequence_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AbductionSequence_Completed(class UObject* Context);
		void Obj_INV_FindGlyph1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindGlyph1(class UObject* Context);
		void Obj_INV_ExamineGlyph1_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ExamineGlyph1_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExamineGlyph1_PlayerArrived(class UObject* Context);
		void MCE_INV_ExamineGlyph1_AvaArrived(class UObject* Context);
		void Obj_INV_GlyphSequence1_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence1_Completed(class UObject* Context);
		void Obj_ExploreTomb_Objective_PROXY();
		void Obj_ExploreTomb_Objective_PROXY_1();
		void Obj_INV_FindGlyph2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindGlyph2(class UObject* Context);
		void Obj_FindCrimsonRaider(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindCrimsonRaider(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ExamineGlyph2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExamineGlyph2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineGlyph2(class UObject* Context);
		void Obj_INV_ExamineGlyph2_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ExamineGlyph2_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExamineGlyph2_PlayerArrived(class UObject* Context);
		void MCE_INV_ExamineGlyph2_AvaArrived(class UObject* Context);
		void Obj_INV_GlyphSequence2_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence2_Completed(class UObject* Context);
		void Obj_ExploreTomb_Objective_PROXY_2();
		void Obj_INV_FindGlyph3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindGlyph3(class UObject* Context);
		void Set_ExamineGlyph3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExamineGlyph3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineGlyph3(class UObject* Context);
		void Obj_INV_ExamineGlyph3_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ExamineGlyph3_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExamineGlyph3_PlayerArrived(class UObject* Context);
		void MCE_INV_ExamineGlyph3_AvaArrived(class UObject* Context);
		void Obj_INV_GlyphSequence3_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence3_Completed(class UObject* Context);
		void Set_FindAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindAva(class UObject* Context);
		void MCE_JumpDown(class UObject* Context);
		void Obj_JumpDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExploreTomb(class UObject* Context);
		void Obj_FightWithAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FightWithAva(class UObject* Context);
		void Obj_INV_PhaselockBoulder1_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PhaselockBoulder1_AvaArrived(class UObject* Context);
		void Set_ExploreTomb4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExploreTomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProtectAva(class UObject* Context);
		void Obj_ProtectAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineGlyph1(class UObject* Context);
		void Obj_ExamineGlyph1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnterTomb(class UObject* Context);
		void Obj_EnterTomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindMissingPart(class UObject* Context);
		void Obj_FindMissingPart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GoToMap(class UObject* Context);
		void Set_JumpDown2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_JumpDown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_JumpDown2(class UObject* Context);
		void Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ExploreTomb3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ProtectAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ExploreTomb2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_JumpDown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ExamineGlyph4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExamineGlyph4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineGlyph4(class UObject* Context);
		void Obj_INV_ExamineGlyph4_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ExamineGlyph4_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExamineGlyph4_PlayerArrived(class UObject* Context);
		void MCE_INV_ExamineGlyph4_AvaArrived(class UObject* Context);
		void Obj_INV_GlyphSequence4_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence4_Completed(class UObject* Context);
		void Set_ExamineGlyph1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ExploreTomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterTomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindMissingPart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillRedeemer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillRedeemer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillRedeemer(class UObject* Context);
		void MissionKickoff();
		void Set_GetReward(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetReward(class UObject* Context);
		void Obj_INV_JumpFogDisappear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Glyph2_AvaBubble_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_Glyph2_AvaBubble_Started(class UObject* Context);
		void Obj_INV_Glyph2_AvaBubble_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_Glyph2_AvaBubble_Completed(class UObject* Context);
		void Obj_INV_PhaselockBoulder1_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PhaselockBoulder1_Completed(class UObject* Context);
		void Obj_INV_AvaDisappeared(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindAva_Step1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step1(class UObject* Context);
		void Obj_INV_FindAva_Step2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step2(class UObject* Context);
		void Obj_INV_FindAva_Step3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step3(class UObject* Context);
		void Obj_INV_FindAva_Step4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step4(class UObject* Context);
		void Obj_INV_AvaReappeared(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AvaReappeared(class UObject* Context);
		void Obj_INV_AvaHeadVoice_Start(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_AvaHeadVoice_End(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GlyphSequence2_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence2_Started(class UObject* Context);
		void Obj_INV_FogCleared(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FogCleared(class UObject* Context);
		void Obj_INV_GlyphSequence1_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence1_Started(class UObject* Context);
		void Obj_INV_AvaHears(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AvaHears(class UObject* Context);
		void Obj_INV_AvaHears_End(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FogAppears(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindAva_IntroVOs_Done(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_PhaselockBoulder1_PlayerArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PhaselockBoulder1_PlayerArrived(class UObject* Context);
		void Obj_INV_PhaselockBoulder1_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PhaselockBoulder1_Started(class UObject* Context);
		void Obj_INV_FindAva_Step1_IconEnabled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindAva_Step2_IconEnabled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindAva_Step3_IconEnabled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindAva_Step4_IconEnabled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_AvaBossSlide_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AvaBossSlide_Completed(class UObject* Context);
		void Obj_INV_PlayerEntersWater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PlayerEntersWater(class UObject* Context);
		void Obj_INV_AvaEntersWater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AvaEntersWater(class UObject* Context);
		void Obj_INV_PhaselockGlyph2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ProtectAva_Warmup(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SpawnAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GlyphSequence3_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence3_Started(class UObject* Context);
		void Obj_INV_GlyphSequence4_Started(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence4_Started(class UObject* Context);
		void Obj_INV_ExploreTomb_FloorIsLavaRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExploreTomb_FloorIsLavaRoom(class UObject* Context);
		void Obj_INV_FindAva_Step1_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step1_AvaArrived(class UObject* Context);
		void Obj_INV_FindAva_Step2_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step2_AvaArrived(class UObject* Context);
		void Obj_INV_FindAva_Step3_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step3_AvaArrived(class UObject* Context);
		void Obj_INV_FindAva_Step1_AvaArrived_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindCrimsonRaider_AvaArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindCrimsonRaider_AvaArrived(class UObject* Context);
		void Obj_INV_FindAva_Step1_StartFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step1_StartFight(class UObject* Context);
		void Obj_INV_FindAva_Step2_StartFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step2_StartFight(class UObject* Context);
		void Obj_INV_FindAva_Step3_StartFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step3_StartFight(class UObject* Context);
		void Obj_INV_EnterMachineRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnterMachineRoom(class UObject* Context);
		void Obj_INV_EnterTomb_AvaMovesToTomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnterTomb_AvaMovesToTomb(class UObject* Context);
		void Obj_INV_EnterTomb_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnterTomb_OpenDoor(class UObject* Context);
		void Obj_INV_GlyphSequence4_Punched(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GlyphSequence4_Punched(class UObject* Context);
		void Obj_INV_OpenRewardCloset(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_OpenRewardCloset(class UObject* Context);
		void Obj_GetReward_Pickup(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GetReward_Pickup_NOTREADY(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_AbductionSequence_AvaReadyToMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AbductionSequence_AvaReadyToMove(class UObject* Context);
		void Obj_INV_EnteredDesolate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredDesolate(class UObject* Context);
		void Obj_INV_FindAva_Step3_FlashEnded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FindAva_Step3_FlashEnded(class UObject* Context);
		void Obj_INV_ExploreTomb_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_JumpDown2_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_JumpDown2_Precheck_Objective_PROXY_3();
		void Obj_INV_JumpDown2_Precheck_Objective_PROXY_4();
		void Obj_INV_ExploreTomb_Precheck_Objective_PROXY_5();
		void Obj_ExamineGlyph2_NearPostProtect(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExamineGlyph2_NearPostProtect(class UObject* Context);
		void Obj_INV_FindGlyphReady_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ixora_Main04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
