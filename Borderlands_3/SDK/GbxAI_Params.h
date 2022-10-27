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
	 * Function GbxAI.AIActionBase.StopBP
	 */
	struct UAIActionBase_StopBP_Params
	{
	public:
		class UAIActionBase*                                       Action;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIActionBlueprintContext                           Context;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSucceeded;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIActionBase.CreateSubobjectNoName
	 */
	struct UAIActionBase_CreateSubobjectNoName_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction.CreateSubAction
	 */
	struct UAIAction_CreateSubAction_Params
	{
	public:
		class UClass*                                              ActionClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIAction*                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction_Composite.CreateChild
	 */
	struct UAIAction_Composite_CreateChild_Params
	{
	public:
		class FName                                                ChildName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIAction_CompositeChild*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction_CompositeChild.CreateAction
	 */
	struct UAIAction_CompositeChild_CreateAction_Params
	{
	public:
		class UClass*                                              ActionClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIAction*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction_MoveSpline.SetupMoveSpline
	 */
	struct UAIAction_MoveSpline_SetupMoveSpline_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             TargetSpline;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Offset;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsReverse;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset
	 */
	struct UAIAction_MoveSpline_ChangeSplineOffset_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Offset;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAction_StateMachineChild.GetAvailableStates
	 */
	struct UAIAction_StateMachineChild_GetAvailableStates_Params
	{
	public:
		TArray<class UAIAction_StateMachineChild*>                 Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty
	 */
	struct UAIActionBlueprint_ShouldSkipBlackboardProperty_Params
	{
	public:
		class UProperty*                                           Property;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object
	 */
	struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Object_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_RunScriptedAIAction*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller
	 */
	struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Controller_Params
	{
	public:
		class AGbxAIController*                                    Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_RunScriptedAIAction*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent
	 */
	struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_AIActionComponent_Params
	{
	public:
		class UAIActionComponent*                                  AIActionComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_RunScriptedAIAction*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor
	 */
	struct UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Actor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_RunScriptedAIAction*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIActionComponent.ReplaceMainAIAction
	 */
	struct UAIActionComponent_ReplaceMainAIAction_Params
	{
	public:
		class UClass*                                              Action;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIActionComponent.GetBlackboardData
	 */
	struct UAIActionComponent_GetBlackboardData_Params
	{
	public:
		class UBlackboardData*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIActionComponent.AbortScriptedAIAction
	 */
	struct UAIActionComponent_AbortScriptedAIAction_Params
	{
	public:
		bool                                                       bStopImmediately;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_ActorCollision.OnPawnHit
	 */
	struct UAIAspect_ActorCollision_OnPawnHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QL9P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions
	 */
	struct UAIAspect_ActorCollision_GetOnCollisionOptions_Params
	{
	public:
		TArray<class FName>                                        Options;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Condition.GetConditionDataDescription
	 */
	struct UAIAspect_Condition_GetConditionDataDescription_Params
	{
	public:
		struct FAIAspectSettings_ConditionData                     ConditionData;                                           // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription
	 */
	struct UAIAspect_BlackboardKey_GetSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_BlackboardKey                     BBKeySettings;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription
	 */
	struct UAIAspect_Navigation_GetNavSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x0140(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0148(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription
	 */
	struct UAIAspect_EnvQuery_GetQuerySettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x0000(0x03A0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x03A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x03A8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription
	 */
	struct UAIAspect_Leap_GetQuerySettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Leap                              LeapSettings;                                            // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Loop.GetSettingsDescription
	 */
	struct UAIAspect_Loop_GetSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Loop                              LoopSettings;                                            // 0x0000(0x0198)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0198(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription
	 */
	struct UAIAspect_Rotation_GetRotationSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Rotation                          RotationSettings;                                        // 0x0000(0x0550)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x0550(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0558(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription
	 */
	struct UAIAspect_Rotation_GetRotationChannelSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_RotationChannel                   RotationChannelSettings;                                 // 0x0000(0x01B8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x01B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x01C0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription
	 */
	struct UAIAspect_Teleport_GetTeleportSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Teleport                          TeleportSettings;                                        // 0x0000(0x0138)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x0138(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0140(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription
	 */
	struct UAIAspect_Weapon_GetWeaponSettingsDescription_Params
	{
	public:
		struct FAIAspectSettings_Weapon                            WeaponSettings;                                          // 0x0000(0x03D0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UProperty*                                           Property;                                                // 0x03D0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x03D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.SetCloakData
	 */
	struct UAICloakComponent_SetCloakData_Params
	{
	public:
		class UAICloakData*                                        NewCloakData;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.OnRep_Cloaked
	 */
	struct UAICloakComponent_OnRep_Cloaked_Params
	{	};

	/**
	 * Function GbxAI.AICloakComponent.IsPlayingAction
	 */
	struct UAICloakComponent_IsPlayingAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.IsCloakStateForced
	 */
	struct UAICloakComponent_IsCloakStateForced_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.IsCloaked
	 */
	struct UAICloakComponent_IsCloaked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.InterruptCloakAction
	 */
	struct UAICloakComponent_InterruptCloakAction_Params
	{	};

	/**
	 * Function GbxAI.AICloakComponent.GetCloakData
	 */
	struct UAICloakComponent_GetCloakData_Params
	{
	public:
		class UAICloakData*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.ForceUncloak
	 */
	struct UAICloakComponent_ForceUncloak_Params
	{
	public:
		bool                                                       bInCanPlayActions;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.ForceCloak
	 */
	struct UAICloakComponent_ForceCloak_Params
	{
	public:
		bool                                                       bInCanPlayActions;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AICloakComponent.ClearForcedState
	 */
	struct UAICloakComponent_ClearForcedState_Params
	{	};

	/**
	 * Function GbxAI.AICloakComponent.ClearCloakData
	 */
	struct UAICloakComponent_ClearCloakData_Params
	{	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket
	 */
	struct UAIGroupBlueprintLibrary_IsUsingAITicket_Params
	{
	public:
		class AAIController*                                       AIUser;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterruptible;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid
	 */
	struct UAIGroupBlueprintLibrary_IsTicketValid_Params
	{
	public:
		struct FAITicketHandle                                     TicketHandle;                                            // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.ClearTicket
	 */
	struct UAIGroupBlueprintLibrary_ClearTicket_Params
	{
	public:
		struct FAITicketHandle                                     TicketHandle;                                            // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      HoldDuration;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket
	 */
	struct UAIGroupBlueprintLibrary_ClearAITicket_Params
	{
	public:
		class AAIController*                                       AIUser;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HoldDuration;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket
	 */
	struct UAIGroupBlueprintLibrary_CanUseAITicket_Params
	{
	public:
		class AAIController*                                       AIUser;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterruptible;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupBlueprintLibrary.AddAITicket
	 */
	struct UAIGroupBlueprintLibrary_AddAITicket_Params
	{
	public:
		struct FAITicketHandle                                     OutTicketHandle;                                         // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class AAIController*                                       AIUser;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAITicketDataAsset*                                  Ticket;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDuration;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPriority;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterruptible;                                          // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIGroupState.OnThreatActorDied
	 */
	struct UAIGroupState_OnThreatActorDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINode.OnPawnDepartedNodeCB
	 */
	struct AAINode_OnPawnDepartedNodeCB_Params
	{
	public:
		class AActor*                                              NodeActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               DepartedPawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINode.OnPawnArrivedNodeCB
	 */
	struct AAINode_OnPawnArrivedNodeCB_Params
	{
	public:
		class AActor*                                              NodeActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ArrivedPawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeBlueprintLibrary.FindNearestNode
	 */
	struct UAINodeBlueprintLibrary_FindNearestNode_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabled;                                        // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AUYU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeBlueprintLibrary.FindAllNodes
	 */
	struct UAINodeBlueprintLibrary_FindAllNodes_Params
	{
	public:
		TArray<class AActor*>                                      OutputNodes;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabled;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode
	 */
	struct UAINodeBlueprintLibrary_ChooseRandomNode_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDisabled;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_85MP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.SelectNextNode
	 */
	struct UAINodeComponent_SelectNextNode_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.HasLinkTo
	 */
	struct UAINodeComponent_HasLinkTo_Params
	{
	public:
		class AActor*                                              Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.HasLinkFrom
	 */
	struct UAINodeComponent_HasLinkFrom_Params
	{
	public:
		class AActor*                                              Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.HasArrived
	 */
	struct UAINodeComponent_HasArrived_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Error;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.GetLinkedNodeNum
	 */
	struct UAINodeComponent_GetLinkedNodeNum_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.GetLinkedNode
	 */
	struct UAINodeComponent_GetLinkedNode_Params
	{
	public:
		int32_t                                                    I;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1700[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.CreateLinkTo
	 */
	struct UAINodeComponent_CreateLinkTo_Params
	{
	public:
		class AActor*                                              Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Weight;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AINodeComponent.BreakLinkTo
	 */
	struct UAINodeComponent_BreakLinkTo_Params
	{
	public:
		class AActor*                                              Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo
	 */
	struct UAITargetingBlueprintLibrary_IsThreatenedByInfo_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTargetActorInfo                                    TargetInfo;                                              // 0x0008(0x0390)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0398(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy
	 */
	struct UAITargetingBlueprintLibrary_IsThreatenedBy_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge
	 */
	struct UAITargetingBlueprintLibrary_GetTargetSenseAge_Params
	{
	public:
		struct FTargetActorInfo                                    TargetInfo;                                              // 0x0000(0x0390)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UClass*                                              Sense;                                                   // 0x0390(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0398(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange
	 */
	struct UAITargetingBlueprintLibrary_GetNumTargetsInRange_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation
	 */
	struct UAITargetingBlueprintLibrary_GetBestKnownLocation_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Socket;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation
	 */
	struct UAITargetingBlueprintLibrary_CalcTargetGroupLocation_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GroupDistance;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Result;                                                  // 0x000C(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost
	 */
	struct UAITargetingBlueprintLibrary_ApplyTargetScoringBoost_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoostName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAITargetScoringBoost                                      ScoringBoost;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PYVU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationInSeconds;                                       // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard
	 */
	struct UAITargetingBlueprintLibrary_AISetTargetInBlackboard_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxBlackboardKeySelector                           Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    TargetIndex;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget
	 */
	struct UAITargetingBlueprintLibrary_AISetScriptedTarget_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication
	 */
	struct UAITargetingBlueprintLibrary_AISendCommunication_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense
	 */
	struct UAITargetingBlueprintLibrary_AIProvokeSpecificSense_Params
	{
	public:
		class AActor*                                              AITarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Source;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              SenseType;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StimulusLocation;                                        // 0x0018(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AIProvoke
	 */
	struct UAITargetingBlueprintLibrary_AIProvoke_Params
	{
	public:
		class AActor*                                              AITarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Source;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke
	 */
	struct UAITargetingBlueprintLibrary_AIPlayerProvoke_Params
	{
	public:
		class AActor*                                              AITarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget
	 */
	struct UAITargetingBlueprintLibrary_AIGetScriptedTarget_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate
	 */
	struct UAITargetingBlueprintLibrary_AICanCommunicate_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinSenseAgeDelta;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIUseComponent.StopUse
	 */
	struct UAIUseComponent_StopUse_Params
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIUseComponent.RequestUse
	 */
	struct UAIUseComponent_RequestUse_Params
	{
	public:
		class AActor*                                              SmartObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionName;                                              // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAbortExisting;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUntilInterrupted;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIUseComponent.OnUseCompleted
	 */
	struct UAIUseComponent_OnUseCompleted_Params
	{
	public:
		class UAITask*                                             Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESmartObjectTaskResult                                     Result;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIUseComponent.GetCurrentObject
	 */
	struct UAIUseComponent_GetCurrentObject_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames
	 */
	struct UAIUseSlotComponent_GetAvailableSocketNames_Params
	{
	public:
		TArray<class FName>                                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIWeaponUserComponent.WantsToFire
	 */
	struct UAIWeaponUserComponent_WantsToFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.AIWeaponUserComponent.OnWeaponUsed
	 */
	struct UAIWeaponUserComponent_OnWeaponUsed_Params
	{	};

	/**
	 * Function GbxAI.Cover.SetEnabled
	 */
	struct ACover_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.Cover.IsEnabled
	 */
	struct ACover_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.CoverSlotComponent.SetEnabled
	 */
	struct UCoverSlotComponent_SetEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.CoverSlotComponent.IsEnabled
	 */
	struct UCoverSlotComponent_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.CoverUserComponent.SetEnterTransitionTable
	 */
	struct UCoverUserComponent_SetEnterTransitionTable_Params
	{
	public:
		class UGbxCoverTransitionTable*                            NewTable;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.CoverUserComponent.OnRep_ClientData
	 */
	struct UCoverUserComponent_OnRep_ClientData_Params
	{	};

	/**
	 * Function GbxAI.CoverUserComponent.OnMovementModeChanged
	 */
	struct UCoverUserComponent_OnMovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.CoverUserComponent.GetStyle
	 */
	struct UCoverUserComponent_GetStyle_Params
	{
	public:
		class UCoverStyleData*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned
	 */
	struct UGameplayTask_ScriptedAction_OnActorSpawned_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedCover_TaskScriptedCoverDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover
	 */
	struct UGameplayTask_ScriptedCover_EndScriptedCover_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover
	 */
	struct UGameplayTask_ScriptedCover_BeginScriptedCover_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACover*                                              Cover;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedCover*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedFollow_TaskScriptedMoveDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow
	 */
	struct UGameplayTask_ScriptedFollow_BeginScriptedFollow_Params
	{
	public:
		class AActor*                                              Follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToFollow;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedFollow*                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedLand_TaskScriptedLandDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand
	 */
	struct UGameplayTask_ScriptedLand_BeginScriptedLand_Params
	{
	public:
		class AActor*                                              Lander;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedLand*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedLead_TaskScriptedLeadDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead
	 */
	struct UGameplayTask_ScriptedLead_BeginScriptedLead_Params
	{
	public:
		class AActor*                                              Leader;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DestAINode;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToLead;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedLead*                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedMove_TaskScriptedMoveDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor
	 */
	struct UGameplayTask_ScriptedMove_BeginScriptedMoveActor_Params
	{
	public:
		class AAIController*                                       Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartNode;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalLookAtActor;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedMove*                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2
	 */
	struct UGameplayTask_ScriptedMove_BeginScriptedMove2_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartAINode;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalLookAtActor;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedMove*                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove
	 */
	struct UGameplayTask_ScriptedMove_BeginScriptedMove_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartNode;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        SuccessRule;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        FailRule;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAddSpawned;                                             // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CQVG[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalLookAtActor;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleportOnFail;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WVGA[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameplayTask_ScriptedMove*                          ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedMoveSpline_TaskScriptedMoveDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Targeted;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline
	 */
	struct UGameplayTask_ScriptedMoveSpline_BeginScriptedMoveOnSpline_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartSpline;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        SuccessRule;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        FailRule;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9N82[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Offset;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReverse;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAddSpawned;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9YPO[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalLookAtActor;                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OptionalAIAction;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedMoveSpline*                    ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorsDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceStopped_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceFinished_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequenceMulti_Params
	{
	public:
		TArray<class AActor*>                                      Targets;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class AGbxLevelSequenceActor*                              LevelSequenceActor;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartSequence;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BJTR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedMoveToLevelSequence*           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence
	 */
	struct UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequence_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxLevelSequenceActor*                              LevelSequenceActor;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartSequence;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XAXF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedMoveToLevelSequence*           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature
	 */
	struct UGameplayTask_ScriptedRoute_TaskScriptedMoveDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2
	 */
	struct UGameplayTask_ScriptedRoute_BeginScriptedRoute2_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              FirstAINode;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        SuccessRule;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScriptedActionRule                                        FailRule;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAddSpawned;                                             // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DZTW[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedRoute*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute
	 */
	struct UGameplayTask_ScriptedRoute_BeginScriptedRoute_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              FirstAINode;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ScriptedRoute*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.UnreserveCallback
	 */
	struct UGameplayTask_SmartAction_UnreserveCallback_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.SuccessCallback
	 */
	struct UGameplayTask_SmartAction_SuccessCallback_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.ReserveCallback
	 */
	struct UGameplayTask_SmartAction_ReserveCallback_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.InterruptCallback
	 */
	struct UGameplayTask_SmartAction_InterruptCallback_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.EndSmartAction
	 */
	struct UGameplayTask_SmartAction_EndSmartAction_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.BeginSmartAction
	 */
	struct UGameplayTask_SmartAction_BeginSmartAction_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_SmartAction*                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GameplayTask_SmartAction.BeginCallback
	 */
	struct UGameplayTask_SmartAction_BeginCallback_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature
	 */
	struct UGameplayTask_SmartAction_AITaskEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxAI.GbxAction_Navigation.K2_GetExitLocation
	 */
	struct UGbxAction_Navigation_K2_GetExitLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation
	 */
	struct UGbxAction_Navigation_K2_GetEntryLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAction_NavJump.OnIdle
	 */
	struct UGbxAction_NavJump_OnIdle_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAction_NavJump.OnExit
	 */
	struct UGbxAction_NavJump_OnExit_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAction_NavLerp.OnAlmostDone
	 */
	struct UGbxAction_NavLerp_OnAlmostDone_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI
	 */
	struct UGbxAIBlueprintLibrary_SetPerceivableToAllAI_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPerceivable;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData
	 */
	struct UGbxAIBlueprintLibrary_SetAIPathFindingData_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHavokPathFindingData*                               PathFindingData;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData
	 */
	struct UGbxAIBlueprintLibrary_SetAINavAreaData_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxNavAreaData*                                     NavAreaData;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren
	 */
	struct UGbxAIBlueprintLibrary_ResetTeamForAllAIChildren_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened
	 */
	struct UGbxAIBlueprintLibrary_IsActorThreatened_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation
	 */
	struct UGbxAIBlueprintLibrary_GetValueAsActorAndLocation_Params
	{
	public:
		class UBlackboardComponent*                                Blackboard;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0038(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation
	 */
	struct UGbxAIBlueprintLibrary_GetBlackboardValueAsActorAndLocation_Params
	{
	public:
		class UBTNode*                                             BTNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0038(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon
	 */
	struct UGbxAIBlueprintLibrary_AIScriptedUseWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseWeapon;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction
	 */
	struct UGbxAIBlueprintLibrary_AIScriptedAction_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Action;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory
	 */
	struct UGbxAIBlueprintLibrary_AIIsWithinTerritory_Params
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETerritoryType                                             Zone;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.SetTerritory
	 */
	struct AGbxAIController_SetTerritory_Params
	{
	public:
		class UTerritoryComponent*                                 Territory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.SetTeam
	 */
	struct AGbxAIController_SetTeam_Params
	{
	public:
		class UTeam*                                               Team;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.SetObstacleAvoidanceLock
	 */
	struct AGbxAIController_SetObstacleAvoidanceLock_Params
	{
	public:
		bool                                                       bDisable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2GPL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.ResetTerritoryToDefault
	 */
	struct AGbxAIController_ResetTerritoryToDefault_Params
	{	};

	/**
	 * Function GbxAI.GbxAIController.OnMyWeaponHitSomething
	 */
	struct AGbxAIController_OnMyWeaponHitSomething_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetWeaponUserComponent
	 */
	struct AGbxAIController_GetWeaponUserComponent_Params
	{
	public:
		class UAIWeaponUserComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetUseComponent
	 */
	struct AGbxAIController_GetUseComponent_Params
	{
	public:
		class UAIUseComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetTerritory
	 */
	struct AGbxAIController_GetTerritory_Params
	{
	public:
		class UTerritoryComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetTeamComponent
	 */
	struct AGbxAIController_GetTeamComponent_Params
	{
	public:
		class UTeamComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetTeam
	 */
	struct AGbxAIController_GetTeam_Params
	{
	public:
		class UTeam*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetTargetingComponent
	 */
	struct AGbxAIController_GetTargetingComponent_Params
	{
	public:
		class UTargetingComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetTargetableComponent
	 */
	struct AGbxAIController_GetTargetableComponent_Params
	{
	public:
		class UTargetableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetSpawnerComponent
	 */
	struct AGbxAIController_GetSpawnerComponent_Params
	{
	public:
		class USpawnerComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetSpawner
	 */
	struct AGbxAIController_GetSpawner_Params
	{
	public:
		class ASpawner*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetPerceptionComponent
	 */
	struct AGbxAIController_GetPerceptionComponent_Params
	{
	public:
		class UAIPerceptionComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetNumChildActors
	 */
	struct AGbxAIController_GetNumChildActors_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetNavComponent
	 */
	struct AGbxAIController_GetNavComponent_Params
	{
	public:
		class UGbxNavComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetMovementComponent
	 */
	struct AGbxAIController_GetMovementComponent_Params
	{
	public:
		class UGbxCharacterMovementComponent*                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetGroupState
	 */
	struct AGbxAIController_GetGroupState_Params
	{
	public:
		class UAIGroupState*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetGbxCharacter
	 */
	struct AGbxAIController_GetGbxCharacter_Params
	{
	public:
		class AGbxCharacter*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetGbxActionComponent
	 */
	struct AGbxAIController_GetGbxActionComponent_Params
	{
	public:
		class UGbxActionComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetChildActors
	 */
	struct AGbxAIController_GetChildActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetBlackboardComponent
	 */
	struct AGbxAIController_GetBlackboardComponent_Params
	{
	public:
		class UBlackboardComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetBlackboardAsset
	 */
	struct AGbxAIController_GetBlackboardAsset_Params
	{
	public:
		class UBlackboardData*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetAIGroupSize
	 */
	struct AGbxAIController_GetAIGroupSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetAIGroupList
	 */
	struct AGbxAIController_GetAIGroupList_Params
	{
	public:
		TArray<class AActor*>                                      AIGroupList;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIncludeSelf;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DTXG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InRadius;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.GetAIActionComponent
	 */
	struct AGbxAIController_GetAIActionComponent_Params
	{
	public:
		class UAIActionComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.ChildDestroyed
	 */
	struct AGbxAIController_ChildDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.CheckPauseWhileFalling
	 */
	struct AGbxAIController_CheckPauseWhileFalling_Params
	{
	public:
		class ACharacter*                                          TheCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.AddChildActors
	 */
	struct AGbxAIController_AddChildActors_Params
	{
	public:
		TArray<class AActor*>                                      NewChildren;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAIController.AddChildActor
	 */
	struct AGbxAIController_AddChildActor_Params
	{
	public:
		class AActor*                                              NewChild;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay
	 */
	struct UGbxAnimStateManager_Cover_Owner_PostBeginPlay_Params
	{	};

	/**
	 * Function GbxAI.SmartObject.GetSmartObjectComponent
	 */
	struct ASmartObject_GetSmartObjectComponent_Params
	{
	public:
		class USmartObjectComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObject.GetGbxActionComponent
	 */
	struct ASmartObject_GetGbxActionComponent_Params
	{
	public:
		class UGbxActionComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxSpawner.GetGameplayTasksComponent
	 */
	struct AGbxSpawner_GetGameplayTasksComponent_Params
	{
	public:
		class UGameplayTasksComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxSpawner.GetAINodeComponent
	 */
	struct AGbxSpawner_GetAINodeComponent_Params
	{
	public:
		class UAINodeComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxSpawner.GetAIGroupState
	 */
	struct AGbxSpawner_GetAIGroupState_Params
	{
	public:
		class UAIGroupState*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened
	 */
	struct AGbxSpawner_DEPRECATED_IsThreatened_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor
	 */
	struct AGbxSpawnPoint_HasNavNearSpawnPointFor_Params
	{
	public:
		class USpawnPointComponent*                                SpawnPointComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort
	 */
	struct UScriptedBehaviorTreeLibrary_PerformScriptedAbort_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopImmediately;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait
	 */
	struct UScriptedBehaviorTreeLibrary_BeginScriptedWait_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook
	 */
	struct UScriptedBehaviorTreeLibrary_BeginScriptedLook_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              LookAtActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAimAtActor;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFireWeaponAtActor;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4WZB[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStanceDataProvider*                                 OptionalStance;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject
	 */
	struct USmartObjectBlueprintLibrary_UseSmartObject_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SmartObject;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActionTag;                                               // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAbortExisting;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUntilInterrupted;                                       // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse
	 */
	struct USmartObjectBlueprintLibrary_AbortSmartObjectUse_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.UnreserveEventSignature
	 */
	struct USmartObjectComponent_UnreserveEventSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.ToggleActionSet
	 */
	struct USmartObjectComponent_ToggleActionSet_Params
	{
	public:
		struct FSmartObjectActionSet                               ActionSet;                                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.SuccessEventSignature
	 */
	struct USmartObjectComponent_SuccessEventSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.ReserveEventSignature
	 */
	struct USmartObjectComponent_ReserveEventSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.OnActionEnded
	 */
	struct USmartObjectComponent_OnActionEnded_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KJIX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ActionName;                                              // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         User;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.InterruptEventSignature
	 */
	struct USmartObjectComponent_InterruptEventSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.GetAvailableSocketNames
	 */
	struct USmartObjectComponent_GetAvailableSocketNames_Params
	{
	public:
		TArray<class FName>                                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.GetActionUsers
	 */
	struct USmartObjectComponent_GetActionUsers_Params
	{
	public:
		struct FGameplayTag                                        ActionTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       OutUsers;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.EnableAllActions
	 */
	struct USmartObjectComponent_EnableAllActions_Params
	{	};

	/**
	 * Function GbxAI.SmartObjectComponent.EnableAction
	 */
	struct USmartObjectComponent_EnableAction_Params
	{
	public:
		struct FGameplayTag                                        ActionTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.DisableAllActions
	 */
	struct USmartObjectComponent_DisableAllActions_Params
	{	};

	/**
	 * Function GbxAI.SmartObjectComponent.DisableAction
	 */
	struct USmartObjectComponent_DisableAction_Params
	{
	public:
		struct FGameplayTag                                        ActionTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectComponent.BeginEventSignature
	 */
	struct USmartObjectComponent_BeginEventSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SmartObjectPreviewComponent.OnReplayAction
	 */
	struct USmartObjectPreviewComponent_OnReplayAction_Params
	{	};

	/**
	 * Function GbxAI.SmartObjectPreviewComponent.OnCycleActor
	 */
	struct USmartObjectPreviewComponent_OnCycleActor_Params
	{
	public:
		ECycleDirection                                            Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions
	 */
	struct USpawnBlueprintLibrary_SetSpawnOptions_Params
	{
	public:
		class AActor*                                              SpawnerActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius
	 */
	struct USpawnBlueprintLibrary_GenerateSpawnerByRadius_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnerStyle*                                       Style;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeamAttitude                                              MinRequiredAttitude;                                     // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U23G[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASpawner*                                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner
	 */
	struct USpawnBlueprintLibrary_GenerateSpawnerByOwningSpawner_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USpawnerStyle*                                       Style;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASpawner*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAI.Territory.GetTerritoryComponent
	 */
	struct ATerritory_GetTerritoryComponent_Params
	{
	public:
		class UTerritoryComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
