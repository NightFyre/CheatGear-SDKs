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
	 * BlueprintGeneratedClass Mission_SpecialDelivery.Mission_SpecialDelivery_C
	 * Size -> 0x00A8 (FullSize[0x05B8] - InheritedSize[0x0510])
	 */
	class UMission_SpecialDelivery_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToTyreenCamp_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTyreenLoyalists_ObjSetVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTyreenLoyalists_ObjVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivatePayload_ObjSetVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivatePayload_ObjVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTroyLoyalists_ObjSetVar;                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTroyLoyalists_ObjVar;                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DropTheLoad_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DropTheLoad_ObjVar;                                  // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpecialDeliveryComplete_ObjSetVar;                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpecialDeliveryComplete_ObjVar;                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTyreenCamp_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTroyCamp_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTroyCamp_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscortThePayload_ObjSetVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EscortThePayload_ObjVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvisibleCraneCounter_ObjVar;                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BombDropped_Inv_ObjVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTyreenCampCounter_ObjVar;                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTroyCampCounter_ObjVar;                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void Obj_BombDropped_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BombDropped(class UObject* Context);
		void Obj_KillTyreenCampCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Kill_Tyreen_Camp_Counter(class UObject* Context);
		void Obj_KillTroyLoyalists(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ActivatePayload(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_ActivatePayload(class UObject* Context);
		void Obj_KillTroyCampCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Kill_Troy_Camp_Counter(class UObject* Context);
		void MCE_Update_Crane_Counter(class UObject* Context);
		void Obj_InvisibleCraneCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Escort_The_Payload(class UObject* Context);
		void Obj_EscortThePayload(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EscortThePayload(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToTroyCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Go_To_Troy_Camp(class UObject* Context);
		void Obj_GoToTroyCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToTyreenCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Go_To_Tyreen_Camp(class UObject* Context);
		void MCE_Update_Special_Delivery_Complete(class UObject* Context);
		void Obj_SpecialDeliveryComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SpecialDeliveryComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Kill_Troy_Loyalists(class UObject* Context);
		void Obj_DropTheLoad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DropTheLoad(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Drop_The_Load(class UObject* Context);
		void Set_KillTroyLoyalists(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ActivatePayload(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillTyreenLoyalists(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Kill_Tyreen_Loyalists(class UObject* Context);
		void Obj_KillTyreenLoyalists(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToTyreenCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_SpecialDelivery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
