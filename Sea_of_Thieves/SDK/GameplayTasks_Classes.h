#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class GameplayTasks.GameplayTaskOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayTaskOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGameplayTask : public UObject
	{
	public:
		class FName                                                InstanceName;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_YIZ5[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		void ReadyForActivation();
		void GenericGameplayTaskDelegate__DelegateSignature();
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_SpawnActor
	 * Size -> 0x0040 (FullSize[0x0098] - InheritedSize[0x0058])
	 */
	class UGameplayTask_SpawnActor : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_AXWI[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ClassToSpawn;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		class UGameplayTask_SpawnActor* STATIC_SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
		void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_WaitDelay
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UGameplayTask_WaitDelay : public UGameplayTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              UnknownData_AXKY[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(float Time);
		void TaskDelayDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTaskResource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayTaskResource : public UObject
	{
	public:
		int32_t                                                    ManualResourceID;                                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_6LEQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bManuallySetID : 1;                                      // 0x0030(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_THEE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTasksComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UGameplayTasksComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L7YC[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                               SimulatedTasks;                                          // 0x00D0(0x0010) Net, ZeroConstructor, RepNotify
		TArray<class UGameplayTask*>                               TaskPriorityQueue;                                       // 0x00E0(0x0010) ZeroConstructor, Protected
		unsigned char                                              UnknownData_LWM2[0x28];                                  // 0x00F0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClaimedResourcesChange;                                // 0x0118(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference

	public:
		void OnRep_SimulatedTasks();
		EGameplayTaskRunResult STATIC_K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
