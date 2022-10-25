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
	 * BlueprintGeneratedClass ALI_SM_ShadesOfTruth.ALI_SM_ShadesOfTruth_C
	 * Size -> 0x0038 (FullSize[0x0530] - InheritedSize[0x04F8])
	 */
	class UALI_SM_ShadesOfTruth_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_TalkToKrieg_ObjSetVar;                               // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_ObjVar;                                  // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SnuffOutLies_ObjSetVar;                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SnuffOutLies_ObjVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShowKriegEverything_ObjSetVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShowKriegEverything_ObjVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void SET_SnuffOutLies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SnuffOutLies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SnuffOutLies(class UObject* Context);
		void MCE_TalkToKrieg(class UObject* Context);
		void Obj_TalkToKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ShowKriegEverything(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShowKriegEverything(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShowKriegEverything(class UObject* Context);
		void SET_TalkToKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void ExecuteUbergraph_ALI_SM_ShadesOfTruth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
