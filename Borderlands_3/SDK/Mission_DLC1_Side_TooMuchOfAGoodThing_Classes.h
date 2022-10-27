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
	 * BlueprintGeneratedClass Mission_DLC1_Side_TooMuchOfAGoodThing.Mission_DLC1_Side_TooMuchOfAGoodThing_C
	 * Size -> 0x0099 (FullSize[0x05A9] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Side_TooMuchOfAGoodThing_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindPBJ_ObjSetVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBread_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPeanutButter_ObjVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindJelly_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GivePBJ_ObjSetVar;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GivePBJ_ObjVar;                                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindDurian_ObjSetVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDurian_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveDurian_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveDurian_ObjVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachJSpot_ObjSetVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachJSpot_ObjVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillJackass_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillJackass_ObjVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupSpleen_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupSpleen_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveSpleen_ObjSetVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveSpleen_ObjVar;                                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCollectedPBandJIngredient;                             // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void Obj_FindDurian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveDurian(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveDurian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindDurian(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GivePBJ(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachJSpot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachJSpot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillJackass(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillJackass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupSpleen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupSpleen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveSpleen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveSpleen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GivePBJ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GivenSpleen(class UObject* Context);
		void MCE_GivenPBJ(class UObject* Context);
		void MCE_GivenDurian(class UObject* Context);
		void MCE_ReachedJSpot(class UObject* Context);
		void MCE_KilledJackass(class UObject* Context);
		void MissionKickoff();
		void Obj_FindJelly(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindPeanutButter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindBread(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindPBJ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_DLC1_Side_TooMuchOfAGoodThing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
