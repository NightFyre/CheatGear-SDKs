#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency
	 */
	struct UTurretMovementComponent_UpdateTurretControlDependency_Params
	{	};

	/**
	 * Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset
	 */
	struct UTurretMovementComponent_UpdateParentInitialOffset_Params
	{	};

	/**
	 * Function GbxVehicle.TurretMovementComponent.SetRotationInputs
	 */
	struct UTurretMovementComponent_SetRotationInputs_Params
	{
	public:
		float                                                      XValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
	 */
	struct UTurretMovementComponent_ServerSetRotationInputs_Params
	{
	public:
		struct FVector2D                                           InRotationInputs;                                        // 0x0000(0x0008)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.SetTeam
	 */
	struct AVehicle_SetTeam_Params
	{
	public:
		class UTeam*                                               Team;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.RemoveVehiclePart
	 */
	struct AVehicle_RemoveVehiclePart_Params
	{
	public:
		class UVehiclePartData*                                    CharacterPart;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.OnRep_VehicleParts
	 */
	struct AVehicle_OnRep_VehicleParts_Params
	{	};

	/**
	 * Function GbxVehicle.Vehicle.IsPowerSliding
	 */
	struct AVehicle_IsPowerSliding_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.IsInAir
	 */
	struct AVehicle_IsInAir_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetTeamComponent
	 */
	struct AVehicle_GetTeamComponent_Params
	{
	public:
		class UTeamComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetTeam
	 */
	struct AVehicle_GetTeam_Params
	{
	public:
		class UTeam*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetTargetingComponent
	 */
	struct AVehicle_GetTargetingComponent_Params
	{
	public:
		class UTargetingComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetTargetableComponent
	 */
	struct AVehicle_GetTargetableComponent_Params
	{
	public:
		class UTargetableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetNumWheelsInAir
	 */
	struct AVehicle_GetNumWheelsInAir_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.GetEquipedParts
	 */
	struct AVehicle_GetEquipedParts_Params
	{
	public:
		TArray<class UVehiclePartData*>                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.Vehicle.AddVehiclePart
	 */
	struct AVehicle_AddVehiclePart_Params
	{
	public:
		class UVehiclePartData*                                    CharacterPart;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature
	 */
	struct UVehicleBoostComponent_VehicleBoostEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.StopBoost
	 */
	struct UVehicleBoostComponent_StopBoost_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.StartBoost
	 */
	struct UVehicleBoostComponent_StartBoost_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.ResumeBoost
	 */
	struct UVehicleBoostComponent_ResumeBoost_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
	 */
	struct UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params
	{
	public:
		float                                                      BoostTarget;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ORQZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      BoostValueReachedDelegate;                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.PauseBoost
	 */
	struct UVehicleBoostComponent_PauseBoost_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
	 */
	struct UVehicleBoostComponent_OnRep_IsBoosting_Params
	{
	public:
		bool                                                       bWasBoosting;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped
	 */
	struct UVehicleBoostComponent_K2_BoostStopped_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted
	 */
	struct UVehicleBoostComponent_K2_BoostStarted_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
	 */
	struct UVehicleBoostComponent_GetRelativeBoostSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
	 */
	struct UVehicleBoostComponent_GetMaxBoostPoolValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
	 */
	struct UVehicleBoostComponent_GetCurrentBoostPoolValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
	 */
	struct UVehicleBoostComponent_GetCurrentBoostChargesCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
	 */
	struct UVehicleBoostComponent_GetBoostEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
	 */
	struct UVehicleBoostComponent_GetBoostDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
	 */
	struct UVehicleDigiThrustComponent_SetTeleportDirection_Params
	{
	public:
		struct FVector                                             WantedDirection;                                         // 0x0000(0x000C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport
	 */
	struct UVehicleDigiThrustComponent_RequestTeleport_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted
	 */
	struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustStarted_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished
	 */
	struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEndFinished_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd
	 */
	struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEnd_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision
	 */
	struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustCollision_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
	 */
	struct UVehicleDigiThrustComponent_IsTeleporting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
	 */
	struct UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
	 */
	struct UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature
	 */
	struct UVehicleDigiThrustComponent_DigiThrustEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
	 */
	struct UVehicleHitchAttachPtComponent_IsAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
	 */
	struct UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params
	{
	public:
		class AVehicle*                                            FromVehicle;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
	 */
	struct UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params
	{
	public:
		class AActor*                                              TrailerToAttach;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
	 */
	struct UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params
	{
	public:
		class AVehicle*                                            FromVehicle;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleHitchComponent.DetachFromHitch
	 */
	struct UVehicleHitchComponent_DetachFromHitch_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleHitchComponent.AttachToHitch
	 */
	struct UVehicleHitchComponent_AttachToHitch_Params
	{
	public:
		class UVehicleHitchAttachPtComponent*                      AttachPtToAttach;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature
	 */
	struct UVehicleHoverComponent_VehicleHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
	 */
	struct UVehicleHoverComponent_ServerUpdateState_Params
	{
	public:
		bool                                                       InbIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1ZV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InStrafeInput;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InForwardInput;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InTargetRotation;                                        // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
	 */
	struct UVehicleHoverComponent_IsHoverEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleHoverComponent.EnableHover
	 */
	struct UVehicleHoverComponent_EnableHover_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
	 */
	struct UVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params
	{
	public:
		struct FVector2D                                           StickInput;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
	 */
	struct AVehiclePartActor_WeldActorToVehicle_Params
	{
	public:
		class AActor*                                              SpawnedPart;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay
	 */
	struct AVehiclePartActor_ReceiveParentVehicleBeginPlay_Params
	{	};

	/**
	 * Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket
	 */
	struct AVehiclePartActor_OnRep_ParentSocket_Params
	{	};

	/**
	 * Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle
	 */
	struct AVehiclePartActor_OnRep_OwningVehicle_Params
	{	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
	 */
	struct UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
	 */
	struct UVehiclePowerSlideComponent_ResumePowerSlide_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
	 */
	struct UVehiclePowerSlideComponent_PausePowerSlide_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
	 */
	struct UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params
	{
	public:
		bool                                                       bWasPowerSliding;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
	 */
	struct UVehiclePowerSlideComponent_IsPowerSlidePaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
	 */
	struct UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
	 */
	struct UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
	 */
	struct UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide
	 */
	struct UVehiclePowerSlideComponent_CancelPowerSlide_Params
	{	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState
	 */
	struct UWheeledVehicleMovementComponentNW_SetToRestState_Params
	{	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
	 */
	struct UWheeledVehicleMovementComponentNW_SetSteerAngle_Params
	{
	public:
		float                                                      SteerAngle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
	 */
	struct UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params
	{
	public:
		float                                                      SteerAngle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
	 */
	struct UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params
	{
	public:
		float                                                      DriveTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
	 */
	struct UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params
	{
	public:
		float                                                      BrakeTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
	 */
	struct UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params
	{
	public:
		float                                                      NewModifier;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer
	 */
	struct UWheeledVehicleMovementComponentNW_ResetCustomGravityModifer_Params
	{	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
	 */
	struct UWheeledVehicleMovementComponentNW_IsInAir_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
	 */
	struct UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
	 */
	struct UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params
	{
	public:
		struct FVector2D                                           StickInput;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
	 */
	struct UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
	 */
	struct UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params
	{
	public:
		struct FVector2D                                           StickInput;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WantedDirAngle;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVehicleCameraRelativeDrivingMode                          Mode;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QKVB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         AngleToSteeringCurve;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
	 */
	struct UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
	 */
	struct UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxInfluence;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Roll;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
