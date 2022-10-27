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
	 * BlueprintGeneratedClass ALI_SM_WhenItRains.ALI_SM_WhenItRains_C
	 * Size -> 0x0028 (FullSize[0x0520] - InheritedSize[0x04F8])
	 */
	class UALI_SM_WhenItRains_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FindUmbrella_ObjSetVar;                              // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindUmbrella_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GiveUmbrella_ObjSetVar;                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveUmbrella_ObjVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_5();
		void OnDialogSequenceFinished_4();
		void MCE_FindUmbrella(class UObject* Context);
		void Obj_FindUmbrella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GiveUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveUmbrella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GiveUmbrella(class UObject* Context);
		void SET_FindUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void ExecuteUbergraph_ALI_SM_WhenItRains(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
