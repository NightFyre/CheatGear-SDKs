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
	 * Class ArcVehicles.ArcVehiclePlayerSeatComponent
	 * Size -> 0x00E8 (FullSize[0x0198] - InheritedSize[0x00B0])
	 */
	class UArcVehiclePlayerSeatComponent : public UActorComponent
	{
	public:
		struct FArcVehicleSeatReference                            CurrentSeatConfig;                                       // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FArcVehicleSeatReference                            PreviousSeatConfig;                                      // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic
		class APlayerState*                                        StoredPlayerState;                                       // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S97B[0x58];                                  // 0x00D8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ServerDebugStrings;                                      // 0x0130(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9FH[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, ECollisionResponse>       PreviousVehicleCollisionResponses;                       // 0x0148(0x0050) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void ServerPrintDebug_Request();
		void OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType);
		void OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState);
		void OnRep_ServerDebugStrings();
		void OnRep_SeatConfig(const struct FArcVehicleSeatReference& InPreviousSeatConfig);
		void BP_OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehiclePawn
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class AArcVehiclePawn : public APawn
	{
	public:
		void NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent);
		class UArcVehicleSeatConfig* GetSeatConfig();
		class AArcBaseVehicle* GetOwningVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcBaseVehicle
	 * Size -> 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
	 */
	class AArcBaseVehicle : public AArcVehiclePawn
	{
	public:
		class UArcVehicleSeatConfig*                               DriverSeatConfig;                                        // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UArcVehicleSeatConfig*>                       AdditionalSeatConfigs;                                   // 0x0288(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UArcVehicleSeatConfig*>                       ReplicatedSeatConfigs;                                   // 0x0298(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FArcVehicleSeatChangeEvent>                  SeatChangeQueue;                                         // 0x02A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ServerDebugStrings;                                      // 0x02B8(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetupSeat(class UArcVehicleSeatConfig* SeatConfig);
		void ServerPrintDebug_Request();
		void RequestLeaveVehicle(class APlayerState* InPlayerState);
		void RequestEnterSeat(class APlayerState* InPlayerState, int32_t RequestedSeatIndex, bool bIgnoreRestrictions);
		void RequestEnterAnySeat(class APlayerState* InPlayerState);
		void OnRep_ServerDebugStrings();
		bool IsValidSeatIndex(int32_t InSeatIndex);
		void GetSortedExitPoints(const struct FTransform& InputLocation, TArray<struct FTransform>* OutTransformArray);
		struct FTransform GetNearestExitTransform(const struct FTransform& InputLocation);
		class UArcVehicleSeatConfig* GetDriverSeat();
		void GetAllSeats(TArray<class UArcVehicleSeatConfig*>* Seats);
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UArcVehicleBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsSeatRefValid(const struct FArcVehicleSeatReference& SeatRef);
		class UArcVehicleSeatConfig* STATIC_GetVehicleSeatConfigFromRef(const struct FArcVehicleSeatReference& SeatRef);
		class AArcBaseVehicle* STATIC_GetVehicleFromSeatConfig(const struct FArcVehicleSeatReference& SeatRef);
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleDeveloperSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UArcVehicleDeveloperSettings : public UDeveloperSettings
	{
	public:
		class UClass*                                              PlayerSeatComponentClass;                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PlayerStateComponentClass;                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleEngineSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UArcVehicleEngineSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_UWHZ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleExitPoint
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UArcVehicleExitPoint : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehiclePlayerStateComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UArcVehiclePlayerStateComponent : public UActorComponent
	{
	public:
		class APawn*                                               StoredPlayerPawn;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleSeat
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AArcVehicleSeat : public AArcVehiclePawn
	{
	public:
		class UArcVehicleSeatConfig*                               SeatConfig;                                              // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleSeatConfig
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UArcVehicleSeatConfig : public UActorComponent
	{
	public:
		struct FArcOwnerAttachmentReference                        AttachSeatToComponent;                                   // 0x00B0(0x0010) Edit, Net, NoDestructor, NativeAccessSpecifierPublic
		class APlayerState*                                        PlayerInSeat;                                            // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArcVehiclePlayerSeatComponent*                      PlayerSeatComponent;                                     // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerVisible;                                          // 0x00D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QMU[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void UnAttachPlayerFromSeat(class APlayerState* Player);
		void SetupSeatAttachment();
		bool IsOpenSeat();
		bool IsDriverSeat();
		class AArcBaseVehicle* GetVehicleOwner();
		void BP_UnAttachPlayerFromSeat(class APlayerState* Player);
		void BP_AttachPlayerToSeat(class APlayerState* Player);
		void AttachPlayerToSeat(class APlayerState* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleSeatConfig_PlayerAttachment
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UArcVehicleSeatConfig_PlayerAttachment : public UArcVehicleSeatConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleSeatConfig_SeatPawn
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UArcVehicleSeatConfig_SeatPawn : public UArcVehicleSeatConfig_PlayerAttachment
	{
	public:
		class UClass*                                              SeatPawnClass;                                           // 0x00D8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FArcOwnerAttachmentReference                        PlayerCharacterAttachToComponent;                        // 0x00E0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bResetControlRotationOnEnter;                            // 0x00F0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZWU[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AArcVehiclePawn*                                     SeatPawn;                                                // 0x00F8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_SeatPawn(class AArcVehiclePawn* OldSeatPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class ArcVehicles.ArcVehicleTurretMovementComp
	 * Size -> 0x0088 (FullSize[0x01C0] - InheritedSize[0x0138])
	 */
	class UArcVehicleTurretMovementComp : public UPawnMovementComponent
	{
	public:
		bool                                                       bIgnoreBaseRotation;                                     // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorePitch;                                            // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreYaw;                                              // 0x013A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreRoll;                                             // 0x013B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H28I[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     UpdatedPitchComponent;                                   // 0x0140(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationRate;                                            // 0x0148(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKXA[0x2C];                                  // 0x0154(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CurrentBase;                                             // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FArcVehicleTurretMovementPostPhysicsTickFunction    PostPhysicsTickFunction;                                 // 0x0188(0x0030) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DVNI[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_ServerMove(const struct FRotator& FullRotation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
