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
	 * Class PrioritisedPrompts.BasePromptCoordinator
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UBasePromptCoordinator : public UObject
	{
	public:
		class AAthenaPlayerController*                             PlayerController;                                        // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O9NZ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrioritisedPromptsManager*                          PrioritisedPromptsManager;                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACharacter*                                          CharacterWithRegisteredEvents;                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6MH5[0xA8];                                  // 0x0050(0x00A8) MISSED OFFSET (PADDING)

	public:
		void UpdateVisiblePrompt();
		void UnregisterOtherEvents_Implementable();
		void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
		void Uninitialize_Implementable();
		void Uninitialize();
		void Start();
		void SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt);
		void RegisterOtherEvents_Implementable();
		void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
		void OnControllerEndPlay(EEndPlayReason EndPlayReason);
		void MarkAsComplete_Implementable();
		struct FPromptEvaluation STATIC_MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt);
		struct FPromptEvaluation STATIC_MakeHideCurrentPrompts();
		struct FPromptEvaluation STATIC_MakeCompleteCoordinator();
		void Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager);
		bool GetCompleted();
		struct FPromptEvaluation EvaluatePromptDisplayState();
		void DismissAllPrompts();
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.GetPromptsLocalService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGetPromptsLocalService : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Loaded;                                                  // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class UObject*                                             WorldContextObject;                                      // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UGetPromptsLocalService* STATIC_GetPromptsLocalService(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.PrioritisedPromptsManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrioritisedPromptsManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.PrioritisedPromptsManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPrioritisedPromptsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_SBSL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrioritisedPromptWithHandle>                AllPrompts;                                              // 0x0030(0x0010) ZeroConstructor
		class APlayerController*                                   PlayerController;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VI4V[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.PromptCounterAccessKey
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPromptCounterAccessKey : public UObject
	{
	public:
		class FString                                              Key;                                                     // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.PromptsLocalServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPromptsLocalServiceInterface : public UInterface
	{
	public:
		void IncrementCountForKey(class UClass* AccessKey);
		int32_t GetCountForKey(class UClass* AccessKey);
		static UClass* StaticClass();
	};

	/**
	 * Class PrioritisedPrompts.PromptsLocalService
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UPromptsLocalService : public UObject
	{
	public:
		unsigned char                                              UnknownData_O17K[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
