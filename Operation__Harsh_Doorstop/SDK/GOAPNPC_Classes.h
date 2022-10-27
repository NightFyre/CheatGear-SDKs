#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class GOAPNPC.GOAPAction
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UGOAPAction : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Cost;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TFFG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TargetClass;                                             // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAtom>                                       Preconditions;                                           // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAtom>                                       Effects;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              Target;                                                  // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bActivated;                                              // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8A0E[0x27];                                  // 0x0071(0x0027) MISSED OFFSET (PADDING)

	public:
		bool Validate(class APawn* Pawn);
		bool ReceiveIsActionInvalid(class APawn* Pawn);
		bool HasCompleted(class APawn* Pawn);
		TArray<class AActor*> GetTargetsList(class APawn* Pawn);
		void EndAction(class APawn* Pawn);
		bool DoAction(class APawn* Pawn, class FString* FailureReason);
		bool CheckProceduralPrecondition(class APawn* Pawn, bool bPlanning);
		void BeginAction(class APawn* Pawn);
		static UClass* StaticClass();
	};

	/**
	 * Class GOAPNPC.GOAPComponent
	 * Size -> 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
	 */
	class UGOAPComponent : public UActorComponent
	{
	public:
		TArray<struct FAtom>                                       CurrentWorldInitial;                                     // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAtom>                                       DesiredWorldInitial;                                     // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              GoalInitial;                                             // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              GoalSetInitial[0x28];                                    // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UClass*>                                      ActionClasses;                                           // 0x0100(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxDepth;                                                // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K745[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIOwner;                                                 // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               AIPawnOwner;                                             // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4GD0[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGOAPGoalManager*                                    GoalManager;                                             // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGOAPAction*>                                 AuxActions;                                              // 0x0138(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGOAPAction*>                                 Plan;                                                    // 0x0148(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1LRH[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateCurrentWorld(TArray<struct FAtom> Atoms);
		void SetGoal(class UGOAPGoal* NewGoal);
		void SetCurrentWorld(TArray<struct FAtom> NewCurrentWorld);
		void Reset();
		void ReceiveOnReset();
		bool IsPlanValid();
		void InvalidatePlan();
		void InvalidateGoalSelection();
		bool HasPlan();
		TArray<class UGOAPAction*> GetPlanSnapshot();
		TArray<struct FAtom> GetDesiredWorldStateAtoms();
		TArray<struct FAtom> GetCurrentWorldStateAtoms();
		bool GeneratePlan();
		bool ExecuteGOAP(bool bCreatePlan, bool bRemoveActionOnComplete);
		void ClearPlan();
		static UClass* StaticClass();
	};

	/**
	 * Class GOAPNPC.GOAPGoalManager
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGOAPGoalManager : public UObject
	{
	public:
		class UGOAPGoalSet*                                        GoalSet;                                                 // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGOAPGoal*>                                   AuxGoals;                                                // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGOAPGoal*                                           CurrentGoal;                                             // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ADCP[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateGoalSet(class UGOAPGoalSet* InGoalSet);
		void SetGoalSet(class UGOAPGoalSet* InGoalSet);
		void SetCurrentGoal(class UGOAPGoal* NewGoal, bool bDeactivatePreviousGoal);
		void RemoveGoal(class UClass* GoalClass);
		void InvalidatePlan();
		void InvalidateGoalSelection();
		class UGOAPComponent* GetOuterGOAPComp();
		TArray<struct FAtom> GetCurrentGoalAtoms();
		class UGOAPGoal* FindGoal(class UClass* GoalClass);
		void ClearGoals();
		class UGOAPGoal* AddGoal(class UClass* GoalClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GOAPNPC.GOAPGoal
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGOAPGoal : public UObject
	{
	public:
		class FString                                              GoalName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAtom>                                       DesiredWorldInitial;                                     // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_51L9[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelevanceWeightBase;                                     // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RelevanceWeight;                                         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAIController*                                       AIOwner;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool RequiresNewPlan();
		class UGOAPGoalManager* GetOuterGoalManager();
		void GeneratePlanFailure();
		void Deactivate();
		void ClearRelevance();
		void CalculateRelevance();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class GOAPNPC.GOAPAIController
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class AGOAPAIController : public AAIController
	{
	public:
		class UGOAPComponent*                                      GOAPComponent;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GOAPNPC.GOAPGoalSet
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UGOAPGoalSet : public UPrimaryDataAsset
	{
	public:
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Goals[0x50];                                             // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
