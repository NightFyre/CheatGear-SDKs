#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_ObjectiveIcon.BP_ObjectiveIcon_C
	 * Size -> 0x0029 (FullSize[0x0351] - InheritedSize[0x0328])
	 */
	class UBP_ObjectiveIcon_C : public UBP_ObjectiveIconBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              CounterAttackIndicator;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconBackground;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconFill;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconObjectiveBorder;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShouldShowCapture;                                       // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Invalidate_And_Update_Everything();
		void OnSetObjective(class AObjectiveBase* NewObjective);
		void OnObjectiveActive(bool bNewActiveState, class AObjectiveBase* InObjective);
		void OnObjectiveChangeCapturingTeam(class AObjectiveBase* InObjective, unsigned char NewCapturers);
		void OnObjectiveChangeOwner(class AObjectiveBase* InObjective, unsigned char NewOwners);
		void OnPlayerChangeTeam(unsigned char TeamId, class ATeamInfo* TeamInfo);
		void Ensure_Objective_Is_Visibile();
		void OnObjectiveIsCounterAttacked(bool bNewCounterAttackState, class AObjectiveBase* InObjective);
		void ExecuteUbergraph_BP_ObjectiveIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
