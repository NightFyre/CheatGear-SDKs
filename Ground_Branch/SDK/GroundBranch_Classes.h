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
	 * Class GroundBranch.GBAIBarkManager
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class AGBAIBarkManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_YBI1[0x50];                                  // 0x0220(0x0050) MISSED OFFSET (PADDING)

	public:
		void Bark(class AGBAIController* AIController, const class FName& BarkType, const class FName& BarkKey);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAIController
	 * Size -> 0x01C0 (FullSize[0x04E8] - InheritedSize[0x0328])
	 */
	class AGBAIController : public AAIController
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0328(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBehaviorTreeComponent*                              BehaviorComp;                                            // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      IgnoreIncomingFireRangeSquared;                          // 0x0338(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7H7E[0x14];                                  // 0x033C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBCharacter*                                        GBCharacter;                                             // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M21G[0x18];                                  // 0x0358(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SkipBulletWarnOccculusionTime;                           // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CGRB[0x10];                                  // 0x0374(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadShotAimErrorMuliplier;                               // 0x0384(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecoilCompensationSkill;                                 // 0x0388(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReactionTimeBase;                                        // 0x038C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReactionTimeRandom;                                      // 0x0390(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxSemiAutoBurst;                                        // 0x0394(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinFullAutoBurst;                                        // 0x0398(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxFullAutoBurst;                                        // 0x039C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinDelayBetweenBursts;                                   // 0x03A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDelayBetweenBursts;                                   // 0x03A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanChance;                                              // 0x03A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXST[0x14];                                  // 0x03AC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        AimErrorAngleDifferenceEngagedCurve;                     // 0x03C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        AimErrorAngleDifferenceCurve;                            // 0x03C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        AimErrorDistanceEngagedCurve;                            // 0x03D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        AimErrorDistanceCurve;                                   // 0x03D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        AimErrorTargetVelocityEngagedCurve;                      // 0x03E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        AimErrorTargetVelocityCurve;                             // 0x03E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7LH8[0x20];                                  // 0x03F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ThreatRatingDistanceCurve;                               // 0x0410(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanSuppressEnemy;                                       // 0x0418(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SC7A[0x67];                                  // 0x0419(0x0067) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ViewPitchMin;                                            // 0x0480(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewPitchMax;                                            // 0x0484(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAIBark>                                     ReceivedBarks;                                           // 0x0488(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FAIBark                                             LastBark;                                                // 0x0498(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		class AGBAISquad*                                          Squad;                                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6QE9[0x14];                                  // 0x04B0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleHearingThreshold;                                    // 0x04C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AlertHearingThreshold;                                   // 0x04C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleAffiliationSightThreshold;                           // 0x04CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AlertAffiliationSightThreshold;                          // 0x04D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleSuspicionSightThreshold;                             // 0x04D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AlertSuspicionSightThreshold;                            // 0x04D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5DPE[0xC];                                   // 0x04DC(0x000C) MISSED OFFSET (PADDING)

	public:
		void UpdateEquippedType();
		void UnFreeze();
		void StopFiring();
		void StartFiring();
		void ShowDebugInfoEvent();
		void SetViewRotation(const struct FRotator& NewRotation);
		void SetSquad(class AGBAISquad* NewSquad);
		void SetIdleSuspicionSightThreshold(float NewIdleSuspicionSightThreshold);
		void SetIdleHearingThreshold(float NewIdleHearingThreshold);
		void SetIdleAffiliationSightThreshold(float NewIdleAffiliationSightThreshold);
		void SetEnemyPartSeen(const class FName& NewEnemyPartSeen);
		void SetEnemyLOS(bool bNewValue);
		void SetEnemyLastStimulusTime(float NewValue);
		void SetEnemyLastKnownLocation(const struct FVector& NewValue);
		void SetEnemyLastKnownDirection(const struct FVector& NewValue);
		void SetEnemyDistance(float NewValue);
		void SetEnemy(class AGBCharacter* NewEnemy);
		void SetDesiredViewRotationOffset(const struct FRotator& NewRotation);
		void SetDesiredAimRotationOverride(const struct FRotator& NewRotation, float NewRate);
		void SetAlertSuspicionSightThreshold(float NewAlertSuspicionSightThreshold);
		void SetAlertHearingThreshold(float NewAlertHearingThreshold);
		void SetAlertAffiliationSightThreshold(float NewAlertAffiliationSightThreshold);
		void SetAIState(EGBAIState NewState);
		void Reload();
		void OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void OnSensingNewEnemyEvent(bool bHasLineOfSight);
		void OnSensingEnemyDeathEvent();
		void OnNoLongerSensingEnemyEvent();
		void OnLoadoutApplied();
		void NotifyWalkingOffLedge();
		void NotifyTakeHit(class AController* InstigatedBy, int32_t Damage, const struct FVector& Momentum, const struct FDamageEvent& DamageEvent);
		void NotifyBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		bool NeedsReload();
		bool IsFrozen();
		bool IsAlive();
		struct FRotator GetViewRotationOffset();
		struct FRotator GetViewRotation();
		class AGBAISquad* GetSquad();
		float GetReactionTimeRandom();
		float GetReactionTimeBase();
		TArray<struct FVector> GetPathCorridorPoints();
		bool GetOnTarget();
		struct FVector GetNextPathLocation();
		struct FVector GetNextPathCorridorPoint();
		bool GetNavLinkPoints(int32_t CorridorIndex, struct FVector* LinkStart, struct FVector* LinkEnd);
		int32_t GetMinFullAutoBurst();
		float GetMinDelayBetweenBursts();
		int32_t GetMaxSemiAutoBurst();
		int32_t GetMaxFullAutoBurst();
		float GetMaxDelayBetweenBursts();
		struct FAIBark GetLastBark();
		class AGBCharacter* GetGBCharacter();
		class FName GetEnemyPartSeen();
		bool GetEnemyLOS();
		float GetEnemyLastStimulusTime();
		struct FVector GetEnemyLastKnownLocation();
		struct FVector GetEnemyLastKnownDirection();
		float GetEnemyDistance();
		class AGBCharacter* GetEnemy();
		bool GetCurrentPathCorridorIndex(int32_t* CorridorIndex);
		bool GetCanSuppressEnemy();
		class UBehaviorTreeComponent* GetBehaviorComp();
		EGBAIState GetAIState();
		float FrozenTimeLeft();
		void Freeze(float FreezeTime);
		void DebugFreeze(bool bShouldFreeze);
		void ClearDesiredViewRotationOffset();
		void ClearDesiredAimRotationOverride();
		void BulletWarn(class AActor* Bullet, bool bSubSonic);
		void Bark(const class FName& Key, int32_t Priority, float Timeout, bool bIsRadioMessage);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAIDirector
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AGBAIDirector : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAIFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBAIFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector GetBlackboardValueAsLocation(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		struct FVector GetBlackboardValueAsDirection(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool bAs2d);
		void GetAIControllersOfClass(class UObject* WorldContextObject, class UClass* AIControllerClass, TArray<class AAIController*>* OutAIControllers);
		void ForgetAll(class UAIPerceptionComponent* PerceptionComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAIGuardPoint
	 * Size -> 0x0058 (FullSize[0x02A0] - InheritedSize[0x0248])
	 */
	class AGBAIGuardPoint : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_YPOG[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                GroupName;                                               // 0x0260(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovementRadius;                                          // 0x0268(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SweepAngle;                                              // 0x026C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PitchBias;                                               // 0x0270(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScanDuration;                                            // 0x0274(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Deviation;                                               // 0x0278(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HoldTime;                                                // 0x027C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HoldDeviation;                                           // 0x0280(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TurnRate;                                                // 0x0284(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsActive;                                               // 0x0288(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_APQR[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		float GetTurnRate();
		float GetSweepAngle();
		float GetScanDuration();
		float GetHoldTime();
		float GetHoldDeviation();
		class FName GetGroupName();
		float GetDeviation();
		struct FRotator GetBaseViewRoation();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAIPatrolRoute
	 * Size -> 0x0040 (FullSize[0x0288] - InheritedSize[0x0248])
	 */
	class AGBAIPatrolRoute : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_IIL6[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0258(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class AGBAIPatrolRoute*>                            LinkedPatrolRoutes;                                      // 0x0268(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        NextRouteTags;                                           // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, NativeAccessSpecifierPublic

	public:
		TArray<class AGBAIPatrolRoute*> GetLinkedPatrolRoutes();
		void GenerateLinkedPatrolRoutes();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISense_Hearing
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UGBAISense_Hearing : public UAISense
	{
	public:
		TArray<struct FGBAINoiseEvent>                             NoiseEvents;                                             // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SpeedOfSoundSq;                                          // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WLK1[0x54];                                  // 0x0094(0x0054) MISSED OFFSET (PADDING)

	public:
		void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISense_Sight
	 * Size -> 0x00D8 (FullSize[0x0158] - InheritedSize[0x0080])
	 */
	class UGBAISense_Sight : public UAISense
	{
	public:
		unsigned char                                              UnknownData_HXE7[0xB0];                                  // 0x0080(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x0130(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinQueriesPerTimeSliceCheck;                             // 0x0134(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     MaxTimeSlicePerTick;                                     // 0x0138(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x0140(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNRB[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x0148(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightLimitQueryImportance;                               // 0x014C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X7AI[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISenseConfig_Hearing
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UGBAISenseConfig_Hearing : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurveMap[0x50];                                          // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2A6[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISenseConfig_Sight
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UGBAISenseConfig_Sight : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SightValuesCurve;                                        // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SightValueName;                                          // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LoseSightValueName;                                      // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISenseEvent_Hearing
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGBAISenseEvent_Hearing : public UAISenseEvent
	{
	public:
		struct FGBAINoiseEvent                                     Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISettings
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UGBAISettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_QDIX[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		void SetAISettingsForSkillLevel(int32_t InSkillLevel, const class FName& SettingName, float InFloat, const class FString& inString, bool bFlushAfterSaving);
		struct FGBAISettingsInfo GetAISettingsForSkillLevel(int32_t SkillLevel);
		void FlushConfigAfterSavingAISettings();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISightTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBAISightTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISpawnManager
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class AGBAISpawnManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_SXPW[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBAISpawnPoint*>                             CreateOverDurationSpawnPoints;                           // 0x0228(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RGJ8[0x28];                                  // 0x0238(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnAIControllerChange__DelegateSignature();
		void KillAI(class AGBAIController* AIController);
		TArray<class AGBAIController*> GetAIControllers(class UClass* ControllerClass, const class FName& Tag, unsigned char TeamId, unsigned char SquadId);
		void CreateOverDurationTimer();
		void CreateAIOverDuration(float Duration, int32_t Count, TArray<class AGBAISpawnPoint*> OrderedSpawnPoints, const class FName& Tag);
		void CleanUpAI(const class FName& AIControllerTag);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISpawnPoint
	 * Size -> 0x00A0 (FullSize[0x02E8] - InheritedSize[0x0248])
	 */
	class AGBAISpawnPoint : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_PUDX[0x18];                                  // 0x0248(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      AIControllerClass;                                       // 0x0260(0x0018) Edit, ZeroConstructor, SaveGame, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      CharacterClass;                                          // 0x0278(0x0018) Edit, ZeroConstructor, SaveGame, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              LoadoutFileName;                                         // 0x0290(0x0010) Edit, ZeroConstructor, SaveGame, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBKitInfo*                                          LoadoutInfo;                                             // 0x02A0(0x0008) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              TeamId;                                                  // 0x02A8(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              SquadId;                                                 // 0x02A9(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TMYV[0x2];                                   // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SquadOrders;                                             // 0x02AC(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3ES2[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsActive;                                               // 0x02C0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OO5W[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBCharacter*                                        DisplayCharacter;                                        // 0x02C8(0x0008) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x02D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class AGBAISquad*                                          Squad;                                                   // 0x02E0(0x0008) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSquadOrders(const class FName& NewSquadOrders);
		void SetSquadId(int32_t NewSquadId);
		void SetLoadoutFileName(const class FString& NewLoadoutFileName);
		class FName GetSquadOrders();
		int32_t GetSquadId();
		class AGBKitInfo* GetLoadoutInfo();
		class FString GetLoadoutFileName();
		class AGBCharacter* CreateCharacter();
		class AGBAIController* CreateAI(const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAISquad
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class AGBAISquad : public AActor
	{
	public:
		unsigned char                                              UnknownData_CTYF[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AController*>                                 SquadMembers;                                            // 0x0230(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AController*                                         SquadLeader;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4KMC[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBAIPatrolRoute*                                    PatrolRoute;                                             // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBAIPatrolRoute*                                    PrevPatrolRoute;                                         // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PatrolOffsetDistance;                                    // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A1KR[0x10];                                  // 0x0270(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GuardPointVisitTimeOut;                                  // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R28U[0x1C];                                  // 0x0284(0x001C) MISSED OFFSET (PADDING)

	public:
		void UpdateSquadObjective();
		void SetSquadOrdersTarget(class AActor* NewTarget);
		void SetSquadOrders(const class FName& NewOrders);
		void SetSquadLeader(class AController* Controller);
		void SetSquadId(unsigned char NewSquadId);
		void SetPatrolRoute(class AGBAIPatrolRoute* NewPatrolRoute);
		void SetGuardPointVisitedBy(class AGBAIGuardPoint* GuardPoint, class AGBAIController* AIController);
		bool SetAIStateBySquadOrders(class AGBAIController* AIController);
		void RemoveSquadMember(class AController* Controller);
		bool IsSquadMember(class AController* Controller);
		void InternalUpdateSquadSeparationWeights();
		class AActor* GetSquadOrdersTarget();
		class FName GetSquadOrders();
		TArray<class AController*> GetSquadMembers();
		class AController* GetSquadLeader();
		unsigned char GetSquadId();
		TArray<struct FVector> GetSearchedLocations();
		class AGBAIPatrolRoute* GetPatrolRoute();
		struct FVector GetNextPatrolPosition(class AController* Controller);
		class AGBAIGuardPoint* GetNextGuardPoint(class AGBAIController* AIController);
		class AGBAIPatrolRoute* FindNearestPatrolRoute(const struct FVector& Location);
		void ClearSearchedLocations();
		void AddSquadMember(class AController* Controller);
		void AddSearchedLocation(const struct FVector& NewLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBItem
	 * Size -> 0x01D0 (FullSize[0x03F0] - InheritedSize[0x0220])
	 */
	class AGBItem : public AActor
	{
	public:
		struct FPrimaryAssetId                                     CachedPrimaryAssetId;                                    // 0x0220(0x0010) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ItemWeight;                                              // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3ZVS[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0240(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              Icon[0x28];                                              // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                SkinMaterialPrefix;                                      // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CamoTexOffsetSwitchParam;                                // 0x0288(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CamoTexOffsetXParam;                                     // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CamoTexOffsetYParam;                                     // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                DefaultPouchType;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBCharacter*                                        GBInstigator;                                            // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStackable;                                              // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFK9[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ItemMID;                                                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CustomisationWidget;                                     // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FItemDragDropType>                           DragDropOperations;                                      // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DroppedItemClass;                                        // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowCustomisation;                                     // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExcludeFromCharacterEditor;                             // 0x02E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowKitEncoding;                                       // 0x02E2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5SKJ[0x1];                                   // 0x02E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InventorySlot;                                           // 0x02E4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InventorySlotPosition;                                   // 0x02E8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9VFW[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InventorySlotWidget;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SkinName;                                                // 0x02F8(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseRotationalInertiaModifier;                           // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J74T[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInheritSkin;                                            // 0x0308(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPassOnSkin;                                             // 0x0309(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WPK5[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FSoftObjectPath>                  SyncCharAnimMontageMap;                                  // 0x0310(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class UAnimMontage*>                     SyncCharAnimMontageRefMap;                               // 0x0360(0x0050) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                LeftEquippedTags;                                        // 0x03B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                RightEquippedTags;                                       // 0x03C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                LeftEquipTags;                                           // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                RightEquipTags;                                          // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		bool ValidateDecodedItem(class FString* OutFailureReason);
		void UseOffHandReleased();
		void UseOffHandPressed();
		void UseMainHandReleased();
		void UseMainHandPressed();
		void UseInputDisabled();
		void UpdateWetness(float InRadius, const struct FVector& InLocation);
		void UpdateSkin();
		bool UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV);
		void UnbindSyncCharAnim(class AGBCharacter* Character);
		void StopUsing(unsigned char UseType);
		void StartUsing(unsigned char UseType);
		class AGBItem* SpawnItem(class UClass* NewItemClass, class AActor* NewItemOwner);
		bool ShouldInheritSkin();
		void SetupSightComponents();
		void SetSkinName(const class FName& NewSkinName);
		void SetItemMID(class UMaterialInstanceDynamic* NewItemMID);
		void SetInventorySlotPosition(int32_t NewInventorySlotPosition);
		void SetInventorySlot(int32_t NewInventorySlot);
		void SetAllowKitEncoding(bool bNewAlloKitEncoding);
		void ServerStopUsing(unsigned char UseType);
		void ServerStartUsing(unsigned char UseType);
		void RemoveFromInventory(class AGBCharacter* Character);
		void RemovedFromItem(class AGBItem* OldParentItem, class USceneComponent* OldParentComp, const class FName& OldParentSocket);
		void RemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void ReloadReleased();
		void ReloadPressed();
		void Refill();
		void PrevPosPressed();
		void PreEncodeCheck();
		bool PostDecode();
		void PositionAlphaMet();
		class UAudioComponent* PlayLocalSound(class USoundCue* Sound);
		class AGBDroppedItem* PlaceAt(const struct FVector& InLocation, const struct FRotator& InRotation);
		void OnSyncCharAnim(const class FName& SyncName, bool bIsStopped, float PlayRate, float position, const class FName& NextSectionID);
		void OnStopUsing(int32_t UseType);
		void OnStartUsing(int32_t UseType);
		void OnRep_SkinName();
		void OnRemovingChild(class AGBItem* RemovedChild);
		void OnRemovedFromItem(class AGBItem* OldParentItem, class USceneComponent* OldParentComp, const class FName& OldParentSocket);
		void OnRemovedFromInventoryEvent();
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void OnLoadAssetsComplete();
		void OnBeingUnequipped();
		void OnBeingEquipped();
		void OnBeingDropped();
		void OnAddingChild(class AGBItem* AddedChild);
		void OnAddedToItem(class AGBItem* NewParentItem);
		void OnAddedToInventoryEvent();
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void NextPosPressed();
		bool IsStackable();
		bool IsEquipped();
		void InventoryModifiersUpdated();
		void IncreaseSightMagnificationPressed();
		void IncreaseReticleBrightnessLevel();
		float GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition);
		bool GetUnequipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutUnequipInfo);
		class FString GetStatKey();
		void GetStaminaMultipliers(float* RecoveryMultipler, float* ExhaustionMultipler);
		class FName GetSkinName();
		class FName GetSkinMaterialPrefix();
		void GetPositionAlphaTargets(float TargetEngagedAlpha, float TargetOffTargetAlpha, float* OutTargetEngagedAlpha, float* OutTargetOffTargetAlpha, float* OutOffTargetInterpSpeed);
		class AGBItem* GetParentItem();
		float GetItemWeight();
		class UMaterialInstanceDynamic* GetItemMID();
		struct FPrimaryAssetType GetItemAssetType();
		class UClass* GetInventorySlotWidget();
		int32_t GetInventorySlotPosition();
		int32_t GetInventorySlot();
		void GetIcon();
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		EHand GetHandEnum();
		class AGBCharacter* GetGBInstigator();
		TArray<struct FGameplayTag> GetEquipTags(EHand TargetHand);
		TArray<struct FGameplayTag> GetEquippedTags(EHand TargetHand);
		bool GetEquipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo);
		class UClass* GetDragDropOperation(const class FName& Type);
		class FText GetDisplayName();
		class FName GetDefaultPouchType();
		class UClass* GetCustomisationWidget();
		class UGBSightComponent* GetCurrentSight();
		TArray<class AGBItem*> GetChildren(class UClass* ItemClass);
		class AGBItem* GetChildItemAttachedTo(class USceneComponent* Parent, const class FName& SocketName);
		struct FPrimaryAssetId GetCachedPrimaryAssetId();
		class AGBItem* GetBaseItem();
		TArray<class AGBItem*> GetAllChildren(class UClass* ItemClass);
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		void ForceLODZero();
		TArray<class AGBItem*> FindParentItems(class AGBCharacter* Character);
		void EncodeKit(class UVaRestJsonObject* ItemAsJson);
		void EditItemSetup(class AGBCharacter* UICharacter);
		class AGBDroppedItem* DoDropFrom(const struct FVector& InLocation, const struct FRotator& InRotation, const struct FVector& InVelocity, const struct FVector& InAngularVelocity);
		bool DenyUnequip();
		bool DenyDrop();
		void DefaultSetup(class AActor* ActorOwner, const class FName& KitProfileName);
		void DecreaseSightMagnificationPressed();
		void DecreaseReticleBrightnessLevel();
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		void CycleReticleColour();
		void ClientRemoveFromInventory(class AGBCharacter* Character);
		void ClientForceDestroy();
		void ClientAddToInventory(class AGBCharacter* Character);
		void CharacterDestroyed(class AActor* DestroyedActor);
		void ChangeOwnerOnlyRelevancy(bool bOnlyOwner);
		void ChangeFiringModeReleased();
		void ChangeFiringModePressed();
		bool CanPassOnSkin();
		bool CanBeAddedAsChild(class AGBItem* PotentialParent);
		bool CanAddToCharacter(class AGBCharacter* Character);
		bool CanAddChild(class AGBItem* PotentialChild);
		void BP_DetachItemFrom(EDetachmentRule LocationRule, EDetachmentRule RotationRule);
		bool BP_AttachItemTo(class USceneComponent* Parent, const class FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule);
		void BindSyncCharAnim(class AGBCharacter* Character);
		bool AllowUsageWhileAttached();
		void AddToInventory(class AGBCharacter* Character);
		void AddedToItem(class AGBItem* NewParentItem);
		void AddedToCharacter(class AGBCharacter* NewParentCharacter);
		void AddAttachedUseMenuEntries(class UUserWidget* UsageMenu);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAmmunition
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	class AGBAmmunition : public AGBItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAmmunitionFeedComponent
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UGBAmmunitionFeedComponent : public USceneComponent
	{
	public:
		void UseRound();
		void SetBulletItemClass(class UClass* NewBulletItemClass);
		bool IsEmpty();
		int32_t GetTotalAvailableCount();
		class UClass* GetBulletProjectileClass();
		TArray<class UClass*> GetBaseBulletProjectileClasses();
		class UClass* GetBaseBulletItemClass();
		void Fill();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAnimFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBAnimFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void TransformToBoneSpace(class UAnimInstance* Target, const class FName& BoneName, const struct FVector& position, const struct FRotator& Rotation, struct FVector* OutPosition, struct FRotator* OutRotation);
		void TransformFromBoneSpace(class UAnimInstance* Target, const class FName& BoneName, const struct FVector& position, const struct FRotator& Rotation, struct FVector* OutPosition, struct FRotator* OutRotation);
		float GetSequenceLength(class UAnimSequenceBase* TargetSeq);
		float GetRateForPlayTime(class UAnimSequenceBase* TargetSeq, float PlayTime);
		struct FTransform GetBoneTransformAtTime(class UAnimSequence* AnimSequence, float AnimTime, const class FName& BoneName, bool bUseRawDataOnly);
		float FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAnimNotify_PlayCameraAnim
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGBAnimNotify_PlayCameraAnim : public UAnimNotify
	{
	public:
		class UClass*                                              CameraShake;                                             // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CameraShakeIntensityScale;                               // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SGCU[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAnimNotify_TriggerRagdoll
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UGBAnimNotify_TriggerRagdoll : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAnimNotifyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBAnimNotifyInterface : public UInterface
	{
	public:
		void NotifyStateTickName(const class FName& InName, float FrameDeltaTime);
		void NotifyStateTickEnum(unsigned char InEnumAsByte, float FrameDeltaTime);
		void NotifyStateEndName(const class FName& InName);
		void NotifyStateEndEnum(unsigned char InEnumAsByte);
		void NotifyStateBeginName(const class FName& InName);
		void NotifyStateBeginEnum(unsigned char InEnumAsByte);
		void NotifyName(const class FName& InName);
		void NotifyEnum(unsigned char InEnumAsByte);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAnimNotifyState_BlendRagdoll
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UGBAnimNotifyState_BlendRagdoll : public UAnimNotifyState
	{
	public:
		float                                                      TotalBlendDuration;                                      // 0x0030(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentBlendAmount;                                      // 0x0034(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyConstraintProfile;                                 // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bKeepConstraintProfileAfterAnim;                         // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1NEL[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ConstraintProfileName;                                   // 0x003C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularVelocityStrength;                                 // 0x0044(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OrientationStrength;                                     // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PositionStrength;                                        // 0x004C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VelocityStrength;                                        // 0x0050(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAngularForce;                                         // 0x0054(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxLinearForce;                                          // 0x0058(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AUQA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAssetManager
	 * Size -> 0x00F0 (FullSize[0x0548] - InheritedSize[0x0458])
	 */
	class UGBAssetManager : public UAssetManager
	{
	public:
		unsigned char                                              UnknownData_VKPI[0xF0];                                  // 0x0458(0x00F0) MISSED OFFSET (PADDING)

	public:
		void BlueprintAsyncLoadAssets(const class FScriptDelegate& OnAsyncLoadAssetsComplete);
		void BlueprintAsyncLoadAssetPaths(TArray<struct FSoftObjectPath> SoftObjectPaths, const class FScriptDelegate& OnAsyncLoadAssetsComplete);
		void BlueprintAsyncLoadAssetPath(const struct FSoftObjectPath& SoftObjectPath, const class FScriptDelegate& OnAsyncLoadAssetComplete);
		void BlueprintAsyncLoadAsset(const class FScriptDelegate& OnAsyncLoadAssetComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBAssetManagerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBAssetManagerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SortPrimaryAssetIdList(TArray<struct FPrimaryAssetId> InPrimaryAssetIdList, const class FName& SortTag, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
		bool RestrictedPrimaryAsset(const class FName& ProfileName, const struct FPrimaryAssetId& PrimaryAssetId);
		bool RestrictedAssetPtr(const class FName& ProfileName, const class FName& AssetTypeName);
		bool RestrictedAsset(const class FName& ProfileName, const class FName& AssetTypeName, const struct FSoftObjectPath& ObjectPath);
		bool HasRestrictedAssets(const class FName& ProfileName, const class FName& AssetTypeName);
		TArray<class FName> GetValidSkinNames(const class FName& ProfileName, const class FName& AssetTypeName, const class FName& SkinMaterialPrefix);
		TArray<struct FPrimaryAssetId> GetValidSkinDataAssets(const class FName& ProfileName, const class FName& AssetTypeName, const class FName& SkinMaterialPrefix);
		void GetSortedPrimaryAssetIdList(const struct FPrimaryAssetType& PrimaryAssetType, const class FName& SortTag, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
		TArray<class FName> GetSkinNames(const class FName& SkinMaterialPrefix);
		struct FSoftObjectPath GetSkinMaterial(const class FName& SkinMaterialPrefix, const class FName& SkinName);
		TArray<class FName> GetSimilarSkinNames(const class FName& SkinName);
		TArray<struct FPrimaryAssetId> GetPrimaryAssetIdsForPaths(TArray<struct FSoftObjectPath> ObjectPaths);
		struct FPrimaryAssetId GetPrimaryAssetIdFromString(const class FString& PrimaryAssetIdString);
		struct FPrimaryAssetId GetPrimaryAssetIdFromNames(const class FName& InPrimaryAssetType, const class FName& InPrimarAssetName);
		struct FPrimaryAssetId GetPrimaryAssetIdFromName(const class FName& InName);
		struct FPrimaryAssetId GetPrimaryAssetIdForPath(const struct FSoftObjectPath& ObjectPath);
		bool GetARSTextFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, class FText* OutText);
		bool GetARSStructFromPrimaryAsset(const struct FGBDummyStruct& Value, const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey);
		bool GetARSStringFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, class FString* OutString);
		bool GetARSSoftObjectPtrFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey);
		bool GetARSNameFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, class FName* OutName);
		bool GetARSIntFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, int32_t* OutInt);
		bool GetARSFloatFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, float* OutFloat);
		bool GetARSEnumAsByteFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FString& EnumName, const class FName& TagKey, unsigned char* OutByte);
		bool GetARSBoolFromPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey, bool* bOutBool);
		bool Array_GetARSFromPrimaryAsset(TArray<int32_t> TargetArray, const struct FPrimaryAssetId& PrimaryAssetId, const class FName& TagKey);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBarrelComponent
	 * Size -> 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
	 */
	class UGBBarrelComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_QH9P[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		class FName                                                MuzzleDeviceThread;                                      // 0x01FC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CD6Q[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBMuzzleDevice*                                     MuzzleDevice;                                            // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     FlashFX;                                                 // 0x0210(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FlashOffset;                                             // 0x0218(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachedFlash;                                          // 0x021C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoopedFlash;                                            // 0x021D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_526S[0x2];                                   // 0x021E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            FlashPSC;                                                // 0x0220(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CB7X[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireVolume;                                              // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ELTQ[0xC];                                   // 0x0234(0x000C) MISSED OFFSET (PADDING)

	public:
		class AGBBulletProjectile* SpawnBulletProjectile(class UClass* BulletProjectileClass);
		void SetMuzzleDevice(class AGBMuzzleDevice* NewMuzzleDevice);
		float GetVelocityModifier();
		class FName GetMuzzleDeviceThread();
		class AGBMuzzleDevice* GetMuzzleDevice();
		void DeActivateFlash();
		void ActivateFlash();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBTTask_MoveToCover
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UGBBTTask_MoveToCover : public UBTTask_MoveTo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBTTask_WaitBlackboardTime
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UGBBTTask_WaitBlackboardTime : public UBTTask_WaitBlackboardTime
	{
	public:
		struct FBlackboardKeySelector                              RandomDeviationKey;                                      // 0x00A0(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBulletItem
	 * Size -> 0x0010 (FullSize[0x0400] - InheritedSize[0x03F0])
	 */
	class AGBBulletItem : public AGBAmmunition
	{
	public:
		class UClass*                                              BulletProjectileClass;                                   // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RoundType;                                               // 0x03F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class FName GetRoundType();
		class UClass* GetBulletProjectileClass();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBulletMovementComponent
	 * Size -> 0x00A0 (FullSize[0x0270] - InheritedSize[0x01D0])
	 */
	class UGBBulletMovementComponent : public UProjectileMovementComponent
	{
	public:
		unsigned char                                              UnknownData_D5E1[0x8];                                   // 0x01D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnImpactDelegate;                                        // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitDelegate;                                          // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0O71[0x10];                                  // 0x01F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AirDensity;                                              // 0x0208(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WaterDensity;                                            // 0x020C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Length;                                                  // 0x0210(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Diameter;                                                // 0x0214(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JF85[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x0220(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DragCoefficient;                                         // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExpansionIndice;                                         // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PointShape;                                              // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M1MM[0x40];                                  // 0x0230(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBBulletProjectile
	 * Size -> 0x00C8 (FullSize[0x02E8] - InheritedSize[0x0220])
	 */
	class AGBBulletProjectile : public AActor
	{
	public:
		struct FRepBulletMovement                                  BulletReplicatedMovement;                                // 0x0220(0x0018) Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UKP[0x30];                                  // 0x0238(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damage;                                                  // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinDamageDistance;                                       // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDamageDistance;                                       // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9MKV[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBBulletMovementComponent*                          BulletMovementComp;                                      // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    CollisionComp;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    BulletWarningTrigger;                                    // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        AkImpactComponent;                                       // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GYNS[0x8];                                   // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SimulatedBulletClass;                                    // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FQAE[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBBulletProjectile*                                 ParentBullet;                                            // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StatKey;                                                 // 0x02C8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              BulletIndex;                                             // 0x02D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IX93[0xF];                                   // 0x02D9(0x000F) MISSED OFFSET (PADDING)

	public:
		class AGBBulletProjectile* SpawnBullet(class AActor* BulletOwner, class UClass* BulletClass, const struct FVector& SpawnLocation, const struct FVector& ShotDirection, float VelocityModifier, bool bSimulated);
		void SimulateTrajectory(const struct FTransform& SimTM, float SimTime, float SimTimeStep, float MaxDistance, TArray<struct FVector>* OutTrajectoryPoints, bool* bOutSimulatedImpact);
		void SetStatKey(const class FString& NewStatKey);
		void SetParentBullet(class AGBBulletProjectile* NewParentBullet);
		void SetBulletIndex(unsigned char NewBulletIndex);
		void OnStopEvent(const struct FHitResult& HitResult);
		void OnStop(const struct FHitResult& HitResult);
		void OnRep_BulletReplicatedMovement();
		void OnImpact(const struct FHitResult& HitResult);
		void OnExitEvent(const struct FHitResult& HitResult);
		void OnExit(const struct FHitResult& HitResult);
		void OnBulletWarnSphereEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		bool IsSimulatedOnly();
		bool IsDebuggingBullets();
		void InitForSimulatedTrajectory();
		void ImpactEffect(const struct FHitResult& HitResult, bool bExiting);
		void ImpactDamage(const struct FHitResult& HitResult);
		class FString GetStatKey();
		float GetMinDamageDistance();
		float GetMaxDamageDistance();
		class UAkComponent* GetImpactComp();
		class UGBBulletMovementComponent* GetBulletMovementComp();
		unsigned char GetBulletIndex();
		void CharacterImpact(class AGBCharacter* Character, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCharacter
	 * Size -> 0x0BD0 (FullSize[0x1090] - InheritedSize[0x04C0])
	 */
	class AGBCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_U6PJ[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGoapPlannerComponent*                               AnimSelector;                                            // 0x04D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGoapWorldComponent*                                 AnimWorldState;                                          // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      AnimActionClasses;                                       // 0x04E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TMap<class FName, class UGBCharAnimAction*>                AnimActionMap;                                           // 0x04F0(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        AnimActionPlan;                                          // 0x0540(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UAkComponent*                                        AKVoiceComp;                                             // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        AKFootstepComp;                                          // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnReceivePlayerState;                                    // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBecomeViewTarget;                                      // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndViewTarget;                                         // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPHZ[0x4];                                   // 0x0590(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemHandSocketLeft;                                      // 0x0594(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemHandSocketRight;                                     // 0x059C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SightLineBone;                                           // 0x05A4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bItemWasColliding : 1;                                   // 0x05AC(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bItemIsColliding : 1;                                    // 0x05AC(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPPN[0x3];                                   // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimMontageInfo                                    LocalMontageInfo;                                        // 0x05B0(0x0028) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimMontageInfo                                    RemoteMontageInfo;                                       // 0x05D8(0x0028) Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FHandIKTargetData                                   LeftHandIKTarget;                                        // 0x0600(0x0020) Net, NoDestructor, NativeAccessSpecifierPublic
		struct FHandIKTargetData                                   RightHandIKTarget;                                       // 0x0620(0x0020) Net, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZTC[0x4];                                   // 0x0640(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxHealth;                                               // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Health;                                                  // 0x0648(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RemoteHeadPitchDif;                                      // 0x064C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              RemoteHeadYawDif;                                        // 0x064D(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FI9J[0x2];                                   // 0x064E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ViewPitchMin;                                            // 0x0650(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewPitchMax;                                            // 0x0654(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsProne : 1;                                            // 0x0658(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KUXO[0x7];                                   // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchInterpSpeed;                                       // 0x0660(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EBHI[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBCharacterMovement*                                GBMovementComponent;                                     // 0x0668(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           WaterEntrySound;                                         // 0x0670(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           WaterExitSound;                                          // 0x0678(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           DrowningSound;                                           // 0x0680(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           GaspSound;                                               // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinWaterSoundInterval;                                   // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastWaterSoundTime;                                      // 0x0694(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxUnderWaterTime;                                       // 0x0698(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DrowningDamagePerSecond;                                 // 0x069C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHeadInWater;                                            // 0x06A0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MBLM[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastBreathTime;                                          // 0x06A4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastDrownTime;                                           // 0x06A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSafeFallSpeed;                                        // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeathFallSpeed;                                          // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrushingDamageFactor;                                    // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBItem*                                             EquippedLeft;                                            // 0x06B8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBItem*                                             EquippedRight;                                           // 0x06C0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBItem*                                             PrevEquippedLeft;                                        // 0x06C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBItem*                                             PrevEquippedRight;                                       // 0x06D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToRun : 1;                                         // 0x06D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToSprint : 1;                                      // 0x06D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CO69[0x10];                                  // 0x06D9(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHand                                                      CurrentHand;                                             // 0x06E9(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G86C[0x2];                                   // 0x06EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredLeanAlpha;                                        // 0x06EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              RemoteDesiredLeanAlpha;                                  // 0x06F0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V99Z[0x3];                                   // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanInterpSpeed;                                         // 0x06F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanAlpha;                                               // 0x06F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KU8A[0x4];                                   // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadOffsetPitchMin;                                      // 0x0700(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeadOffsetPitchMax;                                      // 0x0704(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeadOffsetYawMax;                                        // 0x0708(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DQWU[0xC];                                   // 0x070C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DesiredWaterLevel;                                       // 0x0718(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ActualWaterLevel;                                        // 0x0719(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2LTS[0x6];                                   // 0x071A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MPCWetness;                                              // 0x0720(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y7GX[0x8];                                   // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RecoilCount;                                             // 0x0730(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PODR[0x63];                                  // 0x0731(0x0063) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RNGSeed;                                                 // 0x0794(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2GXB[0x10];                                  // 0x0798(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBKitInfo*                                          LoadoutInfo;                                             // 0x07A8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LeftChestSlingPoint;                                     // 0x07B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftChestSlingEquipTag;                                  // 0x07B8(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftChestSlingUnequipTag;                                // 0x07C0(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightChestSlingPoint;                                    // 0x07C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightChestSlingEquipTag;                                 // 0x07D0(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightChestSlingUnequipTag;                               // 0x07D8(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LeftShoulderSlingPoint;                                  // 0x07E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftShoulderSlingEquipTag;                               // 0x07E8(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftShoulderSlingUnequipTag;                             // 0x07F0(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightShoulderSlingPoint;                                 // 0x07F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightShoulderSlingEquipTag;                              // 0x0800(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightShoulderSlingUnequipTag;                            // 0x0808(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxStamina;                                              // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Stamina;                                                 // 0x0814(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaGainIdle;                                         // 0x0818(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaGainWalking;                                      // 0x081C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaGainRunning;                                      // 0x0820(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaLossWalking;                                      // 0x0824(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaLossRunning;                                      // 0x0828(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaLossSprinting;                                    // 0x082C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaLossJump;                                         // 0x0830(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaLossControlledBreathing;                          // 0x0834(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaMinWeightThreshold;                               // 0x0838(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaMaxWeightThreshold;                               // 0x083C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RNE0[0x4];                                   // 0x0840(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaminaAudibleBreathingThreshold;                        // 0x0844(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaBreathingSwayThreshold;                           // 0x0848(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinRespiratoryRate;                                      // 0x084C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxRespiratoryRate;                                      // 0x0850(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_578F[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           StaminaBreatheCue;                                       // 0x0858(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FIX4[0x10];                                  // 0x0860(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxArmStrength;                                          // 0x0870(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrength;                                             // 0x0874(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthGainUnarmed;                                  // 0x0878(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthGainIdle;                                     // 0x087C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthGainWalking;                                  // 0x0880(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthGainRunning;                                  // 0x0884(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossIdle;                                     // 0x0888(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossIdleEngaged;                              // 0x088C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossWalking;                                  // 0x0890(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossWalkingEngaged;                           // 0x0894(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossRunning;                                  // 0x0898(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossRunningEngaged;                           // 0x089C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossSprinting;                                // 0x08A0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossJump;                                     // 0x08A4(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthLossJumpEngaged;                              // 0x08A8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthMinWeightThreshold;                           // 0x08AC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmStrengthMaxWeightThreshold;                           // 0x08B0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2UH5[0x8];                                   // 0x08B4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SwaySeed;                                                // 0x08BC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ArmSwayFreqRandRangeBase;                                // 0x08C0(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ArmSwayFreqRandRangeDev;                                 // 0x08C8(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K5AO[0x10];                                  // 0x08D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmTwitchChance;                                         // 0x08E0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmEaseInOutExp;                                         // 0x08E4(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FW6V[0x14];                                  // 0x08E8(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBreathingPitch;                                       // 0x08FC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_COZQ[0x8];                                   // 0x0900(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlattenSwayDuration;                                     // 0x0908(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZVX7[0x4];                                   // 0x090C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControlBreathRecoveryScale;                              // 0x0910(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I1P1[0x24];                                  // 0x0914(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MaxBreathingDeviation;                                   // 0x0938(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MinReadySway;                                            // 0x0940(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MaxReadySway;                                            // 0x0948(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MinReadySwayCrouched;                                    // 0x0950(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MaxReadySwayCrouched;                                    // 0x0958(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MinEngagedSway;                                          // 0x0960(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MaxEngagedSway;                                          // 0x0968(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MinEngagedSwayCrouched;                                  // 0x0970(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MaxEngagedSwayCrouched;                                  // 0x0978(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U3N3[0x18];                                  // 0x0980(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MaxEquippedInertiaOffset;                                // 0x0998(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DM4N[0x10];                                  // 0x09A4(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InertiaExpConstant;                                      // 0x09B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IntertiaRecoverySpeed;                                   // 0x09B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G5MO[0x8];                                   // 0x09BC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RemoteDesiredEngagedAlpha;                               // 0x09C4(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9IRO[0xB];                                   // 0x09C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RemoteDesiredOffTargetAlpha;                             // 0x09D0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QD8X[0x7];                                   // 0x09D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBLadderComponent*                                  LadderComponent;                                         // 0x09D8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bOnLadder : 1;                                           // 0x09E0(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V61S[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTakeHitInfo                                        LastTakeHitInfo;                                         // 0x09E8(0x0038) BlueprintVisible, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FootstepTraceOffset;                                     // 0x0A20(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPUI[0x8];                                   // 0x0A24(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsDying : 1;                                            // 0x0A2C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3XTY[0x3];                                   // 0x0A2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bStartingRagdoll;                                        // 0x0A30(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NHFP[0x3];                                   // 0x0A31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastTakeHitTime;                                         // 0x0A34(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTakeHitReplicatedTime;                               // 0x0A38(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BodyImpactSoundSpeedSquared;                             // 0x0A3C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QA8E[0x4];                                   // 0x0A40(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenBodyImpactSounds;                             // 0x0A44(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeadDamageScale;                                         // 0x0A48(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NeckDamageScale;                                         // 0x0A4C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HeadBone;                                                // 0x0A50(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                NeckBone;                                                // 0x0A58(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RootBone;                                                // 0x0A60(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PelvisBone;                                              // 0x0A68(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LeftFootBone;                                            // 0x0A70(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightFootBone;                                           // 0x0A78(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EyesSocket;                                              // 0x0A80(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AGBItem*>                                     InventoryList;                                           // 0x0A88(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, struct FSoftObjectPath>                  InventoryModifierMap;                                    // 0x0A98(0x0050) Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             CharacterPlayDying;                                      // 0x0AE8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InventoryItemAdded;                                      // 0x0AF8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InventoryItemRemoved;                                    // 0x0B08(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSCN[0x8];                                   // 0x0B18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     CharVoiceDataId;                                         // 0x0B20(0x0010) Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FootstepSprintLoudness;                                  // 0x0B30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FootstepRunLoudness;                                     // 0x0B34(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FootstepCrouchWalkLoudness;                              // 0x0B38(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FootstepWalkLoudness;                                    // 0x0B3C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ItemAnimationType;                                       // 0x0B40(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4XM2[0x1F];                                  // 0x0B41(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   CollisioTraceObjectTypes;                                // 0x0B60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        HeadCollisionBones;                                      // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1SK1[0x10];                                  // 0x0B80(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LeanLeftCollisionBones;                                  // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7XGX[0x10];                                  // 0x0BA0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LeanRightCollisionBones;                                 // 0x0BB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ILLQ[0x20];                                  // 0x0BC0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldUpdateSavedLagCompInfo;                           // 0x0BE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TGOK[0x3];                                   // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLagCompTime;                                          // 0x0BE4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        BodyInstanceBones;                                       // 0x0BE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBSavedBodyInstancePose>                    SavedBodyInstancePoses;                                  // 0x0BF8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R3TP[0x8];                                   // 0x0C08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RadialDamageBones;                                       // 0x0C10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      SpawnProtectionTime;                                     // 0x0C20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        EquippedUnarmedLeftTag;                                  // 0x0C24(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        EquippedUnarmedRightTag;                                 // 0x0C2C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        PickupLeftTag;                                           // 0x0C34(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        PickupRightTag;                                          // 0x0C3C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        DropLeftTag;                                             // 0x0C44(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        DropRightTag;                                            // 0x0C4C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        EquipLeftTag;                                            // 0x0C54(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        EquipRightTag;                                           // 0x0C5C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        UnequipLeftTag;                                          // 0x0C64(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        UnequipRightTag;                                         // 0x0C6C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        ReadyPositionTag;                                        // 0x0C74(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        EngagedPositionTag;                                      // 0x0C7C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8GMK[0xC];                                   // 0x0C84(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGBSwitchItemInfo                                   UnequipLeftInfo;                                         // 0x0C90(0x0070) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGBSwitchItemInfo                                   UnequipRightInfo;                                        // 0x0D00(0x0070) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGBSwitchItemInfo                                   EquipLeftInfo;                                           // 0x0D70(0x0070) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGBSwitchItemInfo                                   EquipRightInfo;                                          // 0x0DE0(0x0070) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class AGBItem*                                             PickupTarget;                                            // 0x0E50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHand                                                      PickupTargetHand;                                        // 0x0E58(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A9BM[0x7];                                   // 0x0E59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GameplayTags;                                            // 0x0E60(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGameplayTagsUpdated;                                   // 0x0E70(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxBloodVolume;                                          // 0x0E80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BloodVolume;                                             // 0x0E84(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShockBloodVolume;                                        // 0x0E88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IncapacitatedBloodVolume;                                // 0x0E8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UnconsciousBloodVolume;                                  // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeartBeatTime;                                           // 0x0E94(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeartBeatRate;                                           // 0x0E98(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InternalBleedRate;                                       // 0x0E9C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FExternalWound>                              ExternalWounds;                                          // 0x0EA0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     BloodSpurtFX;                                            // 0x0EB0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     BloodSpurtFXRef;                                         // 0x0EC8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     BloodImpactFX;                                           // 0x0ED0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     BloodImpactFXRef;                                        // 0x0EE8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     BloodExitFX;                                             // 0x0EF0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     BloodExitFXRef;                                          // 0x0F08(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BloodSpurtFXAmountParam;                                 // 0x0F10(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BloodSpurtFXAmountScale;                                 // 0x0F18(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XKFX[0x4];                                   // 0x0F1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AGBPlayerState*, struct FHitBulletIndexes>      BulletHitMap;                                            // 0x0F20(0x0050) Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxTracesPerSightUpdate;                                 // 0x0F70(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_78K8[0x4];                                   // 0x0F74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGBAISightPart>                              CharSightParts;                                          // 0x0F78(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     CharSightPartsCurve;                                     // 0x0F88(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveCurviest*                                      CharSightPartsCurveRef;                                  // 0x0FA0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpResetTime;                                           // 0x0FA8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpHopTime;                                             // 0x0FAC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              BulletIndex;                                             // 0x0FB0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WPQ3[0x7];                                   // 0x0FB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTakeHit;                                               // 0x0FB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SyncCharAnim;                                            // 0x0FC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FGBDeathMotion>                              StandDeathAnims;                                         // 0x0FD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBDeathMotion>                              CrouchDeathAnims;                                        // 0x0FE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBDeathMotion>                              StandHitAnims;                                           // 0x0FF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBDeathMotion>                              CrouchHitAnims;                                          // 0x1008(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      RagdollImpulseStrength;                                  // 0x1018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DXQG[0x4];                                   // 0x101C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DeathAnimInstance;                                       // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsRagDoll : 1;                                          // 0x1028(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4A9K[0x7];                                   // 0x1029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MantleRifleMontage;                                      // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MantlePistolMontage;                                     // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MantleUnarmedMontage;                                    // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MantleGrenadeMontage;                                    // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LadderExitTop;                                           // 0x1050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnNightVisionEnabledChanged;                             // 0x1068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNightVisionEquipmentOverrideChanged;                   // 0x1078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bNightVisionEnabled;                                     // 0x1088(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNightVisionEquipmentOverride;                           // 0x1089(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L0MK[0x6];                                   // 0x108A(0x0006) MISSED OFFSET (PADDING)

	public:
		bool WantsToSprint();
		bool WantsToRun();
		bool WantsToLeanRight();
		bool WantsToLeanLeft();
		bool WantsToLean();
		void UpdateWetness();
		void UpdateWaterLevel(float DeltaSeconds);
		void UpdateSway(float DeltaSeconds);
		void UpdateStamina(float DeltaSeconds);
		void UpdateLean(float DeltaSeconds);
		void UpdateBleeding(float DeltaSeconds);
		void UnProne(bool bClientSimulation);
		void TriggerRagdoll();
		void TakeFallingDamage(const struct FHitResult& Hit, float FallingSpeed);
		void SwitchToPrevItems();
		void SwitchItems(class AGBItem* TargetEquippedLeft, class AGBItem* TargetEquippedRight);
		void StopVoice();
		void StopNetworkedMontage(class UAnimMontage* AnimMontage);
		void SetWantsToSprint(bool bNewWantsToSprint);
		void SetWantsToRun(bool bNewWantsToRun);
		void SetUnequipInfo(EHand TargetHand, struct FGBSwitchItemInfo* NewInfo);
		void SetSpawnProtectionTime(float Duration);
		void SetRemoteHeadOffset();
		void SetRecoilCount(unsigned char NewRecoilCount);
		void SetRagdollPhysics();
		void SetOffHandIKTarget(class AActor* TargetActor, const class FName& TargetSocketName, const struct FVector& TargetOffset);
		void SetNoTargetMode(bool bEnable);
		void SetNoSway(bool bEnable);
		void SetNoRecoil(bool bEnable);
		void SetNightVisionEquipmentOverride(bool bNewNightVisionEquipmentOverride);
		void SetNightVisionEnabled(bool bNewNightVisionEnabled);
		void SetNetworkedMontageNextSection(class UAnimMontage* AnimMontage, const class FName& SectionNameToChange, const class FName& NextSection);
		void SetMainHandIKTarget(class AActor* TargetActor, const class FName& TargetSocketName, const struct FVector& TargetOffset);
		void SetLoadoutInfo(class AGBKitInfo* NewLoadoutInfo);
		void SetLadderComponent(class UGBLadderComponent* NewLadderComponent);
		void SetItemAnimationType(unsigned char NewItemAnimationType);
		void SetGodMode(bool bEnable);
		void SetEquipped(EHand TargetHand, class AGBItem* NewEquipped, class AGBItem* LastEquipped);
		void SetDesiredOffTargetAlpha(float NewDesiredOffTargetAlpha);
		void SetDesiredLeanAlpha(float Alpha);
		void SetDesiredEngagedAlpha(float NewDesiredEngagedAlpha);
		void SetCurrentHand(EHand NewHand);
		void SetCharVoiceDataId(const struct FPrimaryAssetId& NewCharVoiceDataId);
		void SetAnimActionPlan(TArray<class FName> NewAnimActionPlan);
		void ServerStopNetworkedMontage(class UAnimMontage* AnimMontage);
		void ServerSetWantsToSprint(bool bNewWantsToSprint);
		void ServerSetWantsToRun(bool bNewWantsToRun);
		void ServerSetRemoteHeadOffset(unsigned char NewRemoteHeadPitchDif, unsigned char NewRemoteHeadYawDif);
		void ServerSetNightVisionEquipmentOverride(bool bNewNightVisionEquipmentOverride);
		void ServerSetNightVisionEnabled(bool bNewNightVisionEnabled);
		void ServerSetDesiredOffTargetAlpha(unsigned char AlphaAsByte);
		void ServerSetDesiredLeanAlpha(unsigned char AlphaAsByte);
		void ServerSetDesiredEngagedAlpha(unsigned char AlphaAsByte);
		void ServerRemoveGameplayTag(const class FName& GameplayTag);
		void ServerPlayNetworkedMontage(class UAnimMontage* AnimMontage, const class FName& SyncName, float PlayRate, const class FName& StartSectionName);
		void ServerPickupItem(class AGBItem* Item, unsigned char TargetHand);
		void ServerInternalSwitchItems(class AGBItem* TargetLeftHandItem, class AGBItem* TargetRightHandItem);
		void ServerDropItems(bool bDropLeftHand, bool bDropRightHand);
		void ServerAddGameplayTag(const class FName& GameplayTag);
		float SeededFRandRange(float InMin, float InMax);
		void RemoveInventoryModifierWithPrefix(const class FString& ModifierPrefix);
		void RemoveInventoryModifier(const class FName& ModifierName);
		void RemoveGameplayTag(const class FName& GameplayTag);
		void RemoveAnimActions(TArray<class UClass*> RemoveAnimActionClasses);
		void RemoveAnimAction(class UClass* RemoveAnimActionClass);
		void RecoilCountUpdated();
		void Prone(bool bClientSimulation);
		void PlayWaterSound(class USoundCue* WaterSound);
		void PlayVoice(const class FName& Key, bool bIsRadioMessage);
		void PlayTakeHitEffects();
		float PlayNetworkedMontage(class UAnimMontage* AnimMontage, const class FName& SyncName, float PlayRate, const class FName& StartSectionName);
		void PlayDying();
		void PlayDamageEffects();
		void PickupItem(class AGBItem* Item, EHand TargetHand);
		void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
		bool PauseSprinting();
		void OptOut();
		void OnStopVoiceEvent();
		void OnStartProneEvent(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnRep_RNGSeed();
		void OnRep_RemoteMontageInfo();
		void OnRep_RemoteDesiredOffTargetAlpha();
		void OnRep_RemoteDesiredLeanAlpha();
		void OnRep_RemoteDesiredEngagedAlpha();
		void OnRep_NightVisionEquipmentOverride();
		void OnRep_NightVisionEnabled();
		void OnRep_LoadoutInfo();
		void OnRep_LadderComponent();
		void OnRep_IsProne();
		void OnRep_EquippedRight(class AGBItem* LastRightEquipped);
		void OnRep_EquippedLeft(class AGBItem* LastLeftEquipped);
		void OnRep_CharVoiceDataId();
		void OnPlayVoiceEvent(class UAkAudioEvent* VoiceAudioEvent, bool bIsLocalPlayer);
		void OnPhysicsCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnLoadAssetsComplete();
		void OnLandedEffects(const struct FHitResult& Hit, float FallingSpeed);
		void OnHopped();
		void OnEquippedItemsUpdatedEvent(bool bLeftUpdated, bool bRightUpdated);
		void OnEndProneEvent(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void NetworkedMontageJumpToSection(const class FName& SectionName);
		void NetMulticastPlayVoice(const class FName& Key, bool bIsRadioMessage);
		bool ModifyDamageTaken(int32_t* AppliedDamage, int32_t* Damage, struct FVector* Momentum, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageType);
		bool ModifyDamageCaused(int32_t* AppliedDamage, int32_t* Damage, struct FVector* Momentum, const struct FHitResult& HitInfo, class AActor* Victim, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageType);
		bool IsUICharacter();
		bool IsSprinting();
		bool IsRunning();
		bool IsRagdoll();
		bool IsProne();
		bool IsLocallyViewed();
		bool IsEngaged();
		bool IsCrouched();
		bool IsAlive();
		bool Is3DMovementMode();
		void InternalOnLoadoutApplied();
		void InstantBloodLoss(float BloodLoss);
		unsigned char IncrementBulletIndex();
		bool HasInventoryModifier(const class FName& ModifierName);
		bool HasGameplayTag(const class FName& GameplayTag);
		bool GetWantsToControlBreath();
		class UAkComponent* GetVoiceComp();
		struct FGBSwitchItemInfo GetUnequipInfo(EHand TargetHand);
		float GetTracedCollisionOffset();
		float GetTotalItemWeight();
		struct FRotator GetSwayOffset();
		struct FGameplayTag GetSlingUnequipTag(const class FName& SlingPoint);
		struct FGameplayTag GetSlingEquipTag(const class FName& SlingPoint);
		struct FTransform GetSightLineTransform();
		class FName GetShoulderSlingPoint(EHand TargetHand);
		struct FRotator GetRemoteHeadOffset();
		struct FRotator GetRecoilOffset();
		unsigned char GetRecoilCount();
		float GetRecoilAlpha();
		class AGBItem* GetPickupTarget();
		class FName GetPelvisBone();
		EHand GetOppositeHandEnum(EHand EquippedType);
		bool GetOnLadder();
		float GetOffTargetAlpha();
		bool GetNoTargetMode();
		bool GetNoSway();
		bool GetNoRecoil();
		bool GetNightVisionEquipmentOverride();
		bool GetNightVisionEnabled();
		class FName GetNetworkedMontageSyncName();
		class FName GetNetworkedMontageSection();
		class UAnimMontage* GetNetworkedMontage();
		float GetNeckDamageScale();
		class FName GetNeckBone();
		float GetMovementSpeed();
		float GetMovementDirection();
		class AGBPlayerController* GetLocalViewer();
		float GetLeanAlpha();
		float GetLastTakeHitTime();
		class UGBLadderComponent* GetLadderComponent();
		bool GetItemsByItemAssetType(const struct FPrimaryAssetType& ItemAssetType, TArray<class AGBItem*>* OutItems);
		bool GetItemsByItemAssetId(const struct FPrimaryAssetId& ItemAssetId, TArray<class AGBItem*>* OutItems);
		bool GetItemsByClass(class UClass* ItemClass, TArray<class AGBItem*>* OutItems);
		class FName GetItemHandSocket(EHand TargetHand);
		class AGBItem* GetItemAttachedToSocket(const class FName& SocketName);
		unsigned char GetItemAnimationType();
		bool GetInventoryModifierWithPrefix(const class FString& ModifierPrefix, class FName* OutModifierName, struct FSoftObjectPath* OutModifierObject);
		bool GetInventoryModifier(const class FName& ModifierName, struct FSoftObjectPath* OutModifierObject);
		TArray<class AGBItem*> GetInventoryList();
		float GetHeadDamageScale();
		class FName GetHeadBone();
		EHand GetHandEnumFromSocket(const class FName& SocketName);
		EHand GetHandEnum(EHand EquippedType);
		bool GetGodMode();
		class UAkComponent* GetFootstepComp();
		float GetFlattenSwayTime();
		class AGBItem* GetFirstItemByItemAssetType(const struct FPrimaryAssetType& ItemAssetType, class UClass* CastToItemClass);
		class AGBItem* GetFirstItemByItemAssetId(const struct FPrimaryAssetId& ItemAssetId, class UClass* CastToItemClass);
		class AGBItem* GetFirstItemByClass(class UClass* ItemClass);
		bool GetFirearmEquipped();
		class FName GetEyesSocket();
		TMap<struct FGameplayTag, unsigned char> GetEquippedWorldStateFlags();
		class AGBItem* GetEquipped(EHand TargetHand);
		struct FGBSwitchItemInfo GetEquipInfo(EHand TargetHand);
		float GetEngagedAlpha();
		float GetDesiredOffTargetAlpha();
		float GetDesiredLeanAlpha();
		float GetDesiredEngagedAlpha();
		EHand GetCurrentHand();
		float GetCrouchAlpha();
		class FName GetChestSlingPoint();
		class UAkAudioEvent* GetCharVoiceAudioEvent(const class FName& Key);
		float GetBreathingSinValue();
		class UGoapWorldComponent* GetAnimWorldState();
		class UGoapPlannerComponent* GetAnimSelector();
		class UAnimInstance* GetAnimInstance();
		TArray<class FName> GetAnimActionPlan();
		struct FRotator GetAimCenterOffset();
		bool GenerateAnimActionPlan(const struct FGoapWorldState& WorldState, const struct FGoapWorldState& GoalState);
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		void GameplayTagsUpdated();
		void ForceClientEquippedSync();
		bool DropItemsEvent(bool bLeftHand, bool bRightHand);
		void DropItems(bool bDropLeftHand, bool bDropRightHand);
		void DestroyInventory(bool bForceClient);
		float DamageOrgan(const struct FHitResult& HitResult, float Damage);
		void ClientSyncEquipped(class AGBItem* ServerEquippedLeft, class AGBItem* ServerEquippedRight);
		void ClientSwitchToPrevItems();
		void ClientSwitchItems(class AGBItem* TargetEquippedLeft, class AGBItem* TargetEquippedRight);
		void ClearUnequipInfo(EHand TargetHand);
		bool ClearSimilarItems(const struct FPrimaryAssetType& ItemAssetType, class AGBItem* Exclude);
		void ClearPickupTarget();
		void ClearEquipInfo(EHand TargetHand);
		void CleanUpLocalInventory();
		bool CanDamageRadial(const struct FVector& DamageOrigin, TArray<class AActor*> IgnoreActors, ECollisionChannel TraceChannel, TArray<EPhysicalSurface> SurfaceTypesToIgnore, struct FHitResult* OutHit);
		void BlueprintAddDefaultItems();
		void ApplyProperties(TArray<class FString> PropertyNames, TArray<class FString> PropertyValues);
		void AnimNotifyFootstep(bool bInLeftFoot);
		void AdvanceAnimActionPlan();
		void AddInventoryModifierAsTag(const class FName& ModifierName);
		void AddInventoryModifier(const class FName& ModifierName, const struct FSoftObjectPath& ModifierObject);
		void AddInternalBleeding(float Rate);
		void AddGameplayTag(const class FName& GameplayTag);
		void AddExternalBleeding(const class FName& AttachBoneName, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, float Rate, float Duration);
		void AddDefaultItems(bool bSkipLocalClient);
		void AddAnimActions(TArray<class UClass*> AddAnimActionClasses);
		void AddAnimAction(class UClass* AddAnimActionClass);
		void AbortAnimActionPlan();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCharacterMovement
	 * Size -> 0x00D0 (FullSize[0x0BD0] - InheritedSize[0x0B00])
	 */
	class UGBCharacterMovement : public UCharacterMovementComponent
	{
	public:
		float                                                      MaxWalkSpeedForward;                                     // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedForwardLeftRight;                            // 0x0B04(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedBackward;                                    // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedLeftRight;                                   // 0x0B0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForward;                                      // 0x0B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRight;                             // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackward;                                     // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRight;                                    // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardCrouched;                              // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRightCrouched;                     // 0x0B24(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackwardCrouched;                             // 0x0B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRightCrouched;                            // 0x0B2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardReady;                                 // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRightReady;                        // 0x0B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackwardReady;                                // 0x0B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRightReady;                               // 0x0B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardCrouchedReady;                         // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRightCrouchedReady;                // 0x0B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackwardCrouchedReady;                        // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRightCrouchedReady;                       // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardEngaged;                               // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRightEngaged;                      // 0x0B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackwardEngaged;                              // 0x0B58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRightEngaged;                             // 0x0B5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardCrouchedEngaged;                       // 0x0B60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedForwardLeftRightCrouchedEngaged;              // 0x0B64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedBackwardCrouchedEngaged;                      // 0x0B68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedLeftRightCrouchedEngaged;                     // 0x0B6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSprintSpeed;                                          // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSprintSpeedCrouched;                                  // 0x0B74(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedProne;                                       // 0x0B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRunSpeedProne;                                        // 0x0B7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderClimbSpeed;                                     // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderSlideSpeed;                                     // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderJumpOffSpeed;                                      // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LadderRotationRate;                                      // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneHalfHeight;                                         // 0x0B90(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToProne : 1;                                       // 0x0B94(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToRun : 1;                                         // 0x0B94(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToSprint : 1;                                      // 0x0B94(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanClimbLadders : 1;                                    // 0x0B94(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWAS[0x3];                                   // 0x0B95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HopZVelocity;                                            // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsToMantle : 1;                                      // 0x0B9C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5YT[0x3];                                   // 0x0B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBCharacter*                                        GBCharacterOwner;                                        // 0x0BA0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R1S4[0xC];                                   // 0x0BA8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MantleCheckDistance;                                     // 0x0BB4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MantleMaxHeight;                                         // 0x0BB8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MantleClimbSpeed;                                        // 0x0BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JOHU[0x10];                                  // 0x0BC0(0x0010) MISSED OFFSET (PADDING)

	public:
		bool WantsToSprint();
		bool WantsToRun();
		bool WantsToLean();
		void SetLadderComponent(class UGBLadderComponent* NewLadderComponent);
		bool PauseSprinting();
		bool IsProne();
		bool GetOnLadder();
		float GetOffTargetAlpha();
		float GetMovementDirection();
		float GetMaxWalkingSpeed();
		float GetMaxRunningSpeed();
		class UGBLadderComponent* GetLadderComponent();
		bool GetFirearmEquipped();
		float GetEngagedAlpha();
		float FallingDamageReduction(float FallingDamage, const struct FHitResult& Hit);
		bool CanGrabLadder();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCharAnimAction
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UGBCharAnimAction : public UObject
	{
	public:
		struct FGoapAction                                         GoapAction;                                              // 0x0028(0x00B0) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsLocal;                                                // 0x00D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UPYL[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBCharacter*                                        GBCharacter;                                             // 0x00E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     Montage;                                                 // 0x00E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        MontageRef;                                              // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SyncName;                                                // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GameplayTag;                                             // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void TriggerAction();
		void PlayAnim(const class FName& SectionName);
		void OnMontageEndedEvent(bool bInterrupted);
		void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);
		void OnLoadAssetsComplete();
		void OnInitEvent();
		void Init(class AGBCharacter* InGBCharacter);
		struct FGoapAction GetGoapAction();
		class AGBCharacter* GetGBCharacter();
		void GatherAssets(TArray<struct FSoftObjectPath>* OutAssets);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCharEmoteData
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGBCharEmoteData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              Montage[0x28];                                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCharVoiceData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGBCharVoiceData : public UPrimaryDataAsset
	{
	public:
		TArray<struct FCharVoiceMessage>                           Messages;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerControllerBase
	 * Size -> 0x0018 (FullSize[0x0588] - InheritedSize[0x0570])
	 */
	class AGBPlayerControllerBase : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_YAFW[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGBFullScreenWidget>                         FullScreenWidgets;                                       // 0x0578(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void RemoveFullScreenWidget(class UUserWidget* FullScreenWidget);
		void ListFullScreenWidgets();
		void AddFullScreenWidget(class UUserWidget* FullScreenWidget, int32_t Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerController
	 * Size -> 0x0418 (FullSize[0x09A0] - InheritedSize[0x0588])
	 */
	class AGBPlayerController : public AGBPlayerControllerBase
	{
	public:
		unsigned char                                              UnknownData_X18P[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ServerViewTarget;                                        // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            TargetControlRotation;                                   // 0x0598(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4MD6[0xC];                                   // 0x05A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreeLookMaxPitchDifference;                              // 0x05B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreeLookMaxYawDifference;                                // 0x05B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGBCharacter*                                        GBCharacter;                                             // 0x05B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGBPlayerInput*                                      GBPlayerInput;                                           // 0x05C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UP0E[0x14];                                  // 0x05C8(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetFreelookInterpSpeed;                                // 0x05DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_86GR[0x8];                                   // 0x05E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGodMode;                                                // 0x05E8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoTargetMode;                                           // 0x05E9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoSway;                                                 // 0x05EA(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoRecoil;                                               // 0x05EB(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NZ5D[0x20];                                  // 0x05EC(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementForwardAxis;                                     // 0x060C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovementStrafeAxis;                                      // 0x0610(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseTurnRate;                                            // 0x0614(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseLookUpRate;                                          // 0x0618(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GL0P[0xC];                                   // 0x061C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTurnRate;                                             // 0x0628(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSprintTurnRate;                                       // 0x062C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OffCenterThreshold;                                      // 0x0630(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5K6[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerState*                                        LastTeamKillerPlayerState;                               // 0x0638(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastTeamKillerPrevKills;                                 // 0x0640(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTeamKilled;                                          // 0x0644(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APlayerState*                                        LastTeamKillVictimPlayerState;                           // 0x0648(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFluidStance : 1;                                        // 0x0650(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N9VB[0x7];                                   // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerControllerBulletWarn;                            // 0x0658(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      InteractionDistance;                                     // 0x0668(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9Z50[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 CurrentInteractivePrimitive;                             // 0x0670(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H255[0x50];                                  // 0x0678(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBCharacter*>                                DummyLoadoutChars;                                       // 0x06C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x06D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OffTargetPitchDelta;                                     // 0x06E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SZH7[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FString>                           ClientLoadoutHashMap;                                    // 0x06E8(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<class FName, class AGBKitInfo*>                       LoadoutKitInfoMap;                                       // 0x0738(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LY8G[0x8];                                   // 0x0788(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetInteractionComponent*                         WidgetInteractionComponent;                              // 0x0790(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPlayerControllerNotifyTakeHit;                         // 0x0798(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerControllerStateChanged;                          // 0x07A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerSpectatorChanged;                                // 0x07B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpectatorViewTargetChanged;                            // 0x07C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WETX[0x18];                                  // 0x07D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     CharVoiceDataId;                                         // 0x07F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         OverrideInputWidget;                                     // 0x0800(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6NQR[0x10];                                  // 0x0808(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBVOIPManager*                                      VOIPManager;                                             // 0x0818(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              VOIPManagerClass;                                        // 0x0820(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInputComponent*                                     SpectatingStateInputComponent;                           // 0x0828(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpectatorNightVision;                                   // 0x0830(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VWVF[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerNightVisionRequestedChanged;                     // 0x0838(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bPlayerNightVisionRequested;                             // 0x0848(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J491[0x7];                                   // 0x0849(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LastGrenadeClass;                                        // 0x0850(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A3HE[0x38];                                  // 0x0858(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LocalPlayerTags;                                         // 0x0890(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLocalPlayerTagsUpdated;                                // 0x08A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpectatorShowOptionsMenu;                              // 0x08B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9XG[0x30];                                  // 0x08C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdateControlBreath;                                   // 0x08F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControlBreathExhale;                                   // 0x0900(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControlBreathInhale;                                   // 0x0910(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ7B[0x68];                                  // 0x0920(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBItem*>                                     ItemsMissingFromInventory;                               // 0x0988(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_51LV[0x8];                                   // 0x0998(0x0008) MISSED OFFSET (PADDING)

	public:
		void Vote(const class FString& Parameters);
		void UseActorWithParams(class AActor* UseTarget, const class FName& UseType, const class FString& Params);
		void UseActor(class AActor* UseTarget, const class FName& UseType);
		void UpdateSpectatorNightVisionPPEvent();
		void UpdatePPSharpenPercentageEvent();
		void UnMuteAll();
		void UnMute(class APlayerState* TargetPlayerState);
		void ToggleInGameMenu();
		void TimerDelayedSaveConfig();
		void TeamChat();
		void SyncLoadoutToTeam();
		void StopUsingRadio();
		void StopTalking();
		void StartUsingRadio();
		void StartTalking();
		void SpectatorViewPrevPlayer();
		void SpectatorViewNextPlayer();
		void SpectatorViewActor(class AActor* ActorTarget);
		void SpectatorToggleHUD();
		void SpectatorStopFollowing();
		void SpectatorSetCamera(const class FName& NewCameraStyle);
		bool SpectatorIsFollowing();
		void SpectatorChangeSpeed(float Change);
		void SpectatorChangeDistance(float Change);
		void Spectate();
		void ShowTransitionScreenEvent(const class FName& TransitionType);
		void ShowAdminMenuEvent();
		void SetViewRotation(const struct FRotator& NewRotation);
		void SetTeamElement(ETeamElement NewTeamElement);
		void SetTargetInputSensitivityScale(float NewScale);
		void SetSwitchGrenadeCheck(float SwitchDelay);
		void SetSpectatorNightVision(bool bEnable);
		void SetReadyStatus(EReadyStatus NewReadyStatus);
		void SetPlayerPatch(const class FName& TargetSocket, const class FString& ShortPath);
		void SetPlayerNightVisionRequested(bool bNewPlayerNightVisionRequested);
		void SetOverrideInputWidget(class UUserWidget* UserWidget);
		void SetNoTargetMode(bool bEnable);
		void SetNoSway(bool bEnable);
		void SetNoRecoil(bool bEnable);
		void SetLoadout(const class FName& LoadoutName, class UVaRestJsonObject* KitJsonObj);
		void SetLastGrenadeClass(class UClass* GrenadeClass);
		void SetLastDesiredOffTargetAlphaValue(float NewLastDesiredOffTargetAlphaValue);
		void SetInsertionPoint(class AGBInsertionPoint* NewInsertionPoint);
		void SetIgnoreUseInput(bool bIgnore);
		void SetGodMode(bool bEnable);
		void ServerVote(const class FString& Parameters);
		void ServerUseActorWithParams(class AActor* UseTarget, const class FName& UseType, const class FString& Params);
		void ServerUseActor(class AActor* UseTarget, const class FName& UseType);
		void ServerSpectatorViewActor(class AActor* ActorTarget);
		void ServerSpectate();
		void ServerSetTeamElement(ETeamElement NewTeamElement);
		void ServerSetReadyStatus(EReadyStatus NewReadyStatus);
		void ServerSetPlayerPatch(const class FName& TargetSocket, const class FString& ShortPath);
		void ServerSetInsertionPoint(class AGBInsertionPoint* NewInsertionPoint);
		void ServerSetCharacterVoiceSet(const struct FPrimaryAssetId& NewCharVoiceDataId);
		void ServerSendAFKReponse();
		void ServerSayTeam(const class FString& Msg);
		void ServerSay(const class FString& Msg);
		void ServerReport();
		void ServerReapplyCharLoadout();
		void ServerPlayVoice(const class FName& Key, bool bIsRadioMessage);
		void ServerPlayerGameModeRequest(const class FString& Request);
		void ServerPlayEmote(const struct FPrimaryAssetId& CharEmoteId);
		void ServerOptOut();
		void ServerInitialSync();
		void ServerForgive();
		void ServerEnterReadyRoom();
		void ServerEnterPlayArea();
		void ServerCreateLoadoutInfo(const struct FReplicatedString& ReplicatedLoadout);
		void ServerConfirmBulletCharacterImpact(class AGBCharacter* HitCharacter, const struct FGBOrganDamageEvent& OrganDamageEvent);
		void ServerChooseSpectatorViewTarget();
		void ServerCheat(const class FString& Msg);
		void ServerAdminSet(const struct FZKReplicatedContent& Content);
		void ServerAdminRequest(const class FName& RequestType);
		void ServerAdmin(const class FString& Parameters);
		void SayTeam(const class FString& Msg);
		void Say(const class FString& Msg);
		void RestartPlayer();
		void Report();
		void RemoveLocalPlayerTag(const class FName& LocalPlayerTag);
		void RemoveIgnoreUseInputReason(const class FName& Reason);
		void ReapplyCharLoadout();
		void ReadyRoom();
		void PlayVoice(const class FName& Key, bool bIsRadioMessage);
		void PlayerGameModeRequest(const class FString& Request);
		void PlayEmote(const class FString& CharEmoteString);
		void OptOutTimer();
		void OptOut();
		void OpenMissionEditorEvent();
		void OnShowWorldPromptEvent(const struct FVector& PromptLocation, const class FName& Tag, float Duration);
		void OnShowSpawnProtectionWarningEvent(bool bShow);
		void OnRestartPlayerEvent();
		void OnPreSeamlessTravelEvent(const class FString& MissionTitle, const class FString& MapTitle, const class FString& MapAuthor);
		void OnHoveredWidgetChanged(class UWidgetComponent* WidgetComponent, class UWidgetComponent* PreviousWidgetComponent);
		void OnGrenadeThrowEnd();
		void OnClientOnLoadoutAppliedEvent();
		void OnAFKPromptEvent(float ReponseTime);
		void NotAFK();
		void MuteTalking();
		void MuteAll();
		void Mute(class APlayerState* TargetPlayerState);
		void MissionIntel_Released();
		void MissionIntel_Pressed();
		bool IsUsingRadio();
		bool IsUseInputIgnored();
		bool IsTalking();
		bool IsMuted(class APlayerState* TargetPlayerState);
		bool IsFreeLooking();
		bool IsFirstPerson();
		bool IsAlive();
		void InventorySlot4_Pressed();
		void InventorySlot3_Pressed();
		void InventorySlot2_Repeat();
		void InventorySlot2_Released();
		void InventorySlot2_Pressed();
		void InventorySlot1_Repeat();
		void InventorySlot1_Released();
		void InventorySlot1_Pressed();
		void IncreaseSightMagnificationPressed();
		void IncreaseReticleBrightnessLevel();
		void HideTransitionScreens();
		void HideTransitionScreenEvent();
		bool HasLocalPlayerTag(const class FName& LocalPlayerTag);
		bool HandleCommunicationKey(const struct FKey& Key, bool bPressed);
		void GlobalChat();
		class UWidgetInteractionComponent* GetWidgetInteractionComponent();
		struct FRotator GetViewRotation();
		bool GetSpectatorNightVision();
		float GetPredictionTime();
		class UGBPlayerSettings* GetPlayerSettings();
		bool GetPlayerNightVisionRequested();
		float GetPlayerFOV();
		class UUserWidget* GetOverrideInputWidget();
		bool GetNoTargetMode();
		bool GetNoSway();
		bool GetNoRecoil();
		void GetNetInfo(int32_t* Ping, float* InKiloBytesPerSecond, int32_t* InPacketsPerSecond, int32_t* InLossPercentage, float* OutKiloBytesPerSecond, int32_t* OutPacketsPerSecond, int32_t* OutLossPercentage);
		class APlayerState* GetLastTeamKillVictimPlayerState();
		float GetLastDesiredOffTargetAlphaValue();
		bool GetGodMode();
		class AGBHUD* GetGBHUD();
		class AGBCharacter* GetGBCharacter();
		int32_t GetFPS();
		bool GetFluidStance();
		float GetEyeBias();
		class FName GetCameraStyle();
		float FrozenTimeLeft();
		void Freeze(float Duration);
		void Forgive();
		void ForceHideTransitionScreens();
		void FlushActions();
		void FirearmAttachment_Released();
		void FirearmAttachment_Pressed();
		void EditMission();
		void DropEquipped(bool bDropLeftHand, bool bDropRightHand);
		void DelayedSaveConfig();
		void DecreaseSightMagnificationPressed();
		void DecreaseReticleBrightnessLevel();
		void CycleReticleColour();
		void ClientTeamKillWarn(class APlayerState* VictimPlayerState);
		void ClientTeamKilledNotify(class APlayerState* TeamKillerPlayerState, int32_t PrevKills);
		void ClientShowWorldPrompt(const struct FVector& PromptLocation, const class FName& Tag, float Duration);
		void ClientShowSpawnProtectionWarning(bool bShow);
		void ClientShowMenu(const struct FSoftClassPath& MenuClassName);
		void ClientShowAdminMenu();
		void ClientSetIgnoreUseInput(bool bIgnore);
		void ClientSendPlayerCharVoice(class AGBPlayerState* SenderPlayerState, const struct FPrimaryAssetId& SenderCharVoiceDataId, const class FName& Key, bool bIsRadio);
		void ClientOnLoadoutApplied();
		void ClientInitialSync();
		void ClientGameMessage(const class FName& GameMessageId, const class FName& Type, float Duration);
		void ClientFreeze(float Duration);
		void ClientEnterReadyRoom();
		void ClientEnterPlayArea();
		void ClientBecameSpectator(const struct FVector& NewSpectatorLocation, const struct FRotator& NewSpectatorRotation);
		void ClientAFKPrompt(float ReponseTime);
		void ClientAdminReply(const struct FZKReplicatedContent& Content);
		void ClearOverrideWidget();
		void ClearCurrentInteractivePrimitive();
		void ClearAutoSwitchTimer();
		void ClearAllIgnoreUseInputReasons();
		void BulletWarn(class AActor* Bullet, bool bSubSonic);
		void AdminSet(const struct FZKReplicatedContent& Content);
		void AdminRequest(const class FName& RequestType, const class FScriptDelegate& OnAdminRequestFilled);
		void Admin(const class FString& Parameters);
		void AddLocalPlayerTag(const class FName& LocalPlayerTag);
		void AddIgnoreUseInputReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UGBCheatManager : public UCheatManager
	{
	public:
		void ZeroSightTo(int32_t NewZeroDistance);
		void ValidateKitAssetIds();
		void SetWaterLevel(int32_t InWaterLevel);
		void NoTarget();
		void NoSway();
		void NoRecoil();
		void DebugGameCommand(const class FString& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBClothing
	 * Size -> 0x0078 (FullSize[0x0468] - InheritedSize[0x03F0])
	 */
	class AGBClothing : public AGBItem
	{
	public:
		class USkeletalMeshComponent*                              ClothingMeshComponent;                                   // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseAttachParentBound;                                   // 0x03F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I8O5[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     ClothingMesh;                                            // 0x0400(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       ClothingMeshRef;                                         // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     CustomAsset;                                             // 0x0420(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             CustomAssetRef;                                          // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              WoundParameterName;                                      // 0x0440(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FHID[0x8];                                   // 0x0450(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        WoundBoneList;                                           // 0x0458(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void OnTakeHit(const class FName& RefBoneName, const struct FVector& RefPosPosition);
		class UObject* GetCustomAssetRef();
		struct FSoftObjectPath GetCustomAsset();
		void Apply();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBCrowdFollowingComponent
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class UGBCrowdFollowingComponent : public UCrowdFollowingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBDirectSight
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class AGBDirectSight : public AGBItem
	{
	public:
		class FName                                                Type;                                                    // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class FName GetType();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBDroppedItem
	 * Size -> 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
	 */
	class AGBDroppedItem : public AActor
	{
	public:
		bool                                                       bImportant;                                              // 0x0220(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CJNN[0x2F];                                  // 0x0221(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBItem*                                             AssociatedItem;                                          // 0x0250(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AController*                                         AssociatedController;                                    // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ImpactType;                                              // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ImpactSpeedSquared;                                      // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I8Z1[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenImpacts;                                      // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NRTU[0x1C];                                  // 0x0274(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetAssociatedItem(class AGBItem* NewAssociatedItem);
		void RescueImportant();
		void OnRep_AssociatedItem();
		void OnPhysicsCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void MakeInteractiveEvent();
		bool IsImportant();
		class AGBItem* GetAssociatedItem();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBEjectComponent
	 * Size -> 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
	 */
	class UGBEjectComponent : public USceneComponent
	{
	public:
		class UParticleSystem*                                     SmokeFX;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachedSmoke;                                          // 0x0200(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoopedSmoke;                                            // 0x0201(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VLM4[0x6];                                   // 0x0202(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            SmokePSC;                                                // 0x0208(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     ShellFX;                                                 // 0x0210(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachedShell;                                          // 0x0218(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoopedShell;                                            // 0x0219(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LOXN[0x6];                                   // 0x021A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ShellPSC;                                                // 0x0220(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManualEjection;                                         // 0x0228(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SB1D[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsManuallyEjected();
		void DeActivateSmoke();
		void DeActivateShell();
		void ActivateSmoke();
		void ActivateShell();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBExternalMagazineComponent
	 * Size -> 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
	 */
	class UGBExternalMagazineComponent : public UGBAmmunitionFeedComponent
	{
	public:
		class FName                                                MagazineType;                                            // 0x01F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGBMagazine*                                         Magazine;                                                // 0x0200(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultMagazineClass;                                    // 0x0208(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MagazineClass;                                           // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ChamberedRound;                                          // 0x0218(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartPlusOne;                                           // 0x0220(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStayOpenOnLastRound;                                    // 0x0221(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsFiringFromOpenBolt : 1;                               // 0x0222(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBoltHeldOpen : 1;                                       // 0x0222(0x0001) BIT_FIELD BlueprintVisible, Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J3Q5[0xD];                                   // 0x0223(0x000D) MISSED OFFSET (PADDING)

	public:
		void SetIsFiringFromOpenBolt(bool bNewIsFiringFromOpenBolt);
		void SetChamberedRound(class UClass* NewChamberedRound);
		void SetBoltHeldOpen(bool bNewBoltIsHeldOpen);
		class FName GetMagazineType();
		class UClass* GetMagazineClass();
		class AGBMagazine* GetMagazine();
		bool GetIsFiringFromOpenBolt();
		class UClass* GetDefaultMagazineClass();
		class UClass* GetChamberedRound();
		bool GetBoltHeldOpen();
		class AGBMagazine* FindCompatibleMagazine(class AGBCharacter* Character);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBFirearm
	 * Size -> 0x01B8 (FullSize[0x05A8] - InheritedSize[0x03F0])
	 */
	class AGBFirearm : public AGBItem
	{
	public:
		class USkeletalMeshComponent*                              FirearmMeshComponent;                                    // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        AkGunshotComponent;                                      // 0x03F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        AkInteractComponent;                                     // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                Type;                                                    // 0x0408(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBSightComponent*                                   POVSightComponent;                                       // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2EN1[0x8];                                   // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBSightComponent*                                   CurrentSight;                                            // 0x0420(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGBSightComponent*>                           SightLineRoots;                                          // 0x0428(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7XPS[0x10];                                  // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     RecoilMontage;                                           // 0x0448(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     RightHandOverlay;                                        // 0x0460(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     LeftHandOverlay;                                         // 0x0478(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        RecoilMontageRef;                                        // 0x0490(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       RightHandOverlayRef;                                     // 0x0498(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       LeftHandOverlayRef;                                      // 0x04A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecoilImpulseTime;                                       // 0x04A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecoilRecoveryTime;                                      // 0x04AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRecoilPerShot                                      EngagedRecoilPerShot;                                    // 0x04B0(0x0010) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRecoilPerShot                                      RecoilPerShot;                                           // 0x04C0(0x0010) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierCrouchedReady;                  // 0x04D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierCrouchedEngaged;                // 0x04D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierCrouchedLowReady;               // 0x04D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierCrouchedHighReady;              // 0x04DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierReady;                          // 0x04E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierEngaged;                        // 0x04E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierLowReady;                       // 0x04E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaRecoveryMultiplierHighReady;                      // 0x04EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierCrouchedReady;                // 0x04F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierCrouchedEngaged;              // 0x04F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierCrouchedLowReady;             // 0x04F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierCrouchedHighReady;            // 0x04FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierReady;                        // 0x0500(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierEngaged;                      // 0x0504(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierLowReady;                     // 0x0508(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaExhaustionMultiplierHighReady;                    // 0x050C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastFired;                                               // 0x0510(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_50K7[0xC];                                   // 0x0514(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFiringModeData>                             FiringModes;                                             // 0x0520(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              FiringModeIndex;                                         // 0x0530(0x0001) BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH6O[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    BarrelSpatialSoundSphereComp;                            // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BarrelSpatialSoundTag;                                   // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FirearmSoundType;                                        // 0x0548(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OFTK[0x40];                                  // 0x0550(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BarrelAimAngleThreshold;                                 // 0x0590(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSightRelativeX;                                       // 0x0594(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxGripRelativeX;                                        // 0x0598(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             CollisionTraceEndOffset;                                 // 0x059C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ZeroCurrentSightComp(class UGBSightComponent* SightComp);
		void UseRound();
		void TriggerPullDelay();
		void SpatialSoundSphereEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void SpatialSoundSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SetupCollisionTraceEndOffset();
		void SetFiringModeIndex(unsigned char NewFiringModeIndex);
		void SetFiringModeByString(const class FString& FiringModeString);
		void SetCurrentSight(class UGBSightComponent* NewSight);
		void ServerSetFiringModeIndex(unsigned char NewFiringMode);
		void ServerSetCurrentSight(class UGBSightComponent* NewSight);
		void ServerReloadBegin(TArray<class FName> ReloadPlan);
		void ServerReleaseTrigger();
		void ServerPullTrigger();
		void ReloadInputDelay();
		void ReloadBegin(TArray<struct FGameplayTag> ReloadStateFlags);
		void ReleaseTrigger();
		void PullTrigger();
		void OnStoppedFiringEvent();
		void OnSpatialSoundTagChangedEvent(const class FName& OldSpatialSoundTag, const class FName& NewSpatialSoundTag);
		void OnSetFiringModeIndexEvent();
		void OnRep_CurrentSight(class UGBSightComponent* LastActiveSightComponent);
		void OnReloadTappedEvent();
		void OnReloadDoubleTappedEvent();
		void OnFiringEvent(int32_t RecoilCount);
		void OnEmptyShotEvent();
		void OnChangeFiringModeEvent();
		void NextShot();
		bool IsReloading();
		bool IsFingerOnTrigger();
		bool IsEngaged();
		bool IsEmpty();
		int32_t GetTotalAvailableCount();
		int32_t GetShotCount();
		float GetRateOfFire();
		int32_t GetNumSightLines();
		struct FVector GetMuzzleOffset();
		float GetMinSightRelativeX();
		float GetMaxGripRelativeX();
		class UAkComponent* GetInteractComp();
		class UAkComponent* GetGunshotComp();
		TArray<struct FFiringModeData> GetFiringModes();
		unsigned char GetFiringModeIndex();
		unsigned char GetFiringModeByString(const class FString& FiringModeString);
		struct FTransform GetFirearmTransform();
		class FName GetEmptySlingPoint(class AGBCharacter* GBCharacter);
		class AGBHolster* GetEmptyHolster(class AGBCharacter* Character);
		struct FVector GetCollisionTraceEndOffset();
		int32_t GetBurstCount();
		class UClass* GetBulletProjectileClass(class UGBBarrelComponent* Barrel);
		class UClass* GetBaseBulletProjectileClass(class UGBBarrelComponent* Barrel);
		void FireShot();
		void EndShot();
		void DisplayReloadMenuEvent();
		void DisplayFiringModeMenuEvent();
		void DisplayFiringModeMenu();
		void CheckWantsToPullTrigger();
		void ChangeFiringModeIndex(int32_t Dir);
		void AIReload(class AGBAIController* AIController, const class FName& ReloadType);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBFrontSightPostComponent
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UGBFrontSightPostComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_ONYP[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      MaxOffset;                                               // 0x01FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRelativeLocationOffset;                                // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
		float VerticalFOV(float HorizontalFOV, float AspectRatio);
		class FString TrimDigitsFromString(const class FString& inString);
		class FString Time_GetOSTime(int32_t* MilliSeconds, int32_t* Seconds, int32_t* Minutes, int32_t* Hours12, int32_t* Hours24, int32_t* Day, int32_t* Month, int32_t* Year);
		class FString StringToDisplayString(const class FString& inString, bool bIsBool);
		void SortStringArray(TArray<class FString>* StringArray, TArray<class FString>* StringArrayRef);
		void SortIntArray(TArray<int32_t>* IntArray, TArray<int32_t>* IntArrayRef);
		void SortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef);
		void SortActorArray(TArray<class AActor*>* ActorArray, TArray<class AActor*>* ActorArrayRef);
		bool SocketNameMatches(TArray<class FName> SocketNamesToCheck, const class FName& SocketNameToFind, ESearchFix SearchFix);
		unsigned char SignedAlphaToByte(float AlphaValue);
		void SetSkyLightSourceType(class USkyLightComponent* SkyLightComp, ESkyLightSourceType SourceType);
		void SetSkyLightRealTimeCapture(class USkyLightComponent* SkyLightComp, bool bEnable);
		bool SetGenericTeamId(class AActor* Target, unsigned char NewTeamId);
		void SetConsoleString(const class FString& ConsoleVar, const class FString& StringValue);
		void SetConsoleInt(const class FString& ConsoleVar, int32_t IntValue);
		void SetConsoleFloat(const class FString& ConsoleVar, float FloatValue);
		void SetConsoleBool(const class FString& ConsoleVar, bool BoolValue);
		void SetComponentUseSimpleCharacterShadows(class AActor* Target, bool bUseSimpleShadows);
		bool SaveStringToFile(const class FString& Filename, const class FString& String, bool bOverWrite);
		void RenameActor(class AActor* TargetActor, const class FString& NewActorName);
		class FString RemoveCharacter(const class FString& inString, const class FString& InCharacter);
		class FString RemoveBadCharacters(const class FString& Filename);
		void Project(const struct FTransform& ViewTM, float FOV, const struct FVector2D& ScreenSize, const struct FVector& WorldLocation, struct FVector2D* OutScreenPosition);
		bool PrettifyJsonString(const class FString& JsonString, class FString* OutPrettyKitString);
		bool ParseValue_String(const class FString& Options, const class FString& Match, class FString* Value);
		bool ParseValue_Name(const class FString& Options, const class FString& Match, class FName* Value);
		bool ParseValue_Integer(const class FString& Options, const class FString& Match, int32_t* Value);
		bool ParseValue_Float(const class FString& Options, const class FString& Match, float* Value);
		bool ParseValue_Bool(const class FString& Options, const class FString& Match, bool* Value);
		bool OnSameTeam(class AActor* ActorA, class AActor* ActorB);
		bool NameArraysMatch(TArray<class FName> SourceNames, TArray<class FName> TargetNames);
		bool LoadStringFromFile(const class FString& Filename, class FString* OutString, bool bLogWarnings);
		bool LoadStringArrayFromFile(const class FString& Filename, TArray<class FString>* OutStringArray, bool bLogWarnings);
		bool LoadExternalImage(const class FString& ImagePath, class UTexture2D** OutImage, int32_t* OutWidth, int32_t* OutHeight);
		bool IsValidSoftObjectPath(const struct FSoftObjectPath& SoftObjectPath);
		bool IsSimulatingInEditor();
		bool IsKeyBoundToActionDown(class APlayerController* PlayerController, const class FName& ActionName);
		bool IsInState(class AController* Target, const class FName& InStateName);
		bool IsGameWorld(class UObject* WorldContextObject);
		bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
		bool IsFacing(class AActor* Target, const struct FVector& Location, float MinForwardDot, bool bIgnoreVerticalFacing);
		bool IsEditorWorld(class UObject* WorldContextObject);
		bool IsEditor();
		bool IsDebugDisplayOn(class UObject* WorldContextObject, const class FName& DebugType);
		float HorizontalFOV(float VerticalFOV, float AspectRatio);
		bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, ECollisionChannel TraceChannel, bool bTraceComplex, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHitResult);
		bool GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition);
		bool GetUseSimpleCharacterShadows(class UObject* WorldContextObject);
		int32_t GetUnixTimestamp();
		float GetTimeAlive(class AActor* Target);
		class FName GetStateName(class AController* Target);
		class FString GetScreenShotDir();
		class FString GetSavedDir();
		class FString GetSavedConfigDir();
		struct FTransform GetRefPoseBoneTransform(class USkeletalMeshComponent* SkelMesh, const class FName& BoneName);
		class FString GetProjectVersion();
		class FString GetOptionsFromCommandLine(const class FString& CommandLine);
		int32_t GetNetworkVersion();
		bool GetMaterialInstanceStaticSwitchParameterValue(class UMaterialInstance* Instance, const class FName& ParameterName, bool bCheckParent);
		bool GetMatchingSocketNames(TArray<class FName> CheckSocketNames, class USceneComponent* SceneComp, TArray<class FName>* OutSocketNames, ESearchFix SearchFix);
		class FString GetMapPath(class UObject* WorldContextObject, bool bTrimGame);
		class FString GetMapFromCommandLine(const class FString& CommandLine, bool bRemovePath);
		class FString GetMapAssetPackageName(class UObject* WorldContextObject, bool bTrimGame);
		class ULocalPlayer* GetLocalPlayer(class APlayerController* PlayerController);
		int32_t GetLastDigitsFromString(const class FString& inString);
		class FText GetKeyText(const struct FKey& Key);
		TArray<struct FKey> GetKeysBoundToAction(const class FName& ActionName);
		unsigned char GetGenericTeamId(class AActor* Target);
		class UGBLocalPlayer* GetGBLocalPlayer(class UObject* WorldContextObject);
		class FString GetGameLogDir();
		class FString GetGameDir();
		class FString GetGameContentDir();
		class AActor* GetFirstActorOfClass(class UObject* WorldContextObject, class UClass* ActorClass);
		bool GetFileList(const class FString& FilePath, const class FString& Extension, bool bTrimPathAndExt, TArray<class FString>* FileList);
		float GetDistanceAlongSplineAtSplineInputKey(class USplineComponent* SplineComp, float InKey);
		float GetCreationTime(class AActor* Target);
		void GetConsoleString(const class FString& ConsoleVar, class FString* OutString);
		void GetConsoleInt(const class FString& ConsoleVar, int32_t* OutInt);
		void GetConsoleHelp(const class FString& ConsoleVar, class FString* OutHelp);
		void GetConsoleFloat(const class FString& ConsoleVar, float* OutFloat);
		void GetConsoleBool(const class FString& ConsoleVar, int32_t* OutBool);
		class FString GetConfigFilename(const class FString& ConfigFile);
		class UActorComponent* GetComponentByName(class AActor* Target, const class FName& Name);
		class UObject* GetClassDefaultObject(class UClass* Class);
		class FString GetBuildType(bool bIncludeEditor);
		class FString GetBuildNumber();
		class FString GetBaseFilename(const class FString& Filename);
		bool GetAssetSoftObjPtrs(const class FString& Path);
		class UCameraComponent* GetActorCameraComponent(class AActor* Target);
		bool GetActor2DBoundingBox(class AActor* Target, bool bNonColliding, struct FVector2D* OutMins, struct FVector2D* OutMaxs);
		class UPhysicalMaterial* Get_PhysicalMaterial(class UMaterial* Material);
		class FString GenerateMissionDisplayName(const class FString& InMapName, const class FString& InVariantName);
		void FlushPressedKeys(class APlayerController* PlayerController);
		void FlushPressedActions(class APlayerController* PlayerController, TArray<class FName> ActionNames);
		void FlushPressedAction(class APlayerController* PlayerController, const class FName& ActionName);
		bool FileExists(const class FString& Filename);
		bool EvalBool(const class FString& InOpt, bool Default);
		void DrawDebugWideArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float Width, const struct FLinearColor& LineColor, float Duration, float Thickness);
		void DeProject(const struct FTransform& ViewTM, float FOV, const struct FVector2D& ScreenSize, const struct FVector2D& ScreenPosition, struct FVector* OutWorldLocation, struct FVector* OutWorldDirection);
		bool DeleteFile(const class FString& Filename, bool bLogWarnings);
		class AVolume* CreateVolume(class UObject* WorldContextObject, const struct FTransform& SpawnTM, const struct FVector& Size, class UClass* VolumeClass);
		class UMeshComponent* CreateMeshComponentCopy(class AActor* NewOwner, class UMeshComponent* Source);
		class UMeshComponent* CopyMeshComponents(class AActor* NewOwner, class UMeshComponent* ParentComponent);
		void CopyInstanceVertexColorsIfCompatible(class UStaticMeshComponent* SourceComponent, class UStaticMeshComponent* TargetComponent);
		class FString ConvertMinutesTo24Hours(int32_t MinutesOfDay);
		int32_t Convert24HoursToMinutes(const class FString& TimeString);
		void Config_SetString(const class FString& Filename, const class FString& Section, const class FString& Key, const class FString& Value);
		void Config_SetInt(const class FString& Filename, const class FString& Section, const class FString& Key, int32_t Value);
		void Config_SetFloat(const class FString& Filename, const class FString& Section, const class FString& Key, float Value);
		void Config_SetBool(const class FString& Filename, const class FString& Section, const class FString& Key, bool Value);
		void Config_SetArray(const class FString& Filename, const class FString& Section, const class FString& Key, TArray<class FString> Values);
		void Config_Save(const class FString& Filename);
		void Config_RemoveFromArray(const class FString& Filename, const class FString& Section, const class FString& Key, const class FString& Value);
		class FString Config_GetString(const class FString& Filename, const class FString& Section, const class FString& Key, bool* bValid);
		int32_t Config_GetInt(const class FString& Filename, const class FString& Section, const class FString& Key, bool* bValid);
		float Config_GetFloat(const class FString& Filename, const class FString& Section, const class FString& Key, bool* bValid);
		bool Config_GetBool(const class FString& Filename, const class FString& Section, const class FString& Key, bool* bValid);
		TArray<class FString> Config_GetArray(const class FString& Filename, const class FString& Section, const class FString& Key, bool* bValid);
		void Config_AddToArray(const class FString& Filename, const class FString& Section, const class FString& Key, const class FString& Value);
		bool CondenseJsonString(const class FString& JsonString, class FString* OutCondensedString);
		void Component_SetCastHiddenShadow(class UPrimitiveComponent* PrimitiveComponent, bool bNewCastHiddenShadow);
		bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
		void CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
		void CaptureComponent2D_DeProject(class USceneCaptureComponent2D* Target, const struct FVector2D& ScreenPos, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
		bool Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
		void Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
		void Capture2D_DeProject(class ASceneCapture2D* Target, const struct FVector2D& ScreenPos, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
		float ByteToSignedAlpha(unsigned char ByteValue);
		float ByteToAlpha(unsigned char ByteValue);
		class UClass* BlueprintSyncLoadClass();
		class UObject* BlueprintSyncLoadAsset();
		void Array_Sort(TArray<int32_t> TargetArray, bool bAscendingOrder, const class FName& VariableName);
		bool AngleWithin(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees, bool bInclusive);
		unsigned char AlphaToByte(float AlphaValue);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UGBGameEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameInstance
	 * Size -> 0x0048 (FullSize[0x01F0] - InheritedSize[0x01A8])
	 */
	class UGBGameInstance : public UGameInstance
	{
	public:
		class UUserWidget*                                         LoadingScreenUserWidget;                                 // 0x01A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLoadingScreenEvent;                                    // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZ5M[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowDefaultControls;                                    // 0x01D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VFDN[0x1F];                                  // 0x01D1(0x001F) MISSED OFFSET (PADDING)

	public:
		void TerminateDedicatedServer();
		void ShowLoadingScreen();
		void SetLoadingScreenWidget(class UUserWidget* UserWidget);
		void HideLoadingScreen();
		class UUserWidget* GetLoadingScreenWidget();
		void DefaultControlsShown();
		class UUserWidget* CreateInviteLoadingScreenWidget(const class FString& ConnectCommand, const class FString& MapName);
		class UUserWidget* CreateDefaultLoadingScreenWidget(const class FString& MapName);
		bool CreateDedicatedServer(const class FString& CommandLine, bool bShowLog);
		void BroadcastOnLoadingScreenEvent(const class FName& EventName);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameMode
	 * Size -> 0x0318 (FullSize[0x05D8] - InheritedSize[0x02C0])
	 */
	class AGBGameMode : public AGameModeBase
	{
	public:
		class AGBGameState*                                        GBGameState;                                             // 0x02C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandleDedicatedServerReplays;                           // 0x02C8(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NGY0[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSpectators;                                           // 0x02CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayers;                                              // 0x02D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTravellingPlayers;                                    // 0x02D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                DisplayName;                                             // 0x02D8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              SettingsWidget;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              BriefingRoomWidget;                                      // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     MissionNameAdjectives;                                   // 0x0300(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     MissionNameNouns;                                        // 0x0318(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AIDirectorClass;                                         // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBAIDirector*                                       AIDirector;                                              // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AISpawnManagerClass;                                     // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBAISpawnManager*                                   AISpawnManager;                                          // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AIBarkManagerClass;                                      // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBAIBarkManager*                                    AIBarkManager;                                           // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeLimit;                                               // 0x0360(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PostTimeLimitDelay;                                      // 0x0364(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q9EI[0xC];                                   // 0x0368(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDeadBodies;                                           // 0x0374(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FDeadBodyData>                               DeadBodies;                                              // 0x0378(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MS4D[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDroppedItems;                                         // 0x0390(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CUD6[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBDroppedItem*>                              DroppedItems;                                            // 0x0398(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QE91[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxLagCompTime;                                          // 0x03B0(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Difficulty;                                              // 0x03B4(0x0004) BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5AMU[0xB8];                                  // 0x03B8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RoundStage;                                              // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReadyCountdownTime;                                      // 0x0478(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PreRoundWaitTime;                                        // 0x047C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundTime;                                               // 0x0480(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PostRoundWaitTime;                                       // 0x0484(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UL2G[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class AGBKitInfo*>                       DefaultLoadoutMap;                                       // 0x0490(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GBE6[0x18];                                  // 0x04E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameStartTime;                                           // 0x04F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LYVT[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FailSafeLoadout;                                         // 0x0500(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShutdownScheduled;                                      // 0x0510(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4L70[0xF];                                   // 0x0511(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BotControllerClass;                                      // 0x0520(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FBotInfo>                                    Bots;                                                    // 0x0528(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B35M[0x28];                                  // 0x0538(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLuaValue                                           GameModeTable;                                           // 0x0560(0x0040) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FString                                              MissionFileName;                                         // 0x05A0(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBMissionData*                                      MissionData;                                             // 0x05B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPreStopMissionScript;                                  // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostRunMissionScript;                                  // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UpdateGameRules();
		void UnFreezeBots(unsigned char TeamId);
		void TimeLimitTimer();
		void TimeLimitReached();
		void StandAloneCommand(const class FString& Command, const class FString& Params);
		bool ShouldCheckForTeamKills();
		void SetTimeOfDay(int32_t NewTimeOfDay);
		void SetRoundTime(int32_t NewRoundTime);
		void SetRoundStageTime(int32_t NewTime);
		void SetRoundStage(const class FName& NewRoundStage);
		void SetMissionFileName(const class FString& NewMissionFileName);
		void SetMissionData(class UGBMissionData* NewMissionData, bool bSpawnActors, bool bRunScript, bool bForce);
		void SetDifficulty(int32_t NewDifficulty);
		void SetDefaultRoundStageTime(const class FName& RoundStageName, int32_t NewTimeLimit);
		void SendEveryoneToReadyRoom();
		void SendEveryoneToPlayArea();
		void RunMissionScript(const class FString& ScriptName);
		void RetryStandalone(class AGBPlayerController* PlayerController);
		void RemoveBots(unsigned char Count, unsigned char TeamId);
		void RefreshDroppedItemList();
		void RefreshDeadBodyList();
		bool PrepLatecomer(class AGBPlayerState* GBPlayerState);
		void PlayerReadyStatusChanged(class AGBPlayerState* GBPlayerState, EReadyStatus ReadyStatus);
		void PlayerInsertionPointChanged(class AGBPlayerState* GBPlayerState, class AGBInsertionPoint* InsertionPoint);
		void PlayerGameModeRequest(class AGBPlayerState* GBPlayerState, const class FString& Request);
		void PlayerEnteredReadyRoom(class AGBPlayerState* GBPlayerState);
		void PlayerEnteredPlayArea(class AGBPlayerState* GBPlayerState);
		bool PlayerCanEnterPlayArea(class AGBPlayerState* GBPlayerState);
		void OnVoteCommandEvent(class APlayerController* PlayerController, const class FString& Command, const class FString& Params);
		void OnVoteCommand(class APlayerController* PlayerController, const class FString& Command, const class FString& Params);
		void OnRoundStageTimeElapsed();
		void OnRoundStageSet();
		void OnRoundStageAborted(const class FName& Reason);
		void OnRetryStandalone(class AGBPlayerController* PlayerController);
		void OnProcessCommandEvent(const class FString& Command, const class FString& Params);
		void OnProcessCommand(const class FString& Command, const class FString& Params);
		void OnLuaError(const class FString& Message);
		void OnInitGameStateEvent();
		void OnInitGameEvent(const class FString& Options);
		void OnCharacterDiedEvent(class ACharacter* Character, class AController* CharacterController, class AController* KillerController);
		void MakeEveryoneSpectate();
		void KillBots(unsigned char TeamId);
		bool HasReachedTimeLimit();
		bool HasBots();
		void HandleStartRoundCommand();
		void HandleRestartRoundCommand();
		void HandleEndRoundCommand();
		struct FLuaValue GetTableGameMode();
		bool GetSpawnInfo(class AGBPlayerState* GBPlayerState, struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
		float GetRoundStageTimeRemaining();
		class FName GetRoundStage();
		class AActor* GetReadyRoomStart(class AGBPlayerState* GBPlayerState);
		TArray<int32_t> GetReadyPlayerTeamCounts(bool bExcludeBots);
		class AGBInsertionPoint* GetRandomInsertionPoint();
		class AGBKitInfo* GetPlayerLoadoutInfo(class AController* Controller, const class FName& LoadoutName);
		class FString GetMissionFileName();
		class UGBMissionData* GetMissionData();
		class FText GetDisplayName();
		int32_t GetDefaultRoundStageTime(const class FName& RoundStageName);
		class UClass* GetBriefingRoomWidget();
		TArray<class AGBAIController*> GetBotControllers(unsigned char TeamId);
		class AGBInsertionPoint* GetBestLateComerInsertionPoint(class AGBPlayerState* GBPlayerState);
		class UClass* GetAISpawnManagerClass();
		class AGBAISpawnManager* GetAISpawnManager();
		class AGBAIBarkManager* GetAIBarkManager();
		void FreezeBots(unsigned char TeamId);
		void EnterReadyRoom(class AGBPlayerState* GBPlayerState);
		void EnterPlayArea(class AGBPlayerState* GBPlayerState);
		void ClearRoundStageTime();
		void CharacterDied(class ACharacter* Character, class AController* CharacterController, class AController* KillerController);
		void BroadcastLocalized(class AActor* Sender, class UClass* Message, int32_t Switch, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
		void BroadcastGameMessage(const class FName& GameMessageId, const class FName& Type, float Duration);
		void Broadcast(class AGBPlayerState* SenderPlayerState, const class FString& Message, const class FName& MessageType);
		void BeginScheduledShutdown();
		void BecomeSpectator(class AGBPlayerState* GBPlayerState);
		void ApplyLoadout(class AController* Controller);
		void AFKDetected(class APlayerController* PlayerController);
		void AddDefaultLoadout(const class FName& LoadoutName);
		void AddBots(unsigned char Count, unsigned char TeamId);
		void AbortRoundStage(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameModeActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBGameModeActorInterface : public UInterface
	{
	public:
		void SetActive(bool bNewActive);
		bool IsActive();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameModeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBGameModeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t GetMissionVersion();
		class FString GetMissionScriptFileName(const class FString& ScriptName);
		class FString GetMissionFileName(class UObject* WorldContextObject, const class FString& MissionName);
		class FString GetMissionExtension();
		class FString GetGameModeOptions(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameModeLuaState
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UGBGameModeLuaState : public ULuaState
	{
	public:
		struct FLuaValue GetTimeSeconds();
		struct FLuaValue GetScript(const struct FLuaValue& Self);
		struct FLuaValue GetComp(const struct FLuaValue& Self);
		void DebugPrint(const struct FLuaValue& Message);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool SphereOverlapDamageableComponentsSorted(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AActor*> IgnoreActors, TArray<EObjectTypeQuery> ObjectTypes, TArray<class UPrimitiveComponent*>* OutComponents);
		void SetReplicatedAlphaValues(class UObject* WorldContextObject, struct FReplicatedAlpha* ReplicatedAlpha, float CurrentAlpha, float TargetAlpha);
		void ResetEncompassedActors(class AVolume* Volume);
		void ResetActors(class UObject* WorldContextObject);
		void ResetActor(class AActor* Target);
		bool PositionIsInWater(class UObject* WorldContextObject, const struct FVector& position, ECollisionChannel CollisionChannel);
		void NukeActor(class AActor* Target);
		bool IsSpawnLocationValid(class UObject* WorldContextObject, const struct FVector& SpawnLocation, float CapsuleHalfHeight, float CapsuleRadius);
		bool IsNetReady(class APlayerController* PlayerController);
		bool IsLocallyViewed(class AActor* Viewed);
		bool GrabAllOptions(const class FString& Options, TArray<class FString>* OutKeys, TArray<class FString>* OutValues);
		bool GetValidatedSpawnLocation(class UObject* WorldContextObject, const struct FVector& SpawnLocation, float CapsuleHalfHeight, float CapsuleRadius, struct FVector* OutValidatedSpawnLocation);
		class FString GetUniqueIdAsString(class APlayerState* PlayerState);
		void GetReplicatedAlphaValues(const struct FReplicatedAlpha& ReplicatedAlpha, float* CurrentAlpha, float* TargetAlpha, float* Timestamp);
		float GetPredictionTime(class AActor* Target);
		class AGBPlayerController* GetLocallyViewingPlayerController(class AActor* Viewed);
		class AGBPlayerState* FindPlayerStateByPlayerNameOrUniqueId(class UObject* WorldContextObject, const class FString& PlayerNameOrUniqueId);
		class AGBPlayerController* FindPlayerControllerByPlayerNameOrUniqueId(class UObject* WorldContextObject, const class FString& PlayerNameOrUniqueId);
		bool EncompassesPoint(class AVolume* Volume, const struct FVector& Point, float SphereRadius, float* OutDistanceToPoint);
		bool ConeOverlapDamageableComponentsSorted(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Dir, float ConeHalfAngle, float Radius, TArray<class AActor*> IgnoreActors, TArray<EObjectTypeQuery> ObjectTypes, TArray<class UPrimitiveComponent*>* OutComponents);
		bool CanDamageStaticMesh(class UStaticMeshComponent* StaticComp, const struct FVector& DamageOrigin, int32_t MaxTraceChecks, TArray<class AActor*> IgnoreActors, ECollisionChannel TraceChannel, TArray<EPhysicalSurface> SurfaceTypesToIgnore, struct FHitResult* OutHit);
		bool CanDamageSkeletalMesh(class USkeletalMeshComponent* SkeletalComp, const struct FVector& DamageOrigin, TArray<class FName> Bones, TArray<class AActor*> IgnoreActors, ECollisionChannel TraceChannel, TArray<EPhysicalSurface> SurfaceTypesToIgnore, struct FHitResult* OutHit);
		float ApplyRadialDamageDirect(class AActor* DamagedActor, float MaxDamage, float MinDamage, float MinDamageRadius, float MaxDamageRadius, float DamageFalloff, const struct FVector& Origin, TArray<struct FHitResult> HitResults, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameSession
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class AGBGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_FJZR[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      QuickAdminCommands;                                      // 0x0240(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UW7Q[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateServerDetailsTimer();
		void UpdateServerDetails();
		void MutePlayer(class APlayerState* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameState
	 * Size -> 0x0450 (FullSize[0x06C0] - InheritedSize[0x0270])
	 */
	class AGBGameState : public AGameStateBase
	{
	public:
		TArray<struct FGBTeamInfo>                                 PlayerTeamInfoArray;                                     // 0x0270(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      VotingCommands;                                          // 0x0280(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      PermittedGameModes;                                      // 0x0290(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      PermittedMissionList;                                    // 0x02A0(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bPlayAreaOpen : 1;                                       // 0x02B0(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M6VK[0xA7];                                  // 0x02B1(0x00A7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ReplicatedTeamAttitudes;                                 // 0x0358(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XM98[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0370(0x0010) Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ServerMOTD;                                              // 0x0380(0x0010) Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Difficulty;                                              // 0x0390(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeLimit;                                               // 0x0394(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnDifficultySet;                                         // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                RoundStage;                                              // 0x03A8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RoundStageTime;                                          // 0x03B0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3TLB[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoundStageSet;                                         // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    RoundTime;                                               // 0x03C8(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7QKZ[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoundTimeSet;                                          // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FReplicatedString>                           PlayerLoadouts;                                          // 0x03E0(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2NFC[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      GameStats;                                               // 0x03F8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGameStatsUpdated;                                      // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionNameUpdated;                                    // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4R8[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGBMissionName                                      MissionName;                                             // 0x0430(0x0020) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T1A1[0x18];                                  // 0x0450(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastMissionFileName;                                     // 0x0468(0x0010) Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnTeamScoresUpdated;                                     // 0x0478(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<unsigned char, struct FGBScoreCollection>             TeamScoresMap;                                           // 0x0488(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      ReplicatedTeamScoreLists;                                // 0x04D8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		struct FGBScoreCollection                                  PlayerScoresTemplate;                                    // 0x04E8(0x0010) Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnMatchStatsUpdated;                                     // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGBMatchStats                                       MatchStats;                                              // 0x0508(0x0018) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		bool                                                       RoundIsTemporaryGameMode;                                // 0x0520(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ID1X[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GameModeName;                                            // 0x0524(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X2WH[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameModeNameUpdated;                                   // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              bUsesReadyRoom : 1;                                      // 0x0540(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsRoundBased : 1;                                       // 0x0540(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowLateJoiners : 1;                                   // 0x0540(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QRW7[0x57];                                  // 0x0541(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ReplicatedGameRules;                                     // 0x0598(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9NIG[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGBMissionSetting>                           MissionSettings;                                         // 0x05B0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGameRulesUpdated;                                      // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionSettingsUpdated;                                // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FGBGameObjective>                            GameObjectives;                                          // 0x05E0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBGameObjective>                            SearchLocations;                                         // 0x05F0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L4T9[0x10];                                  // 0x0600(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GameStringTableIds;                                      // 0x0610(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGameObjectivesUpdated;                                 // 0x0620(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSearchLocationsUpdated;                                // 0x0630(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWatchModeChanged;                                      // 0x0640(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWatchConfigChanged;                                    // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCaptureStateChanged;                                   // 0x0660(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCaptureZoneChanged;                                    // 0x0670(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectiveLocationChanged;                              // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoundTimeAlert;                                        // 0x0690(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EWatchMode                                                 WatchMode;                                               // 0x06A0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              WatchConfig;                                             // 0x06A1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsCapturing;                                             // 0x06A2(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_91YP[0x1];                                   // 0x06A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGBCaptureZone                                      CaptureZone;                                             // 0x06A4(0x000C) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector_NetQuantize                                 ObjectiveLocation;                                       // 0x06B0(0x000C) Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4917[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UsesReadyRoom();
		void UpdateMatchStatsAfterRoundEnd();
		void UpdatedTeamAttitudes();
		void UpdatedGameStats();
		void UpdatedGameRules();
		void SyncTeamScoreLists();
		void SetWatchMode(EWatchMode InWatchMode);
		void SetWatchConfig(unsigned char InWatchConfig);
		void SetTeamAttitude(const struct FGenericTeamId& Team, const struct FGenericTeamId& OtherTeam, ETeamAttitude Attitude);
		void SetServerName(const class FString& NewServerName);
		void SetServerMOTD(const class FString& NewServerMOTD);
		void SetRoundIsTemporaryGameMode(bool IsTemporary);
		void SetPlayerTeamRole(unsigned char TeamId, const class FName& InRole);
		void SetPlayAreaOpen(bool bIsOpen);
		void SetObjectiveLocation(const struct FVector& InObjectiveLocation);
		void SetMissionSettingValue(const class FName& Name, int32_t NewValue);
		void SetLastMissionFileName(const class FString& InLastMissionFileName);
		void SetIsCapturing(bool InIsCapturing);
		void SetGameModeName(const class FName& InGameModeName);
		void SetCaptureZone(float InCaptureRadius, float InCaptureHeight, unsigned char DefenderTeamId, bool InZoneIsSpherical);
		void ServerPrepMissionSummaryEvent();
		void SendTimeRemainingAlertToWatches();
		void RoundStageSet();
		void ResetTeamScores();
		void ResetPlayerScores();
		void ResetMatchStats();
		void ReportClientMissingAsset(const class FString& AssetName);
		bool PlayAreaOpen();
		void OnVoteStartedEvent(class APlayerState* VoteStarter, const class FString& Command, const class FString& Params, int32_t VoteTime);
		void OnVoteStarted(class APlayerState* VoteStarter, const class FString& Command, const class FString& Params, int32_t VoteTime);
		void OnVoteEndedEvent(bool bPassed, int32_t NextVoteDelay);
		void OnVoteEnded(bool bPassed, int32_t NextVoteDelay);
		void OnVoteCountUpdatedEvent(int32_t YesVotes, int32_t NoVotes);
		void OnVoteCountUpdated(int32_t YesVotes, int32_t NoVotes);
		void OnRep_WatchMode();
		void OnRep_WatchConfig();
		void OnRep_UsesReadyRoom();
		void OnRep_TeamScoreLists();
		void OnRep_TeamAttitudes();
		void OnRep_SearchLocations();
		void OnRep_RoundTime();
		void OnRep_RoundStage();
		void OnRep_PlayerLoadouts();
		void OnRep_ObjectiveLocation();
		void OnRep_MissionSettings();
		void OnRep_MissionName();
		void OnRep_MatchStats();
		void OnRep_IsRoundBased();
		void OnRep_GameStringTables();
		void OnRep_GameStats();
		void OnRep_GameRules();
		void OnRep_GameObjectives();
		void OnRep_GameModeName();
		void OnRep_Difficulty();
		void OnRep_CaptureZone();
		void OnRep_CaptureState();
		void OnRep_AllowLateJoiners();
		void OnGameMessageEvent(const class FName& GameMessageId, const class FName& Type, float Duration);
		void MulticastTimeRemainingAlertToWatches();
		bool IsRoundBased();
		bool IsGameRuleEnabled(const class FName& RuleName);
		void InitMissionName();
		void IncrementRoundNumber();
		bool HasMissionSetting(const class FName& Name);
		int32_t GetWinningTeamForRound();
		EWatchMode GetWatchMode();
		unsigned char GetWatchConfig();
		TArray<class FString> GetVotingCommands();
		int32_t GetTimeLimit();
		int32_t GetTeamElementCount(unsigned char TeamId, bool bInPlayOnly);
		class FString GetServerName();
		class FString GetServerMOTD();
		TArray<struct FGBGameObjective> GetSearchLocations();
		TArray<struct FGBScoreLine> GetScoreListForTeam(unsigned char TeamId);
		int32_t GetRoundTime();
		float GetRoundStageTime();
		class FName GetRoundStage();
		int32_t GetRoundNumber();
		bool GetRoundIsTemporaryGameMode();
		TArray<struct FGBTeamInfo> GetPlayerTeamInfos();
		struct FGBTeamInfo GetPlayerTeamInfo(unsigned char TeamId);
		int32_t GetPlayerTeamCount();
		struct FGBScoreCollection GetPlayerScoreTemplate();
		class FString GetPlayerRichPresenceStatus();
		TArray<class FName> GetPlayerLoadoutNames(bool bRestrictionMappedOnly);
		TArray<class AGBPlayerState*> GetPlayerList(unsigned char TeamId, bool bExcludeBots);
		TArray<class FString> GetPermittedMissionList();
		TArray<class FString> GetPermittedGameModes();
		struct FVector GetObjectiveLocation();
		TArray<struct FGBMissionSetting> GetMissionSettings();
		struct FGBMissionSetting GetMissionSetting(const class FName& Name);
		class FText GetMissionName();
		struct FGBMatchStats GetMatchStats();
		class FText GetLocalisedGameText(const class FString& Key, const class FString& DefaultValue, bool bPrettifyDefault);
		class FString GetLastMissionFileName();
		bool GetIsCapturing();
		class FString GetGameStatValue(const class FString& Key);
		TArray<class FString> GetGameStats();
		TMap<class FName, bool> GetGameRules();
		TArray<struct FGBGameObjective> GetGameObjectives();
		class FName GetGameModeName();
		int32_t GetDifficulty();
		int32_t GetCumulativeScoreForTeam(unsigned char TeamId);
		struct FGBCaptureZone GetCaptureZone();
		class UClass* GetBriefingRoomWidget();
		void ForceResetActors();
		class AGBPlayerState* FindPlayerStateByPlayerNameOrUniqueId(const class FString& PlayerNameOrUniqueId);
		class APlayerController* FindPlayerControllerByPlayerNameOrUniqueId(const class FString& PlayerNameOrUniqueId);
		void DecrementRoundNumber();
		void CreateTeamScores(unsigned char TeamId);
		void ClearTeamScores();
		void ClearSearchLocations();
		void ClearPlayerScoresTemplate();
		void ClearPlayerScores();
		void ClearGameStats();
		void ClearGameObjectives();
		void BroadcastGameMessage(const class FName& GameMessageId, const class FName& Type, float Duration);
		void AwardTeamScore(unsigned char TeamId, const class FName& ScoreName, int32_t ScoreMultiple);
		bool AreTeamScoresInitialised();
		bool ArePlayerScoresInitialised();
		bool AllowLateJoiners();
		void AddTeamScoreType(const class FName& ScoreName, const class FString& ScoreDescription, int32_t ScoreToAdd, bool OneOff);
		void AddSearchLocation(unsigned char TeamId, const class FName& Name, EGBGameObjectiveType ObjectiveType);
		void AddScoreToCumulativeScore(unsigned char TeamId, int32_t ScoreToAdd);
		void AddPlayerTeamInfo(unsigned char TeamId, const struct FGBTeamInfo& NewPlayerTeam);
		void AddPlayerScoreType(const class FName& ScoreName, const class FString& ScoreDescription, int32_t ScoreToAdd, bool OneOff);
		void AddMissionSetting(const class FName& Name, int32_t MinValue, int32_t MaxValue, int32_t CurrentValue);
		void AddGameStat(const class FString& StatString);
		void AddGameObjective(unsigned char TeamId, const class FName& Name, EGBGameObjectiveType ObjectiveType);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameTrigger
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class AGBGameTrigger : public ATriggerBase
	{
	public:
		unsigned char                                              UnknownData_F1BA[0x18];                                  // 0x0228(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBGameMode*                                         GBGameMode;                                              // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              TeamId;                                                  // 0x0248(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x0249(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_323L[0x6];                                   // 0x024A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0250(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		TArray<class AGBCharacter*> GetOverlaps();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameUserSettings
	 * Size -> 0x0068 (FullSize[0x0188] - InheritedSize[0x0120])
	 */
	class UGBGameUserSettings : public UGameUserSettings
	{
	public:
		uint32_t                                                   GBVersion;                                               // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H5KT[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUserAudioVolume>                            AudioVolumes;                                            // 0x0128(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class USoundMix*>                        AudioVolumeSoundMixes;                                   // 0x0138(0x0050) Protected, NativeAccessSpecifierProtected

	public:
		void SetUnfocusedVolumeMultiplier(float InVolumeMultiplier);
		void SetAudioVolume(const class FName& InName, float InVolume);
		float GetUnfocusedVolumeMultiplier();
		void GetQualityLevelCVarSettingsFromIni(const class FString& QualitySection, int32_t QualityLevel, TArray<class FString>* OutCVarKeys, TArray<class FString>* OutCVarValues);
		class UGBGameUserSettings* GetGBGameUserSettings();
		float GetAudioVolume(const class FName& InName);
		bool AreQualityLevelsDirty();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGameViewportClient
	 * Size -> 0x00C0 (FullSize[0x0420] - InheritedSize[0x0360])
	 */
	class UGBGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_QRMV[0xA8];                                  // 0x0360(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisconnectReason;                                        // 0x0408(0x0018) Protected, NativeAccessSpecifierProtected

	public:
		void ScreenshotRequested();
		bool GetTravelFailureInfo(class FString* OutLastAttemptedURL, ETravelFailure* OutLastTravelFailureType, class FString* OutLastTravelErrorString);
		bool GetNetworkFailureInfo(class FString* OutLastAttemptedURL, ENetworkFailure* OutLastNetworkFailureType, class FString* OutLastNetworkErrorString);
		class UGBGameViewportClient* GetGameViewportClient(class UObject* WorldContextObject);
		class FText GetDisconnectReason();
		void ClearTravelFailureInfo();
		void ClearNetworkFailure();
		void ClearDisconnectReason();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBGrenade
	 * Size -> 0x00B0 (FullSize[0x04A0] - InheritedSize[0x03F0])
	 */
	class AGBGrenade : public AGBItem
	{
	public:
		struct FSoftObjectPath                                     GrenadeMontage;                                          // 0x03F0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        GrenadeMontageRef;                                       // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ThrowOffset;                                             // 0x0410(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LaunchRelativeSpawnLocation;                             // 0x041C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      GrenadeClass;                                            // 0x0428(0x0018) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              GrenadeClassRef;                                         // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpeed;                                                // 0x0448(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeed;                                                // 0x044C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpeedStep;                                               // 0x0450(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentSpeed;                                            // 0x0454(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PrepareToThrowSection;                                   // 0x0458(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                AimSection;                                              // 0x0460(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ReplacePinSection;                                       // 0x0468(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ThrowSection;                                            // 0x0470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WindupDelay;                                             // 0x0478(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LaunchDelay;                                             // 0x047C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SwitchDelay;                                             // 0x0480(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q23Z[0x1C];                                  // 0x0484(0x001C) MISSED OFFSET (PADDING)

	public:
		void WindupTimer();
		void WantsToThrow();
		void SyncCurrentSpeed();
		void SpawnGrenadeTimer();
		void ServerWantsToThrow();
		void ServerSetCurrentSpeed(int32_t NewCurrentSpeed);
		void ServerReplacePin(bool bForce);
		void ServerPrepareToThrow();
		void ReplacePin(bool bForce);
		void PrepareToThrow();
		void OnSpeedChangedEvent();
		bool IsReadyToThrow();
		bool IsGrenadeMontagePlaying();
		struct FVector GetLaunchVelocity();
		struct FVector GetLaunchLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBHolster
	 * Size -> 0x0028 (FullSize[0x0418] - InheritedSize[0x03F0])
	 */
	class AGBHolster : public AGBItem
	{
	public:
		class FName                                                DefaultCharacterSocket;                                  // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftHandHolsterEquipTag;                                 // 0x03F8(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightHandHolsterEquipTag;                                // 0x0400(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftHandHolsterUnequipTag;                               // 0x0408(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightHandHolsterUnequipTag;                              // 0x0410(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool HolsterItem(class AGBItem* Item);
		bool GetHolsterUnequipInfo(class AGBItem* HolsterItem, EHand TargetHand, struct FGBSwitchItemInfo* OutUnequipInfo);
		bool GetHolsterEquipInfo(class AGBItem* HolsterItem, EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo);
		class AGBItem* GetHolsteredItem();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBHUD
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class AGBHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_PL6E[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		void SuggestHint(const class FName& HintName);
		void ShowReadyRoomPlayerNameEvent(const class FString& PlayerName, ETeamElement PlayerTeamElement);
		void ShowRadialItemsMenuEvent(TArray<class AGBItem*> Items);
		void ShowMenuEvent(const class FName& MenuType);
		void ShowHint(const class FName& HintName);
		void OpenUserMenu(const class FString& MenuName);
		void OpenRadialUserMenu(const class FString& MenuName);
		void OpenLinearUserMenu(const class FString& MenuName);
		void OnSuggestHintEvent(const class FName& HintName);
		void OnShowHUDEvent();
		void OnShowHintEvent();
		void OnInventorySlotEvent(int32_t Index, bool bImmediate);
		void OnChatLineAddedEvent(class AGBPlayerState* SenderGBPlayerState, const class FString& Message, const class FName& Type);
		bool IsMenuVisibleEvent(const class FName& MenuType);
		void InventorySlot(int32_t Index, bool bImmediate);
		bool HintValid(const class FName& HintName);
		void HideReadyRoomPlayerNameEvent();
		void HideRadialItemsMenuEvent();
		void HideMenuEvent(const class FName& MenuType);
		class AActor* GetViewTarget();
		bool GetUserMenu(const class FString& MenuName, TArray<class FString>* OutMenuContent);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBInputOverrideInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBInputOverrideInterface : public UInterface
	{
	public:
		bool OverrideInputKey(const struct FKey& Key, EBPInputEvent EventType, float AmountDepressed, bool bGamepad);
		bool OverrideInputAxis(const struct FKey& Key, float Delta, float DeltaTime, int32_t NumSamples, bool bGamepad);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBInsertionPoint
	 * Size -> 0x00C0 (FullSize[0x02E0] - InheritedSize[0x0220])
	 */
	class AGBInsertionPoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_P5Y4[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InsertionPointName;                                      // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0240(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, SaveGame, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInsertionPointUpdate;                                  // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USphereComponent*                                    SphereComponent;                                         // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     ArrowComponent;                                          // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SpawnOffsetIndex;                                        // 0x0280(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_COL6[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x28];                                              // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UTextRenderComponent*                                TextRender;                                              // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              TeamId;                                                  // 0x02B8(0x0001) Edit, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x02B9(0x0001) BIT_FIELD Edit, Net, SaveGame, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              MaxSupportedPlayers;                                     // 0x02BA(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTopDownView;                                            // 0x02BB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSideView;                                               // 0x02BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y82A[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBPlayerStart*>                              AssociatedPlayerStarts;                                  // 0x02C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x02D0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void SetInsertionPointName(const class FName& NewInsertionPointName);
		void InsertionPointUpdated();
		bool GetTopDownView();
		bool GetSpawnInfo(struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
		bool GetSideView();
		TArray<class AGBPlayerState*> GetPlayers();
		int32_t GetMaxSupportedPlayers();
		void CreateAssociatedPlayerStarts();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBInternalMagazineComponent
	 * Size -> 0x0068 (FullSize[0x0260] - InheritedSize[0x01F8])
	 */
	class UGBInternalMagazineComponent : public UGBAmmunitionFeedComponent
	{
	public:
		class FName                                                RoundType;                                               // 0x01F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x0200(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ClientCount;                                             // 0x0204(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P848[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Capacity;                                                // 0x0210(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q5QO[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BaseBulletItemClass[0x28];                               // 0x0218(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              BulletItemClass;                                         // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ChamberedRound;                                          // 0x0248(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartPlusOne;                                           // 0x0250(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStayOpenOnLastRound;                                    // 0x0251(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsFiringFromOpenBolt : 1;                               // 0x0252(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBoltHeldOpen : 1;                                       // 0x0252(0x0001) BIT_FIELD BlueprintVisible, Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5BHJ[0xD];                                   // 0x0253(0x000D) MISSED OFFSET (PADDING)

	public:
		void SyncCount();
		bool StartPlusOne();
		void SetIsFiringFromOpenBolt(bool bNewIsFiringFromOpenBolt);
		void SetChamberedRound(class UClass* NewChamberedRound);
		void SetBoltHeldOpen(bool bNewBoltIsHeldOpen);
		void OnRep_Count();
		bool IsLiveRoundChambered();
		class FName GetRoundType();
		bool GetIsFiringFromOpenBolt();
		int32_t GetCount();
		class UClass* GetChamberedRound();
		int32_t GetCapacity();
		class UClass* GetBulletItemClass();
		bool GetBoltHeldOpen();
		class AGBBulletItem* FindCompatibleRound(class AGBCharacter* Character);
		bool AddRoundToMagazine();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBItemDragDropOperation
	 * Size -> 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
	 */
	class UGBItemDragDropOperation : public UDragDropOperation
	{
	public:
		class AGBItem*                                             RootItem;                                                // 0x0088(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DraggedItemAssetId;                                      // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGBItem*                                             DraggedItem;                                             // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        FloatingCanvas;                                          // 0x00A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDraggedItemAttached;                                   // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDraggedItemDestroyed;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FQN[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void MakeItemInteractive(class AGBItem* Item);
		void Init();
		void EndDragCleanup();
		void DraggedItemDestroyed();
		void DraggedItemAttached(class USceneComponent* TargetComponent, const class FName& SocketName, const struct FVector& TargetRelativeLoc);
		void DelayedInit();
		class UUserWidget* CreateFloatingWidget(class UClass* WidgetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBItemProjectile
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AGBItemProjectile : public AActor
	{
	public:
		class USphereComponent*                                    CollisionComp;                                           // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBItemProjectileMovementComponent*                  ItemProjectileMovement;                                  // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBItem*                                             AssociatedItem;                                          // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Velocity;                                                // 0x0238(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KUDA[0xC];                                   // 0x0244(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPreBounceRotationRate;                                // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPostBouncedRotationRate;                              // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z75P[0xC];                                   // 0x0258(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenImpacts;                                      // 0x0264(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateAssociatedItem();
		void OnStop(const struct FHitResult& HitResult);
		void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBItemProjectileMovementComponent
	 * Size -> 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])
	 */
	class UGBItemProjectileMovementComponent : public UProjectileMovementComponent
	{
	public:
		unsigned char                                              UnknownData_BIW8[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBKitFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBKitFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool LoadKitFile(const class FString& Filename, class UVaRestJsonObject** OutKitJsonObj);
		void KitDump(const class FString& Message, class UVaRestJsonObject* KitJsonObj);
		bool HasRequired(TArray<struct FPrimaryAssetId> PrimaryAssets, TArray<struct FPrimaryAssetType> RequiredTypes);
		class FString GetUserPresetsPath(const class FString& Type);
		class FString GetUserPresetFileName(const class FString& Type, const class FString& Preset);
		class FString GetUserPatchesPath();
		class FString GetUserLoadoutFileName(const class FName& LoadoutName);
		class FString GetUserItemBuildPath(const class FString& Type);
		class FString GetUserItemBuildFileName(const class FString& Type, const class FString& ItemBuild);
		class FString GetTypeField();
		class FName GetSkinMaterialPrefix(const struct FPrimaryAssetId& ItemAssetId);
		class FString GetSkinField();
		class FString GetPresetField();
		class FName GetPlayerLoadoutName(class AActor* Target);
		int32_t GetKitVersion();
		bool GetKitItemList(class AActor* Owner, class UVaRestJsonObject* KitJsonObj, bool bSkipAuth, bool bForceSynchronousLoad, TArray<class AGBItem*>* OutItems);
		class FString GetKitExtension();
		TArray<struct FSoftObjectPath> GetKitAssetListOfType(class UVaRestJsonObject* KitJsonObj, const struct FPrimaryAssetType& AssetType);
		TArray<struct FSoftObjectPath> GetKitAssetList(class UVaRestJsonObject* KitJsonObj);
		class FString GetItemField();
		class FString GetItemBuildField();
		class FString GetFullPatchPath(const class FString& PatchName);
		class FString GetDefaultPatchesPath();
		class FString GetDefaultLoadoutFileName(const class FName& LoadoutName);
		class FString GetDefaultItemBuildPath(const class FString& Type);
		class FString GetDefaultItemBuildFileName(const class FString& Type, const class FString& ItemBuild);
		class FString GetDataField();
		class FString GetChildrenField();
		class FString GetBuildNameField();
		class AGBKitInfo* CreateKitInfo(class UObject* WorldContextObject, const class FName& KitName, class UVaRestJsonObject* KitJsonObj);
		bool CreateKitFromItem(const class FString& BuildName, class AGBItem* Item, class UVaRestJsonObject** OutKitJsonObj);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBKitInfo
	 * Size -> 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
	 */
	class AGBKitInfo : public AInfo
	{
	public:
		struct FReplicatedString                                   ReplicatedLoadout;                                       // 0x0220(0x0018) Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V5NC[0x28];                                  // 0x0238(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBCharacter*>                                CharacterArray;                                          // 0x0260(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2ZTP[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedLoadout();
		void OnLoadAssetsComplete();
		void ApplyToCharacter(class AGBCharacter* Character);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLadderComponent
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class UGBLadderComponent : public UBoxComponent
	{
	public:
		float GetLadderTop();
		float GetLadderBottom();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLevelSummary
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGBLevelSummary : public UObject
	{
	public:
		class FString                                              Title;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Author;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, AssetRegistrySearchable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class UGBLocalPlayer : public ULocalPlayer
	{
	public:
		class UGBPlayerSettings*                                   PlayerSettings;                                          // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGBPlayerSettings* GetPlayerSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaActorPackage
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGBLuaActorPackage : public ULuaBlueprintPackage
	{
	public:
		struct FLuaValue ToString(const struct FLuaValue& Actor);
		struct FLuaValue SetTeamId(const struct FLuaValue& Actor, const struct FLuaValue& TeamId);
		void SetHidden(const struct FLuaValue& Actor, const struct FLuaValue& Hidden);
		void SetEnableCollision(const struct FLuaValue& Actor, const struct FLuaValue& Enabled);
		void SetActive(const struct FLuaValue& Actor, const struct FLuaValue& NewActive);
		void RemoveTag(const struct FLuaValue& Actor, const struct FLuaValue& Tag);
		struct FLuaValue IsOverlapping(const struct FLuaValue& Actor, const struct FLuaValue& OtherActor);
		struct FLuaValue IsActive(const struct FLuaValue& Actor);
		struct FLuaValue HasTag(const struct FLuaValue& Actor, const struct FLuaValue& Tag);
		struct FLuaValue GetTeamId(const struct FLuaValue& Actor);
		struct FLuaValue GetTags(const struct FLuaValue& Actor);
		struct FLuaValue GetTag(const struct FLuaValue& Actor, const struct FLuaValue& Index);
		struct FLuaValue GetRotation(const struct FLuaValue& Actor);
		struct FLuaValue GetOverlaps(const struct FLuaValue& Actor, const struct FLuaValue& Class);
		struct FLuaValue GetName(const struct FLuaValue& Actor);
		struct FLuaValue GetLocation(const struct FLuaValue& Actor);
		void AddTag(const struct FLuaValue& Actor, const struct FLuaValue& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaAIPackage
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UGBLuaAIPackage : public ULuaBlueprintPackage
	{
	public:
		class AGBAISpawnManager*                                   AISpawnManager;                                          // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FLuaValue ProjectPointToNavigation(const struct FLuaValue& Point, const struct FLuaValue& QueryExtent);
		void KillAI(const struct FLuaValue& AIController);
		struct FLuaValue GetSpawnPointInfo(const struct FLuaValue& SpawnPoint);
		struct FLuaValue GetRandomReachablePointInRadius(const struct FLuaValue& Origin, const struct FLuaValue& Radius);
		struct FLuaValue GetMaxCount();
		struct FLuaValue GetGuardPointName(const struct FLuaValue& GuardPoint);
		struct FLuaValue GetControllers(const struct FLuaValue& Class, const struct FLuaValue& Tag, const struct FLuaValue& TeamId, const struct FLuaValue& SquadId);
		void CreateWithTransform(const struct FLuaValue& VirtualSpawnPoint, const struct FLuaValue& SpawnTransform, const struct FLuaValue& AIControllerTag, const struct FLuaValue& FreezeTime);
		void CreateOverDuration(const struct FLuaValue& Duration, const struct FLuaValue& Count, const struct FLuaValue& OrderedSpawnPoints, const struct FLuaValue& AIControllerTag);
		void Create(const struct FLuaValue& SpawnPoint, const struct FLuaValue& AIControllerTag, const struct FLuaValue& FreezeTime);
		void CleanUp(const struct FLuaValue& AIControllerTag);
		struct FLuaValue CheckLocationReachable(const struct FLuaValue& StartLocation, const struct FLuaValue& EndLocation, const struct FLuaValue& PartialOk);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaComponent
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UGBLuaComponent : public ULuaComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaGameModePackage
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UGBLuaGameModePackage : public ULuaBlueprintPackage
	{
	public:
		class AGBGameMode*                                         GBGameMode;                                              // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGBGameState*                                        GBGameState;                                             // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetWatchMode(const struct FLuaValue& WatchMode, const struct FLuaValue& DisplayBearing, const struct FLuaValue& DisplayDistance, const struct FLuaValue& DisplayUpDown, const struct FLuaValue& Measure2D);
		void SetTeamScoreTypes(const struct FLuaValue& ScoreTypeTable);
		void SetTeamAttitude(const struct FLuaValue& Team, const struct FLuaValue& OtherTeam, const struct FLuaValue& Attitude);
		void SetRoundStageTime(const struct FLuaValue& RoundStageTime);
		void SetRoundStage(const struct FLuaValue& RoundStageName);
		void SetRoundIsTemporaryGameMode(const struct FLuaValue& IsTemporary);
		void SetPlayerTeamRole(const struct FLuaValue& TeamId, const struct FLuaValue& NewRole);
		void SetPlayerScoreTypes(const struct FLuaValue& ScoreTypeTable);
		void SetObjectiveLocation(const struct FLuaValue& ObjectiveLocation);
		void SetGameModeName(const struct FLuaValue& GameModeName);
		void SetDefaultRoundStageTime(const struct FLuaValue& RoundStageName, const struct FLuaValue& NewTimeLimit);
		void SetCaptureZone(const struct FLuaValue& CaptureRadius, const struct FLuaValue& CaptureHeight, const struct FLuaValue& DefenderTeamId, const struct FLuaValue& ZoneIsSpherical);
		void SetCaptureState(const struct FLuaValue& IsCapturing);
		void SendEveryoneToReadyRoom();
		void SendEveryoneToPlayArea();
		void ResetWatch();
		void ResetTeamScores();
		void ResetPlayerScores();
		void ResetMatchStats();
		struct FLuaValue PrepLatecomer(const struct FLuaValue& Target);
		void MakeEveryoneSpectate();
		struct FLuaValue GetScript();
		struct FLuaValue GetRoundStageTime();
		struct FLuaValue GetRoundStage();
		struct FLuaValue GetReadyPlayerTeamCounts(const struct FLuaValue& ExcludeBots);
		struct FLuaValue GetPlayerListByLives(const struct FLuaValue& TeamId, const struct FLuaValue& MinLives, const struct FLuaValue& ExcludeBots);
		struct FLuaValue GetPlayerList(const struct FLuaValue& TeamId, const struct FLuaValue& ExcludeBots);
		struct FLuaValue GetPlayerCount(const struct FLuaValue& ExcludeBots);
		struct FLuaValue GetInsertionPointName(const struct FLuaValue& InsertionPoint);
		struct FLuaValue GetBestLateComerInsertionPoint(const struct FLuaValue& Target);
		void EnterReadyRoom(const struct FLuaValue& Target);
		void EnterPlayArea(const struct FLuaValue& Target);
		void ClearSearchLocations();
		void ClearRoundStageTime();
		void ClearGameStats();
		void ClearGameObjectives();
		void BroadcastGameMessage(const struct FLuaValue& GameMessageId, const struct FLuaValue& Type, const struct FLuaValue& Duration);
		void AwardTeamScore(const struct FLuaValue& TeamId, const struct FLuaValue& ScoreName, const struct FLuaValue& ScoreMultiple);
		void AddSearchLocation(const struct FLuaValue& TeamId, const struct FLuaValue& Name, const struct FLuaValue& Type);
		void AddPlayerTeam(const struct FLuaValue& Team, const struct FLuaValue& Name, const struct FLuaValue& ProfileName);
		struct FLuaValue AddObjectiveMarker(const struct FLuaValue& Location, const struct FLuaValue& TeamId, const struct FLuaValue& Name, const struct FLuaValue& MarkerType, const struct FLuaValue& Active);
		void AddGameStat(const struct FLuaValue& GameStat);
		void AddGameObjective(const struct FLuaValue& TeamId, const struct FLuaValue& Name, const struct FLuaValue& Type);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaGameplayStaticsPackage
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGBLuaGameplayStaticsPackage : public ULuaBlueprintPackage
	{
	public:
		struct FLuaValue PlaceItemAt(const struct FLuaValue& ItemClass, const struct FLuaValue& Location, const struct FLuaValue& Rotation);
		struct FLuaValue GetValidatedSpawnLocation(const struct FLuaValue& SpawnLocation, const struct FLuaValue& CapsuleHalfHeight, const struct FLuaValue& CapsuleRadius);
		struct FLuaValue GetAllActorsWithTag(const struct FLuaValue& Tag);
		struct FLuaValue GetAllActorsOfClassWithTag(const struct FLuaValue& Class, const struct FLuaValue& Tag);
		struct FLuaValue GetAllActorsOfClass(const struct FLuaValue& Class);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBLuaInterface : public UInterface
	{
	public:
		struct FLuaValue GetLuaTable();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaMathPackage
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGBLuaMathPackage : public ULuaBlueprintPackage
	{
	public:
		struct FLuaValue GetRandomRange(const struct FLuaValue& Min, const struct FLuaValue& Max);
		struct FLuaValue GetRandom(const struct FLuaValue& Max);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaPlayerPackage
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGBLuaPlayerPackage : public ULuaBlueprintPackage
	{
	public:
		void ShowWorldPrompt(const struct FLuaValue& Player, const struct FLuaValue& Location, const struct FLuaValue& Tag, const struct FLuaValue& Duration);
		void ShowHint(const struct FLuaValue& PlayerState, const struct FLuaValue& HintName, const struct FLuaValue& WidgetName);
		void ShowGameMessage(const struct FLuaValue& Player, const struct FLuaValue& Message, const struct FLuaValue& Type, const struct FLuaValue& Duration);
		void SetReadyStatus(const struct FLuaValue& Player, const struct FLuaValue& NewStatus);
		void SetLives(const struct FLuaValue& Player, const struct FLuaValue& NewLives);
		void SetInsertionPoint(const struct FLuaValue& Player, const struct FLuaValue& NewInsertionPoint);
		void SetAllowedToRestart(const struct FLuaValue& Player, const struct FLuaValue& Allowed);
		void ResetPlayerScores(const struct FLuaValue& PlayerState);
		void RemoveIgnoreUseInputReason(const struct FLuaValue& Player, const struct FLuaValue& Reason);
		struct FLuaValue IsAlive(const struct FLuaValue& Player);
		struct FLuaValue HasItemWithTag(const struct FLuaValue& Player, const struct FLuaValue& Tag);
		struct FLuaValue GiveItem(const struct FLuaValue& Player, const struct FLuaValue& ItemClass, const struct FLuaValue& bEquip);
		struct FLuaValue GetReadyStatus(const struct FLuaValue& Player);
		struct FLuaValue GetPlayerState(const struct FLuaValue& Player);
		struct FLuaValue GetPlayerStat(const struct FLuaValue& PlayerState, const struct FLuaValue& Key);
		struct FLuaValue GetName(const struct FLuaValue& Player);
		struct FLuaValue GetLives(const struct FLuaValue& Player);
		struct FLuaValue GetInventory(const struct FLuaValue& Player);
		struct FLuaValue GetInsertionPoint(const struct FLuaValue& Player);
		struct FLuaValue GetCharacter(const struct FLuaValue& Player);
		void FreezePlayer(const struct FLuaValue& Player, const struct FLuaValue& Duration);
		void ClearAllIgnoreUseInputReasons(const struct FLuaValue& Player);
		void AwardPlayerScore(const struct FLuaValue& PlayerState, const struct FLuaValue& ScoreName, const struct FLuaValue& ScoreMultiple);
		void AddIgnoreUseInputReason(const struct FLuaValue& Player, const struct FLuaValue& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaStaticsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBLuaStaticsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FLuaValue LuaValueToScript(const struct FLuaValue& LuaValue);
		class AGBPlayerState* LuaValueToPlayerState(const struct FLuaValue& LuaValue);
		class AGBCharacter* LuaValueToCharacter(const struct FLuaValue& LuaValue);
		struct FRotator LuaTableToRotator(const struct FLuaValue& Value);
		struct FLuaValue ActorsToLuaTable(class UObject* WorldContextObject, class UClass* LuaStateClass, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaTimerPackage
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UGBLuaTimerPackage : public ULuaBlueprintPackage
	{
	public:
		unsigned char                                              UnknownData_87MY[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetTimer(const struct FLuaValue& InTimerHandle, const struct FLuaValue& InTable, const struct FLuaValue& InFunction, const struct FLuaValue& InRate, const struct FLuaValue& InLoop);
		void ClearTimer(const struct FLuaValue& InTimerHandle);
		void ClearAll();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBLuaVectorPackage
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGBLuaVectorPackage : public ULuaBlueprintPackage
	{
	public:
		struct FLuaValue VectorSubtract(const struct FLuaValue& A, const struct FLuaValue& B);
		struct FLuaValue VectorStr(const struct FLuaValue& LuaVector);
		struct FLuaValue VectorSizeSquared2D(const struct FLuaValue& A);
		struct FLuaValue VectorSizeSquared(const struct FLuaValue& A);
		struct FLuaValue VectorSize2D(const struct FLuaValue& A);
		struct FLuaValue VectorSize(const struct FLuaValue& A);
		struct FLuaValue VectorNew(const struct FLuaValue& SelfPackage, const struct FLuaValue& X, const struct FLuaValue& Y, const struct FLuaValue& Z);
		struct FLuaValue VectorMultiply(const struct FLuaValue& A, const struct FLuaValue& B);
		struct FLuaValue VectorEquals(const struct FLuaValue& A, const struct FLuaValue& B);
		struct FLuaValue VectorDivide(const struct FLuaValue& A, const struct FLuaValue& B);
		struct FLuaValue VectorAdd(const struct FLuaValue& A, const struct FLuaValue& B);
		struct FLuaValue BuildVector(const struct FVector& Vector);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBMagazine
	 * Size -> 0x0058 (FullSize[0x0448] - InheritedSize[0x03F0])
	 */
	class AGBMagazine : public AGBItem
	{
	public:
		class FName                                                MagazineType;                                            // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Capacity;                                                // 0x03F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InitialCount;                                            // 0x03FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x0400(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H2IS[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BaseBulletItemClass[0x28];                               // 0x0408(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              BulletItemClass;                                         // 0x0430(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              TracerItemClass;                                         // 0x0438(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    StartTracerCount;                                        // 0x0440(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TracerFrequency;                                         // 0x0444(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool VerifyBulletItemClass(class UClass* CheckBulletItemClass);
		void SetTracerItemClass(class UClass* NewTracerItemClass);
		void SetTracerFrequency(int32_t NewTracerFrequency);
		void SetStartTracerCount(int32_t NewStartTracerCount);
		void SetBulletItemClass();
		void OnCountUpdatedEvent();
		void OnAdjustCountEvent(bool bAdjusted);
		class UClass* GetTracerItemClass();
		class FName GetMagazineType();
		class FText GetExactCountText();
		class FText GetEstimatedCountText();
		int32_t GetCount();
		int32_t GetCapacity();
		class UClass* GetBulletProjectileClass();
		class UClass* GetBulletItemClass();
		class UClass* GetBaseBulletProjectileClass();
		class UClass* GetBaseBulletItemClass();
		bool AdjustCount(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBMissionData
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UGBMissionData : public UHFSave
	{
	public:
		class FString                                              MapAssetPackageName;                                     // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VariantName;                                             // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ5M[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ScriptName;                                              // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScreenshotNames;                                         // 0x0080(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBMuzzleDevice
	 * Size -> 0x0030 (FullSize[0x0420] - InheritedSize[0x03F0])
	 */
	class AGBMuzzleDevice : public AGBItem
	{
	public:
		class FName                                                MuzzleDeviceThread;                                      // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     FlashFX;                                                 // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FlashSocket;                                             // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAttachedFlash;                                          // 0x0408(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoopedFlash;                                            // 0x0409(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZU3J[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            FlashPSC;                                                // 0x0410(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VolumeMultiplier;                                        // 0x0418(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O0RP[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetVolumeMultiplier();
		class FName GetMuzzleDeviceThread();
		class FName GetClassMuzzleDeviceThread(class UClass* ItemClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBNavLinkProxy
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class AGBNavLinkProxy : public ANavLinkProxy
	{
	public:
		void SmartLinkReached(class AActor* Agent, const struct FVector& Destination);
		void OnNavigationGenerationFinished(class ANavigationData* NavData);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBNavLinkProxy_Door
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class AGBNavLinkProxy_Door : public AGBNavLinkProxy
	{
	public:
		class AActor*                                              DoorRef;                                                 // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class AActor* GetDoorRef();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBNavLinkProxy_Ladder
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class AGBNavLinkProxy_Ladder : public AGBNavLinkProxy
	{
	public:
		class AActor*                                              LadderRef;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBLadderComponent*                                  LadderComponentRef;                                      // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class AActor* GetLadderRef();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBObjectiveMarker
	 * Size -> 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
	 */
	class AGBObjectiveMarker : public AActor
	{
	public:
		unsigned char                                              UnknownData_AVZX[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnObjectiveUpdate;                                       // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USphereComponent*                                    SphereComp;                                              // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBillboardComponent*                                 SpriteComp;                                              // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          SpriteExtraction;                                        // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          SpriteMissionLocation;                                   // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ObjectiveName;                                           // 0x0268(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              TeamId;                                                  // 0x0270(0x0001) Edit, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x0271(0x0001) BIT_FIELD Edit, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EQPE[0x2];                                   // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ObjectiveMarkerType;                                     // 0x0274(0x0008) Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9XVS[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0280(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void UpdateObjectiveSprite();
		void SetObjectiveName(const class FName& Value);
		void SetObjectiveMarkerType(const class FName& NewObjectiveMarkerType);
		void ObjectiveUpdated();
		class UTexture2D* GetObjectiveSprite();
		class FName GetObjectiveName();
		class FName GetObjectiveMarkerType();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBParticleImpactBySurfaceType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGBParticleImpactBySurfaceType : public UParticleModuleEventSendToGame
	{
	public:
		class FName                                                ImpactType;                                              // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPhysicsCollisionHandler
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGBPhysicsCollisionHandler : public UPhysicsCollisionHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlatform
	 * Size -> 0x0070 (FullSize[0x0460] - InheritedSize[0x03F0])
	 */
	class AGBPlatform : public AGBItem
	{
	public:
		class USkeletalMeshComponent*                              PlatformMeshComponent;                                   // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                NameTagSocketName;                                       // 0x03F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        NameTagColor;                                            // 0x0400(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ATV7[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WoundParameterName;                                      // 0x0418(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_706J[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        WoundBoneList;                                           // 0x0430(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      DumpPouchClass;                                          // 0x0440(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DumpPouchClassRef;                                       // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateNameTag();
		void OnTakeHit(const class FName& RefBoneName, const struct FVector& RefPosPosition);
		void OnReceivePlayerState(class APlayerState* PlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerCameraManager
	 * Size -> 0x0040 (FullSize[0x27F0] - InheritedSize[0x27B0])
	 */
	class AGBPlayerCameraManager : public APlayerCameraManager
	{
	public:
		float                                                      ShoulderCamDistance;                                     // 0x27B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ShoulderCamOffset;                                       // 0x27B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraStyleChanged;                                    // 0x27C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9K8[0x18];                                  // 0x27D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SelfieCam;                                               // 0x27E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class FName GetCameraStyle();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerInput
	 * Size -> 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
	 */
	class UGBPlayerInput : public UPlayerInput
	{
	public:
		TArray<struct FInputExecKeyMapping>                        ExecMappings;                                            // 0x03A8(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		uint32_t                                                   Version;                                                 // 0x03B8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NHGT[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (PADDING)

	public:
		void ValidateInputSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerSettings
	 * Size -> 0x01C0 (FullSize[0x01E8] - InheritedSize[0x0028])
	 */
	class UGBPlayerSettings : public UObject
	{
	public:
		class FString                                              PlayerName;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharVoiceDataId;                                         // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVDefault;                                              // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeBias;                                                 // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseSensitivity;                                        // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMouse;                                            // 0x0054(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMouseSmoothing;                                   // 0x0055(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableInputScaling;                                    // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2UC[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DoubleClickTime;                                         // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensitivityGamepadLeft;                                  // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensitivityGamepadRight;                                 // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreeAimMaxYaw;                                           // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreeAimMinPitch;                                         // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreeAimMaxPitch;                                         // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffTargetMaxYaw;                                         // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetFreelookToAim;                                     // 0x0074(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitMaxFreelookFromAim;                                // 0x0075(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6YJ[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HMDFreeAimMaxYaw;                                        // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HMDOffTargetMinPitch;                                    // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HMDOffTargetMaxPitch;                                    // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HMDOffTargetPitchThreshold;                              // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HMDLeanMin;                                              // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HMDLeanMax;                                              // 0x008C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowKeyBinds;                                           // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowReadyRoomPrompts;                                   // 0x0091(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStanceProne;                                        // 0x0092(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStanceCrouched;                                     // 0x0093(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStanceStanding;                                     // 0x0094(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStanceLeaning;                                      // 0x0095(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGaitWalking;                                        // 0x0096(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGaitRunning;                                        // 0x0097(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxChatMessages;                                         // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChatDisplayTime;                                         // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadialMenuInputScale;                                    // 0x00A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysRun;                                              // 0x00A4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleRun;                                              // 0x00A5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O23Y[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CrouchType;                                              // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleLean;                                             // 0x00AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2YZ[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultFiringMode;                                       // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultReticleBrightnessLevel;                           // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultReticleColourIndex;                               // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMomentaryAim;                                           // 0x00C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultOffTargetToHighReady;                            // 0x00C9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSingleTapReloadWithRetention;                           // 0x00CA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53NE[0x5];                                   // 0x00CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SightPriority;                                           // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MagLevelSensitivityScales;                               // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GrenadeSwitch;                                           // 0x00F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GrenadeArcColour;                                        // 0x00F4(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GrenadeImpactColour;                                     // 0x0104(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7L0[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerPatch>                                PlayerPatchList;                                         // 0x0118(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bToggleVoice;                                            // 0x0128(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopBackVoice;                                          // 0x0129(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVoiceIcon;                                          // 0x012A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVoiceMutedIcon;                                     // 0x012B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRadioIcon;                                          // 0x012C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNNG[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PPSharpenPercentage;                                     // 0x0130(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSimpleShadowsForCharacters;                          // 0x0134(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFPS;                                                // 0x0135(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHints;                                            // 0x0136(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUsagePrompts;                                       // 0x0137(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUsageHighlight;                                     // 0x0138(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RQ9[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UsageHighlightSize;                                      // 0x013C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        UsageHighlightColour;                                    // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipStartupContinue;                                    // 0x0150(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJ8C[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpectatorMiniMapStyle;                                   // 0x0154(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSpectatorControls;                                  // 0x015C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNetInfo;                                            // 0x015D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleGadgetsOnNVGChange;                               // 0x015E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3NV[0x1];                                   // 0x015F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AudioChannelConfig;                                      // 0x0160(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AudioMixConfig;                                          // 0x0164(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6VO[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerHint>                                 HintList;                                                // 0x0170(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLLP[0x68];                                  // 0x0180(0x0068) MISSED OFFSET (PADDING)

	public:
		void UpdateFOVDefault();
		void SetUseSimpleShadowsForCharacter(bool bNewValue);
		void SetPlayerPatch(const class FName& TargetSocket, const class FString& ShortPath);
		void SetPlayerName(const class FString& NewPlayerName);
		void SceneViewportResized(const struct FVector2D& ViewportSize);
		void LoadSettings();
		bool HintValid(const class FName& HintName);
		class FString GetPlayerPatchString(const class FName& TargetSocket);
		struct FPrimaryAssetId GetCharVoiceDataId();
		void BindSceneViewportResized();
		void ApplySettings();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerStart
	 * Size -> 0x0048 (FullSize[0x0298] - InheritedSize[0x0250])
	 */
	class AGBPlayerStart : public APlayerStart
	{
	public:
		unsigned char                                              UnknownData_1SIG[0x19];                                  // 0x0250(0x0019) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TeamId;                                                  // 0x0269(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6K5F[0x2];                                   // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Group;                                                   // 0x026C(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsActive;                                               // 0x0274(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OX8R[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextRenderComponent*                                TextRender;                                              // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0280(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class AGBCharacter*                                        DisplayCharacter;                                        // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateCollisionStatus(class AActor* TestActor);
		void SetGroup(const class FName& NewGroupName);
		void SetCollisionStatus(EPlayerStartCollisionStatus NewCollisionStatus);
		bool IsValidFor(class AController* Controller);
		class FName GetGroup();
		EPlayerStartCollisionStatus GetCollisionStatus();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPlayerState
	 * Size -> 0x01A0 (FullSize[0x04C0] - InheritedSize[0x0320])
	 */
	class AGBPlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_W8FO[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TeamId;                                                  // 0x0328(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETeamElement                                               TeamElement;                                             // 0x0329(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EReadyRoomStatus                                           ReadyRoomStatus;                                         // 0x032A(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EReadyStatus                                               ReadyStatus;                                             // 0x032B(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWasInPlay : 1;                                          // 0x032C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              Lives;                                                   // 0x032D(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowedToChangeKit : 1;                                 // 0x032E(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowedToRestart : 1;                                   // 0x032E(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_556V[0x1];                                   // 0x032F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGBInsertionPoint*                                   InsertionPoint;                                          // 0x0330(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H6DN[0x4];                                   // 0x0338(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOnDuty : 1;                                             // 0x033C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MRES[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      QuickAdminCommands;                                      // 0x0340(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FVector_NetQuantize                                 PlayerLocation;                                          // 0x0350(0x000C) Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PlayerRotation;                                          // 0x035C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2XC9[0x7];                                   // 0x035D(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsMutedByServer : 1;                                    // 0x0364(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EW0N[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerConnectString;                                     // 0x0368(0x0010) BlueprintVisible, Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SF5O[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerPatch>                                PlayerPatchList;                                         // 0x0380(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TJD9[0x50];                                  // 0x0390(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ReplicatedPlayerStats;                                   // 0x03E0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnReplicatedPlayerStatsUpdated;                          // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerReadyRoomStatusChanged;                          // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerReadyStatusChanged;                              // 0x0410(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTeamChanged;                                     // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamElementChanged;                                    // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q54L[0x30];                                  // 0x0440(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAlertLevelChanged;                                     // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EAlertLevel                                                AlertLevel;                                              // 0x0480(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QBDB[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerScoresUpdated;                                   // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGBScoreCollection                                  PlayerScores;                                            // 0x0498(0x0010) Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      ReplicatedPlayerScores;                                  // 0x04A8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		bool                                                       bClientAssetIsMissing;                                   // 0x04B8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DJVW[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (PADDING)

	public:
		bool WasInPlay();
		void UpdateRichPresence();
		void SyncPlayerScores();
		void SetWasInPlay(bool bValue);
		void SetTeamElement(ETeamElement NewTeamElement);
		void SetServerConnectString(const class FString& NewServerConnectString);
		void SetReadyStatus(EReadyStatus NewStatus);
		void SetReadyRoomStatus(EReadyRoomStatus NewStatus);
		void SetOnDuty(bool bNewOnDuty);
		void SetLives(unsigned char NewLives);
		void SetInsertionPoint(class AGBInsertionPoint* NewInsertionPoint);
		void SetAllowedToRestart(bool bNewValue);
		void SetAlertLevel(EAlertLevel InAlertLevel);
		void ServerSyncPlayerScores();
		void ServerReportClientMissingAsset(const class FString& AssetName);
		void ServerRegisterPlayerWithSession(TArray<unsigned char> AuthSessionTicket);
		void ResetStats();
		void ResetPlayerScores();
		void ReportClientMissingAsset(const class FString& AssetName);
		void OnRepPlayerNameEvent(bool bBeenWelcomed);
		void OnRep_TeamId();
		void OnRep_TeamElement();
		void OnRep_ReplicatedPlayerStats();
		void OnRep_ReadyStatus();
		void OnRep_ReadyRoomStatus();
		void OnRep_PlayerScores();
		void OnRep_PlayerPatchList();
		void OnRep_ClientAssetIsMissing();
		void OnRep_AlertLevel();
		bool IsOnlyASpectatorBP();
		bool IsLocal();
		void IncrementStat(const class FName& StatName, const class FString& StatKey);
		int32_t GetTotalStatValue(const class FName& StatName);
		ETeamElement GetTeamElement();
		int32_t GetStatValue(const class FName& StatName, const class FString& StatKey);
		TArray<class FString> GetStatKeys(const class FName& StatName);
		class FString GetServerConnectString();
		TArray<class FString> GetReplicatedPlayerStats();
		EReadyStatus GetReadyStatus();
		EReadyRoomStatus GetReadyRoomStatus();
		TArray<class FString> GetQuickAdminCommands();
		void GetPlayerScoreTemplateFromGameState();
		TArray<struct FGBScoreLine> GetPlayerScores();
		float GetPlayerRotation();
		class FString GetPlayerPatchString(const class FName& TargetSocket);
		struct FVector GetPlayerLocation();
		float GetPing();
		bool GetOnDuty();
		class FString GetOldName();
		unsigned char GetLives();
		class AGBInsertionPoint* GetInsertionPoint();
		class AGBCharacter* GetCharacter();
		EAlertLevel GetAlertLevel();
		void ClearStat(const class FName& StatName, const class FString& StatKey);
		void ClearReplicatedPlayerStats();
		void ClearPlayerScores();
		void AwardPlayerScore(const class FName& ScoreName, int32_t ScoreMultiple);
		bool ArePlayerScoresInitialised();
		bool AllowedToRestart();
		bool AllowedToChangeKit();
		void AddReplicatedPlayerStat(const class FString& StatString);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPortalSystemManager
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class AGBPortalSystemManager : public APortalSystemManager
	{
	public:
		void RemoveLight(class ULightComponent* LightComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBPouch
	 * Size -> 0x0048 (FullSize[0x0438] - InheritedSize[0x03F0])
	 */
	class AGBPouch : public AGBItem
	{
	public:
		class FName                                                PouchType;                                               // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    FillCount;                                               // 0x03F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftHandPouchEquipTag;                                   // 0x03FC(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightHandPouchEquipTag;                                  // 0x0404(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        LeftHandPouchUnequipTag;                                 // 0x040C(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        RightHandPouchUnequipTag;                                // 0x0414(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZRP9[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                PouchMeshComponent;                                      // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              LastFilledWith;                                          // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                LastFilledWithSkinName;                                  // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLastFilledWith(class UClass* NewLastFilledWith, const class FName& NewLastFilledWithSkinName);
		class FName GetPouchType();
		int32_t GetFillCount();
		bool GetChildUnequipInfo(class AGBItem* ChildItem, EHand TargetHand, struct FGBSwitchItemInfo* OutUnequipInfo);
		bool GetChildEquipInfo(class AGBItem* ChildItem, EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo);
		void FillWith(class UClass* FillItemClass, const class FName& FillSkinName);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBRailAttachment
	 * Size -> 0x0048 (FullSize[0x0438] - InheritedSize[0x03F0])
	 */
	class AGBRailAttachment : public AGBItem
	{
	public:
		struct FRepRailAttachment                                  RailAttachmentReplication;                               // 0x03F0(0x0018) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UGBRailMountComponent*                               RootMountPoint;                                          // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RecoilSlot;                                              // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                Type;                                                    // 0x0414(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERailFirearmType                                           FirearmType;                                             // 0x041C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GPJD[0x3];                                   // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinRecoilSlotsRequired;                                  // 0x0420(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxRecoilSlotsRequired;                                  // 0x0424(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSingleInstanceOnly;                                     // 0x0428(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDirectMountOnly;                                        // 0x0429(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowedOnSightOnlyRail;                                 // 0x042A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowedOnTopFacingRail;                                 // 0x042B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowedOnBottomFacingRail;                              // 0x042C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowedOnSidewaysFacingRail;                            // 0x042D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowedOnOffsetRail;                                    // 0x042E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsGrip;                                                 // 0x042F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoUseFurthestRecolSlot;                               // 0x0430(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GFX6[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (PADDING)

	public:
		bool SingleInstanceOnly();
		void SetRecoilSlot(int32_t NewRecoilSlot);
		void OnRep_RailAttachmentReplication();
		bool IsValidRail(class UGBRailComponent* RailComp);
		bool IsNotTooFarForward(class AGBFirearm* ParentFirearm, const struct FVector& WorldLocation);
		bool IsNotTooFarBack(class AGBFirearm* ParentFirearm, const struct FVector& WorldLocation);
		void GetValidRailOffsetsFor(class AGBFirearm* ParentFirearm, TArray<struct FValidatedRecoilSlots>* OutValidatedRecoilSlots);
		TArray<struct FVector> GetValidMountPointOffsets(class AGBItem* BaseItem);
		int32_t GetRecoilSlot();
		ERailMountValidation GetRailMountValidation();
		class AGBFirearm* GetParentFirearm(class AActor* RootItem);
		TArray<class UGBRailMountComponent*> GetMountPoints();
		ERailFirearmType GetFirearmType();
		bool GetBackOffset(struct FVector* OutBackOffset);
		TArray<class AGBRailAttachment*> GetAttachmentOverlaps(bool bForceCollision);
		bool AutoAttach(class AGBItem* ParentItem);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBRailComponent
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UGBRailComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_L5NX[0x7];                                   // 0x01F8(0x0007) Fix Super Size
		ERailDirectness                                            RailDirectness;                                          // 0x01FF(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERailFace                                                  ManualRailFace;                                          // 0x0200(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_76SL[0xF];                                   // 0x0201(0x000F) MISSED OFFSET (PADDING)

	public:
		int32_t GetRecoilSlots();
		ERailFace GetRailFace();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBRailMountComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UGBRailMountComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_OM5G[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBReadyRoomPlayerStart
	 * Size -> 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
	 */
	class AGBReadyRoomPlayerStart : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_QWUD[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TeamId;                                                  // 0x0250(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOpsArea;                                                // 0x0251(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0AQD[0x6];                                   // 0x0252(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSightComponent
	 * Size -> 0x0148 (FullSize[0x0340] - InheritedSize[0x01F8])
	 */
	class UGBSightComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             PreSightZeroing;                                         // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSightZeroing;                                          // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetMagnificationLevel;                                 // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAdjustMagnificationLevel;                              // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSightLineChanged;                                      // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		ESightType                                                 SightType;                                               // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J8X4[0xF];                                   // 0x0249(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultZeroDistance;                                     // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ZeroDistance;                                            // 0x025C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T1P2[0xC];                                   // 0x0260(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpticRadius;                                             // 0x026C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinOffset;                                               // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxOffset;                                               // 0x0274(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinMagnificationLevel;                                   // 0x0278(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxMagnificationLevel;                                   // 0x027C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultMagnificationLevel;                               // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MagnificationLevel;                                      // 0x0284(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ReticleBrightnessLevel;                                  // 0x0288(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ReticleColourIndex;                                      // 0x0289(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DHZL[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatKey;                                                 // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1CVA[0x1C];                                  // 0x02A0(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIndex;                                           // 0x02BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     FirstPersonMaterial;                                     // 0x02C0(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RTTextureName;                                           // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RTAlphaName;                                             // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ReticleBrightnessName;                                   // 0x02E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReticleBrightnessScale;                                  // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J0Q5[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneCaptureComponent2D*                            SceneCaptureComponent;                                   // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            NormalMID;                                               // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            FirstPersonMID;                                          // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J9Y1[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTexture;                                           // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1QD7[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGBSightComponent*                                   PrevSight;                                               // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGBSightComponent*                                   NextSight;                                               // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSightLineRelativeRotation(const struct FRotator& NewRelativeRotation);
		void SetSightLineRelativeLocation(const struct FVector& NewRelativeLocation);
		void SetSceneCaptureComponent(class USceneCaptureComponent2D* NewSceneCaptureComp);
		void SetMagnificationLevel(float NewMagnificationLevel);
		void ServerSetZeroDistance(int32_t NewZeroDistance);
		void ServerSetReticleColourIndex(unsigned char NewReticleColourIndex);
		void ServerSetReticleBrightnessLevel(unsigned char NewReticleBrightnessLevel);
		void ServerSetMagnificationLevel(float NewMagnificationLevel);
		void OnRep_ReticleColourIndex();
		void OnRep_ReticleBrightness();
		void OnRep_MagnificationLevel();
		void OnEndViewTarget(class APlayerController* PlayerController, class AGBCharacter* Character);
		bool HasValidSightLine(class AGBFirearm* RelativeFirearm, TArray<class AGBItem*> OtherAttachments, class AGBItem** OutBlockedBy);
		int32_t GetZeroDistance();
		class FString GetStatKey();
		struct FRotator GetSightLineRelativeRotation();
		struct FVector GetSightLineRelativeLocation();
		bool GetSightLineFocus();
		int32_t GetReticleColourIndex();
		float GetOpticRadius();
		float GetMinMagnificationLevel();
		float GetMaxMagnificationLevel();
		bool GetMatchingFrontSightPost(class AGBFirearm* RelativeFirearm, class UGBFrontSightPostComponent** OutFrontSightPostComponent);
		float GetMagnificationLevel();
		float GetLevelAngle(class AGBFirearm* RelativeFirearm, const struct FVector& WorldBoneLocation, const struct FVector& RelativeLocationOffset);
		bool GetFocus();
		float GetDefaultMagnificationLevel();
		struct FRotator GetAnimRotOffset();
		struct FVector GetAnimLocOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSkinDataAsset
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UGBSkinDataAsset : public UPrimaryDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialSuffix;                                          // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PossibleSubstitutes;                                     // 0x0078(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPublic
		TArray<class FName>                                        PropertyTags;                                            // 0x0088(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSky
	 * Size -> 0x00D0 (FullSize[0x02F0] - InheritedSize[0x0220])
	 */
	class AGBSky : public AInfo
	{
	public:
		int32_t                                                    CycleStartTime;                                          // 0x0220(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ATCO[0xC];                                   // 0x0224(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InitialTimeOfDay;                                        // 0x0230(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JJNN[0x14];                                  // 0x0234(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADirectionalLight*                                   SunLightActor;                                           // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADirectionalLight*                                   MoonLightActor;                                          // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Latitude;                                                // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Longitude;                                               // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Timezone;                                                // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDaylightSavingTime;                                   // 0x0264(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XXBG[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Year;                                                    // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Month;                                                   // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Day;                                                     // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SunRiseTimeSpan;                                         // 0x0274(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SunSetTimeSpan;                                          // 0x027C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NorthOffset;                                             // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoonLightPitchOffset;                                    // 0x0288(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LCET[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PossibleDefaultTimesOfDay;                               // 0x0290(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SDFA[0x30];                                  // 0x02A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInitialTimeOfDayChanged;                               // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSkyUpdate;                                             // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void StartCycle();
		void SetInitialTimeOfDay(int32_t NewInitialTimeOfDay);
		void OnTimeSpanChangeEvent();
		void OnRep_InitialTimeOfDay();
		void OnRep_CycleStartTime();
		class FName GetTimeSpanTag();
		int32_t GetInitialTimeOfDay();
		void GetHoursMinutesSeconds(int32_t* OutHours, int32_t* OutMinutes, int32_t* OutSeconds);
		void EndCycle();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSoundNodeMasterSlave
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UGBSoundNodeMasterSlave : public USoundNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSoundNodePitchDilation
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UGBSoundNodePitchDilation : public USoundNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBSpawnProtectionVolume
	 * Size -> 0x0040 (FullSize[0x0268] - InheritedSize[0x0228])
	 */
	class AGBSpawnProtectionVolume : public ATriggerBase
	{
	public:
		unsigned char                                              UnknownData_C2SB[0x18];                                  // 0x0228(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBSpawnProtectionVolume*>                    AssociatedTriggers;                                      // 0x0240(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              TeamId;                                                  // 0x0250(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsActive;                                               // 0x0251(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P2QF[0x6];                                   // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomDetailWidgets[0x10];                               // 0x0258(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBTubeMagComponent
	 * Size -> 0x0078 (FullSize[0x0270] - InheritedSize[0x01F8])
	 */
	class UGBTubeMagComponent : public UGBAmmunitionFeedComponent
	{
	public:
		class FName                                                RoundType;                                               // 0x01F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      TubeContents;                                            // 0x0200(0x0010) Net, ZeroConstructor, RepNotify, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      ClientTubeContents;                                      // 0x0210(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QILM[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Capacity;                                                // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V77R[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BaseBulletItemClass[0x28];                               // 0x0230(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              BulletItemClass;                                         // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ChamberedRound;                                          // 0x0260(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartPlusOne;                                           // 0x0268(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStayOpenOnLastRound;                                    // 0x0269(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsFiringFromOpenBolt : 1;                               // 0x026A(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bBoltHeldOpen : 1;                                       // 0x026A(0x0001) BIT_FIELD BlueprintVisible, Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WRA1[0x5];                                   // 0x026B(0x0005) MISSED OFFSET (PADDING)

	public:
		void SyncTubeContents();
		bool StartPlusOne();
		void SetIsFiringFromOpenBolt(bool bNewIsFiringFromOpenBolt);
		void SetChamberedRound(class UClass* NewChamberedRound);
		void SetBoltHeldOpen(bool bNewBoltIsHeldOpen);
		void OnRep_TubeContents();
		bool IsLiveRoundChambered();
		TArray<class UClass*> GetTubeContents();
		class FName GetRoundType();
		bool GetIsFiringFromOpenBolt();
		int32_t GetCount();
		class UClass* GetChamberedRound();
		int32_t GetCapacity();
		class UClass* GetBulletItemClass();
		bool GetBoltHeldOpen();
		class AGBBulletItem* FindCompatibleRound(class AGBCharacter* Character);
		bool AddRoundToTube(class UClass* NewRound);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBUIFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBUIFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnbindKey(const struct FInputBoundKey& TargetKey);
		void UnBindCommand(const class FName& CommandName);
		void SetMouseSmoothing(bool NewMouseSmoothing);
		void SetMousePosition(const struct FVector2D& MousePosition);
		void SetInvertMouse(bool NewInvertMouse);
		void SetDoubleClickTime(float NewDoubleClickTime);
		void SaveBinds();
		void ResetBindsToDefault();
		void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly);
		void MoviePlayerStopPlaying();
		bool IsMoviePlayerFinishedLoading();
		bool IsMoviePlayerCurrentlyPlaying();
		bool IsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
		class UPanelSlot* InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content);
		bool InitStringTable(const class FName& StringTableId, const class FString& StringNameSpace);
		class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, const class FName& Name);
		class UUserWidget* GetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);
		bool GetMouseSmoothing();
		bool GetMonitorNativeResolutions(TArray<struct FVector2D>* OutMonitorResolutions);
		bool GetMapScreenshots(const class FString& Prefix, const class FString& MapName);
		void GetMapList(const class FString& GameModePrefix, TArray<struct FMapListItem>* OutMapList);
		bool GetMapInfo(const class FString& MapName, class FString* OutTitle, class FString* OutAuthor, class FText* OutDescription);
		bool GetInvertMouse();
		class FText GetInputBoundKeyDisplayName(const struct FInputBoundKey& TargetKey);
		void GetGameModeList(TArray<class FString>* OutGameModeDisplayNames);
		class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly);
		class UUserWidget* GetFirstChildOfClass(class UWidget* ParentWidget, class UClass* WidgetClass, bool bImmediateOnly);
		float GetDoubleClickTime();
		TArray<struct FInputBoundKey> GetCommandBoundKeys(const class FName& Command);
		struct FInputBoundKey GetCommandBoundKey(const class FName& Command);
		void GetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, class UClass* WidgetClass, bool bImmediateOnly);
		struct FInputBoundKey GetBoundKeyFromKeyEvent(const struct FKeyEvent& KeyEvent);
		void ForcePlayerInputUpdate(class APlayerController* Target);
		void FindScreenEdgeLocationForWorldLocationAlt(const struct FTransform& ViewTM, float FOV, const struct FVector2D& ScreenSize, const struct FVector& WorldLocation, float EdgePercent, struct FVector2D* OutScreenPosition, float* OutRotationAngleDegrees, bool* bIsOnScreen);
		void FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation, float EdgePercent, struct FVector2D* OutScreenPosition, float* OutRotationAngleDegrees, bool* bIsOnScreen);
		void BreakGeometry(const struct FGeometry& Geometry, struct FVector2D* OutPosition, struct FVector2D* OutAbsolutePosition, struct FVector2D* OutSize, float* OutScale);
		void BindExecToKey(const class FString& ExecCommand, const struct FInputBoundKey& TargetKey);
		void BindAxisToKey(const class FName& AxisName, const struct FInputBoundKey& TargetKey, float Scale);
		void BindActionToKey(const class FName& ActionName, const struct FInputBoundKey& TargetKey);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBUseInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGBUseInterface : public UInterface
	{
	public:
		void ServerUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ServerUse(class AController* Controller, const class FName& UseType);
		void ClientUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ClientUse(class AController* Controller, const class FName& UseType);
		void AIUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void AIUse(class AController* Controller, const class FName& UseType);
		class FName AIQuestionWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		class FName AIQuestion(class AController* Controller, const class FName& UseType);
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBVOIPAudioComponent
	 * Size -> 0x0030 (FullSize[0x0440] - InheritedSize[0x0410])
	 */
	class UGBVOIPAudioComponent : public UAkAudioInputComponent
	{
	public:
		unsigned char                                              UnknownData_XJCD[0x30];                                  // 0x0410(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBVOIPManager
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UGBVOIPManager : public UObject
	{
	public:
		TArray<class FString>                                      MuteList;                                                // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CP3C[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxVoiceDistanceSquared;                                 // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TLB9[0x10];                                  // 0x004C(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SampleRate;                                              // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              NumBytesPerSample;                                       // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JE98[0x17];                                  // 0x0061(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGBVOIPData>                                 VOIPDataList;                                            // 0x0078(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FGBPlayerCharVoiceInfo>                      PlayerCharVoiceList;                                     // 0x0088(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     VOIPAudioEvent;                                          // 0x0098(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     RadioTransmitStartEvent;                                 // 0x00B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     RadioTransmitEndEvent;                                   // 0x00C8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       VOIPAudioEventRef;                                       // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       RadioTransmitStartEventRef;                              // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       RadioTransmitEndEventRef;                                // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PTHS[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnVOIPEvent;                                             // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8P6[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVOIPSwitchEvent(class UAkComponent* AkComponent, EVOIPType VOIPType);
		void SetCharVoiceSwitchEvent(class UAkComponent* AkComponent, bool bIsRadio, bool bIsLocal);
		void OnPlayerCharVoicePostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		class AGBPlayerController* GetPlayerController();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBWaterVolume
	 * Size -> 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
	 */
	class AGBWaterVolume : public APhysicsVolume
	{
	public:
		class USoundBase*                                          EntrySound;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ExitSound;                                               // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PawnEntryVelZScaling;                                    // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingDecelerationSwimming;                             // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBWeatherInfo
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AGBWeatherInfo : public AInfo
	{
	public:
		class AGBPlayerCameraManager*                              LocalCameraManager;                                      // 0x0220(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateTransformTime;                                     // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LLD0[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnUpdateTransformEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.GBWorldSettings
	 * Size -> 0x0010 (FullSize[0x03B0] - InheritedSize[0x03A0])
	 */
	class AGBWorldSettings : public AWorldSettings
	{
	public:
		class UGBLevelSummary*                                     LevelSummary;                                            // 0x03A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                DefaultSpatialSoundTag;                                  // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class AGBWorldSettings* GetWorldSettings(class UObject* WorldContextObject);
		class UGBLevelSummary* GetLevelSummary();
		class FName GetDefaultSpatialSoundTag();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.JoyColorWheel
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UJoyColorWheel : public UWidget
	{
	public:
		unsigned char                                              UnknownData_TOPD[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        JoyColor;                                                // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipAnimationOnConstruction;                            // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HB0[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnColorChanged;                                          // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetColor(const struct FLinearColor& NewColor, bool SkipAnimation);
		struct FLinearColor GetColor();
		static UClass* StaticClass();
	};

	/**
	 * Class GroundBranch.TKMathFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector VectorRadiansToDegrees(const struct FVector& RadVector);
		struct FVector VectorDegreesToRadians(const struct FVector& DegVector);
		bool SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
		float SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& PlanePoint, const struct FVector& Point);
		struct FVector SetVectorLength(const struct FVector& A, float Size);
		void SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const class FName& BoneName);
		int32_t RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf);
		int32_t RoundToNearestMultiple(int32_t A, int32_t Multiple);
		int32_t RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf);
		struct FVector ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point);
		int32_t PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point);
		struct FVector2D NegateVector2D(const struct FVector2D& A);
		int32_t NegateInt(int32_t A);
		float NegateFloat(float A);
		bool LineToLineIntersection(struct FVector* IntersectionPoint, const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2);
		bool LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime);
		bool IsPowerOfTwo(int32_t X);
		bool IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
		bool IsMultipleOf(int32_t A, int32_t Multiple);
		bool IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius);
		bool IsEvenNumber(float A);
		struct FVector GridSnap(const struct FVector& A, float Grid);
		struct FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const class FName& BoneName, bool DrawDebugInfo);
		float ConvertPhysicsLinearVelocity(const struct FVector& Velocity, ESpeedUnit SpeedUnit);
		void ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets);
		bool ClosestPointsOnTwoLines(struct FVector* closestPointLine1, struct FVector* closestPointLine2, const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2);
		void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
		struct FVector ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir);
		struct FVector ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd);
		bool AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
