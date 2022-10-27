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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxMission.EMissionEvent
	 */
	enum class EMissionEvent : uint8_t
	{
		NotStarted_Load = 0,
		Active_Load     = 1,
		Complete_Load   = 2,
		Activated       = 3,
		Completed       = 4,
		Failed          = 5,
		MAX             = 6
	};

	/**
	 * Enum GbxMission.EMissionObjectiveEvent
	 */
	enum class EMissionObjectiveEvent : uint8_t
	{
		Inactive_Load = 0,
		Active_Load   = 1,
		Dormant_Load  = 2,
		Complete_Load = 3,
		Activated     = 4,
		Deactivated   = 5,
		Dormant       = 6,
		Cleared       = 7,
		Updated       = 8,
		Thwarted      = 9,
		Completed     = 10,
		MAX           = 11
	};

	/**
	 * Enum GbxMission.EMissionObjectiveSetEvent
	 */
	enum class EMissionObjectiveSetEvent : uint8_t
	{
		NotStarted_Load   = 0,
		Active_Load       = 1,
		Complete_Load     = 2,
		Activated         = 3,
		ObjectivesChanged = 4,
		Completed         = 5,
		Advanced          = 6,
		MAX               = 7
	};

	/**
	 * Enum GbxMission.EMissionValueType
	 */
	enum class EMissionValueType : uint8_t
	{
		Level = 0,
		MAX   = 1
	};

	/**
	 * Enum GbxMission.EMissionDebugStatus
	 */
	enum class EMissionDebugStatus : uint8_t
	{
		MDS_Ineligible = 0,
		MDS_Eligible   = 1,
		MDS_DevMission = 2,
		MDS_Active     = 3,
		MDS_Complete   = 4,
		MDS_Failed     = 5,
		MDS_MAX        = 6
	};

	/**
	 * Enum GbxMission.EMissionActiveResult
	 */
	enum class EMissionActiveResult : uint8_t
	{
		MissionActive    = 0,
		NoMissionsActive = 1,
		MAX              = 2
	};

	/**
	 * Enum GbxMission.EMissionAvailableResult
	 */
	enum class EMissionAvailableResult : uint8_t
	{
		MissionAvailable    = 0,
		NoMissionsAvailable = 1,
		MAX                 = 2
	};

	/**
	 * Enum GbxMission.EObjectiveCountComparisonOperatorType
	 */
	enum class EObjectiveCountComparisonOperatorType : uint8_t
	{
		EqualTo              = 0,
		NotEqualTo           = 1,
		LessThan             = 2,
		LessThanOrEqualTo    = 3,
		GreaterThan          = 4,
		GreaterThanOrEqualTo = 5,
		MAX                  = 6
	};

	/**
	 * Enum GbxMission.EMissionEnableConditionObjectiveSetObjectiveStatus
	 */
	enum class EMissionEnableConditionObjectiveSetObjectiveStatus : uint8_t
	{
		MECOSOS_Ignored                  = 0,
		MECOSOS_AllCompleteStatusMatters = 1,
		MECOSOS_AllCompleteStatusIgnored = 2,
		MECOSOS_MAX                      = 3
	};

	/**
	 * Enum GbxMission.EIconRadiusDrawStyle
	 */
	enum class EIconRadiusDrawStyle : uint8_t
	{
		None         = 0,
		Wire         = 1,
		Solid        = 2,
		SolidAndWire = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxMission.EMissionIconState
	 */
	enum class EMissionIconState : uint8_t
	{
		IconState_Default       = 0,
		IconState_ForceDisabled = 1,
		IconState_ForceEnabled  = 2,
		IconState_MAX           = 3
	};

	/**
	 * Enum GbxMission.EMissionObjectiveDependencyStatus
	 */
	enum class EMissionObjectiveDependencyStatus : uint8_t
	{
		MODS_Active   = 0,
		MODS_Complete = 1,
		MODS_MAX      = 2
	};

	/**
	 * Enum GbxMission.EMissionTimerEvent
	 */
	enum class EMissionTimerEvent : uint8_t
	{
		TimerStarted = 0,
		TimerStopped = 1,
		TimeAdded    = 2,
		TimeExpired  = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxMission.EMissionObjectiveSetStatus
	 */
	enum class EMissionObjectiveSetStatus : uint8_t
	{
		MOSS_NotActive = 0,
		MOSS_Active    = 1,
		MOSS_Unknown   = 2,
		MOSS_MAX       = 3
	};

	/**
	 * Enum GbxMission.EMissionObjectiveStatus
	 */
	enum class EMissionObjectiveStatus : uint8_t
	{
		MOS_NotStarted = 0,
		MOS_Active     = 1,
		MOS_Dormant    = 2,
		MOS_Complete   = 3,
		MOS_Unknown    = 4,
		MOS_MAX        = 5
	};

	/**
	 * Enum GbxMission.EMissionStatus
	 */
	enum class EMissionStatus : uint8_t
	{
		MS_NotStarted = 0,
		MS_Active     = 1,
		MS_Complete   = 2,
		MS_Failed     = 3,
		MS_Unknown    = 4,
		MS_MAX        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxMission.MissionObjectiveReferenceBase
	 * Size -> 0x0028
	 */
	struct FMissionObjectiveReferenceBase
	{
	public:
		unsigned char                                              UnknownData_0UWR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ObjectiveName;                                           // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectiveGuid;                                           // 0x0010(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMissionObjective>                    Objective;                                               // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveReferenceWeak
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FMissionObjectiveReferenceWeak : public FMissionObjectiveReferenceBase
	{
	public:
		unsigned char                                              Mission[0x28];                                           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.MissionObjectiveReferenceWeak.Mission
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveDependency
	 * Size -> 0x0058
	 */
	struct FMissionObjectiveDependency
	{
	public:
		struct FMissionObjectiveReferenceWeak                      ObjectiveRef;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
		EMissionObjectiveDependencyStatus                          ObjectiveStatus;                                         // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGA1[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveChain
	 * Size -> 0x0010
	 */
	struct FMissionObjectiveChain
	{
	public:
		TArray<class UMissionObjective*>                           ObjectiveChain;                                          // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveSetReference
	 * Size -> 0x0048
	 */
	struct FMissionObjectiveSetReference
	{
	public:
		unsigned char                                              Mission[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxMission.MissionObjectiveSetReference.Mission
		class FName                                                ObjectiveSetName;                                        // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectiveSetGuid;                                        // 0x0030(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMissionObjectiveSet>                 ObjectiveSet;                                            // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
	};

	/**
	 * ScriptStruct GbxMission.MissionProgress
	 * Size -> 0x0080
	 */
	struct FMissionProgress
	{
	public:
		class UMission*                                            Mission;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionStatus                                             Status;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUC5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           ObjectivesProgress;                                      // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                ActiveObjectiveSet;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionObjective*>                           DormantObjectives;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMissionObjective*>                           PausedObjectiveChains;                                   // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bActivateScriptWhenDependenciesMet;                      // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KT0[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogScriptPinnedRef                              ActivatedDialogScript;                                   // 0x0058(0x0010) NativeAccessSpecifierPublic
		bool                                                       bKickoffPlayed;                                          // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMissionFailed;                                       // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicationError;                                       // 0x006A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3K5[0x15];                                  // 0x006B(0x0015) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.DefendMissionTargetData
	 * Size -> 0x0010
	 */
	struct FDefendMissionTargetData
	{
	public:
		class UMissionObjective*                                   Objective;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PercentHealth;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6AS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.ActiveMissionIconData
	 * Size -> 0x0070
	 */
	struct FActiveMissionIconData
	{
	public:
		unsigned char                                              Icon[0x10];                                              // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxMission.ActiveMissionIconData.Icon
		struct FGuid                                               IconGuid;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      IconLocationComponent;                                   // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IconLocation;                                            // 0x0028(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaypointRadius;                                          // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataAsset*                                          IconData;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MissionClass;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMissionObjective*>                           MissionObjectives;                                       // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      VisibleDistanceOverride;                                 // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HiddenDistanceOverride;                                  // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideAreaWaypoint;                                       // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PISS[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaComponentClassOverride;                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionStatusPlayerData
	 * Size -> 0x0030
	 */
	struct FMissionStatusPlayerData
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionStatus                                             Status;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWBT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           ObjectivesProgress;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UMissionObjectiveSet*                                ActiveObjectiveSet;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenViewedInLog;                                     // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKickoffPlayed;                                          // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LeagueInstance;                                          // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1SO[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.MissionPlaythroughData
	 * Size -> 0x0018
	 */
	struct FMissionPlaythroughData
	{
	public:
		TArray<struct FMissionStatusPlayerData>                    MissionList;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              TrackedMission;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveReference
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FMissionObjectiveReference : public FMissionObjectiveReferenceBase
	{
	public:
		class UClass*                                              Mission;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionEventReference
	 * Size -> 0x0010
	 */
	struct FMissionEventReference
	{
	public:
		class UClass*                                              Mission;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionLocation
	 * Size -> 0x0030
	 */
	struct FMissionLocation
	{
	public:
		unsigned char                                              TravelStation[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxMission.MissionLocation.TravelStation
		class UGbxCondition*                                       StationCondition;                                        // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionObserverEvent
	 * Size -> 0x0038
	 */
	struct FMissionObserverEvent
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastConditionValue;                                     // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GX75[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       EnabledCondition;                                        // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConditionTrue;                                         // 0x0018(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConditionFalse;                                        // 0x0028(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionEnableConditionEvent
	 * Size -> 0x0020
	 */
	struct FMissionEnableConditionEvent
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionEnableCondition*                             EnableCondition;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoad;                                                  // 0x0010(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.ReplicatedMissionProgress
	 * Size -> 0x0078
	 */
	struct FReplicatedMissionProgress
	{
	public:
		unsigned char                                              UnknownData_XE0K[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.TimedMissionData
	 * Size -> 0x0018
	 */
	struct FTimedMissionData
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsLeft;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingSeconds;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTimerRunning;                                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFailOnTimerExpiration;                                  // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTimerExpired;                                           // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9W2[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxMission.ReplicatedMissionData
	 * Size -> 0x0028
	 */
	struct FReplicatedMissionData
	{
	public:
		TArray<struct FReplicatedMissionProgress>                  Progress;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              TrackedMission;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTimedMissionData>                           ActiveTimedMissions;                                     // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.MissionObjectiveData
	 * Size -> 0x0010
	 */
	struct FMissionObjectiveData
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionObjective*                                   Objective;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxMission.DefendMissionData
	 * Size -> 0x0018
	 */
	struct FDefendMissionData
	{
	public:
		unsigned char                                              UnknownData_K42B[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
