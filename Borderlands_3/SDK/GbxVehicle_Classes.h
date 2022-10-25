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
	 * Class GbxVehicle.TurretMovementComponent
	 * Size -> 0x00F0 (FullSize[0x0300] - InheritedSize[0x0210])
	 */
	class UTurretMovementComponent : public UPawnMovementComponent
	{
	public:
		struct FRotator                                            TurretRelativeRotation;                                  // 0x0210(0x000C) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MovementThresholdTolerance;                              // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationBeforeStop;                                      // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCMH[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         MovementStartEvent;                                      // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         MovementStopEvent;                                       // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          MovementSpeedRTPC;                                       // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWwisePlaybackInstance                              MovementAudioPlaybackInst;                               // 0x0240(0x0018) Transient, NativeAccessSpecifierPublic
		float                                                      TimeSinceStop;                                           // 0x0258(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZB1[0x1];                                   // 0x025C(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bReturnToZeroRotation;                                   // 0x025D(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlayersView;                                         // 0x025E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAimTowardsPlayersViewLocation;                          // 0x025F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RotationInputs;                                          // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RotationMaxSpeed;                                        // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RotationDamping;                                         // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableReturnToZeroRotationRate;                         // 0x0278(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MO86[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ReturnToZeroRotationRate;                                // 0x027C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bControlYawMovement;                                     // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bControlPitchMovement;                                   // 0x0285(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMovementCollision;                                // 0x0286(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DMK[0x1];                                   // 0x0287(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PivotSocket;                                             // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdatedComponentRequired;                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePitchConstraints;                                    // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9XF[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PitchMinConstraint;                                      // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMaxConstraint;                                      // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseYawConstraints;                                      // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CB5H[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      YawMinConstraint;                                        // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawMaxConstraint;                                        // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGL0[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RemoteTurretRelativeRotation;                            // 0x02C0(0x000C) Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_33ZC[0x24];                                  // 0x02CC(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               TurretControlOwner;                                      // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9RJF[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateTurretControlDependency();
		void UpdateParentInitialOffset();
		void SetRotationInputs(float XValue, float YValue);
		void ServerSetRotationInputs(const struct FVector2D& InRotationInputs);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.Vehicle
	 * Size -> 0x00B8 (FullSize[0x0578] - InheritedSize[0x04C0])
	 */
	class AVehicle : public APawn
	{
	public:
		unsigned char                                              UnknownData_FLV8[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VehicleMovement[0x10];                                   // 0x04D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxVehicle.Vehicle.VehicleMovement
		unsigned char                                              UnknownData_QAT4[0x18];                                  // 0x04E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUnpushable;                                             // 0x0500(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18C4[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorComponentAppliedFromAspectData;                   // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UTargetableComponent*                                CachedTargetableComponent;                               // 0x0518(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDamageComponent*                                    CachedDamageComponent;                                   // 0x0520(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDamageCauserComponent*                              CachedDamageCauserComponent;                             // 0x0528(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTargetingComponent*                                 CachedTargetingComponent;                                // 0x0530(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVehiclePartSelectionData*                           VehiclePartSelectionData;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UVehiclePartData*>                            VehicleParts;                                            // 0x0540(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		float                                                      CharacterCollidingResistance;                            // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SZR5[0x24];                                  // 0x0554(0x0024) MISSED OFFSET (PADDING)

	public:
		void SetTeam(class UTeam* Team);
		void RemoveVehiclePart(class UVehiclePartData* CharacterPart);
		void OnRep_VehicleParts();
		bool IsPowerSliding();
		bool IsInAir();
		class UTeamComponent* GetTeamComponent();
		class UTeam* GetTeam();
		class UTargetingComponent* GetTargetingComponent();
		class UTargetableComponent* GetTargetableComponent();
		int32_t GetNumWheelsInAir();
		TArray<class UVehiclePartData*> GetEquipedParts();
		void AddVehiclePart(class UVehiclePartData* CharacterPart);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleInventoryBalanceStateComponent
	 * Size -> 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
	 */
	class UVehicleInventoryBalanceStateComponent : public UInventoryBalanceStateComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleBoostData
	 * Size -> 0x0368 (FullSize[0x0398] - InheritedSize[0x0030])
	 */
	class UVehicleBoostData : public UGbxDataAsset
	{
	public:
		bool                                                       bApplyFullThrottleWhenBoosting;                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJIF[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinBoostDuration;                                        // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoostPhysicsParams                                 GroundBoostParams;                                       // 0x0038(0x0150) Edit, NativeAccessSpecifierPublic
		struct FBoostPhysicsParams                                 AirBoostParams;                                          // 0x0188(0x0150) Edit, NativeAccessSpecifierPublic
		class UGameResourcePoolData*                               BoostPoolData;                                           // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinuousStartCheck;                                   // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCZW[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       StartBoostCondition;                                     // 0x02E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       StopBoostCondition;                                      // 0x02F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopConditionCanOverrideMinBoostDuration;               // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseWhenInAir;                                         // 0x02F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MYI[0x2];                                   // 0x02FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinStartBoostSpeed;                                      // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinStartBoostAngle;                                      // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoostCooldownTime;                                       // 0x0304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInstantBoost;                                           // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGF1[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstantBoostCharges;                                     // 0x030C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstantBoostDuration;                                    // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifySteering;                                         // 0x0314(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50H5[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  SteeringRatioCurve;                                      // 0x0318(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      SteeringRatioInterpSpeed;                                // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRJ5[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleBoostComponent
	 * Size -> 0x00A0 (FullSize[0x0218] - InheritedSize[0x0178])
	 */
	class UVehicleBoostComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBoostStarted;                                          // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBoostStopped;                                          // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A31L[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehicleBoostData*                                   BoostData;                                               // 0x01B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AVehicle*                                            Vehicle;                                                 // 0x01B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P199[0x1];                                   // 0x01C0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsBoosting;                                             // 0x01C1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VO0D[0x16];                                  // 0x01C2(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameResourcePoolReference                          BoostPool;                                               // 0x01D8(0x0018) Net, Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TI2[0x28];                                  // 0x01F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void VehicleBoostEvent__DelegateSignature();
		void StopBoost(bool bForce);
		void StartBoost();
		void ResumeBoost();
		void RegisterBoostRegenerateEvent(float BoostTarget, const class FScriptDelegate& BoostValueReachedDelegate);
		void PauseBoost();
		void OnRep_IsBoosting(bool bWasBoosting);
		void K2_BoostStopped();
		void K2_BoostStarted();
		float GetRelativeBoostSpeed();
		float GetMaxBoostPoolValue();
		float GetCurrentBoostPoolValue();
		int32_t GetCurrentBoostChargesCount();
		bool GetBoostEnabled();
		struct FVector GetBoostDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehiclePartData
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UVehiclePartData : public UInventoryPartData
	{
	public:
		class FName                                                VehicleArchetype;                                        // 0x0250(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAShield;                                              // 0x0258(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9VK[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleAirControlComponent
	 * Size -> 0x0098 (FullSize[0x0210] - InheritedSize[0x0178])
	 */
	class UVehicleAirControlComponent : public UActorComponent
	{
	public:
		float                                                      YawControlForce;                                         // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PitchControlForce;                                       // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRuntimeFloatCurve                                  ForceRatio;                                              // 0x0180(0x0078) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7QSG[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicle*                                            Vehicle;                                                 // 0x0200(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BW6N[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleContactPtModifierInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVehicleContactPtModifierInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleDigiThrustComponent
	 * Size -> 0x0160 (FullSize[0x02D8] - InheritedSize[0x0178])
	 */
	class UVehicleDigiThrustComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnDigiThrustStarted;                                     // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDigiThrustCollision;                                   // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDigiThrustEnd;                                         // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDigiThrustEndFinished;                                 // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      TeleportMaxDist;                                         // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDuration;                                        // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTeleportDirection;                                   // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReorientOnTeleport;                                     // 0x01C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JINF[0x2];                                   // 0x01C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReorientationRatio;                                      // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       TeleportCondition;                                       // 0x01C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameResourcePoolData*                               BoostPoolData;                                           // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumChargesOnFullResource;                                // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBBQ[0x1C];                                  // 0x01DC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceStepLength;                                         // 0x01F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GroundDetectionTraceLength;                              // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GroundTraceRadius;                                       // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PathPtGroundHeight;                                      // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ValidFloorAngle;                                         // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FloorMaxAngleDiffBetweenGroundTraces;                    // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FloorMaxHeightDiffBetweenGroundTraces;                   // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RefUpBlendWeight;                                        // 0x0214(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bKeepLastValidGroundUpWhenInAir;                         // 0x0218(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9IUE[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicle*                                            Vehicle;                                                 // 0x0220(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameResourcePoolReference                          BoostPool;                                               // 0x0228(0x0018) Net, Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bTeleportRequested;                                      // 0x0240(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TGWE[0x7F];                                  // 0x0241(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DigithrustInAction;                                      // 0x02C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              DigithrustOutAction;                                     // 0x02C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DigithrustOutActionDuration;                             // 0x02D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z9IR[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTeleportDirection(const struct FVector& WantedDirection);
		void RequestTeleport();
		void NetMulticast_OnDigiThrustStarted();
		void NetMulticast_OnDigiThrustEndFinished();
		void NetMulticast_OnDigiThrustEnd();
		void NetMulticast_OnDigiThrustCollision();
		bool IsTeleporting();
		float GetMaxBoostPoolValue();
		float GetCurrentBoostPoolValue();
		void DigiThrustEvent__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleFlightComponent
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UVehicleFlightComponent : public UFloatingPawnMovement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleHitchAttachPtComponent
	 * Size -> 0x0078 (FullSize[0x0790] - InheritedSize[0x0718])
	 */
	class UVehicleHitchAttachPtComponent : public USphereComponent
	{
	public:
		class UPrimitiveComponent*                                 UpdatedPrimitive;                                        // 0x0718(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttachTransitionLength;                                  // 0x0720(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttachTransitionTolerance;                               // 0x0724(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM1V[0x18];                                  // 0x0728(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrakeTorque;                                             // 0x0740(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H0AW[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartAttachTransition;                                 // 0x0748(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAttached;                                              // 0x0758(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDetached;                                              // 0x0768(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class UWheeledVehicleMovementComponentNW*                  CachedAttachedVehicleMovementComp;                       // 0x0778(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWheeledVehicleMovementComponentNW*                  CachedMovementComponent;                                 // 0x0780(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4Y1L[0x8];                                   // 0x0788(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsAttached();
		void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleHitchComponent
	 * Size -> 0x0070 (FullSize[0x0540] - InheritedSize[0x04D0])
	 */
	class UVehicleHitchComponent : public UPhysicsConstraintComponent
	{
	public:
		bool                                                       bCheckAutoAttach;                                        // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTA9[0x7];                                   // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartAttachTransition;                                 // 0x04D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAttached;                                              // 0x04E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDetached;                                              // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		float                                                      HitchAttachCheckRadius;                                  // 0x0508(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      YawLimit;                                                // 0x050C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PitchLimit;                                              // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HitchConstraintStiffness;                                // 0x0514(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HitchConstraintDamping;                                  // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DBN2[0x4];                                   // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehicleHitchAttachPtComponent*                      AttachedPoint;                                           // 0x0520(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AVehicle*                                            OwningVehicle;                                           // 0x0528(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWheeledVehicleMovementComponent*                    OwningVehicleMovementComp;                               // 0x0530(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KAIY[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (PADDING)

	public:
		void TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach);
		void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
		void DetachFromHitch();
		void AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleHoverComponent
	 * Size -> 0x0110 (FullSize[0x0288] - InheritedSize[0x0178])
	 */
	class UVehicleHoverComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHoverEnabled;                                          // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoverDisabled;                                         // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      RawStrafeInput;                                          // 0x0198(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawForwardInput;                                         // 0x019C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FReplicatedHoverComponentState                      ReplicatedState;                                         // 0x01A0(0x0018) Net, Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K2P6[0x1C];                                  // 0x01B8(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForceRefVel;                                             // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRuntimeFloatCurve                                  ForceCurve;                                              // 0x01D8(0x0078) Edit, NativeAccessSpecifierPrivate
		float                                                      DampingForce;                                            // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BrakingDampingForce;                                     // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTireConfig*                                         TireConfigWhenStrafing;                                  // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CustomGravityModifier;                                   // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFaceControlRotation;                                    // 0x0264(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JFO0[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToFaceControlRotation;                               // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R1UV[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicle*                                            Vehicle;                                                 // 0x0270(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWheeledVehicleMovementComponentNW*                  MovementComponentNW;                                     // 0x0278(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IJPP[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		void VehicleHoverEvent__DelegateSignature();
		void ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation);
		bool IsHoverEnabled();
		void EnableHover(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleMovementInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVehicleMovementInterface : public UInterface
	{
	public:
		struct FVector2D GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehiclePartActor
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class AVehiclePartActor : public AActor
	{
	public:
		bool                                                       bWeldSimulatedBodies;                                    // 0x0458(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWeldedBodiesShouldModifyPhysicalProperties;             // 0x0459(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bForwardDamageToParent;                                  // 0x045A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4CY[0x5];                                   // 0x045B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicle*                                            OwningVehicle;                                           // 0x0460(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ParentSocket;                                            // 0x0468(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYDJ[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (PADDING)

	public:
		void WeldActorToVehicle(class AActor* SpawnedPart);
		void ReceiveParentVehicleBeginPlay();
		void OnRep_ParentSocket();
		void OnRep_OwningVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehiclePartSelectionData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UVehiclePartSelectionData : public UActorPartSelectionData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehiclePowerSlideComponent
	 * Size -> 0x01F0 (FullSize[0x0368] - InheritedSize[0x0178])
	 */
	class UVehiclePowerSlideComponent : public UActorComponent
	{
	public:
		bool                                                       bApplyHandbrake;                                         // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInAirBehavior                                             InAirBehavior;                                           // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN6E[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumWheelsInAir;                                       // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartPowerSlide;                                       // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndPowerSlide;                                         // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartPowerSlideBoost;                                  // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndPowerSlideBoost;                                    // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsPowerSliding;                                         // 0x01C0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6FXC[0xB7];                                  // 0x01C1(0x00B7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngleToConsiderDrift;                                    // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinDriftVelThreshold;                                    // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimeInDriftDecayRate;                                    // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinDriftDurationForBoost;                                // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxDriftDurationForBoost;                                // 0x0288(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P903[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BoostCurve;                                              // 0x0290(0x0078) Edit, NativeAccessSpecifierPrivate
		float                                                      MaxBoostForce;                                           // 0x0308(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostDriftBoostDurationMin;                               // 0x030C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PostDriftBoostDurationMax;                               // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinVelForPostDriftBoost;                                 // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRelativeDirectionData                              BoostDirection;                                          // 0x0318(0x0050) Edit, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void SetPowerSlideEnabled(bool bEnable);
		void ResumePowerSlide(const class FName& Reason);
		void PausePowerSlide(const class FName& Reason);
		void OnRep_IsPowerSliding(bool bWasPowerSliding);
		bool IsPowerSlidePaused();
		bool IsInPowerSlideBoost();
		bool GetPowerSlideEnabled();
		float GetCurrentBoostRatio();
		void CancelPowerSlide();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.GbxVehicleWheel
	 * Size -> 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
	 */
	class UGbxVehicleWheel : public UVehicleWheel
	{
	public:
		float                                                      SuspensionForceXOffset;                                  // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionForceYOffset;                                  // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SuspensionTravelDirection;                               // 0x0118(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAllowedLongitudinalSlipPerRotation;                   // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYF6[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.VehicleCollisionResponseModificationContext
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVehicleCollisionResponseModificationContext : public UObject
	{
	public:
		class AVehicle*                                            Collider;                                                // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AVehicle*                                            Collidee;                                                // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxVehicle.WheeledVehicleMovementComponentNW
	 * Size -> 0x0788 (FullSize[0x0D40] - InheritedSize[0x05B8])
	 */
	class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent4W
	{
	public:
		unsigned char                                              UnknownData_H529[0x8];                                   // 0x05B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int8_t>                                             DrivenWheels;                                            // 0x05C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EVehicleDriveType                                          VehicleDriveType;                                        // 0x05D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCD5[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardMarginOfError;                                    // 0x05D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContiguousMovementDirectionThreshold;                    // 0x05D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContiguousMovementDirectionSpeedThreshold;               // 0x05DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContiguousMovementAppliesToReverse;                     // 0x05E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOversteerFixupEnabled;                                  // 0x05E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2XM[0x6];                                   // 0x05E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  OversteerFixupCurve;                                     // 0x05E8(0x0078) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLW4[0x4];                                   // 0x0660(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAerialRotationalDampingEnabled;                         // 0x0664(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJLC[0x3];                                   // 0x0665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RisingAerialRotationDampingFactor;                       // 0x0668(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AerialRotationalDamping;                                 // 0x066C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AerialRotationalDeviationAngle;                          // 0x0670(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAerialAutoStabilizationEnabled;                         // 0x0674(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10ZK[0x3];                                   // 0x0675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RisingAerialAutoStabilizationFactor;                     // 0x0678(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AerialAutoStabilization;                                 // 0x067C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutoUnflip;                                          // 0x0680(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8JQ[0x3];                                   // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AutoUnflipAngleRange;                                    // 0x0684(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoUnflipEaseInZone;                                    // 0x068C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  AutoUnflipCurve;                                         // 0x0690(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      AutoUnflipForce;                                         // 0x0708(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLX9[0x4];                                   // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  TankTreadInputDifferenceCurve;                           // 0x0710(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      MaxTreadThrustOvershootValue;                            // 0x0788(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLJZ[0x4];                                   // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BrakeWhenTurningRatioCurve;                              // 0x0790(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      OppositeThreadSpeedWhenTurningInPlace;                   // 0x0808(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomGravityModifier;                                   // 0x080C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundedCustomGravityModifier;                           // 0x0810(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSteeringCurve;                                    // 0x0814(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TPX[0xB];                                   // 0x0815(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBecameAirborn;                                         // 0x0820(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLanded;                                                // 0x0830(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XG5[0x4];                                   // 0x0840(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLateralToLongitudinalVelocityShiftEnabled;              // 0x0844(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLEG[0x3];                                   // 0x0845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  LateralToLongitudinalVelocityShiftCurve;                 // 0x0848(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  TireForcesRatioToSlopeAngleCurve;                        // 0x08C0(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      BalanceAssistMaxSpeed;                                   // 0x0938(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSagittalBalanceCurve;                                // 0x093C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUVZ[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  SagittalBalanceCurve;                                    // 0x0940(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SagittalBalanceSpeedCurve;                               // 0x09B8(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      SagitalBlendSpeed;                                       // 0x0A30(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EBrakingSagitalBlendSpeed;                               // 0x0A34(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EBrakingSagittalAngleRefSpeedKmH;                        // 0x0A38(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EBrakingSagitalLeanAngle;                                // 0x0A3C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCoronalBalanceCurve;                                 // 0x0A40(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDAN[0x7];                                   // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  CoronalBalanceCurve;                                     // 0x0A48(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseBrakeAssist;                                         // 0x0AC0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHandBrakeAssist;                                     // 0x0AC1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBrakeAssistOnLatForces;                            // 0x0AC2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWQI[0x1];                                   // 0x0AC3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrakeAssistForceScale;                                   // 0x0AC4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  BrakeAssistCurve;                                        // 0x0AC8(0x0078) Edit, NativeAccessSpecifierPublic
		bool                                                       bCanHandbrake;                                           // 0x0B40(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUTurnAssist;                                         // 0x0B41(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateUTurnAssistOnHandbrake;                         // 0x0B42(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0D8[0x5];                                   // 0x0B43(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       ActivateUTurnAssistCondition;                            // 0x0B48(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyUTurnAssistInAir;                                  // 0x0B50(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5UU[0x3];                                   // 0x0B51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UTurnAssistForce;                                        // 0x0B54(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UTurnAssistForceInterpSpeed;                             // 0x0B58(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UTurnAssistForceReturnToZeroInterpSpeed;                 // 0x0B5C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UTurnAssistRefSpeed;                                     // 0x0B60(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UTurnAssistMaxAngularVelInfluence;                       // 0x0B64(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  UTurnAssistCurve;                                        // 0x0B68(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  LiquidBodyWheelDepthToForceCurve;                        // 0x0BE0(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      LiquidBodyDampingCoefficient;                            // 0x0C58(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKVI[0x4];                                   // 0x0C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        CollisionResponseFormula;                                // 0x0C60(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AngleToUpsideDown;                                       // 0x0C98(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMGR[0x4];                                   // 0x0C9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   DefaultPhysicalMaterial;                                 // 0x0CA0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   UpsideDownPhysicalMaterial;                              // 0x0CA8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontMoveWhenCollided;                                   // 0x0CB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKKU[0x7];                                   // 0x0CB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CryoPenaltyCurve;                                        // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAntiRollBarData>                            AntiRollBars;                                            // 0x0CC0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GF3[0x28];                                  // 0x0CD0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehicleCollisionResponseModificationContext*        CollisionResponseContext;                                // 0x0CF8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JBOA[0x40];                                  // 0x0D00(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetToRestState();
		void SetSteerAngle(float SteerAngle, int32_t WheelIndex);
		void SetSagittalBalancingEnabled(bool bEnable);
		void SetOversteerFixupEnabled(bool bEnable);
		void SetNoDriveSteerAngle(float SteerAngle, int32_t WheelIndex);
		void SetNoDriveDriveTorque(float DriveTorque, int32_t WheelIndex);
		void SetNoDriveBrakeTorque(float BrakeTorque, int32_t WheelIndex);
		void SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable);
		void SetCustomGravityModifier(float NewModifier);
		void SetCoronalBalancingEnabled(bool bEnable);
		void SetAerialRotationalDampingEnabled(bool bEnable);
		void ResetCustomGravityModifer();
		bool IsInAir();
		bool GetSagittalBalancingEnabled();
		bool GetOversteerFixupEnabled();
		int32_t GetNumWheelsInAir();
		bool GetLateralToLongitudinalVelocityShiftEnabled();
		struct FVector2D GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput);
		float GetCustomGravityModifier();
		bool GetCoronalBalancingEnabled();
		struct FVector2D GetCameraRelativeThrottleAndSteer(const struct FVector2D& StickInput, float* WantedDirAngle, EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve);
		bool GetAerialRotationalDampingEnabled();
		void ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
