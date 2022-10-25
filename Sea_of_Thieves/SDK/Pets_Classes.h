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
	 * Class Pets.AIPetsOnDemandSpawner
	 * Size -> 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
	 */
	class UAIPetsOnDemandSpawner : public UAISpawner
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_IsForcingHangout
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsForcingHangout : public UBTDecorator_BaseConditional
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsOccupiedHangoutSpotStillAvailable : public UBTDecorator_BaseConditional
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsOccupyingHangoutSpotWithGivenId : public UBTDecorator_BaseConditional
	{
	public:
		TArray<struct FHangoutSpotId>                              SuccessIds;                                              // 0x0068(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_IsPerchedInHangout
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsPerchedInHangout : public UBTDecorator_BaseConditional
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_PetFoodSourceAvailable
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_PetFoodSourceAvailable : public UBTDecorator_BaseConditional
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTDecorator_PetRoamingAnimationStateActive
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_PetRoamingAnimationStateActive : public UBTDecorator_BaseConditional
	{
	public:
		TArray<EAthenaAnimationPetRoamingState>                    MatchingStates;                                          // 0x0068(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_AttachToHangout
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_AttachToHangout : public UBTTask_BlackboardBase
	{
	public:
		float                                                      TaskDuration;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1D2E[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_ChangeHangoutAnimation
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_ChangeHangoutAnimation : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_DetachFromHangout
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_DetachFromHangout : public UBTTask_BlackboardBase
	{
	public:
		float                                                      TaskDuration;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O0BI[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_EatFood
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_EatFood : public UBTTaskNode
	{
	public:
		class UPetFeedingDataAsset*                                FeedingDataAsset;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_GetTotalHangoutTime
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_GetTotalHangoutTime : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_NotifyForcedHangoutComplete
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_NotifyForcedHangoutComplete : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_PetWaitForAnimationRoamingState
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UBTTask_PetWaitForAnimationRoamingState : public UBTTaskNode
	{
	public:
		TArray<EAthenaAnimationPetRoamingState>                    SuccessRoamingStates;                                    // 0x0060(0x0010) Edit, ZeroConstructor
		TArray<EAthenaAnimationPetRoamingState>                    FailRoamingStates;                                       // 0x0070(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_ReactToOwner
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_ReactToOwner : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_KX4J[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_ReactToThreat
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_ReactToThreat : public UBTTaskNode
	{
	public:
		EAthenaAnimationPetRoamingState                            ReactAnimState;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChangeAnimationAfterWaitTime;                            // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8AKW[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReactAnimTime;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAthenaAnimationPetRoamingState                            AfterReactAnimState;                                     // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PNDJ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_RotatePetToFaceBBEntryWithTime
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTTask_RotatePetToFaceBBEntryWithTime : public UBTTask_RotateToFaceBBEntry
	{
	public:
		float                                                      Delay;                                                   // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTime;                                            // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_SelectFoodSource
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_SelectFoodSource : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_SelectPetHangoutSpot
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UBTTask_SelectPetHangoutSpot : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       NeedForceId;                                             // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1K0Y[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHangoutSpotId                                      ForcedId;                                                // 0x008C(0x0008) Edit
		unsigned char                                              UnknownData_WIL2[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_SelectWanderFlyStrategy
	 * Size -> 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
	 */
	class UBTTask_SelectWanderFlyStrategy : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderFloatValue                           WanderRange;                                             // 0x0088(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           LowFlyRange;                                             // 0x00B8(0x0030) Edit, ContainsInstancedReference
		class UClass*                                              WanderStrategy;                                          // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              LowFlyStrategy;                                          // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              HighFlyStrategy;                                         // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetHangoutInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetHangoutInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetMemoryInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetMemoryInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetLifetimeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetLifetimeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PlayerPetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerPetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetReactInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetReactInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_SetDebugPetStateDescriptor
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetDebugPetStateDescriptor : public UBTTaskNode
	{
	public:
		EDebugPetStateDescriptor                                   NewDescriptor;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M25F[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.BTTask_StopOccupyingHangoutSpot
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_StopOccupyingHangoutSpot : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.CannonSquashComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UCannonSquashComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PVUU[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetDangerComponent
	 * Size -> 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
	 */
	class UPetDangerComponent : public UActorComponent
	{
	public:
		class UPetDangerDataAsset*                                 DangerDataAsset;                                         // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6TAS[0xD0];                                  // 0x00D0(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_AverageThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.EnvQueryContext_CurrentHangoutSpot
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_CurrentHangoutSpot : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_FirstThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.EnvQueryContext_PerceivedFoodSources
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_PerceivedFoodSources : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.EnvQueryContext_SafePositionFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_SafePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetDesc
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UPetDesc : public UItemDesc
	{
	public:
		class UPetSpawnParamsDataAsset*                            PetSpawnParams;                                          // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PreviewPetClass;                                         // 0x0128(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetHangoutSpotsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPetHangoutSpotsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FHangoutSpotParams>                          HangoutSpotParams;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetHangoutSpotSelectorComponent
	 * Size -> 0x01D0 (FullSize[0x0298] - InheritedSize[0x00C8])
	 */
	class UPetHangoutSpotSelectorComponent : public UActorComponent
	{
	public:
		class UPetHangoutSpotComponent*                            HangoutSpotPositionComponent;                            // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetHangoutSpotsDataAsset*                           HangoutParamsDataAsset;                                  // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KHB1[0x70];                                  // 0x00D8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PetType_Cached;                                          // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_VDQE[0x148];                                 // 0x0150(0x0148) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.HangoutSpotSelectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHangoutSpotSelectionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetIdleMovementInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetIdleMovementInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetAIController
	 * Size -> 0x00E8 (FullSize[0x09D8] - InheritedSize[0x08F0])
	 */
	class APetAIController : public AAthenaAIController
	{
	public:
		unsigned char                                              UnknownData_QW3S[0x20];                                  // 0x08F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIStategyControllerMovementMod>             StrategyControllerMovementMods;                          // 0x0910(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      DefaultControlRotationInterpSpeed;                       // 0x0920(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7S1O[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultStrategy;                                         // 0x0928(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UReactStateMappingsDataAsset*                        ReactMappings;                                           // 0x0930(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_LP9C[0x8];                                   // 0x0938(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetHangoutSpotSelectorComponent*                    HangoutSpotSelectorComponent;                            // 0x0940(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetHangoutSpotComponent*                            ForcedHangoutSpotComponent;                              // 0x0948(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlackboardData*                                     DefaultBlackboardAsset;                                  // 0x0950(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       DefaultTree;                                             // 0x0958(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       HangoutTree;                                             // 0x0960(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       IdleTree;                                                // 0x0968(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumReactRange;                                       // 0x0970(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_74TE[0x4];                                   // 0x0974(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetDangerComponent*                                 DangerComponent;                                         // 0x0978(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAgentHalfHeightPctOverride;                           // 0x0980(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BV98[0x54];                                  // 0x0984(0x0054) MISSED OFFSET (PADDING)

	public:
		void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
		class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetCustomisationOverrideDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPetCustomisationOverrideDataAsset : public UDataAsset
	{
	public:
		class UClass*                                              AnimationOverrideId;                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWwiseEvent*                                         FiredFromActorSFX;                                       // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugMenuName;                                           // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetCustomisationOverrideMappingsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPetCustomisationOverrideMappingsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FPetCustomiationOverrideMappingEntry>        MappingEntries;                                          // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetDangerDataAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPetDangerDataAsset : public UDataAsset
	{
	public:
		TArray<struct FPetDangerHearingThreat>                     KnownHearingDangers;                                     // 0x0028(0x0010) Edit, ZeroConstructor
		float                                                      MinChangeAverageThreatLocationToUpdate;                  // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FleeDistance;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EPetDangerHearingResponseType>                      ResponsePriorities;                                      // 0x0040(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetFeedingDataAsset
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPetFeedingDataAsset : public UDataAsset
	{
	public:
		struct FPetFeedingParams                                   PetFeedingParams;                                        // 0x0028(0x0038) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetHangoutSpotComponent
	 * Size -> 0x00A0 (FullSize[0x0380] - InheritedSize[0x02E0])
	 */
	class UPetHangoutSpotComponent : public USceneComponent
	{
	public:
		TArray<struct FHangoutSpotPosition>                        HangoutSpots;                                            // 0x02E0(0x0010) Edit, ZeroConstructor
		bool                                                       HasLowerDeckFloodThreshold;                              // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XS9P[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerDeckFloodThreshold;                                 // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasMiddleDeckFloodThreshold;                             // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTBW[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MiddleDeckFloodThreshold;                                // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PerchInteractableHeightOffset;                           // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWorldHangout;                                          // 0x0304(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_STCQ[0x23];                                  // 0x0305(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPetPerchComponent*>                          PetPerchComponents;                                      // 0x0328(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_DM7Q[0x10];                                  // 0x0338(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsTopDeckBlocked;                                        // 0x0348(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsOwnerSinking;                                          // 0x0349(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_STW5[0x1E];                                  // 0x034A(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetHangoutSpotsDataAsset*                           PetHangoutSpotsDataAsset;                                // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MY2D[0x10];                                  // 0x0370(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsOwnerSinking();
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetItemInfo
	 * Size -> 0x0070 (FullSize[0x0580] - InheritedSize[0x0510])
	 */
	class APetItemInfo : public ANonStorableItemInfo
	{
	public:
		unsigned char                                              UnknownData_Z75O[0x18];                                  // 0x0510(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPetCustomisation                                   PetCustomisation;                                        // 0x0528(0x0028) Net
		class AActor*                                              PetOwner;                                                // 0x0550(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              SpawnedForShip;                                          // 0x0558(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DropTraceDistance;                                       // 0x0560(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PointSearchRadius;                                       // 0x0564(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          DropChannel;                                             // 0x0568(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36T7[0x17];                                  // 0x0569(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetListingDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPetListingDataAsset : public UDataAsset
	{
	public:
		TArray<struct FPetListingTypeEntry>                        Entries;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetMovementModifierSettingsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetMovementModifierSettingsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetOwnerComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UPetOwnerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VOZA[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemInfo*                                           PetInfo;                                                 // 0x00E0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Server_RequestDismissal();
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetPartCustomisationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetPartCustomisationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetPerchComponent
	 * Size -> 0x0048 (FullSize[0x0170] - InheritedSize[0x0128])
	 */
	class UPetPerchComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_STG7[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedPetTypes;                                         // 0x0140(0x0010) ZeroConstructor, Transient, UObjectWrapper
		int32_t                                                    HangoutSpotIndex;                                        // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HangoutSpotName;                                         // 0x0154(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InteractionPointLocation;                                // 0x015C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Enabled;                                                 // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BlocksPetEmoteReactions;                                 // 0x0169(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IgnorePickupFromHangoutTooltipDisplayOffset;             // 0x016A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8OZT[0x5];                                   // 0x016B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetSpawnParamsDataAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPetSpawnParamsDataAsset : public UDataAsset
	{
	public:
		class UClass*                                              PetClassID;                                              // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBehaviorTree*                                       TreeToRun;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        PetSkillset;                                             // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZ2I[0x4];                                   // 0x0054(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UEnvQuery*                                           SpawnQueryForLand;                                       // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           SpawnQueryForShip;                                       // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetsServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPetsServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetsServiceParamsDataAsset
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPetsServiceParamsDataAsset : public UDataAsset
	{
	public:
		struct FPetsServiceParams                                  Params;                                                  // 0x0028(0x0038) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetsService
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class UPetsService : public UObject
	{
	public:
		unsigned char                                              UnknownData_HTUQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, struct FPetRelationship>               PetOwnerRelationships;                                   // 0x0038(0x0050) ZeroConstructor, Protected
		class UAIPetsOnDemandSpawner*                              Spawner;                                                 // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_7AWF[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPetsServiceParams                                  PetsServiceParams;                                       // 0x00A8(0x0038) Protected
		TArray<class AActor*>                                      OwnersToRemove;                                          // 0x00E0(0x0010) ZeroConstructor
		TArray<class AActor*>                                      OwnersToRequestDespawn;                                  // 0x00F0(0x0010) ZeroConstructor
		TArray<class APawn*>                                       MovingPetsOnIslands;                                     // 0x0100(0x0010) ZeroConstructor
		TArray<class APawn*>                                       MovingPetsOnShips;                                       // 0x0110(0x0010) ZeroConstructor
		TArray<class AActor*>                                      ScratchArray;                                            // 0x0120(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_OV6G[0x1A8];                                 // 0x0130(0x01A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetHangoutSpotsDataAsset*                           PetHangoutDataAsset;                                     // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WHH5[0x50];                                  // 0x02E0(0x0050) MISSED OFFSET (PADDING)

	public:
		void RemovePetFromActor(class AActor* InOwner);
		void AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded);
		void AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.PetsSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPetsSettings : public UObject
	{
	public:
		struct FStringAssetReference                               PetHangoutSpotsDataAsset;                                // 0x0028(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               PetListingDataAsset;                                     // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               PetsServiceParamsDataAsset;                              // 0x0048(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               PetSpawnDefinitionsDataAsset;                            // 0x0058(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<EAthenaAnimationPetRoamingState>                    ExcludedStatesForRoamingAssetGeneration;                 // 0x0068(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.ReactAIStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReactAIStrategyId : public UAIStrategyId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.ReactStateMappingsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UReactStateMappingsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FReactStateMapping>                          ReactMappings;                                           // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePet
	 * Size -> 0x0150 (FullSize[0x08D0] - InheritedSize[0x0780])
	 */
	class AWieldablePet : public ASkeletalMeshWieldableItem
	{
	public:
		unsigned char                                              UnknownData_MRXJ[0x30];                                  // 0x0780(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThirdPersonScalingModifier;                              // 0x07B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MY5C[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWieldablePetComponent*                              WieldablePetComponent;                                   // 0x07B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIPartsRetrievalComponent*                          AIPartsRetrievalComponent;                               // 0x07C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetPartCustomisationComponent*                      PetPartCustomisationComponent;                           // 0x07C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimNotifyWwiseEmitterComponent*                    AnimNotifyWwiseEmitterComponent;                         // 0x07D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWaterExposureComponent*                             WaterExposureComponent;                                  // 0x07D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUsableWieldableComponent*                           UsableWieldableComponent;                                // 0x07E0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPickupableComponent*                                PickupableComponent;                                     // 0x07E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWieldableInteractableComponent*                     WieldableInteractableComponent;                          // 0x07F0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCleanlinessComponent*                               CleanlinessComponent;                                    // 0x07F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULightWeightStatusEffectManagerComponent*            LightWeightStatusEffectManagerComponent;                 // 0x0800(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetDitherComponent*                                 PetDitherComponent;                                      // 0x0808(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PetOwner;                                                // 0x0810(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFeedingComponent*                                   FeedingComponent;                                        // 0x0818(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetSicknessComponent*                               SicknessComponent;                                       // 0x0820(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWieldablePetHungerComponent*                        HungerComponent;                                         // 0x0828(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStarvingComponent*                                  StarvingComponent;                                       // 0x0830(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetTelemetryComponent*                              TelemetryComponent;                                      // 0x0838(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationDataStoreComponent*                        AnimationDataStoreComponent;                             // 0x0840(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SubmergedStrokingEnabled;                                // 0x0848(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PLQ7[0x6F];                                  // 0x0849(0x006F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAthenaAnimationPetHeldReactionState                       HungerReactAnimationState;                               // 0x08B8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EWieldablePetDropRequestReason                             DropRequest;                                             // 0x08B9(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BPSD[0x16];                                  // 0x08BA(0x0016) MISSED OFFSET (PADDING)

	public:
		void OnRep_HungerReactAnimationState();
		void OnRep_DropRequest(EWieldablePetDropRequestReason PriorDropRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UWieldablePetAnimNotifyWwiseEmitterComponent : public UAnimNotifyWwiseEmitterComponent
	{
	public:
		unsigned char                                              UnknownData_4EFD[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePetComponent
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	class UWieldablePetComponent : public UActorComponent
	{
	public:
		class UWieldablePetComponentDataAsset*                     WieldablePetComponentData;                               // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELQF[0x80];                                  // 0x00D0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePetComponentDataAsset
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UWieldablePetComponentDataAsset : public UDataAsset
	{
	public:
		struct FFloatRange                                         FriendlyTimeUntilEscape;                                 // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FFloatRange                                         NormalTimeUntilEscape;                                   // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FFloatRange                                         SubmergedTimeUntilEscape;                                // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageToOwnerDropThreshold;                              // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CH1F[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWieldablePetDropTimeout>                    DropTimeouts;                                            // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePetHungerComponent
	 * Size -> 0x00B0 (FullSize[0x0178] - InheritedSize[0x00C8])
	 */
	class UWieldablePetHungerComponent : public UActorComponent
	{
	public:
		class UWieldablePetHungerDataAsset*                        HungerData;                                              // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6UAR[0x28];                                  // 0x00D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOverlapResult>                              CachedOverlappingActors;                                 // 0x00F8(0x0010) ZeroConstructor, ContainsInstancedReference
		TArray<struct FWieldablePetFoodSourceEntry>                ActiveFoodSources;                                       // 0x0108(0x0010) ZeroConstructor
		TArray<struct FWieldablePetFoodSourceEntry>                FoodSourcesToRemove;                                     // 0x0118(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_FJPM[0x50];                                  // 0x0128(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pets.WieldablePetHungerDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UWieldablePetHungerDataAsset : public UDataAsset
	{
	public:
		float                                                      TimeToStartEating;                                       // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EdibleCheckRadius;                                       // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWieldablePetHungerAnimationData                    EatingAnimData;                                          // 0x0030(0x0008) Edit, DisableEditOnInstance
		struct FWieldablePetHungerAnimationData                    FedAnimData;                                             // 0x0038(0x0008) Edit, DisableEditOnInstance
		struct FWieldablePetHungerAnimationData                    SickAnimData;                                            // 0x0040(0x0008) Edit, DisableEditOnInstance
		struct FWieldablePetHungerAnimationData                    RefuseAnimData;                                          // 0x0048(0x0008) Edit, DisableEditOnInstance
		ECollisionChannel                                          CollisionChannel;                                        // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B559[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
