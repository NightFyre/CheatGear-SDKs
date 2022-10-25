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
	 * Class Tutorial.CaptaincyTutorialDesc
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UCaptaincyTutorialDesc : public UEntitlementDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.CompanyTutorialVoyageProgress
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UCompanyTutorialVoyageProgress : public UObject
	{
	public:
		class UClass*                                              AssignedVoyageProposalDescClass;                         // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              AssignedTaleRankDescClass;                               // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_AWGQ[0xA8];                                  // 0x0038(0x00A8) MISSED OFFSET (PADDING)

	public:
		bool IsSameVoyage(const class FText& VoyageName);
		void AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass);
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.ContextualTutorialComponent
	 * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
	 */
	class UContextualTutorialComponent : public UActorComponent
	{
	public:
		TArray<struct FContextualTutorialPromptDesc>               ContextualTutorialClasses;                               // 0x00C8(0x0010) Edit, ZeroConstructor
		TArray<class AActor*>                                      SpawnedPromptActors;                                     // 0x00D8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_QVRV[0x38];                                  // 0x00E8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.HasTutorialStarterBegunNPCDialogConditional
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UHasTutorialStarterBegunNPCDialogConditional : public UNPCDialogConditional
	{
	public:
		ETutorialType                                              TutorialStarterType;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VXF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.OnboardingStatusInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnboardingStatusInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.Tutorial2019Component
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UTutorial2019Component : public UActorComponent
	{
	public:
		bool                                                       IsEnabledByServer;                                       // 0x00C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsInTutorialTale;                                        // 0x00C9(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DDK[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)

	public:
		void ReceiveTutorial2019BeginPlayOnServer();
		void ReceiveTutorial2019BeginPlayOnClient();
		void OnRep_IsEnabledByServer(bool OldIsEnabled);
		void ForceDisableComponent_Blueprint();
		void BeginOnServer();
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.Tutorial2019ContextualDelegatingComponent
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UTutorial2019ContextualDelegatingComponent : public UTutorial2019Component
	{
	public:
		class UContextualTutorialComponent*                        ContextualTutorialComponent;                             // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.Tutorial2019FunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTutorial2019FunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FTeleportLocation STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport);
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.TutorialHelpersBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTutorialHelpersBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.TutorialManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTutorialManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.TutorialManager
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	class UTutorialManager : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4XNM[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CompanyOnboardingStarterClass;                           // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              MaidenVoyageStarterClass;                                // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              BeachNPCSpawnFlowStarterClass;                           // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              CaptaincyStarterClass;                                   // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              CaptaincyNewShipStarterClass;                            // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              CaptaincyWithBeachNPCSpawnStarterClass;                  // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              SelectedTutorialClass;                                   // 0x0100(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UTutorialStarter*                                    SelectedTutorial;                                        // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETutorialType                                              TutorialType;                                            // 0x0110(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       HasEverPlayedFirstPersonAnimation;                       // 0x0111(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasStartedTutorial;                                      // 0x0112(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasReceivedEntitlements;                                 // 0x0113(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasPosessedPawn;                                         // 0x0114(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasPlayerFinshedSpawning;                                // 0x0115(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerWaitingForCaptaincySessionResponse;              // 0x0116(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7V2Q[0x19];                                  // 0x0117(0x0019) MISSED OFFSET (PADDING)

	public:
		void OnRep_TutorialType();
		void OnRep_SelectedTutorialClass();
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.TutorialStarter
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UTutorialStarter : public UObject
	{
	public:
		class AAthenaPlayerController*                             AthenaPlayerController;                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       ShouldPlayIntroAnimatic;                                 // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldDisableAllIntroBehaviour;                          // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YWK3[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFirstPersonAnimaticSettings                        IntroAnimationSettings;                                  // 0x0034(0x002C) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.BeachNPCSpawnFlowStarter
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBeachNPCSpawnFlowStarter : public UTutorialStarter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.CaptaincyStarter
	 * Size -> 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
	 */
	class UCaptaincyStarter : public UTutorialStarter
	{
	public:
		class UVoyageDescDataAsset*                                TutorialTale;                                            // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckIfShipNeverSetSail;                                 // 0x0068(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckIfPlayerInOutpost;                                  // 0x0069(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckIfPlayerIsInCaptain;                                // 0x006A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGYK[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CheckIfEntitlementIsOwned;                               // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       CheckIfCaptainingANewShip;                               // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q84D[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FeatureToggle;                                           // 0x007C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckIfPlayerHasMadeAttempts;                            // 0x0084(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PNO6[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PromptCounterKey;                                        // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    MaxAttemptCount;                                         // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W78P[0x64];                                  // 0x0094(0x0064) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.CompanyOnboardingStarter
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UCompanyOnboardingStarter : public UTutorialStarter
	{
	public:
		bool HasPrerequisites();
		static UClass* StaticClass();
	};

	/**
	 * Class Tutorial.MaidenVoyageStarter
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMaidenVoyageStarter : public UTutorialStarter
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
