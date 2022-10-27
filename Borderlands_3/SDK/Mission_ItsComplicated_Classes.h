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
	 * BlueprintGeneratedClass Mission_ItsComplicated.Mission_ItsComplicated_C
	 * Size -> 0x00B2 (FullSize[0x05C2] - InheritedSize[0x0510])
	 */
	class UMission_ItsComplicated_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToTina_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTina_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ButtslamTheBomb_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ButtslamTheBomb_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Int_SewerObjectives;                                     // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6EBQ[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_OpenTheHatch_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerReturnsToBrick_ObjVar;                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTheHatch_inv_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BlowUpTheBomb_ObjSetVar;                             // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BlowUpTheBomb_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendBoomtown_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendBoomtown_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CompleteMission_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteMission_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToBrick_ObjSetVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBrick_Inv_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TalkedToBrick;                                           // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJRQ[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_Boomtown_BC_ObjVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TunnelCOVKilled;                                         // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMissionObjectiveEvent                                     ObjEvent_BlowUpTheBomb;                                  // 0x05A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_900H[0x6];                                   // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_MordyCallsIn_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MordyCallsIn_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMissionObjectiveStatus                                    ObjStatus_DefendBoomtown;                                // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMissionObjectiveStatus                                    ObjStatus_BlowUpBomb;                                    // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Obj_BlowUpTheBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BlowUpTheBomb(class UObject* Context);
		void Set_DefendBoomtown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendBoomtown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_DefendBoomtown(class UObject* Context);
		void Set_CompleteMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CompleteMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CompleteMission(class UObject* Context);
		void Set_BlowUpTheBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkToBrick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToBrick_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TalkToBrick(class UObject* Context);
		void MCE_Update_OpenTheHatch(class UObject* Context);
		void MCE_DialogNag_BlowUpTheBomb(class UObject* Context);
		void Obj_OpenTheHatch_inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PlayerReturnsToBrick(class UObject* Context);
		void Obj_Boomtown_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BoomtownBC(class UObject* Context);
		void Obj_PlayerReturnsToBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Dialog_BrickAndTinaChatter(class UObject* Context);
		void Set_OpenTheHatch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MordyCallsIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MordyCallsIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MordyCallsIn(class UObject* Context);
		void MCE_TinaLookAtPlayer(class UObject* Context);
		void MCE_Update_ButtslamTheBomb(class UObject* Context);
		void Obj_ButtslamTheBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtBoomtownVO(class UObject* Context);
		void Set_ButtslamTheBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_TalkToTina(class UObject* Context);
		void Obj_TalkToTina(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToTina(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_ItsComplicated(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
