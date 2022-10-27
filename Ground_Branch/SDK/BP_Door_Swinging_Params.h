#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestion
	 */
	struct ABP_Door_Swinging_C_AIQuestion_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AIQuestionWithParams
	 */
	struct ABP_Door_Swinging_C_AIQuestionWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.CanBreach
	 */
	struct ABP_Door_Swinging_C_CanBreach_Params
	{
	public:
		struct FVector                                             InTraceLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutResult;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FOP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.DrawDebugAttachmentPoints
	 */
	struct ABP_Door_Swinging_C_DrawDebugAttachmentPoints_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.FindClosestAttachmentPoint
	 */
	struct ABP_Door_Swinging_C_FindClosestAttachmentPoint_Params
	{
	public:
		struct FVector                                             ObserverLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNearerInside;                                          // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6S5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineDoorSwingSpeed
	 */
	struct ABP_Door_Swinging_C_DetermineDoorSwingSpeed_Params
	{
	public:
		float                                                      BaseAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Speed;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.GetAKSwitchInfo
	 */
	struct ABP_Door_Swinging_C_GetAKSwitchInfo_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Switch_State_Name;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.CreateAcousticPortal
	 */
	struct ABP_Door_Swinging_C_CreateAcousticPortal_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_ReplicatedYaw
	 */
	struct ABP_Door_Swinging_C_OnRep_ReplicatedYaw_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavLinkPoints
	 */
	struct ABP_Door_Swinging_C_UpdateNavLinkPoints_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.CreateNavLink
	 */
	struct ABP_Door_Swinging_C_CreateNavLink_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateReplicatedYaw
	 */
	struct ABP_Door_Swinging_C_UpdateReplicatedYaw_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.OnRep_bCoreDestroyed
	 */
	struct ABP_Door_Swinging_C_OnRep_bCoreDestroyed_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Destroy Attached Actors
	 */
	struct ABP_Door_Swinging_C_Destroy_Attached_Actors_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ExcludedActor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UserConstructionScript
	 */
	struct ABP_Door_Swinging_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__FinishedFunc
	 */
	struct ABP_Door_Swinging_C_Timeline_HandleUse_Normal__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Normal__UpdateFunc
	 */
	struct ABP_Door_Swinging_C_Timeline_HandleUse_Normal__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__FinishedFunc
	 */
	struct ABP_Door_Swinging_C_Timeline_HandleUse_Locked__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Timeline_HandleUse_Locked__UpdateFunc
	 */
	struct ABP_Door_Swinging_C_Timeline_HandleUse_Locked__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_4
	 */
	struct ABP_Door_Swinging_C_InpActEvt_Interact_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_Interact_K2Node_InputActionEvent_3
	 */
	struct ABP_Door_Swinging_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_NextPos_K2Node_InputActionEvent_2
	 */
	struct ABP_Door_Swinging_C_InpActEvt_NextPos_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.InpActEvt_PrevPos_K2Node_InputActionEvent_1
	 */
	struct ABP_Door_Swinging_C_InpActEvt_PrevPos_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AIUse
	 */
	struct ABP_Door_Swinging_C_AIUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AIUseWithParams
	 */
	struct ABP_Door_Swinging_C_AIUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUse
	 */
	struct ABP_Door_Swinging_C_ClientUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ClientUseWithParams
	 */
	struct ABP_Door_Swinging_C_ClientUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUseWithParams
	 */
	struct ABP_Door_Swinging_C_ServerUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Open
	 */
	struct ABP_Door_Swinging_C_Open_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.Close
	 */
	struct ABP_Door_Swinging_C_Close_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Normal
	 */
	struct ABP_Door_Swinging_C_AnimateHandleUse_Normal_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.SetInitialYawValue
	 */
	struct ABP_Door_Swinging_C_SetInitialYawValue_Params
	{
	public:
		float                                                      CurrentYaw;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.DetermineInitialYawValue
	 */
	struct ABP_Door_Swinging_C_DetermineInitialYawValue_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ReportDoorNoise
	 */
	struct ABP_Door_Swinging_C_ReportDoorNoise_Params
	{
	public:
		float                                                      Loudness;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AnimateHandleUse_Locked
	 */
	struct ABP_Door_Swinging_C_AnimateHandleUse_Locked_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AttachCharge
	 */
	struct ABP_Door_Swinging_C_AttachCharge_Params
	{
	public:
		class AGBItem*                                             InCharge;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InTraceLocation;                                         // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveBeginPlay
	 */
	struct ABP_Door_Swinging_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.DestroyDoor
	 */
	struct ABP_Door_Swinging_C_DestroyDoor_Params
	{
	public:
		struct FVector                                             ImpulseLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.SetupMaxYaw
	 */
	struct ABP_Door_Swinging_C_SetupMaxYaw_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ActorTickCheck
	 */
	struct ABP_Door_Swinging_C_ActorTickCheck_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature
	 */
	struct ABP_Door_Swinging_C_BndEvt__CoreComp_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
	 */
	struct ABP_Door_Swinging_C_BndEvt__CoreComp_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateTargetYaw
	 */
	struct ABP_Door_Swinging_C_UpdateTargetYaw_Params
	{
	public:
		float                                                      NewTargetYaw;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.AdjustTargetYaw
	 */
	struct ABP_Door_Swinging_C_AdjustTargetYaw_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ServerUse
	 */
	struct ABP_Door_Swinging_C_ServerUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.K2_OnReset
	 */
	struct ABP_Door_Swinging_C_K2_OnReset_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateAcousticPortal
	 */
	struct ABP_Door_Swinging_C_UpdateAcousticPortal_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.CloseToOpenCheck
	 */
	struct ABP_Door_Swinging_C_CloseToOpenCheck_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.OpenToCloseCheck
	 */
	struct ABP_Door_Swinging_C_OpenToCloseCheck_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveTick
	 */
	struct ABP_Door_Swinging_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ReceiveRadialDamage
	 */
	struct ABP_Door_Swinging_C_ReceiveRadialDamage_Params
	{
	public:
		float                                                      DamageReceived;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HFJK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Origin;                                                  // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x001C(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		class AController*                                         InstigatedBy;                                            // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFront
	 */
	struct ABP_Door_Swinging_C_PlayDoorSoundFront_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRear
	 */
	struct ABP_Door_Swinging_C_PlayDoorSoundRear_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundFrontTimer_Event
	 */
	struct ABP_Door_Swinging_C_PlayDoorSoundFrontTimer_Event_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.PlayDoorSoundRearTimer_Event
	 */
	struct ABP_Door_Swinging_C_PlayDoorSoundRearTimer_Event_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.UpdateNavCoreDoorLocation
	 */
	struct ABP_Door_Swinging_C_UpdateNavCoreDoorLocation_Params
	{	};

	/**
	 * Function BP_Door_Swinging.BP_Door_Swinging_C.ExecuteUbergraph_BP_Door_Swinging
	 */
	struct ABP_Door_Swinging_C_ExecuteUbergraph_BP_Door_Swinging_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MY8M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
