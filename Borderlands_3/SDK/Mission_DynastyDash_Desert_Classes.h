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
	 * BlueprintGeneratedClass Mission_DynastyDash_Desert.Mission_DynastyDash_Desert_C
	 * Size -> 0x006B (FullSize[0x057B] - InheritedSize[0x0510])
	 */
	class UMission_DynastyDash_Desert_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_AcquireBurgers_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AcquireBurgers_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DeliverBurgers_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DeliverBurgers_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToStart_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteDeliveryFast_ObjVar;                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteDeliveryMed_ObjVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteDeliverySlow_ObjVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToStart_ObjVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerSecondsRemaining;                                   // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerSecondsInitial;                                     // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerSecondsComputedTime;                                // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E1U0[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_SignTest_ObjVar;                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FastAchieved;                                            // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MediumAchieved;                                          // 0x0579(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SlowAchieved;                                            // 0x057A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OBJ_AcquireBurgers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_AcquireBurgers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DeliverBurgers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DeliverBurgers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DeliverBurgers(class UObject* Context);
		void SET_ReturnToStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CompleteDeliveryFast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CompleteDeliveryMed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CompleteDeliverySlow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CompleteDeliveryFast_Objective_PROXY();
		void OBJ_CompleteDeliveryMed_Objective_PROXY_1();
		void OBJ_CompleteDeliverySlow_Objective_PROXY_2();
		void MCE_AcquireBurgers(class UObject* Context);
		void OBJ_ReturnToStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToStart(class UObject* Context);
		void MCE_DetermineResults(class UObject* Context);
		void OBJ_SignTest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShotSign(class UObject* Context);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_DynastyDash_Desert(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
