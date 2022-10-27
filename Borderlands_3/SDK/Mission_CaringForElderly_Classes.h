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
	 * BlueprintGeneratedClass Mission_CaringForElderly.Mission_CaringForElderly_C
	 * Size -> 0x0128 (FullSize[0x0638] - InheritedSize[0x0510])
	 */
	class UMission_CaringForElderly_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_MeetDaughter_ObjSetVar;                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetDaughter_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetInCar_ObjSetVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetInCar_ObjVar;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destination1_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destination1_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destination2_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destination2_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Destination4_ObjSetVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Destination4_ObjVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AcquireTeeth_ObjSetVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AcquireTeeth_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToDaughter_ObjSetVar;                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToDaughter_ObjVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DestroyCar_ObjVar;                                   // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCarDestroyed;                                           // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RR1J[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_AcquireLaxative_ObjSetVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AcquireLaxative_ObjVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AcquireCoinCollection_ObjSetVar;                     // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AcquireCoinCollection_ObjVar;                        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ParkInGarage_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ParkInGarage_ObjVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeetCoinCollector_ObjSetVar;                         // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetCoinCollector_ObjVar;                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KnockOnDoor_ObjSetVar;                               // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KnockOnDoor_ObjVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BackInCar_Dest1_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TimedAdvance1_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToDaughterPappyDead_ObjSetVar;                 // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToDaughterPappyDead_ObjVar;                    // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillDentist_ObjSetVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillDentist_ObjVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToTechnical_ObjSetVar;                         // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToTechnical_ObjVar;                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToTechnicalGarage_ObjSetVar;                   // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToTechnicalGarage_ObjVar;                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_23();
		void OBJ_GetInCar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Destination1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Destination1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_Destination2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_Destination4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_AcquireTeeth(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Destination2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Destination4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_AcquireTeeth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToDaughter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToDaughter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyCar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyCar_Objective_PROXY();
		void OBJ_DestroyCar_Objective_PROXY_1();
		void OBJ_DestroyCar_Objective_PROXY_2();
		void OBJ_DestroyCar_Objective_PROXY_3();
		void OBJ_DestroyCar_Objective_PROXY_4();
		void MCE_DestroyCar(class UObject* Context);
		void MCE_Destination1(class UObject* Context);
		void MCE_Destination2(class UObject* Context);
		void MCE_Destination4(class UObject* Context);
		void MCE_AcquireTeeth(class UObject* Context);
		void MCE_MeetDaughter(class UObject* Context);
		void MCE_ReturnToDaughter(class UObject* Context);
		void SET_AcquireLaxative(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AcquireLaxative(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_AcquireCoinCollection(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AcquireCoinCollection(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyCar_Objective_PROXY_5();
		void OBJ_DestroyCar_Objective_PROXY_6();
		void SET_ParkInGarage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ParkInGarage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyCar_Objective_PROXY_7();
		void MCE_ParkInGarage(class UObject* Context);
		void OBJ_MeetCoinCollector(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_MeetCoinCollector(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MeetCoinCollector(class UObject* Context);
		void OBJ_DestroyCar_Objective_PROXY_8();
		void Set_KnockOnDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KnockOnDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyCar_Objective_PROXY_9();
		void MCE_CFE_KnockOnDoor(class UObject* Context);
		void MCE_GetInCar(class UObject* Context);
		void OBJ_BackInCar_Dest1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TimedAdvance1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimedAdvance1(class UObject* Context);
		void SET_ReturnToDaughterPappyDead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToDaughterPappyDead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToDaughterPappyDead(class UObject* Context);
		void SET_KillDentist(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillDentist(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillDentist(class UObject* Context);
		void OBJ_DestroyCar_Objective_PROXY_10();
		void SET_ReturnToTechnical(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToTechnical(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToTechnical(class UObject* Context);
		void OBJ_DestroyCar_Objective_PROXY_11();
		void SET_ReturnToTechnicalGarage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToTechnicalGarage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToTechnicalGarage(class UObject* Context);
		void OBJ_DestroyCar_Objective_PROXY_12();
		void OBJ_BackInCar_Dest1_Objective_PROXY_13();
		void OBJ_BackInCar_Dest1_Objective_PROXY_14();
		void OBJ_BackInCar_Dest1_Objective_PROXY_15();
		void SET_GetInCar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_MeetDaughter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MeetDaughter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_CaringForElderly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
