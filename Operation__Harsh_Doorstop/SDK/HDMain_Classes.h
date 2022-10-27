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
	 * Class HDMain.DeployMenu
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UDeployMenu : public UDFBaseMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_ClassSelectionListing
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_ClassSelectionListing : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_ClassSelectionPanel
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_ClassSelectionPanel : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_PlatoonSquadListBase
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UDeployMenu_PlatoonSquadListBase : public UUserWidget
	{
	public:
		class UPlatoonListEntry*                                   PlatoonData;                                             // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortSquads;                                             // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LR2O[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USquadListEntry*>                             CurrentSquads;                                           // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SquadPreRemoveFromPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* SquadToBeRemoved);
		void SquadAddedToPlatoon(class AHDPlatoonState* SourcePlatoon, class AHDSquadState* NewSquad);
		void SetupPlatoon(class UPlatoonListEntry* InPlatoonData);
		void RepopulatePlatoon();
		void OnPlatoonSet();
		class AHDPlatoonState* GetPlatoonStateFromData();
		void GenerateSquad(class USquadListEntry* SquadData);
		void DeconstructSquad(class USquadListEntry* RemovedSquadData, int32_t RemovedSquadIdx);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SpawnMapView
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SpawnMapView : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SpawnMinimap
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class UDeployMenu_SpawnMinimap : public UDFMinimap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadListBase
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadListBase : public UUserWidget
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortSquadMembers;                                       // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TG0L[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USquadMemberInfo*>                            CurrentSquadMembers;                                     // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USquadMemberInfo*>                            MemberEntryWidgetsPendingRemoval;                        // 0x0250(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SquadNameChanged(class AHDSquadState* SourceSquad, const class FText& NewName, const class FText& PrevName);
		void SquadLockStateUpdated(class AHDSquadState* SourceSquad, bool bNewLocked);
		void SquadLeaderChanged(class AHDSquadState* SourceSquad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void SetupSquad(class USquadListEntry* InSquadData);
		void RepopulateSquad();
		void OnSquadSet();
		void OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName);
		void OnSquadLockStateUpdated(bool bNewLockedState);
		void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void OnListRefresh();
		void MemberSquadInfoUpdated(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo);
		void MemberPreRemoveFromSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* MemberPSToBeRemoved);
		void MemberAddedToSquad(class AHDSquadState* SourceSquad, class AHDPlayerState* NewMemberPS);
		class AHDSquadState* GetSquadStateFromData();
		class AHDPlatoonState* GetParentPlatoonStateFromData();
		void GenerateSquadMember(class USquadMemberInfo* MemberData);
		void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadMemberListingBase
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadMemberListingBase : public UUserWidget
	{
	public:
		class USquadMemberInfo*                                    MemberData;                                              // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupMember(class USquadMemberInfo* InMemberData);
		void OnMemberSet();
		void OnMemberPlayerNameUpdated(const class FString& NewPlayerName);
		void MemberPlayerNameChanged(class APlayerState* PlayerState, const class FString& NewPlayerName);
		class AHDPlayerState* GetPlayerStateFromData();
		class AHDSquadState* GetParentSquadStateFromData();
		class AHDPlatoonState* GetParentPlatoonStateFromData();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.DeployMenu_SquadSelectionWidgetBase
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UDeployMenu_SquadSelectionWidgetBase : public UUserWidget
	{
	public:
		class AHDTeamState*                                        PlatoonTeamState;                                        // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSortPlatoons;                                           // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HPYD[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlatoonListEntry*>                           CurrentPlatoons;                                         // 0x0240(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupSquadSelection(class AHDTeamState* InPlatoonTeamState);
		void RepopulateSquadSelection();
		void PlatoonPreRemoveFromTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* PlatoonToBeRemoved);
		void PlatoonAddedToTeam(class AHDTeamState* SourceTeam, class AHDPlatoonState* NewPlatoon);
		void OnSquadSelectionSet();
		void GeneratePlatoon(class UPlatoonListEntry* PlatoonData);
		void DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemovedPlatoonIdx);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIHandlerBase
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHDAIHandlerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y4FT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDAIController*                                     Controller;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDGOAPComponent*                                    GOAPComponent;                                           // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_464G[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDAIHandlerBase*                                    HandlerDuplicate;                                        // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIAimingHandler
	 * Size -> 0x0068 (FullSize[0x00B8] - InheritedSize[0x0050])
	 */
	class UHDAIAimingHandler : public UHDAIHandlerBase
	{
	public:
		class FScriptMulticastDelegate                             OnContactStateChanged;                                   // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NextFocalPointTime;                                      // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointIntervalMin;                               // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointIntervalMax;                               // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointRandomizationAngleMin;                     // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointRandomizationAngleMax;                     // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointRandomizationDistanceMin;                  // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextFocalPointRandomizationDistanceMax;                  // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WeaponAimingDistance;                                    // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponMinConeOfFireAngleDegrees;                         // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponMaxConeOfFireAngleDegrees;                         // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NoEnemyFocalPoint;                                       // 0x00A8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableNoEnemyLookAround;                                // 0x00B4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L6OO[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		bool ShouldChangeNoEnemyFocalPoint();
		void SetEnableNoEnemyLookAround(bool bInEnableNoEnemyLookAround);
		void MakeNoEnemyFocalPoint();
		bool IsCandidateTarget(class AActor* ActorToCheck);
		void EstablishNewTargetFromPerception(class UClass* SenseToUse);
		bool CheckForTarget(class AActor* TargetActor);
		void AimAtCurrentTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIBehaviorHandler
	 * Size -> 0x00F0 (FullSize[0x0140] - InheritedSize[0x0050])
	 */
	class UHDAIBehaviorHandler : public UHDAIHandlerBase
	{
	public:
		class FScriptMulticastDelegate                             OnSafeBehaviorStart;                                     // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAwareBehaviorStart;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCombatBehaviorStart;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDangerBehaviorStart;                                   // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDAIThreatLevel                                           CurrentThreatLevel;                                      // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XPO9[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIAimingHandler*                                  AimingHandler;                                           // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SuppressionThreatLevel;                                  // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuppressionLevelPerShot;                                 // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionThreatThreshold;                              // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionFalloff;                                      // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuppressionTime;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuppressionFallingOffDelay;                              // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevel;                                     // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeingHitThreatThreshold;                                 // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitFalloff;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevelSpikeProbability;                     // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitThreatLevelSpikeAmount;                          // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitFallingOffDelay;                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeingHitTime;                                            // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QW17[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsSprinting : 1;                                        // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_46MC[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintTimeMin;                                           // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTimeMax;                                           // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTimeEnd;                                           // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThresholdMin;                               // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThresholdMax;                               // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaThreshold;                                  // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintStaminaMin;                                        // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeMin;                                 // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeMax;                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintLookAroundTimeEnd;                                 // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCombatCanCrouch : 1;                                    // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCombatCanProne : 1;                                     // 0x011C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMQQ[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CombatSuppressionThresholdCrouching;                     // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CombatSuppressionThresholdProning;                       // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDangerCanCrouch : 1;                                    // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDangerCanProne : 1;                                     // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_837X[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DangerSuppressionThresholdCrouching;                     // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerSuppressionThresholdProning;                       // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerHealthThresholdCrouching;                          // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DangerHealthThresholdProning;                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QIQ[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		void StartSafeBehavior();
		void StartDangerBehavior();
		void StartCombatBehavior();
		void StartAwareBehavior();
		void ReceiveSuppression();
		void ReceiveHitDamage();
		void HandleSafeBehavior();
		void HandleDangerBehavior();
		void HandleCombatBehavior();
		void HandleBehaviorStates();
		void HandleAwareBehavior();
		bool GetIsUnderSuppression();
		bool GetIsBeingHit();
		void DetermineThreatLevel();
		void CalcThreatLevels();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAICaptureHandler
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UHDAICaptureHandler : public UHDAIHandlerBase
	{
	public:
		class AHDBaseCapturePoint*                                 CurrentCP;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDAICaptureMode                                           CurrentCaptureMode;                                      // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_83JE[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AICaptureModePreference;                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetCurrentCP(class AHDBaseCapturePoint* InCurrentCP);
		void SetCurrentCaptureMode(EHDAICaptureMode NewCaptureMode);
		class AActor* GetStartSpotClosestToCurrentCP();
		bool FindControlPointToCapture(class AHDBaseCapturePoint** OutFoundCP);
		class AHDBaseCapturePoint* FindControlPointRandom(TArray<class AHDBaseCapturePoint*> CPs);
		class AHDBaseCapturePoint* FindControlPointClosestToPawn(TArray<class AHDBaseCapturePoint*> CPs);
		TArray<class AHDBaseCapturePoint*> FindAvailableControlPointsOfType(EHDAICaptureMode InCaptureMode);
		void EstablishNewControlPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAICombatHandler
	 * Size -> 0x00A0 (FullSize[0x00F0] - InheritedSize[0x0050])
	 */
	class UHDAICombatHandler : public UHDAIHandlerBase
	{
	public:
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1A3G : 1;                                    // 0x0060(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bWeaponAutoReload : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bWeaponMovementFire : 1;                                 // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bWeaponHasAmmo : 1;                                      // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6SHW[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Enemy;                                                   // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponNextFireTime;                                      // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AttackRateMin;                                           // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AttackRateMax;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BurstAttackProbability;                                  // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BurstAttackNumberMin;                                    // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BurstAttackNumberMax;                                    // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CurrentBurstAttackNumber;                                // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTime;                                      // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTimeMin;                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WeaponStopFireTimeMax;                                   // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bWeaponInfiniteAmmo : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWeaponInfiniteClipAmmo : 1;                             // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreFriendlySuppression : 1;                          // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreFriendlyHits : 1;                                 // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RE08[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReceiveSuppression;                                    // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReceiveHitDamage;                                      // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             SuppressionDirection;                                    // 0x00C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SuppressionOriginDistance;                               // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SuppressionOrigin;                                       // 0x00D0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RXZ7[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReload;                                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void StopAttack();
		void StartAttack();
		void SetWeaponMovementFireEnabled(bool bInWeaponMovementFire);
		void SetWeaponAutoReloadEnabled(bool bInWeaponAutoReload);
		void SetEnemy(class AActor* NewEnemy);
		void Reload(class AHDBaseWeapon* InWeapon);
		void ReceiveSuppression(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void ReceiveHitDamage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void PauseAttack();
		bool IsFiring();
		bool HasValidEnemy(bool bAliveCheck);
		bool HasAmmoLoaded();
		bool CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIController
	 * Size -> 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
	 */
	class AHDAIController : public ADFBaseAIController
	{
	public:
		class UHDPlayerComponent*                                  PlayerComponent;                                         // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDGOAPComponent*                                    GOAPComponent;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanJoinSquads : 1;                                      // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanJoinPlayerSquads : 1;                                // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanCreateSquads : 1;                                    // 0x0340(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7T47[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfAILedSquads;                                  // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfSquadMembers;                                 // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfAISquadMembers;                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFactionSpecifiedSquadLeaderKit : 1;                  // 0x0350(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFactionSpecifiedSquadMemberKit : 1;                  // 0x0350(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TNQ[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (PADDING)

	public:
		bool JoinOrCreateSquad();
		class UHDKit* GetFactionSpecifiedSquadMemberKit();
		class UHDKit* GetFactionSpecifiedSquadLeaderKit();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAINavigationHandler
	 * Size -> 0x00F0 (FullSize[0x0140] - InheritedSize[0x0050])
	 */
	class UHDAINavigationHandler : public UHDAIHandlerBase
	{
	public:
		class UNavigationSystemV1*                                 NavSystem;                                               // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMoving;                                                 // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S6Z6[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DesiredLocation;                                         // 0x005C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7FSQ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetNavPointIndex;                                     // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TargetNavPoint;                                          // 0x007C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AcceptanceRadius;                                        // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRandomizeNavPoints;                                     // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C373[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavPointRandomizationRadius;                             // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NavPointRandomizationOffset;                             // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckTime;                                          // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckInterval;                                      // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StuckCheckDistance;                                      // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             StuckCheckLastLocation;                                  // 0x00A4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnableBoidsSteering : 1;                                // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9G6I[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SteeringMass;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringMaxForce;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SteeringVector;                                          // 0x00BC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringMovementSpeedModifier;                           // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FollowPathAcceptanceRadius;                              // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ArrivalSlowDownRadius;                                   // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FollowPathVector;                                        // 0x00D4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringNeighborhoodRadius;                              // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5A3J[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      SteeringNeighborhood;                                    // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SeparationStrength;                                      // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InternalSeparationStrength;                              // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CohesionStrength;                                        // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SeparationVector;                                        // 0x0104(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             CohesionVector;                                          // 0x0110(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ObstacleAvoidanceTraceLength;                            // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ObstacleAvoidanceStrength;                               // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             ObstacleAvoidanceVector;                                 // 0x0124(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnableRVOAvoidance : 1;                                 // 0x0130(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KLXJ[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RVOAvoidanceConsiderationRadius;                         // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RVOAvoidanceWeight;                                      // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TAHT[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetupRVOAvoidance();
		void SetupNextTargetNavPoint();
		void SetDesiredLocation(const struct FVector& InDesiredLocation);
		bool MakePathToDesiredLocation();
		bool IsPawnAtDestination();
		bool IsNavigationPossible();
		bool IsNavDataValidForAllControlPoints();
		void FixVectorValuesNaN(struct FVector* InVector, bool bRandomize);
		bool FindNewControlPointNavLocation(class AHDBaseCapturePoint* CP);
		bool FindNavLocationInsideControlPoint(class AHDBaseCapturePoint* CP, struct FVector* OutNavLoc);
		bool CheckPawnStuckStatus();
		struct FVector CalcSeparationVector();
		struct FVector CalcObstacleAvoidanceVector();
		struct FVector CalcCohesionVector();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAIVocalHandler
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	class UHDAIVocalHandler : public UHDAIHandlerBase
	{
	public:
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnableVocalization : 1;                                 // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRJ6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAICharacterVocalProfile                            CurrentProfile;                                          // 0x0060(0x0068) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              bEnableTimeLimitNotify : 1;                              // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFactionOnlyTimeLimit : 1;                               // 0x00C8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZQG[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLimitNotifyRange;                                    // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPitchMultiplier;                                      // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitchMultiplier;                                      // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnySoundTimeLimit;                                       // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactTimeLimit;                                        // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LostContactTimeLimit;                                    // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReloadingTimeLimit;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeenHitTimeLimit;                                        // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderSuppressionTimeLimit;                               // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathTimeLimit;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextAnySoundTime;                                        // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextContactTime;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextLostContactTime;                                     // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextReloadingTime;                                       // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextBeenHitTime;                                         // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextUnderSuppressionTime;                                // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NextDeathTime;                                           // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZEDQ[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)

	public:
		void VocalizeSuppression();
		void VocalizeReload();
		void VocalizeContact(bool bHasContact);
		void VocalizeBeenHit();
		void Vocalize(EHDAIVocalizationType InVocalType);
		void SetTimeLimit(EHDAIVocalizationType InVocalType);
		void SetPitchMultiplier(float InPitchMultiplier);
		void RandomizePitchMultiplier();
		void PlayVocalSound(EHDAIVocalizationType InVocalType);
		void NotifySurroundingCharacters(EHDAIVocalizationType InVocalType);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDAssetManager
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class UHDAssetManager : public UDFAssetManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseCapturePoint
	 * Size -> 0x0130 (FullSize[0x0350] - InheritedSize[0x0220])
	 */
	class AHDBaseCapturePoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_3LFU[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SphereCollision;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDFPOIComponent*                                     POI;                                                     // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bActive : 1;                                             // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLocked : 1;                                             // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bContested : 1;                                          // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCaptured : 1;                                           // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCapturedOnce : 1;                                       // 0x0248(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QOCZ[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CaptureProgress;                                         // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ActiveRoute;                                             // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JC0L[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UChildActorComponent*>                        SpawnPoints;                                             // 0x0260(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCaptureProgressUpdated;                                // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDTeam                                                    StartingTeam;                                            // 0x0280(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7NZ5[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CaptureDisplayName;                                      // 0x0288(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		float                                                      CaptureTimerRate;                                        // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CaptureSpeed;                                            // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CaptureRadius;                                           // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinPlayersToCapture;                                     // 0x02AC(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnforceMinPlayersToCaptureWithSmallerPlayerCount : 1;   // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bScaleCaptureSpeed : 1;                                  // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRecapturable : 1;                                       // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWinOnCapture : 1;                                       // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProvideSpawnPoint : 1;                                  // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProvideSpawnPointWhenUnderAttack : 1;                   // 0x02B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FM9C[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PossibleRoutes[0x50];                                    // 0x02B8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    Tier;                                                    // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V0DS[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SpawnPointTransforms;                                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHDTeam                                                    OwningTeam;                                              // 0x0320(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHDTeam                                                    PrevNonNeutralOwningTeam;                                // 0x0321(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DLA7[0x6];                                   // 0x0322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOwningTeamUpdate;                                      // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bCapturableByTeamRed : 1;                                // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCapturableByTeamBlue : 1;                               // 0x0338(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQIH[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTeamCaptureStatusUpdate;                               // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Unlock();
		void SetActiveRoute(int32_t NewActiveRoute);
		void SetActive(bool bNewActive);
		void ReceiveOnTeamCaptureStatusUpdated();
		void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
		void ReceiveOnLocked(bool bNewLocked);
		void ReceiveOnCaptureProgress(bool bNewContested);
		void ReceiveOnActive(bool bNewActive);
		void OnRep_OwningTeam(EHDTeam LastOwningTeam);
		void OnRep_Locked();
		void OnRep_Contested();
		void OnRep_CaptureProgress();
		void OnRep_CapturableByTeam();
		void OnRep_Active();
		void OnOwningTeamUpdated(EHDTeam LastOwningTeam);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Lock();
		bool IsCapturableByTeam(EHDTeam CaptureTeam);
		void GetOverlappingCharactersByTeam(TArray<class ADFBaseCharacter*>* OverlappingCharsRed, TArray<class ADFBaseCharacter*>* OverlappingCharsBlue);
		EHDControlPointObjectiveType GetObjectiveTypeForTeam(EHDTeam ObjTeam);
		int32_t GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam);
		class AActor* ChoosePlayerStart(class AHDPlayerController* Player);
		bool CanRestartPlayer(class AController* Player);
		bool CanCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseGameMode
	 * Size -> 0x0078 (FullSize[0x0478] - InheritedSize[0x0400])
	 */
	class AHDBaseGameMode : public ATBBaseGameMode
	{
	public:
		unsigned char                                              bDisablePlayerSpawnKitRestrictions : 1;                  // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseTickets : 1;                                         // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7DKN[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDTeamDefinition*                                   DefaultBluforTeamDefinition;                             // 0x0408(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   DefaultOpforTeamDefinition;                              // 0x0410(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   BluforTeamDefinition;                                    // 0x0418(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   OpforTeamDefinition;                                     // 0x0420(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRandomPlayerTeamBalance : 1;                            // 0x0428(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D6DY[0x37];                                  // 0x0429(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHDPlatoonInfo*>                              PlatoonInfos;                                            // 0x0460(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PlatoonStateClass;                                       // 0x0470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool PlayerCanRestartAtPlayerStart(class AController* Player, class AActor* StartSpot, class UDFLoadout* StartLoadout);
		void AddOpforBots(int32_t Num);
		void AddBluforBots(int32_t Num);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBasePickup_Kit
	 * Size -> 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
	 */
	class AHDBasePickup_Kit : public ADFBasePickup
	{
	public:
		class UDFInventoryComponent*                               Inventory;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPrimitiveComponent*>                         KitVisuals;                                              // 0x0260(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDKit*                                              KitLoadout;                                              // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseProjectile
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class AHDBaseProjectile : public ADFBaseProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDBaseWeapon
	 * Size -> 0x0018 (FullSize[0x0860] - InheritedSize[0x0848])
	 */
	class AHDBaseWeapon : public ADFBaseGun_Projectile
	{
	public:
		class UTexture2D*                                          DisplayIcon;                                             // 0x0848(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          DisplayEquipmentSymbol;                                  // 0x0850(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bUseFreeAim : 1;                                         // 0x0858(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bSelectable : 1;                                         // 0x0858(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHideFireModeIndicator : 1;                              // 0x0858(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORRK[0x3];                                   // 0x0859(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmmoReplenishmentDelay;                                  // 0x085C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsSelectableEquipment();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerController
	 * Size -> 0x00A0 (FullSize[0x0698] - InheritedSize[0x05F8])
	 */
	class AHDPlayerController : public ATBBasePlayerController
	{
	public:
		class AHDPlayerCharacter*                                  HDCharacter;                                             // 0x05F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDPlayerComponent*                                  PlayerComponent;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, struct FPTTKeyState>                     PushToTalkKeyStates;                                     // 0x0608(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C0DO[0x4];                                   // 0x0658(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TextCommsFormatName;                                     // 0x065C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                TeamLocalVoipCommChannelGroupName;                       // 0x0664(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SquadVoipCommChannelGroupName;                           // 0x066C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                CommandVoipCommChannelGroupName;                         // 0x0674(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q90U[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFPlayerCommsComponent*                             CachedPlayerCommsComp;                                   // 0x0680(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              VictoryMenuClass;                                        // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVictoryMenu*                                        VictoryMenu;                                             // 0x0690(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UnloadVictoryMenu();
		void StopTalkingOverChannelIfActive(const class FName& TalkStopChannelName);
		void StopTalkingOverChannelGroupIfActive(const class FName& TalkStopGroupName);
		void StopTalkingOnActiveChannels();
		void StartTalkingOverChannelGroup(const class FName& TalkStartGroupName);
		void StartTalkingOverChannel(const class FName& TalkStartChannelName);
		void ServerSwitchTeam();
		void ServerSpawnVehicle();
		void ServerRestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
		void ServerPickTeam(EHDTeam DesiredTeam);
		void ServerCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void OnPlayerSpawnTimerElapsed();
		void LoadVictoryMenu(EHDTeam WinningTeam, bool bWinner);
		bool IsTalkingOverChannelName(const class FName& TalkChannelName);
		bool IsTalkingOverChannelGroup(const class FName& TalkGroupName);
		bool IsTalkingOverChannel(class UDFCommChannel* TalkChannel);
		bool IsTalking(bool bIncludeWantsToTalk);
		bool IsInVehicle();
		bool IsIdleSwayAllowed();
		class UDFCommChannel* GetTalkChannel();
		class UDFPlayerCommsComponent* GetPlayerCommsComponent();
		void ClientLoadTeamData(TArray<class FString> FactionAssetPaths);
		void ClientCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
		bool CanTalkOverChannel(const class FName& TalkChannelName);
		void Auth_SpawnVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDCheatManager
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UHDCheatManager : public UDFCheatManager
	{
	public:
		unsigned char                                              UnknownData_0KRD[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleIdleSway();
		void ToggleFreeAimADS();
		void ToggleFreeAim();
		void SpawnVehicle();
		void SetMaxFreeAimYawADS(float NewYaw);
		void SetMaxFreeAimYaw(float NewYaw);
		void SetMaxFreeAimPitchADS(float NewPitch);
		void SetMaxFreeAimPitch(float NewPitch);
		void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
		void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDFactionInfo
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UHDFactionInfo : public UDFFactionInfo
	{
	public:
		unsigned char                                              Kits[0x50];                                              // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGame_AdvanceAndSecure
	 * Size -> 0x0038 (FullSize[0x04B0] - InheritedSize[0x0478])
	 */
	class AHDGame_AdvanceAndSecure : public AHDBaseGameMode
	{
	public:
		int32_t                                                    StartingBlueTier;                                        // 0x0478(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingRedTier;                                         // 0x047C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveRoute;                                             // 0x0480(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentBlueCaptureTier;                                  // 0x0484(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentRedCaptureTier;                                   // 0x0488(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBlueIncreasesTier : 1;                                  // 0x048C(0x0001) BIT_FIELD Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BC9Q[0x23];                                  // 0x048D(0x0023) MISSED OFFSET (PADDING)

	public:
		int32_t GetCurrentRedCaptureTier();
		int32_t GetCurrentBlueCaptureTier();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGame_TeamDeathMatch
	 * Size -> 0x0000 (FullSize[0x0478] - InheritedSize[0x0478])
	 */
	class AHDGame_TeamDeathMatch : public AHDBaseGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameInstance
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UHDGameInstance : public UTBGameInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameModeDefinition
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UHDGameModeDefinition : public UDFGameModeDefinition
	{
	public:
		unsigned char                                              GameModeClass[0x28];                                     // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameModsProjectPolicies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDGameModsProjectPolicies : public UHDCoreDefaultUGCProjectPolicies
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameProjectBuildSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDGameProjectBuildSettings : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsDemoBuild();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameRulesetBase
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UHDGameRulesetBase : public UTBGameRulesetBase
	{
	public:
		unsigned char                                              bUseTickets : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OV67[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove);
		void GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd);
		class AHDGameState* GetHDGameState();
		class AHDBaseGameMode* GetHDGameMode();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGameState
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class AHDGameState : public ATBGameState
	{
	public:
		float                                                      ReplicatedMinRespawnDelay;                               // 0x0300(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bReplicatedDisableSpawnKitRestrictions : 1;              // 0x0304(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5HB7[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BluforTickets;                                           // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OpforTickets;                                            // 0x030C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AHDTeamState*                                        BluforTeamState;                                         // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHDTeamState*                                        OpforTeamState;                                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32_t TicketsToRemove);
		bool IsGameUsingTickets();
		bool IsGameUsingPlayerSpawnKitRestrictions(class AController* Controller);
		void GiveTicketsToTeam(EHDTeam TicketTeam, int32_t TicketsToAdd);
		int32_t GetNumPlayersOnTeam(EHDTeam TeamToCheck);
		void ClearTickets();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPActionBase
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPActionBase : public UGOAPAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_AttackEnemy
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_AttackEnemy : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_CaptureControlPoint
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_CaptureControlPoint : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_DefendControlPoint
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_DefendControlPoint : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_LoadWeapon
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_LoadWeapon : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToDesiredLocation
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToDesiredLocation : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToLocation
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToLocation : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPAct_MoveToOrganic
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UHDGOAPAct_MoveToOrganic : public UHDGOAPActionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPComponent
	 * Size -> 0x0068 (FullSize[0x01D0] - InheritedSize[0x0168])
	 */
	class UHDGOAPComponent : public UGOAPComponent
	{
	public:
		class AHDAIController*                                     HDAIOwner;                                               // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerCharacter*                                  HDAICharOwner;                                           // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UHDAIHandlerBase*>                            AIHandlers;                                              // 0x0178(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAINavigationHandler*                              NavigationHandler;                                       // 0x0188(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICaptureHandler*                                 CaptureHandler;                                          // 0x0190(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAICombatHandler*                                  CombatHandler;                                           // 0x0198(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIBehaviorHandler*                                BehaviorHandler;                                         // 0x01A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIAimingHandler*                                  AimingHandler;                                           // 0x01A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDAIVocalHandler*                                   VocalHandler;                                            // 0x01B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WZL9[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecisionFrequency;                                       // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_20RY[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (PADDING)

	public:
		void TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void ResetPlanningTimer();
		bool IsAIActiveInWorld();
		bool IsAIActive();
		class UHDAIHandlerBase* GetAIHandler(class UClass* HandlerClass);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoalBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoalBase : public UGOAPGoal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoal_CaptureControlPoint
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoal_CaptureControlPoint : public UHDGOAPGoalBase
	{
	public:
		class AHDBaseCapturePoint*                                 CPToCaptureCurrent;                                      // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDBaseCapturePoint*                                 CPToCapturePending;                                      // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDGOAPGoal_EliminateEnemy
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UHDGOAPGoal_EliminateEnemy : public UHDGOAPGoalBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDHUD
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class AHDHUD : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKit
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UHDKit : public UDFLoadout
	{
	public:
		TArray<struct FHDItemEntry>                                ItemEntries;                                             // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryItemSlotNum;                                      // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PSTW[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              KitDropPrefabClass;                                      // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHDKitPrerequisiteBase*>                      KitRequirements;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FDataTableRowHandle>                         CharacterVariations;                                     // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSquadLeaderKit : 1;                                     // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowsRallyPointDeployment : 1;                         // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MGK8[0x17];                                  // 0x0081(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                KitDisplayName;                                          // 0x0098(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          KitDisplaySymbol;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FDFCharacterVariationDataHandle RandomCharacterVariationDataFromKit();
		bool PlayerCanStartWithKit(class AController* Player, class FText* OutKitDenialReason);
		bool HasKitRequirements();
		bool GetPrimaryItemEntryDisplayIcon(class UTexture2D** OutDisplayIcon);
		bool GetPrimaryItemEntry(struct FHDItemEntry* OutPrimaryEntry);
		int32_t GetPlayersUsingKit(class UObject* WorldContextObject, TArray<class AHDPlayerState*>* OutPSArray);
		int32_t GetNumPlayersUsingKit(class UObject* WorldContextObject);
		bool STATIC_GetItemEntryDisplayIcon(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayIcon);
		bool STATIC_GetItemEntryDisplayEquipmentSymbol(const struct FHDItemEntry& ItemEntry, class UTexture2D** OutDisplayEquipmentSymbol);
		bool GetItemEntryBySlotNum(int32_t SlotNum, struct FHDItemEntry* OutEntry);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisiteBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHDKitPrerequisiteBase : public UObject
	{
	public:
		class FText                                                KitDenialReason;                                         // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_AdminOnly
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_AdminOnly : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_AlwaysDisable
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_AlwaysDisable : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_MinSquadMembers
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_MinSquadMembers : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MinSquadMembers;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5FHZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadLeaderOnly
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadLeaderOnly : public UHDKitPrerequisiteBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadSizeLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadSizeLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxSquadCount;                                           // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KBD6[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_SquadUsageLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_SquadUsageLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxSquadMembers;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QAID[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_TeamSpecific
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_TeamSpecific : public UHDKitPrerequisiteBase
	{
	public:
		EHDTeam                                                    RequiredTeam;                                            // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J4N3[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDKitPrerequisite_TeamUsageLimit
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UHDKitPrerequisite_TeamUsageLimit : public UHDKitPrerequisiteBase
	{
	public:
		int32_t                                                    MaxTeamMembers;                                          // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YXSQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDModData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UHDModData : public UHDCoreUGCData
	{
	public:
		TArray<struct FHDPrimaryAssetSearchPath>                   PrimaryAssetPathsToScan;                                 // 0x0030(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   ModDataVersion;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WOKH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		bool STATIC_DoesModPluginUseLegacyMapScanning(const class FString& PluginName);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonCreationRuleBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDPlatoonCreationRuleBase : public UObject
	{
	public:
		bool SatisfiesRule(class UHDTeamDefinition* TeamDef);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonInfo
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UHDPlatoonInfo : public UPrimaryDataAsset
	{
	public:
		struct FPrimaryAssetType                                   PlatoonType;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHDPlatoonCreationRuleBase*>                  CreationRules;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                DisplayName;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxSquadLimit;                                           // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5G6[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		bool ShouldCreateForTeam(class UHDTeamDefinition* TeamDef);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonStateCreationPayload
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHDPlatoonStateCreationPayload : public UObject
	{
	public:
		struct FHDPlatoonCreationParams                            CreationParams;                                          // 0x0028(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlatoonState
	 * Size -> 0x01D0 (FullSize[0x03F0] - InheritedSize[0x0220])
	 */
	class AHDPlatoonState : public ADFReplInfo
	{
	public:
		unsigned char                                              UnknownData_AULJ[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSquadAdded;                                            // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadPreRemove;                                        // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              SquadStateClass;                                         // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDFGenericObjectContainer                           Squads;                                                  // 0x0250(0x0180) Net, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bInitialized : 1;                                        // 0x03D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FIE8[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ID;                                                      // 0x03D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDPlatoonInfo*                                      Info;                                                    // 0x03D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamId;                                                  // 0x03E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G8US[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        OwnerTeam;                                               // 0x03E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool SquadExists(class AHDSquadState* Squad, bool bIgnorePendingRemoval);
		void RemoveSquadAt(int32_t RemoveIdx);
		void RemoveSquad(class AHDSquadState* SquadToRemove);
		void RemoveFromOwner();
		void ReceiveSquadPreRemove(class AHDSquadState* Squad);
		void ReceiveSquadAdded(class AHDSquadState* Squad);
		bool IsSquadPendingRemovalFromPlatoon(class AHDSquadState* Squad);
		bool HasReachedMaxSquadLimit();
		class AHDSquadState* GetSquadAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumSquads(bool bValidSquadsOnly);
		int32_t GetMaxSquadLimit();
		bool FindSquadByName(const class FText& SquadDisplayName, class AHDSquadState** OutFoundSquad);
		void DumpSquadState();
		class AHDSquadState* AddSquad(const class FText& SquadDisplayName, class AHDPlayerState* SquadLeader, bool bStartLocked);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacter
	 * Size -> 0x00C0 (FullSize[0x09D0] - InheritedSize[0x0910])
	 */
	class AHDPlayerCharacter : public ATBBasePlayerCharacter
	{
	public:
		bool                                                       bUseAttachedVehicleRelevancy;                            // 0x0910(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFGN[0x3];                                   // 0x0911(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkingBobSpeed;                                         // 0x0914(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoHeadBob : 1;                                          // 0x0918(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowFreeAim : 1;                                       // 0x0918(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAllowFreeAimWhileAiming : 1;                            // 0x0918(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDoFreeAim : 1;                                          // 0x0918(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JZDF[0x7];                                   // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDFCharacterVariationDataHandle                     VariationHandle;                                         // 0x0920(0x0018) BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NativeAccessSpecifierPrivate
		class USpringArmComponent*                                 SpringArm;                                               // 0x0938(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpringArmComponent*                                 FreeAimSpringArm;                                        // 0x0940(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHDKit*                                              CurrentLoadout;                                          // 0x0948(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              KitClassFallback;                                        // 0x0950(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      KitDropTraceDistance;                                    // 0x0958(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInventoryMenuShown : 1;                                 // 0x095C(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM67[0x3];                                   // 0x095D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAimStyleChanged;                                       // 0x0960(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EHDWeaponAimStyle                                          AimStyle;                                                // 0x0970(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5ZSC[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        HDTeamState;                                             // 0x0978(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AIVocalAC;                                               // 0x0980(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              WalkingHeadBob;                                          // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              SprintingHeadBob;                                        // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanAddYawInput : 1;                                     // 0x0998(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanAddPitchInput : 1;                                   // 0x0998(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bCanAddRollInput : 1;                                    // 0x0998(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KEHE[0x3];                                   // 0x0999(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreeAimDeadzoneCameraSpeedFactor;                        // 0x099C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimReturnToCenterInterpSpeed;                        // 0x09A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimYaw;                                           // 0x09A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimPitch;                                         // 0x09A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimYawADS;                                        // 0x09AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxFreeAimPitchADS;                                      // 0x09B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentFreeAimYaw;                                       // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentFreeAimPitch;                                     // 0x09B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimMouseDeltaX;                                      // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimMouseDeltaY;                                      // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimExternalDeltaX;                                   // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FreeAimExternalDeltaY;                                   // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDAIVocalizationType                                      LastAIVocalization;                                      // 0x09CC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JGZI[0x3];                                   // 0x09CD(0x0003) MISSED OFFSET (PADDING)

	public:
		void VariationDataChangedInternal(const struct FDFCharacterVariationDataHandle& PreviousHandle);
		void SetVariationHandle(const struct FDFCharacterVariationDataHandle& InVariationHandle);
		void SetMaxFreeAimYawADS(float NewYaw);
		void SetMaxFreeAimYaw(float NewYaw);
		void SetMaxFreeAimPitchADS(float NewPitch);
		void SetMaxFreeAimPitch(float NewPitch);
		void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
		void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
		void SetAllowFreeAimADS(bool bEnabled);
		void SetAllowFreeAim(bool bEnabled);
		void SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput);
		void ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking);
		void ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation);
		void ReceiveFreeAim(float DeltaSeconds);
		void ReceiveCurrentLoadout();
		void ReceiveAimStyleChanged(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void PlayVocalSoundAI(class USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier);
		void OnRep_CurrentLoadout();
		void OnPickupKit(class AHDBasePickup_Kit* Kit);
		void NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState);
		bool IsInVehicle();
		void HeadBob();
		class UHDPlayerComponent* GetPlayerComponent();
		float GetMaxFreeAimYawToUse();
		float GetMaxFreeAimPitchToUse();
		class UClass* GetKitClassToUse();
		void FreeAim(float DeltaSeconds);
		bool EquipPrimaryItem();
		void DropKit();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInstanceBase
	 * Size -> 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
	 */
	class UHDPlayerCharacterAnimInstanceBase : public UDFCharacterAnimInstance
	{
	public:
		class AHDPlayerCharacter*                                  HDPlyCharOwner;                                          // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerController*                                 HDPCOwner;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDBaseWeapon*                                       HDEquippedWeapon;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bInVehicle : 1;                                          // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8R2J[0xF];                                   // 0x02D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInst_FPP
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UHDPlayerCharacterAnimInst_FPP : public UHDPlayerCharacterAnimInstanceBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerCharacterAnimInst_TPP
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UHDPlayerCharacterAnimInst_TPP : public UHDPlayerCharacterAnimInstanceBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UHDPlayerComponent : public UDFPlayerComponent
	{
	public:
		class UDFLoadout*                                          StartLoadout;                                            // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SwitchTeam();
		void RestartPlayerAtStartSpot(class AActor* DesiredStartSpot, class UDFLoadout* DesiredStartLoadout);
		void PickTeam(EHDTeam DesiredTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerStart
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class AHDPlayerStart : public APlayerStart
	{
	public:
		class UCapsuleComponent* K2_GetCapsuleComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDPlayerState
	 * Size -> 0x0030 (FullSize[0x03A8] - InheritedSize[0x0378])
	 */
	class AHDPlayerState : public ATBPlayerState
	{
	public:
		class UHDKit*                                              SpawnLoadout;                                            // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDKit*                                              CurrentLoadout;                                          // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHDSquadAssignmentInfo                              SquadInfo;                                               // 0x0388(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPlayerSquadInfoUpdated;                                // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UnregisterFromSquad();
		void OnRep_SquadInfo();
		void OnRep_SpawnLoadout(class UHDKit* PrevSpawnLoadout);
		void OnRep_CurrentLoadout(class UHDKit* PrevLoadout);
		void AssignSpawnLoadout(class UHDKit* NewSpawnLoadout);
		void AssignCurrentLoadout(class UHDKit* NewCurrentLoadout);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Bullet
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class AHDProj_Bullet : public AHDBaseProjectile
	{
	public:
		class USphereComponent*                                    ProjectileCollision;                                     // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Deployable
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class AHDProj_Deployable : public AHDBaseProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_Grenade
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHDProj_Grenade : public AHDBaseProjectile
	{
	public:
		float                                                      FuzeDelay;                                               // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PayloadPostTriggerLifeSpan;                              // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PayloadServerActivationTime;                             // 0x0374(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4VBW[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_PayloadServerActivationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDProj_SpawnPointDeployable
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class AHDProj_SpawnPointDeployable : public AHDProj_Deployable
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0370(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WCXJ[0xF];                                   // 0x0371(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_AAS
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UHDRuleset_AAS : public UHDGameRulesetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_ControlPoint
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UHDRuleset_ControlPoint : public UHDGameRulesetBase
	{
	public:
		struct FControlPointRulesetSettings                        BluforTeamCPSettings;                                    // 0x0060(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FControlPointRulesetSettings                        OpforTeamCPSettings;                                     // 0x0080(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		struct FControlPointRulesetSettings GetControlPointSettingsForTeam(EHDTeam ControlPointTeam);
		void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
		void ControlPointCaptureProgressUpdated(class AHDBaseCapturePoint* ControlPoint, bool bContested, int32_t Progress);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_KillDeath
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UHDRuleset_KillDeath : public UHDGameRulesetBase
	{
	public:
		struct FKillDeathRulesetSettings                           BluforTeamKDSettings;                                    // 0x0060(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FKillDeathRulesetSettings                           OpforTeamKDSettings;                                     // 0x0088(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void PlayerTeamKilled(class AController* Killer, class AController* Victim);
		struct FKillDeathRulesetSettings GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_NoPlayerSpawnKitRestrictions
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UHDRuleset_NoPlayerSpawnKitRestrictions : public UHDGameRulesetBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDRuleset_TicketBleed
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UHDRuleset_TicketBleed : public UHDGameRulesetBase
	{
	public:
		unsigned char                                              UnknownData_GL5M[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AHDBaseCapturePoint*>                         RegisteredCPs;                                           // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTicketBleedRulesetSettings                         BluforTeamTBSettings;                                    // 0x0078(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTicketBleedRulesetSettings                         OpforTeamTBSettings;                                     // 0x0084(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateTicketBleedState();
		struct FTicketBleedRulesetSettings GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam);
		void ControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
		void ApplyTicketBleed(EHDTeam BleedTeam, int32_t TicketBleedMultiplier, bool bUseMercyTicketBleed);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDScoreboardBase
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UHDScoreboardBase : public UTBBaseScoreboardMenu
	{
	public:
		class UPanelWidget*                                        OpforPlayerList;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        BluforPlayerList;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDScoreboardListingRowBase
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class UHDScoreboardListingRowBase : public UTBScoreboardListingRow
	{
	public:
		unsigned char                                              UnknownData_TYSG[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          PlayerNumber;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSQCommChannelState
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDSQCommChannelState : public UObject
	{
	public:
		unsigned char                                              UnknownData_GM65[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadState;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDFCommStateSetupParams                             InitialSetupParams;                                      // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXIF[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetupSQChannelState(class AHDSquadState* ForSquadState);
		class FName STATIC_GetChannelNameForSquad(class AHDSquadState* Squad);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadHiddenState
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AHDSquadHiddenState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_OL3Z[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadStateOwner;                                         // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadStateCreationPayload
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDSquadStateCreationPayload : public UObject
	{
	public:
		struct FHDSquadCreationParams                              CreationParams;                                          // 0x0028(0x0030) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDSquadState
	 * Size -> 0x0240 (FullSize[0x0460] - InheritedSize[0x0220])
	 */
	class AHDSquadState : public ADFReplInfo
	{
	public:
		unsigned char                                              UnknownData_FB97[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInitialized : 1;                                        // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DXDL[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SquadHiddenStateClass;                                   // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ID;                                                      // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              TeamId;                                                  // 0x023C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZGK[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDPlatoonState*                                     OwnerPlatoon;                                            // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0248(0x0018) Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NativeAccessSpecifierPrivate
		class AHDSquadHiddenState*                                 SquadHiddenState;                                        // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerState*                                      SquadLeader;                                             // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bLocked : 1;                                             // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y9UL : 2;                                    // 0x0270(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bRequiresSquadLeader : 1;                                // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDisbandSquadOnEmpty : 1;                                // 0x0270(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0QX[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSquadLeaderAssigned;                                   // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberRegistered;                                 // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberPreUnregister;                              // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadMemberInfoUpdated;                                // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadRenamed;                                          // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSquadLockToggled;                                      // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDFGenericObjectContainer                           SquadMembers;                                            // 0x02D8(0x0180) Net, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    MaxSquadMemberLimit;                                     // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8EO[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UnregisterSquadMemberAt(int32_t RemoveIdx);
		bool UnregisterSquadMember(class AHDPlayerState* MemberPSToRemove);
		bool UnregisterPlayerSquadMember(class AHDPlayerController* MemberPCToRemove);
		void UnlockSquad();
		void SquadMemberPSTeamUpdated(class APlayerState* MemberPS, unsigned char LastTeamNum, unsigned char NewTeamNum);
		void SquadMemberPSSquadUpdated(class AHDPlayerState* MemberPS, const struct FHDSquadAssignmentInfo& MemberSQInfo);
		void SquadMemberPSEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void RenameSquad(const class FText& NewDisplayName);
		void RemoveFromOwner();
		bool RegisterSquadMember(class AHDPlayerState* NewMemberPS);
		bool RegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC);
		void ReceiveSquadUnlocked();
		void ReceiveSquadRenamed(const class FText& NewName, const class FText& PrevName);
		void ReceiveSquadMemberRegistered(class AHDPlayerState* MemberPS);
		void ReceiveSquadMemberPreUnregister(class AHDPlayerState* MemberPS);
		void ReceiveSquadLocked();
		void ReceiveSquadLeaderAssigned(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void ReceiveInit(const struct FHDSquadCreationParams& CreationParams);
		void OnRep_SquadLeader(class AHDPlayerState* PrevSquadLeader);
		void OnRep_SquadHiddenState();
		void OnRep_DisplayName(const class FText& PrevDisplayName);
		void OnRep_bLocked();
		void LockSquad();
		bool IsRegisteredSquadMember(class AHDPlayerState* PS, bool bIgnorePendingRemoval);
		bool IsPlayerRegisteredSquadMember(class AHDPlayerController* PC, bool bIgnorePendingRemoval);
		bool IsPlayerPendingRemovalFromSquad(class AHDPlayerController* PC);
		bool IsPendingRemovalFromSquad(class AHDPlayerState* PS);
		bool HasReachedMaxSquadMemberLimit();
		class AHDPlayerState* GetSquadMemberAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumSquadMembersBots(bool bValidMembersOnly);
		int32_t GetNumSquadMembers(bool bValidMembersOnly);
		void DumpSquadMemberState();
		bool CanRegisterSquadMember(class AHDPlayerState* NewMemberPS);
		bool CanRegisterPlayerSquadMember(class AHDPlayerController* NewMemberPC);
		bool AssignSquadLeader(class AHDPlayerState* NewLeaderPS);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamCommChannelState
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHDTeamCommChannelState : public UObject
	{
	public:
		unsigned char                                              UnknownData_MX5Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDFCommStateSetupParams                             InitialSetupParams;                                      // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HJEJ[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetupTeamChannelState(class AHDTeamState* ForTeamState);
		class FName STATIC_GetChannelNameForTeam(class AHDTeamState* Team);
		class FName STATIC_GetChannelNameForCommand(class AHDTeamState* CmdTeam);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamDefinition
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UHDTeamDefinition : public UDFTeamDefinition
	{
	public:
		int32_t                                                    StartingTickets;                                         // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M0FH[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCommChannelDefinition*                            CommChannelDefinition;                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTeamState
	 * Size -> 0x01F8 (FullSize[0x0448] - InheritedSize[0x0250])
	 */
	class AHDTeamState : public ADFTeamState
	{
	public:
		class FScriptMulticastDelegate                             OnPlatoonAdded;                                          // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlatoonPreRemove;                                      // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDFGenericObjectContainer                           Platoons;                                                // 0x0270(0x0180) Net, Transient, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxPlatoonLimit;                                         // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMCY[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Kits[0x50];                                              // 0x03F8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void RemovePlatoonAt(int32_t RemoveIdx);
		void RemovePlatoon(class AHDPlatoonState* PlatoonToRemove);
		void ReceivePlatoonPreRemove(class AHDPlatoonState* Platoon);
		void ReceivePlatoonAdded(class AHDPlatoonState* Platoon);
		bool PlatoonExists(class AHDPlatoonState* Platoon, bool bIgnorePendingRemoval);
		bool IsPlatoonPendingRemovalFromTeam(class AHDPlatoonState* Platoon);
		bool HasReachedMaxPlatoonLimit();
		EHDTeam GetTeam();
		class AHDPlatoonState* GetPlatoonAt(int32_t Index, bool bIgnorePendingRemoval);
		int32_t GetNumPlatoons(bool bValidPlatoonsOnly);
		bool FindPlatoonByName(const class FText& PlatoonDisplayName, class AHDPlatoonState** OutFoundPlatoon);
		bool FindPlatoonByDefinition(class UHDPlatoonInfo* PlatoonDef, class AHDPlatoonState** OutFoundPlatoon);
		void DumpPlatoonState();
		class AHDPlatoonState* AddPlatoon(class UHDPlatoonInfo* PlatoonInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatInputWidgetBase
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UHDTextChatInputWidgetBase : public UUserWidget
	{
	public:
		class FName                                                TextCommsFormatName;                                     // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDFCommChannel*                                      CurrentTalkChannel;                                      // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SubmitChatMessage(const class FText& ChatMsgText);
		void StopTalkingOnCurrentChannel();
		void StopTalking(class UDFCommChannel* CurrentChannel);
		void StartTalkingOnChannel(class UDFCommChannel* TalkChannel);
		void StartTalking(class UDFCommChannel* NewTalkChannel);
		void OnChatMessageSubmitted(class UHDTextChatMsgInfo* SubmittedChatMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatMsgInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UHDTextChatMsgInfo : public UObject
	{
	public:
		class UDFCommChannel*                                      CommChannel;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerState*                                        SenderPS;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ChatMsgContent;                                          // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDTextChatWidgetBase
	 * Size -> 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
	 */
	class UHDTextChatWidgetBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_FYY9[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SayAllInputActionName;                                   // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SayTeamInputActionName;                                  // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SaySquadInputActionName;                                 // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                SayAllChannelName;                                       // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatMsgsToCache;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                LastTalkChannelName;                                     // 0x028C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NTAG[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHDTextChatMsgInfo*>                          CurrentChatMsgs;                                         // 0x0298(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopTalking();
		void StartTalking(class UDFCommChannel* TalkChannel);
		void SetMaxChatMsgsToCache(int32_t NumChatMsgsToCache);
		void SayTeamActionPressed();
		void SaySquadActionPressed();
		void SayAllActionPressed();
		int32_t GetNumCachedChatMsgs();
		bool GetCachedChatMsgAt(int32_t MsgIndex, class UHDTextChatMsgInfo** OutFoundMsg);
		void DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDURLStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHDURLStatics : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetNumTicketsOptionName(EHDTeam Team);
		class FString STATIC_GetNumBotsOptionName(EHDTeam Team);
		class FString STATIC_GetFactionOptionName(EHDTeam Team);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUserWidget
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UHDUIUserWidget : public UUserWidget
	{
	public:
		unsigned char                                              bListenForPlayerCharacterEvents : 1;                     // 0x0230(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7NBA[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		void OwnerUnpossessPawn(class APawn* UnpossessedPawn);
		void OwnerPossessPawn(class APawn* NewPawn);
		void OwnerEquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void OwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		class AHUD* GetOwningPlayerHUD();
		class AHDHUD* GetOwningHDPlayerHUD();
		class UDFCharacterMovementComponent* GetOwningHDPlayerCharacterMovement();
		class AHDPlayerCharacter* GetOwningHDPlayerCharacter();
		class AHDPlayerController* GetOwningHDPlayer();
		class AHDBaseWeapon* GetOwnerEquippedWeapon();
		void BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap);
		void BPOwnerUnpossessPawn(class APawn* UnpossessedPawn);
		void BPOwnerPossessPawn(class APawn* NewPawn);
		void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void BPInitializeForOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
		void BPInitializeForOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
		void BPDeinitializeFromOwnerWeapon(class AHDBaseWeapon* OwnerWeap);
		void BPDeinitializeFromOwnerPlayerCharacter(class AHDPlayerCharacter* OwnerPlyChar);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWCaptureStatus
	 * Size -> 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
	 */
	class UHDUIUWCaptureStatus : public UHDUIUserWidget
	{
	public:
		unsigned char                                              UnknownData_RJKI[0x30];                                  // 0x0238(0x0030) MISSED OFFSET (PADDING)

	public:
		void OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial);
		void OwnerNoControlPoint();
		void OwnerEndOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
		void OwnerBeginOverlap(class AActor* OverlappedOwnerChar, class AActor* OtherActor);
		void CPOwnershipUpdate(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevOwningTeam, EHDTeam NewOwningTeam, bool bCaptured);
		void CPCaptureProgressUpdate(class AHDBaseCapturePoint* ControlPoint, bool bInCaptureContested, int32_t InCaptureProgress);
		void CPBeginEndOverlap(class AActor* OverlappedControlPointActor, class AActor* OtherActor);
		void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
		void ControlPointSetGarrisonedPlayerCount(int32_t NumFriendlies, int32_t NumEnemies, int32_t MinNumRequiredForCapture, bool bInitial);
		void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWHUD
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UHDUIUWHUD : public UHDUIUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWPlayerStatus
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class UHDUIUWPlayerStatus : public UHDUIUserWidget
	{
	public:
		unsigned char                                              UnknownData_9W9P[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (PADDING)

	public:
		void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
		void OwnerStartSprint();
		void OwnerStartAim();
		void OwnerSprintTransitionUpdate(bool bIsSprinting);
		void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
		void OwnerSetStance(ECharacterStance NewStance, ECharacterStance OldStance, bool bInitial);
		void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
		void OwnerHealthUpdate(class ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal);
		void OwnerEndSprint();
		void OwnerEndAim();
		void OwnerAimTransitionUpdate(bool bIsAiming);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDUIUWWeaponStatus
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class UHDUIUWWeaponStatus : public UHDUIUserWidget
	{
	public:
		class AHDBaseWeapon*                                       OwnerEquippedWeapon;                                     // 0x0238(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5QOA[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHDUIWeaponAmmoState                                WeapAmmoState;                                           // 0x0248(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void OwnerWeaponFireModeChanged(class ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
		void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void OwnerAimStyleChanged(class AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
		void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
		void BPOwnerWeaponAmmoUpdated(const struct FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVehiclePlayerSeatComponent
	 * Size -> 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
	 */
	class UHDVehiclePlayerSeatComponent : public UArcVehiclePlayerSeatComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoiceChatMsgInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHDVoiceChatMsgInfo : public UObject
	{
	public:
		class UDFCommChannel*                                      CommChannel;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerState*                                        TalkerPS;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bTalking : 1;                                            // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9DR0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoipIndicatorListingWidgetBase
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UHDVoipIndicatorListingWidgetBase : public UUserWidget
	{
	public:
		class UHDVoiceChatMsgInfo*                                 VoiceMsgInfo;                                            // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetupVoiceListing(class UHDVoiceChatMsgInfo* InVoiceMsgInfo);
		void OnVoiceMsgInfoSet(bool bIsDesignTime);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDVoipIndicatorWidgetBase
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UHDVoipIndicatorWidgetBase : public UUserWidget
	{
	public:
		TMap<struct FUniqueNetIdVoipWrapper, class UHDVoiceChatMsgInfo*> ActiveTalkerMap;                                         // 0x0230(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		void OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDWeaponAnimInstance
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UHDWeaponAnimInstance : public UDFWeaponAnimInstance
	{
	public:
		class AHDBaseWeapon*                                       HDWeaponOwner;                                           // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.HDWorldSettings
	 * Size -> 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
	 */
	class AHDWorldSettings : public ATBWorldSettings
	{
	public:
		class UHDTeamDefinition*                                   BluforTeamDefinition;                                    // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHDTeamDefinition*                                   OpforTeamDefinition;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.PlatoonListEntry
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPlatoonListEntry : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GUZV[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ID;                                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BJKB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDPlatoonInfo*                                      Info;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlatoonState*                                     PlatoonState;                                            // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.SquadListEntry
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USquadListEntry : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7R83[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatoonListEntry*                                   ParentPlatoonData;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ID;                                                      // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O19P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDSquadState*                                       SquadState;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class AHDPlatoonState* GetParentPlatoonState();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.SquadMemberInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USquadMemberInfo : public UObject
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHDTeam                                                    Team;                                                    // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O5SE[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHDTeamState*                                        TeamState;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlatoonListEntry*                                   ParentPlatoonData;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USquadListEntry*                                     ParentSquadData;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHDPlayerState*                                      PlayerState;                                             // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class AHDSquadState* GetParentSquadState();
		class AHDPlatoonState* GetParentPlatoonState();
		static UClass* StaticClass();
	};

	/**
	 * Class HDMain.VictoryMenu
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UVictoryMenu : public UDFBaseMenu
	{
	public:
		EHDTeam                                                    WinningTeam;                                             // 0x0238(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWinner : 1;                                             // 0x0239(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CVA7[0x6];                                   // 0x023A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnVictoryInit();
		void Init(EHDTeam InWinningTeam, bool bInWinner);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
