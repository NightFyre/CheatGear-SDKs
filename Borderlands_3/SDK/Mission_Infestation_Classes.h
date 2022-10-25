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
	 * BlueprintGeneratedClass Mission_Infestation.Mission_Infestation_C
	 * Size -> 0x0069 (FullSize[0x0579] - InheritedSize[0x0510])
	 */
	class UMission_Infestation_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FreezeOtherKevins_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectKevin_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfestationDispose_ObjVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateComotion_ObjSetVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateComotion_ObjVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeFreezeGun_ObjSetVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeFreezeGun_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FreezeExampleKevin_ObjSetVar;                        // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FreezeExampleKevin_ObjVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DisposeOfKevins_ObjSetVar;                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectExampleKevin_ObjSetVar;                       // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectExampleFrozenKevin_ObjVar;                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bExampleRatchCollected;                                  // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void OnDialogSequenceFinished_13();
		void Set_InvestigateComotion(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FreezeOtherKevins(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectKevin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InfestationDispose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InvestigateComotion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_InvestigateCommotion(class UObject* Context);
		void ME_Player_has_disposed_of_a_Kevin(class UObject* Context);
		void OBJ_TakeFreezeGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeFreezeGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TakeFreezeGun(class UObject* Context);
		void Update_CollectKevin(class UObject* Context);
		void SET_FreezeExampleKevin(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FreezeExampleKevin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DisposeOfKevins(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FreezeExampleKevin(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void SET_CollectExampleKevin(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FreezeExampleKevin_Objective_PROXY_1();
		void OBJ_CollectExampleFrozenKevin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Clear_FreezeExampleKevin(class UObject* Context);
		void Update_CollectExampleFrozenKevin(class UObject* Context);
		void MCE_KevinCaptured(class UObject* Context);
		void MCE_Dialog_UseCryo_Tannis(class UObject* Context);
		void MCE_Dialog_NowPickItUp_Tannis(class UObject* Context);
		void MCE_Dialog_UseCryo_Claptrap(class UObject* Context);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_Infestation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
