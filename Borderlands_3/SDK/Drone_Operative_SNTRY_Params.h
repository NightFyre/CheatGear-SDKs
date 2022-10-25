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
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget
	 */
	struct ADrone_Operative_SNTRY_C_HasValidDroneTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct
	 */
	struct ADrone_Operative_SNTRY_C_ConfigureDigistruct_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter
	 */
	struct ADrone_Operative_SNTRY_C_ConfigureCryoEmitter_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease
	 */
	struct ADrone_Operative_SNTRY_C_OnSimCalledShotRelease_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates
	 */
	struct ADrone_Operative_SNTRY_C_RegisterDelegates_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles
	 */
	struct ADrone_Operative_SNTRY_C_DispatchCalledShotRestorationParticles_Params
	{
	public:
		class AActor*                                              KilledTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration
	 */
	struct ADrone_Operative_SNTRY_C_RefundDuration_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount
	 */
	struct ADrone_Operative_SNTRY_C_AdvanceCalledShotCount_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S2P8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot
	 */
	struct ADrone_Operative_SNTRY_C_SetupCalledShot_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDT3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund
	 */
	struct ADrone_Operative_SNTRY_C_ApplyShieldDamageRefund_Params
	{
	public:
		class AActor*                                              CurrentTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LastDamageLocation;                                      // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalRefund;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget
	 */
	struct ADrone_Operative_SNTRY_C_CreateStaticFieldBeamToTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BeamName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget
	 */
	struct ADrone_Operative_SNTRY_C_CreateBadDoseBeamToTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BeamName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField
	 */
	struct ADrone_Operative_SNTRY_C_SetupStaticField_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets
	 */
	struct ADrone_Operative_SNTRY_C_SetupCryoBullets_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy
	 */
	struct ADrone_Operative_SNTRY_C_CauseCollisionDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget
	 */
	struct ADrone_Operative_SNTRY_C_GetMoveDelayForTarget_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous
	 */
	struct ADrone_Operative_SNTRY_C_FindNewTargetAutonomous_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled
	 */
	struct ADrone_Operative_SNTRY_C_SetExhaustFXEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload
	 */
	struct ADrone_Operative_SNTRY_C_DropPayload_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript
	 */
	struct ADrone_Operative_SNTRY_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc
	 */
	struct ADrone_Operative_SNTRY_C_DigistructOut__FinishedFunc_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc
	 */
	struct ADrone_Operative_SNTRY_C_DigistructOut__UpdateFunc_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc
	 */
	struct ADrone_Operative_SNTRY_C_DronePhase__FinishedFunc_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc
	 */
	struct ADrone_Operative_SNTRY_C_DronePhase__UpdateFunc_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY
	 */
	struct ADrone_Operative_SNTRY_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY_Params
	{
	public:
		bool                                                       bIsBoosting;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut
	 */
	struct ADrone_Operative_SNTRY_C_StartDigistructOut_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget
	 */
	struct ADrone_Operative_SNTRY_C_ApplyCollisionDamageToTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay
	 */
	struct ADrone_Operative_SNTRY_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods
	 */
	struct ADrone_Operative_SNTRY_C_SetupMods_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully
	 */
	struct ADrone_Operative_SNTRY_C_OnShutdownGracefully_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown
	 */
	struct ADrone_Operative_SNTRY_C_DoGracefulShutdown_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery
	 */
	struct ADrone_Operative_SNTRY_C_DoDroneDelivery_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated
	 */
	struct ADrone_Operative_SNTRY_C_OnCalledShotActivated_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot
	 */
	struct ADrone_Operative_SNTRY_C_DoNextCalledShot_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill
	 */
	struct ADrone_Operative_SNTRY_C_OnCalledShotKill_Params
	{
	public:
		class AActor*                                              KilledActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing
	 */
	struct ADrone_Operative_SNTRY_C_SetDronePhasing_Params
	{
	public:
		bool                                                       bPhasing;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase
	 */
	struct ADrone_Operative_SNTRY_C_HaltDronePhase_Params
	{	};

	/**
	 * Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY
	 */
	struct ADrone_Operative_SNTRY_C_ExecuteUbergraph_Drone_Operative_SNTRY_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
