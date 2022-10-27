#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class GOAP.GoapPlannerComponent
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UGoapPlannerComponent : public UActorComponent
	{
	public:
		bool                                                       bEnableLogging;                                          // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69EF[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ActionsDataTable;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIZZ[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGoapAction>                                 Actions;                                                 // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UGoapWorldComponent*                                 GoapWorld;                                               // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SimulatePlan(const struct FGoapWorldState& WorldState, TArray<struct FGoapNode> Plan, struct FGoapWorldState* ResultWorldState);
		void SetGoapWorldComponent(class UGoapWorldComponent* GoapWorldComponent);
		void RemoveAction(const class FName& Name);
		void Plan(const struct FGoapWorldState& WorldState, const struct FGoapWorldState& GoalState, const class FScriptDelegate& OnComplete);
		void GetPlan(TArray<struct FGoapNode>* Plan);
		class UGoapWorldComponent* GetGoapWorldComponent();
		TArray<struct FGoapAction> GetActions();
		void AddAction(const struct FGoapAction& NewGoapAction);
		static UClass* StaticClass();
	};

	/**
	 * Class GOAP.GoapWorldComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UGoapWorldComponent : public UActorComponent
	{
	public:
		class UDataTable*                                          WorldDataTable;                                          // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGoapWorldState                                     WorldState;                                              // 0x00B8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
