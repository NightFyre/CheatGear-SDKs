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
	 * Class GbxMission.MissionRewardData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMissionRewardData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionGraph
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UMissionGraph : public UObject
	{
	public:
		int32_t                                                    GraphPriorityID;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YNO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                GraphDisplayName;                                        // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bShowReferencedMissionDummy;                             // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KP9[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ReferencedMissions;                                      // 0x0050(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UDownloadableContentData*                            DLCExpansionData;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.GlobalMissionGraph
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UGlobalMissionGraph : public UMissionGraph
	{
	public:
		unsigned char                                              UnknownData_NBYO[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.Mission
	 * Size -> 0x03E0 (FullSize[0x0408] - InheritedSize[0x0028])
	 */
	class UMission : public UObject
	{
	public:
		class AMissionTrackerBase*                                 MissionTrackerBase;                                      // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAutomaticDebugActivation;                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MB9H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxUIFormattedText                                 FormattedMissionName;                                    // 0x0038(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGbxUIFormattedText                                 PreAcceptanceSummary;                                    // 0x00A0(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGbxUIFormattedText                                 PostAcceptanceSummary;                                   // 0x0108(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEX7[0x2];                                   // 0x0170(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bImmediatelyAdvanceToFirstSet;                           // 0x0172(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseImmediatelyAdvanceToFirstSet;                        // 0x0173(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImmediatelyAdvanceToFirstSetIfNotInMissionLevel;        // 0x0174(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPlayKickoff;                                        // 0x0175(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutoPlayKickoff;                                     // 0x0176(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlotCritical;                                           // 0x0177(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepeatable;                                             // 0x0178(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEZM[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SecondsToComplete;                                       // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFailOnTimerExpiration;                                  // 0x0180(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDisplayTimer;                                       // 0x0181(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1QQ[0x6];                                   // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionRewardData*                                  RewardData;                                              // 0x0188(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDependencyViewDummy;                                    // 0x0190(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFirstPlotMission;                                     // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0B3[0x6];                                   // 0x0192(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MissionDependencies[0x10];                               // 0x0198(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxMission.Mission.MissionDependencies
		struct FMissionObjectiveDependency                         ObjectiveDependency;                                     // 0x01A8(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class UMissionObjectiveSet*>                        ObjectiveSets;                                           // 0x0200(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UMissionObjective*>                           Objectives;                                              // 0x0210(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<struct FMissionObjectiveChain>                      ObjectiveChains;                                         // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UMissionPhase*>                               MissionPhases;                                           // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic
		class UClass*                                              MissionChallenge;                                        // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFailOnTravel;                                           // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_700N[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                StartCriticalSectionSet;                                 // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                StopCriticalSectionSet;                                  // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGlobalMissionBlocker;                                   // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4Q9[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BlockedMissions[0x10];                                   // 0x0268(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxMission.Mission.BlockedMissions
		class UMissionObjectiveSet*                                StartBlockingSet;                                        // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                StopBlockingSet;                                         // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogConversation                                 KickoffConversation;                                     // 0x0288(0x000C) BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivityPriority;                                        // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHidden;                                               // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YI5[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxUIFormattedText                                 Description;                                             // 0x02A0(0x0068) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              TravelStation[0x28];                                     // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxMission.Mission.TravelStation
		bool                                                       bActivateMissionDialogScriptInAnyMap;                    // 0x0330(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6QD8[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MissionActivationDialogScript[0x28];                     // 0x0338(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxMission.Mission.MissionActivationDialogScript
		struct FDialogTimeSlotReference                            KickoffDialog;                                           // 0x0360(0x0040) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              NextMissionInChain[0x28];                                // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.Mission.NextMissionInChain
		unsigned char                                              AssociatedMissionGraph[0x28];                            // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.Mission.AssociatedMissionGraph
		class FString                                              CookedActivityObjectId;                                  // 0x03F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A18D[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateObjective(class UMissionObjective* Objective, class UObject* Context, unsigned char Amount);
		void UnpauseObjectiveChain(class UMissionObjective* Objective);
		void ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet);
		void StopMissionTimer();
		void StartMissionTimer();
		void MissionTimerExpired();
		bool MissionRemoteEvent(const class FName& EventName);
		void MissionNotStarted();
		void MissionKickoff();
		bool MissionGameModeEvent(const class FName& EventName);
		void MissionFailed();
		void MissionCompleteLoad();
		void MissionComplete();
		void MissionActiveLoad();
		void MissionActive();
		void JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission);
		void GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
		void GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
		void GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList);
		int32_t GetMissionRemainingSeconds();
		void FailMission();
		void EndKickoff();
		void CompleteMission();
		void ClearObjective(class UMissionObjective* Objective);
		void AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet);
		void AddTimeToMission(int32_t SecondsToAdd);
		void ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet, bool bSetAsTrackedMission);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionDirectorComponent
	 * Size -> 0x00E0 (FullSize[0x03B0] - InheritedSize[0x02D0])
	 */
	class UMissionDirectorComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_CDLY[0x18];                                  // 0x02D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Missions[0x10];                                          // 0x02E8(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxMission.MissionDirectorComponent.Missions
		unsigned char                                              UnknownData_IR9K[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMissionObjectiveSetReference>               MissionEntryPoints;                                      // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       MissionDirectorEnableCondition;                          // 0x0310(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxUIFormattedText                                 MissionDirectorName;                                     // 0x0318(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionDirectorEnabled;                                // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionDirectorDisabled;                               // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionsInitialized;                                   // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void IsAnyMissionAvailable(EMissionAvailableResult* OutResult);
		void IsAnyMissionActive(EMissionActiveResult* OutResult);
		void GetAllMissions(TArray<class UClass*>* AllMissions);
		void ClearMissions();
		void AddMission(class UClass* InMission);
		void ActivateAvailableMission();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionIconComponent
	 * Size -> 0x00B8 (FullSize[0x07A8] - InheritedSize[0x06F0])
	 */
	class UMissionIconComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_S2UF[0x20];                                  // 0x06F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       IconEnabledCondition;                                    // 0x0710(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaypointRadius;                                          // 0x0718(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideAreaWaypoint;                                       // 0x071C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOCW[0x3];                                   // 0x071D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaComponentClassOverride;                              // 0x0720(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIconRadiusDrawStyle                                       DrawStyle;                                               // 0x0728(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQEG[0xF];                                   // 0x0729(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     AttractParticleTemplate;                                 // 0x0738(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          AttractParticleTransform;                                // 0x0740(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSyncAttachedParticles;                                  // 0x0770(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToWaypointSocket;                                 // 0x0771(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S559[0x6];                                   // 0x0772(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIconEnabled;                                           // 0x0778(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIconDisabled;                                          // 0x0788(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0798(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7539[0xF];                                   // 0x0799(0x000F) Fix size for supers

	public:
		void SetIconState(EMissionIconState InState);
		bool SetIconEnabledCondition(class UGbxCondition* EnabledCondition);
		void SetDisabledState(bool bDisabled);
		void OnRep_Enabled(bool bPreviouslyEnabled);
		bool IsIconEnabled();
		class UClass* GetRequiredInterface();
		bool EnabledConditionRequiresNativeClass();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionTrackerBase
	 * Size -> 0x0048 (FullSize[0x04A0] - InheritedSize[0x0458])
	 */
	class AMissionTrackerBase : public AActor
	{
	public:
		TArray<struct FMissionProgress>                            MissionList;                                             // 0x0458(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              TrackedMission;                                          // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1VAE[0x20];                                  // 0x0470(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDataValidated;                                          // 0x0490(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1W9J[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGlobalMissionGraph*                                 GlobalMissionGraph;                                      // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionTracker
	 * Size -> 0x0208 (FullSize[0x06A8] - InheritedSize[0x04A0])
	 */
	class AMissionTracker : public AMissionTrackerBase
	{
	public:
		class UMission*                                            DebugActivatedMission;                                   // 0x04A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                JumpedTooObjectiveSet;                                   // 0x04A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHTZ[0xB8];                                  // 0x04B0(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDefendMissionTargetData                            DefendTarget;                                            // 0x0568(0x0010) Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_64C5[0x1];                                   // 0x0578(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLevelLoadEventsIssued;                                  // 0x0579(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8G44[0x6E];                                  // 0x057A(0x006E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllMissionsObservers[0x10];                              // 0x05E8(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxMission.MissionTracker.AllMissionsObservers
		unsigned char                                              UnknownData_BQXJ[0x8];                                   // 0x05F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MissionIconObservers[0x10];                              // 0x0600(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxMission.MissionTracker.MissionIconObservers
		unsigned char                                              UnknownData_LDEG[0x50];                                  // 0x0610(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveMissionIconData>                      ActiveIcons;                                             // 0x0660(0x0010) Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CJL0[0x38];                                  // 0x0670(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32_t Amount);
		void OnRep_LevelLoadEventsIssued();
		void OnRep_ActiveIcons();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.PlayerMissionComponent
	 * Size -> 0x0028 (FullSize[0x01A0] - InheritedSize[0x0178])
	 */
	class UPlayerMissionComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMissionDataChanged;                                    // 0x0178(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		TArray<struct FMissionPlaythroughData>                     MissionPlaythroughs;                                     // 0x0188(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AMissionTracker*                                     CachedMissionTracker;                                    // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ServerTrackPreviousActiveMissionInList();
		void ServerTrackNextActiveMissionInList();
		void ServerSetTrackedMission(class UClass* MissionClass);
		void ClientUpdateMissionStatus(class UClass* MissionClass, EMissionStatus Status);
		void ClientUpdateActiveObjectiveSet(class UClass* MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*> DormantObjectives);
		void ClientTrackedMissionChanged(class UClass* MissionClass);
		void ClientObjectiveUpdated(class UClass* MissionClass, class UMissionObjective* UpdatedObjective, uint32_t ObjectiveBit, unsigned char Amount);
		void ClientObjectiveSetCompleted(class UClass* MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet);
		void ClientObjectiveCleared(class UClass* MissionClass, class UMissionObjective* ClearedObjective);
		void ClientObjectiveChainUnpaused(class UClass* MissionClass, class UMissionObjective* Objective);
		void ClientMissionTimerStopped(class UClass* MissionClass);
		void ClientMissionTimerStarted(class UClass* MissionClass);
		void ClientMissionTimerChanged(class UClass* MissionClass, float SecondsToAdd);
		void ClientMissionRegistered(class UClass* MissionClass);
		void ClientDormantObjectiveRemoved(class UClass* MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent);
		void ClientDormantObjectiveAdded(class UClass* MissionClass, class UMissionObjective* Objective);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionAttributeValueResolver
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMissionAttributeValueResolver : public UAttributeValueResolver
	{
	public:
		EMissionValueType                                          ValueToResolve;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DAXB[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionCondition_List
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UMissionCondition_List : public UGbxCondition_List
	{
	public:
		unsigned char                                              UnknownData_1RNL[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionDebugMenu
	 * Size -> 0x0020 (FullSize[0x0318] - InheritedSize[0x02F8])
	 */
	class UMissionDebugMenu : public UGbxDebugMenuSubmenu
	{
	public:
		class UMissionGraph*                                       MissionGraphToUse;                                       // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayObjectName;                                      // 0x0300(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXOW[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMission*>                                    Missions;                                                // 0x0308(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SelectMissionGraph(const class FName& MissionGraphId);
		void NotifyMissionActivationCheatStart();
		void GetObjectiveSetItemsForMission(const class FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems);
		class UMission* GetMissionWithId(const class FName& MissionId);
		EMissionStatus GetMissionStatus(const class FName& MissionId);
		void GetItemsForMissionStatus(EMissionDebugStatus Status, TArray<struct FGbxCascadingListItemData>* OutItems);
		void GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems);
		void CompleteMission(const class FName& MissionId);
		void AdvanceToObjectiveSet(const class FName& MissionId, const class FName& ObjectiveSetId);
		void AdvanceMission(const class FName& MissionId);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableCondition
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UMissionEnableCondition : public UGbxCondition
	{
	public:
		unsigned char                                              UnknownData_J7IP[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective
	 * Size -> 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionBreadcrumbLinkedObjective : public UMissionEnableCondition
	{
	public:
		struct FMissionObjectiveReferenceWeak                      ObjectiveRef;                                            // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionKickoff
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionKickoff : public UMissionEnableCondition
	{
	public:
		unsigned char                                              MissionClass[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.MissionEnableConditionKickoff.MissionClass

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionMission
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionMission : public UMissionEnableCondition
	{
	public:
		unsigned char                                              MissionClass[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.MissionEnableConditionMission.MissionClass
		EMissionStatus                                             MissionStatus;                                           // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRO5[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionMissionAvailable
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionMissionAvailable : public UMissionEnableCondition
	{
	public:
		unsigned char                                              MissionClass[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.MissionEnableConditionMissionAvailable.MissionClass

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionObjective
	 * Size -> 0x0058 (FullSize[0x00F8] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionObjective : public UMissionEnableCondition
	{
	public:
		struct FMissionObjectiveReferenceWeak                      ObjectiveRef;                                            // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EMissionObjectiveStatus                                    ObjectiveStatus;                                         // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreObjectiveBit;                                     // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1SY[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionObjectiveCount
	 * Size -> 0x0060 (FullSize[0x0100] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionObjectiveCount : public UMissionEnableCondition
	{
	public:
		struct FMissionObjectiveReferenceWeak                      ObjectiveRef;                                            // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EObjectiveCountComparisonOperatorType                      ComparisonOperator;                                      // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZHO[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ObjectiveProgress;                                       // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireActiveObjective;                                 // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7H7[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionEnableConditionObjectiveSet
	 * Size -> 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
	 */
	class UMissionEnableConditionObjectiveSet : public UMissionEnableCondition
	{
	public:
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x00A0(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EMissionObjectiveSetStatus                                 ObjectiveSetStatus;                                      // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionEnableConditionObjectiveSetObjectiveStatus         ObjectivesStatus;                                        // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6B8[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef);
		void STATIC_TrackPreviousActiveMissionInList(class UObject* WorldContextObject);
		void STATIC_TrackNextActiveMissionInList(class UObject* WorldContextObject);
		void STATIC_TrackActiveMission(class UObject* WorldContextObject, class UClass* MissionClass);
		void STATIC_SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext);
		void STATIC_SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext);
		class UClass* STATIC_ResolveMissionSoftClassReference();
		void STATIC_JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
		void STATIC_GetSoftObjectiveSetListForMission();
		int32_t STATIC_GetPlotMissionIndex(class UMission* MissionObj);
		void STATIC_GetObjectiveSetNameListForMissionFromAssetSubclass(TArray<class FName>* NamesList);
		void STATIC_GetObjectiveSetNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList);
		void STATIC_GetObjectiveSetListForMission(class UClass* MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList);
		void STATIC_GetObjectiveNameListForMissionFromAssetSubclass(TArray<class FName>* NamesList);
		void STATIC_GetObjectiveNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList);
		EMissionStatus STATIC_GetMissionStatus(class UObject* WorldContextObject, class UClass* MissionClass);
		EMissionObjectiveStatus STATIC_GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext);
		EMissionObjectiveSetStatus STATIC_GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
		void STATIC_GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int32_t* CurrentObjectiveCount, int32_t* TotalObjectiveCount);
		int32_t STATIC_GetMissionLevel(class UMission* MissionObj);
		class UClass* STATIC_GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference);
		class UClass* STATIC_GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference);
		class UMission* STATIC_GetMission(class UObject* WorldContextObject, class UClass* MissionClass);
		void STATIC_GetEventNameListForMission(class UClass* MissionClass, TArray<class FName>* NamesList);
		class UClass* STATIC_GetCurrentlyTrackedMission(class UObject* WorldContextObject);
		class UClass* STATIC_GetActivePlotMission(class UObject* WorldContextObject);
		TArray<class UMission*> STATIC_GetActiveMissions(class UObject* WorldContextObject);
		void STATIC_FillMissionObjectiveSetRef(struct FMissionObjectiveSetReference* MissionObjectiveSetRef, class UClass** MissionClass, const class FName& ObjectiveSet);
		void STATIC_FillMissionObjectiveRefWeak(struct FMissionObjectiveReferenceWeak* MissionObjectiveRef, class UClass** MissionClass, const class FName& Objective);
		void STATIC_FillMissionObjectiveRef(struct FMissionObjectiveReference* MissionObjectiveRef, class UClass** MissionClass, const class FName& Objective);
		void STATIC_FillMissionEventRef(struct FMissionEventReference* MissionEventRef, class UClass** MissionClass, const class FName& EventName);
		bool STATIC_EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B);
		bool STATIC_EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B);
		void STATIC_DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
		class UMission* STATIC_CreateMission(class UObject* WorldContextObject, class UClass* MissionClass);
		void STATIC_CompleteMission(class UObject* WorldContextObject, class UClass* MissionClass);
		void STATIC_AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef);
		void STATIC_AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
		void STATIC_ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
		void STATIC_ActivateMission(class UObject* WorldContextObject, class UClass* MissionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionIconInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionIconInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionIconObserverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionIconObserverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionLocationData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMissionLocationData : public UTravelLocationData
	{
	public:
		unsigned char                                              DefaultStation[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxMission.MissionLocationData.DefaultStation
		TArray<struct FMissionLocation>                            MissionLocations;                                        // 0x0058(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		class UClass* GetRequiredInterface();
		bool EnabledConditionRequiresNativeClass();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObjective
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UMissionObjective : public UObject
	{
	public:
		unsigned char                                              ObjectiveCount;                                          // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72ND[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameStatData*                                       GameStat;                                                // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxUIFormattedText                                 FormattedProgressMessage;                                // 0x0038(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bRememberIndividualState;                                // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllOrNothing;                                           // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearIfActiveSetNotComplete;                            // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoUpdateIfActivatedInMissionLevel;                    // 0x00A3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvisible;                                              // 0x00A4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBreadcrumb;                                             // 0x00A5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBreadcrumbNoClear;                                      // 0x00A6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBreadcrumbLinked;                                       // 0x00A7(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptional;                                               // 0x00A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseObjectiveChain;                                    // 0x00A9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdvanceChainOnLevelLoad;                                // 0x00AA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsPlanetTravel;                                      // 0x00AB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrantsStarterGear;                                      // 0x00AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfAnyPlayerInVehicle;                         // 0x00AD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfNoPlayersInVehicle;                         // 0x00AE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfMissionVehicleNotSpawned;                   // 0x00AF(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfTravelIdActive;                             // 0x00B0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfTravelIdNotActive;                          // 0x00B1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfMissionWeaponWielded;                       // 0x00B2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfMissionWeaponNotWielded;                    // 0x00B3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfStateStable;                                // 0x00B4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActiveIfStateTransitioning;                         // 0x00B5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoClearWhenNoLongerDormant;                           // 0x00B6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bObjectiveChainHead;                                     // 0x00B7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bObjectiveChainMember;                                   // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiredForObjectiveSetAdvance;                         // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressEmptyCheckbox;                                  // 0x00BA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OX3[0x5];                                   // 0x00BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionRewardData*                                  OptionalRewardData;                                      // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectiveGuid;                                           // 0x00C8(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObjectiveReferenceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionObjectiveReferenceInterface : public UInterface
	{
	public:
		void GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObjectiveSet
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UMissionObjectiveSet : public UObject
	{
	public:
		TArray<class UMissionObjective*>                           Objectives;                                              // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		unsigned char                                              StationOverride[0x28];                                   // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxMission.MissionObjectiveSet.StationOverride
		class UMissionObjective*                                   BreadcrumbLinkedObjective;                               // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjective*                                   DisplayedBreadcrumbLinkedObjective;                      // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                NextSet;                                                 // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCompleteMission;                                     // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAdvanceToNextSet;                                   // 0x0079(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutOfMapWaypoints;                                      // 0x007A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContainsRequiredObjectives;                             // 0x007B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContainsClearIfNotCompleteObjectives;                   // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3TB[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxUIFormattedText                                 DescriptionOverride;                                     // 0x0080(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGbxUIFormattedText                                 PreAcceptanceSummaryOverride;                            // 0x00E8(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectiveSetGuid;                                        // 0x0150(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ObjOrderPos;                                             // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObjectiveSetReferenceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionObjectiveSetReferenceInterface : public UInterface
	{
	public:
		void GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObserverComponent
	 * Size -> 0x0090 (FullSize[0x0208] - InheritedSize[0x0178])
	 */
	class UMissionObserverComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JDWQ[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Missions;                                                // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    ObjectiveBit;                                            // 0x0198(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfObjectiveBits;                                   // 0x019C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableObjectiveBit;                                     // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4A81[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMissionUpdate;                                         // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionObjectiveUpdate;                                // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionObjectiveSetUpdate;                             // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionsInitialized;                                   // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FMissionObserverEvent>                       ObserverEventList;                                       // 0x01E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FMissionEnableConditionEvent>                OnLoadEventList;                                         // 0x01F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void ObserverMission(class UClass* MissionClass);
		bool GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObserverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionObserverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionObserverPlayerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionObserverPlayerInterface : public UMissionObserverInterface
	{
	public:
		void ClientReceiveMissionData(const struct FReplicatedMissionData& MissionData);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionPhase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMissionPhase : public UObject
	{
	public:
		TArray<class UMissionObjectiveSet*>                        ObjectiveSets;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic
		int32_t                                                    PhaseIndex;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXN1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxMission.MissionReferenceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionReferenceInterface : public UInterface
	{
	public:
		void GetMissionClassReferences(TArray<class UClass*>* OutMissions);
		bool CheckForMissionReferenceErrors();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
