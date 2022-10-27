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
	 * Function GroundBranch.GBAIBarkManager.Bark
	 */
	struct AGBAIBarkManager_Bark_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BarkType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BarkKey;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.UpdateEquippedType
	 */
	struct AGBAIController_UpdateEquippedType_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.UnFreeze
	 */
	struct AGBAIController_UnFreeze_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.StopFiring
	 */
	struct AGBAIController_StopFiring_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.StartFiring
	 */
	struct AGBAIController_StartFiring_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.ShowDebugInfoEvent
	 */
	struct AGBAIController_ShowDebugInfoEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.SetViewRotation
	 */
	struct AGBAIController_SetViewRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetSquad
	 */
	struct AGBAIController_SetSquad_Params
	{
	public:
		class AGBAISquad*                                          NewSquad;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetIdleSuspicionSightThreshold
	 */
	struct AGBAIController_SetIdleSuspicionSightThreshold_Params
	{
	public:
		float                                                      NewIdleSuspicionSightThreshold;                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetIdleHearingThreshold
	 */
	struct AGBAIController_SetIdleHearingThreshold_Params
	{
	public:
		float                                                      NewIdleHearingThreshold;                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetIdleAffiliationSightThreshold
	 */
	struct AGBAIController_SetIdleAffiliationSightThreshold_Params
	{
	public:
		float                                                      NewIdleAffiliationSightThreshold;                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyPartSeen
	 */
	struct AGBAIController_SetEnemyPartSeen_Params
	{
	public:
		class FName                                                NewEnemyPartSeen;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyLOS
	 */
	struct AGBAIController_SetEnemyLOS_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyLastStimulusTime
	 */
	struct AGBAIController_SetEnemyLastStimulusTime_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyLastKnownLocation
	 */
	struct AGBAIController_SetEnemyLastKnownLocation_Params
	{
	public:
		struct FVector                                             NewValue;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyLastKnownDirection
	 */
	struct AGBAIController_SetEnemyLastKnownDirection_Params
	{
	public:
		struct FVector                                             NewValue;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemyDistance
	 */
	struct AGBAIController_SetEnemyDistance_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetEnemy
	 */
	struct AGBAIController_SetEnemy_Params
	{
	public:
		class AGBCharacter*                                        NewEnemy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetDesiredViewRotationOffset
	 */
	struct AGBAIController_SetDesiredViewRotationOffset_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetDesiredAimRotationOverride
	 */
	struct AGBAIController_SetDesiredAimRotationOverride_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewRate;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetAlertSuspicionSightThreshold
	 */
	struct AGBAIController_SetAlertSuspicionSightThreshold_Params
	{
	public:
		float                                                      NewAlertSuspicionSightThreshold;                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetAlertHearingThreshold
	 */
	struct AGBAIController_SetAlertHearingThreshold_Params
	{
	public:
		float                                                      NewAlertHearingThreshold;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetAlertAffiliationSightThreshold
	 */
	struct AGBAIController_SetAlertAffiliationSightThreshold_Params
	{
	public:
		float                                                      NewAlertAffiliationSightThreshold;                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.SetAIState
	 */
	struct AGBAIController_SetAIState_Params
	{
	public:
		EGBAIState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.Reload
	 */
	struct AGBAIController_Reload_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.OnTargetPerceptionUpdated
	 */
	struct AGBAIController_OnTargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.OnSensingNewEnemyEvent
	 */
	struct AGBAIController_OnSensingNewEnemyEvent_Params
	{
	public:
		bool                                                       bHasLineOfSight;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.OnSensingEnemyDeathEvent
	 */
	struct AGBAIController_OnSensingEnemyDeathEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.OnNoLongerSensingEnemyEvent
	 */
	struct AGBAIController_OnNoLongerSensingEnemyEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.OnLoadoutApplied
	 */
	struct AGBAIController_OnLoadoutApplied_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.NotifyWalkingOffLedge
	 */
	struct AGBAIController_NotifyWalkingOffLedge_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.NotifyTakeHit
	 */
	struct AGBAIController_NotifyTakeHit_Params
	{
	public:
		class AController*                                         InstigatedBy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Momentum;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.NotifyBump
	 */
	struct AGBAIController_NotifyBump_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.NeedsReload
	 */
	struct AGBAIController_NeedsReload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.IsFrozen
	 */
	struct AGBAIController_IsFrozen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.IsAlive
	 */
	struct AGBAIController_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetViewRotationOffset
	 */
	struct AGBAIController_GetViewRotationOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetViewRotation
	 */
	struct AGBAIController_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetSquad
	 */
	struct AGBAIController_GetSquad_Params
	{
	public:
		class AGBAISquad*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetReactionTimeRandom
	 */
	struct AGBAIController_GetReactionTimeRandom_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetReactionTimeBase
	 */
	struct AGBAIController_GetReactionTimeBase_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetPathCorridorPoints
	 */
	struct AGBAIController_GetPathCorridorPoints_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetOnTarget
	 */
	struct AGBAIController_GetOnTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetNextPathLocation
	 */
	struct AGBAIController_GetNextPathLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetNextPathCorridorPoint
	 */
	struct AGBAIController_GetNextPathCorridorPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetNavLinkPoints
	 */
	struct AGBAIController_GetNavLinkPoints_Params
	{
	public:
		int32_t                                                    CorridorIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinkStart;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinkEnd;                                                 // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetMinFullAutoBurst
	 */
	struct AGBAIController_GetMinFullAutoBurst_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetMinDelayBetweenBursts
	 */
	struct AGBAIController_GetMinDelayBetweenBursts_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetMaxSemiAutoBurst
	 */
	struct AGBAIController_GetMaxSemiAutoBurst_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetMaxFullAutoBurst
	 */
	struct AGBAIController_GetMaxFullAutoBurst_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetMaxDelayBetweenBursts
	 */
	struct AGBAIController_GetMaxDelayBetweenBursts_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetLastBark
	 */
	struct AGBAIController_GetLastBark_Params
	{
	public:
		struct FAIBark                                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetGBCharacter
	 */
	struct AGBAIController_GetGBCharacter_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyPartSeen
	 */
	struct AGBAIController_GetEnemyPartSeen_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyLOS
	 */
	struct AGBAIController_GetEnemyLOS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyLastStimulusTime
	 */
	struct AGBAIController_GetEnemyLastStimulusTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyLastKnownLocation
	 */
	struct AGBAIController_GetEnemyLastKnownLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyLastKnownDirection
	 */
	struct AGBAIController_GetEnemyLastKnownDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemyDistance
	 */
	struct AGBAIController_GetEnemyDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetEnemy
	 */
	struct AGBAIController_GetEnemy_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetCurrentPathCorridorIndex
	 */
	struct AGBAIController_GetCurrentPathCorridorIndex_Params
	{
	public:
		int32_t                                                    CorridorIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetCanSuppressEnemy
	 */
	struct AGBAIController_GetCanSuppressEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetBehaviorComp
	 */
	struct AGBAIController_GetBehaviorComp_Params
	{
	public:
		class UBehaviorTreeComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.GetAIState
	 */
	struct AGBAIController_GetAIState_Params
	{
	public:
		EGBAIState                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.FrozenTimeLeft
	 */
	struct AGBAIController_FrozenTimeLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.Freeze
	 */
	struct AGBAIController_Freeze_Params
	{
	public:
		float                                                      FreezeTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.DebugFreeze
	 */
	struct AGBAIController_DebugFreeze_Params
	{
	public:
		bool                                                       bShouldFreeze;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.ClearDesiredViewRotationOffset
	 */
	struct AGBAIController_ClearDesiredViewRotationOffset_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.ClearDesiredAimRotationOverride
	 */
	struct AGBAIController_ClearDesiredAimRotationOverride_Params
	{	};

	/**
	 * Function GroundBranch.GBAIController.BulletWarn
	 */
	struct AGBAIController_BulletWarn_Params
	{
	public:
		class AActor*                                              Bullet;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSubSonic;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIController.Bark
	 */
	struct AGBAIController_Bark_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadioMessage;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIFunctionLibrary.GetBlackboardValueAsLocation
	 */
	struct UGBAIFunctionLibrary_GetBlackboardValueAsLocation_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIFunctionLibrary.GetBlackboardValueAsDirection
	 */
	struct UGBAIFunctionLibrary_GetBlackboardValueAsDirection_Params
	{
	public:
		class UBTNode*                                             NodeOwner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlackboardKeySelector                              Key;                                                     // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAs2d;                                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ODRY[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIFunctionLibrary.GetAIControllersOfClass
	 */
	struct UGBAIFunctionLibrary_GetAIControllersOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              AIControllerClass;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AAIController*>                               OutAIControllers;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIFunctionLibrary.ForgetAll
	 */
	struct UGBAIFunctionLibrary_ForgetAll_Params
	{
	public:
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetTurnRate
	 */
	struct AGBAIGuardPoint_GetTurnRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetSweepAngle
	 */
	struct AGBAIGuardPoint_GetSweepAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetScanDuration
	 */
	struct AGBAIGuardPoint_GetScanDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetHoldTime
	 */
	struct AGBAIGuardPoint_GetHoldTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetHoldDeviation
	 */
	struct AGBAIGuardPoint_GetHoldDeviation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetGroupName
	 */
	struct AGBAIGuardPoint_GetGroupName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetDeviation
	 */
	struct AGBAIGuardPoint_GetDeviation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIGuardPoint.GetBaseViewRoation
	 */
	struct AGBAIGuardPoint_GetBaseViewRoation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIPatrolRoute.GetLinkedPatrolRoutes
	 */
	struct AGBAIPatrolRoute_GetLinkedPatrolRoutes_Params
	{
	public:
		TArray<class AGBAIPatrolRoute*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAIPatrolRoute.GenerateLinkedPatrolRoutes
	 */
	struct AGBAIPatrolRoute_GenerateLinkedPatrolRoutes_Params
	{	};

	/**
	 * Function GroundBranch.GBAISense_Hearing.ReportNoiseEvent
	 */
	struct UGBAISense_Hearing_ReportNoiseEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NoiseLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Loudness;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISettings.SetAISettingsForSkillLevel
	 */
	struct UGBAISettings_SetAISettingsForSkillLevel_Params
	{
	public:
		int32_t                                                    InSkillLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InFloat;                                                 // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              inString;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlushAfterSaving;                                       // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISettings.GetAISettingsForSkillLevel
	 */
	struct UGBAISettings_GetAISettingsForSkillLevel_Params
	{
	public:
		int32_t                                                    SkillLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IAQ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBAISettingsInfo                                   ReturnValue;                                             // 0x0008(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISettings.FlushConfigAfterSavingAISettings
	 */
	struct UGBAISettings_FlushConfigAfterSavingAISettings_Params
	{	};

	/**
	 * DelegateFunction GroundBranch.GBAISpawnManager.OnAIControllerChange__DelegateSignature
	 */
	struct AGBAISpawnManager_OnAIControllerChange__DelegateSignature_Params
	{	};

	/**
	 * Function GroundBranch.GBAISpawnManager.KillAI
	 */
	struct AGBAISpawnManager_KillAI_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnManager.GetAIControllers
	 */
	struct AGBAISpawnManager_GetAIControllers_Params
	{
	public:
		class UClass*                                              ControllerClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamId;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              SquadId;                                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9Y5O[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBAIController*>                             ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnManager.CreateOverDurationTimer
	 */
	struct AGBAISpawnManager_CreateOverDurationTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBAISpawnManager.CreateAIOverDuration
	 */
	struct AGBAISpawnManager_CreateAIOverDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBAISpawnPoint*>                             OrderedSpawnPoints;                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnManager.CleanUpAI
	 */
	struct AGBAISpawnManager_CleanUpAI_Params
	{
	public:
		class FName                                                AIControllerTag;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.SetSquadOrders
	 */
	struct AGBAISpawnPoint_SetSquadOrders_Params
	{
	public:
		class FName                                                NewSquadOrders;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.SetSquadId
	 */
	struct AGBAISpawnPoint_SetSquadId_Params
	{
	public:
		int32_t                                                    NewSquadId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.SetLoadoutFileName
	 */
	struct AGBAISpawnPoint_SetLoadoutFileName_Params
	{
	public:
		class FString                                              NewLoadoutFileName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.GetSquadOrders
	 */
	struct AGBAISpawnPoint_GetSquadOrders_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.GetSquadId
	 */
	struct AGBAISpawnPoint_GetSquadId_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.GetLoadoutInfo
	 */
	struct AGBAISpawnPoint_GetLoadoutInfo_Params
	{
	public:
		class AGBKitInfo*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.GetLoadoutFileName
	 */
	struct AGBAISpawnPoint_GetLoadoutFileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.CreateCharacter
	 */
	struct AGBAISpawnPoint_CreateCharacter_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISpawnPoint.CreateAI
	 */
	struct AGBAISpawnPoint_CreateAI_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBAIController*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.UpdateSquadObjective
	 */
	struct AGBAISquad_UpdateSquadObjective_Params
	{	};

	/**
	 * Function GroundBranch.GBAISquad.SetSquadOrdersTarget
	 */
	struct AGBAISquad_SetSquadOrdersTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetSquadOrders
	 */
	struct AGBAISquad_SetSquadOrders_Params
	{
	public:
		class FName                                                NewOrders;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetSquadLeader
	 */
	struct AGBAISquad_SetSquadLeader_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetSquadId
	 */
	struct AGBAISquad_SetSquadId_Params
	{
	public:
		unsigned char                                              NewSquadId;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetPatrolRoute
	 */
	struct AGBAISquad_SetPatrolRoute_Params
	{
	public:
		class AGBAIPatrolRoute*                                    NewPatrolRoute;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetGuardPointVisitedBy
	 */
	struct AGBAISquad_SetGuardPointVisitedBy_Params
	{
	public:
		class AGBAIGuardPoint*                                     GuardPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBAIController*                                     AIController;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.SetAIStateBySquadOrders
	 */
	struct AGBAISquad_SetAIStateBySquadOrders_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.RemoveSquadMember
	 */
	struct AGBAISquad_RemoveSquadMember_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.IsSquadMember
	 */
	struct AGBAISquad_IsSquadMember_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.InternalUpdateSquadSeparationWeights
	 */
	struct AGBAISquad_InternalUpdateSquadSeparationWeights_Params
	{	};

	/**
	 * Function GroundBranch.GBAISquad.GetSquadOrdersTarget
	 */
	struct AGBAISquad_GetSquadOrdersTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetSquadOrders
	 */
	struct AGBAISquad_GetSquadOrders_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetSquadMembers
	 */
	struct AGBAISquad_GetSquadMembers_Params
	{
	public:
		TArray<class AController*>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetSquadLeader
	 */
	struct AGBAISquad_GetSquadLeader_Params
	{
	public:
		class AController*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetSquadId
	 */
	struct AGBAISquad_GetSquadId_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetSearchedLocations
	 */
	struct AGBAISquad_GetSearchedLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetPatrolRoute
	 */
	struct AGBAISquad_GetPatrolRoute_Params
	{
	public:
		class AGBAIPatrolRoute*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetNextPatrolPosition
	 */
	struct AGBAISquad_GetNextPatrolPosition_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.GetNextGuardPoint
	 */
	struct AGBAISquad_GetNextGuardPoint_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBAIGuardPoint*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.FindNearestPatrolRoute
	 */
	struct AGBAISquad_FindNearestPatrolRoute_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F492[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGBAIPatrolRoute*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.ClearSearchedLocations
	 */
	struct AGBAISquad_ClearSearchedLocations_Params
	{	};

	/**
	 * Function GroundBranch.GBAISquad.AddSquadMember
	 */
	struct AGBAISquad_AddSquadMember_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAISquad.AddSearchedLocation
	 */
	struct AGBAISquad_AddSearchedLocation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ValidateDecodedItem
	 */
	struct AGBItem_ValidateDecodedItem_Params
	{
	public:
		class FString                                              OutFailureReason;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.UseOffHandReleased
	 */
	struct AGBItem_UseOffHandReleased_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UseOffHandPressed
	 */
	struct AGBItem_UseOffHandPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UseMainHandReleased
	 */
	struct AGBItem_UseMainHandReleased_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UseMainHandPressed
	 */
	struct AGBItem_UseMainHandPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UseInputDisabled
	 */
	struct AGBItem_UseInputDisabled_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UpdateWetness
	 */
	struct AGBItem_UpdateWetness_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InLocation;                                              // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.UpdateSkin
	 */
	struct AGBItem_UpdateSkin_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.UpdateCameraPOV
	 */
	struct AGBItem_UpdateCameraPOV_Params
	{
	public:
		class AGBPlayerController*                                 GBPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CameraLocation;                                          // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            CameraRotation;                                          // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      CameraFOV;                                               // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                CameraStyle;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraLocation;                                       // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutCameraRotation;                                       // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OutCameraFOV;                                            // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.UnbindSyncCharAnim
	 */
	struct AGBItem_UnbindSyncCharAnim_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.StopUsing
	 */
	struct AGBItem_StopUsing_Params
	{
	public:
		unsigned char                                              UseType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.StartUsing
	 */
	struct AGBItem_StartUsing_Params
	{
	public:
		unsigned char                                              UseType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SpawnItem
	 */
	struct AGBItem_SpawnItem_Params
	{
	public:
		class UClass*                                              NewItemClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewItemOwner;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ShouldInheritSkin
	 */
	struct AGBItem_ShouldInheritSkin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SetupSightComponents
	 */
	struct AGBItem_SetupSightComponents_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.SetSkinName
	 */
	struct AGBItem_SetSkinName_Params
	{
	public:
		class FName                                                NewSkinName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SetItemMID
	 */
	struct AGBItem_SetItemMID_Params
	{
	public:
		class UMaterialInstanceDynamic*                            NewItemMID;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SetInventorySlotPosition
	 */
	struct AGBItem_SetInventorySlotPosition_Params
	{
	public:
		int32_t                                                    NewInventorySlotPosition;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SetInventorySlot
	 */
	struct AGBItem_SetInventorySlot_Params
	{
	public:
		int32_t                                                    NewInventorySlot;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.SetAllowKitEncoding
	 */
	struct AGBItem_SetAllowKitEncoding_Params
	{
	public:
		bool                                                       bNewAlloKitEncoding;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ServerStopUsing
	 */
	struct AGBItem_ServerStopUsing_Params
	{
	public:
		unsigned char                                              UseType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ServerStartUsing
	 */
	struct AGBItem_ServerStartUsing_Params
	{
	public:
		unsigned char                                              UseType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.RemoveFromInventory
	 */
	struct AGBItem_RemoveFromInventory_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.RemovedFromItem
	 */
	struct AGBItem_RemovedFromItem_Params
	{
	public:
		class AGBItem*                                             OldParentItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     OldParentComp;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OldParentSocket;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.RemovedFromCharacter
	 */
	struct AGBItem_RemovedFromCharacter_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OldSocketName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ReloadReleased
	 */
	struct AGBItem_ReloadReleased_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.ReloadPressed
	 */
	struct AGBItem_ReloadPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.Refill
	 */
	struct AGBItem_Refill_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.PrevPosPressed
	 */
	struct AGBItem_PrevPosPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.PreEncodeCheck
	 */
	struct AGBItem_PreEncodeCheck_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.PostDecode
	 */
	struct AGBItem_PostDecode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.PositionAlphaMet
	 */
	struct AGBItem_PositionAlphaMet_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.PlayLocalSound
	 */
	struct AGBItem_PlayLocalSound_Params
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.PlaceAt
	 */
	struct AGBItem_PlaceAt_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AGBDroppedItem*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnSyncCharAnim
	 */
	struct AGBItem_OnSyncCharAnim_Params
	{
	public:
		class FName                                                SyncName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsStopped;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CT5H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      position;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NextSectionID;                                           // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnStopUsing
	 */
	struct AGBItem_OnStopUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnStartUsing
	 */
	struct AGBItem_OnStartUsing_Params
	{
	public:
		int32_t                                                    UseType;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnRep_SkinName
	 */
	struct AGBItem_OnRep_SkinName_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnRemovingChild
	 */
	struct AGBItem_OnRemovingChild_Params
	{
	public:
		class AGBItem*                                             RemovedChild;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnRemovedFromItem
	 */
	struct AGBItem_OnRemovedFromItem_Params
	{
	public:
		class AGBItem*                                             OldParentItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     OldParentComp;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OldParentSocket;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnRemovedFromInventoryEvent
	 */
	struct AGBItem_OnRemovedFromInventoryEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnRemovedFromCharacter
	 */
	struct AGBItem_OnRemovedFromCharacter_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OldSocketName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnLoadAssetsComplete
	 */
	struct AGBItem_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnBeingUnequipped
	 */
	struct AGBItem_OnBeingUnequipped_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnBeingEquipped
	 */
	struct AGBItem_OnBeingEquipped_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnBeingDropped
	 */
	struct AGBItem_OnBeingDropped_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnAddingChild
	 */
	struct AGBItem_OnAddingChild_Params
	{
	public:
		class AGBItem*                                             AddedChild;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnAddedToItem
	 */
	struct AGBItem_OnAddedToItem_Params
	{
	public:
		class AGBItem*                                             NewParentItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.OnAddedToInventoryEvent
	 */
	struct AGBItem_OnAddedToInventoryEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.OnAddedToCharacter
	 */
	struct AGBItem_OnAddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.NextPosPressed
	 */
	struct AGBItem_NextPosPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.IsStackable
	 */
	struct AGBItem_IsStackable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.IsEquipped
	 */
	struct AGBItem_IsEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.InventoryModifiersUpdated
	 */
	struct AGBItem_InventoryModifiersUpdated_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.IncreaseSightMagnificationPressed
	 */
	struct AGBItem_IncreaseSightMagnificationPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.IncreaseReticleBrightnessLevel
	 */
	struct AGBItem_IncreaseReticleBrightnessLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.GetWeaponsPositionTransitionTime
	 */
	struct AGBItem_GetWeaponsPositionTransitionTime_Params
	{
	public:
		EGBWeaponPosition                                          FromPosition;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGBWeaponPosition                                          ToPosition;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1KO0[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetUnequipInfo
	 */
	struct AGBItem_GetUnequipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D0ZR[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutUnequipInfo;                                          // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetStatKey
	 */
	struct AGBItem_GetStatKey_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetStaminaMultipliers
	 */
	struct AGBItem_GetStaminaMultipliers_Params
	{
	public:
		float                                                      RecoveryMultipler;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ExhaustionMultipler;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetSkinName
	 */
	struct AGBItem_GetSkinName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetSkinMaterialPrefix
	 */
	struct AGBItem_GetSkinMaterialPrefix_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetPositionAlphaTargets
	 */
	struct AGBItem_GetPositionAlphaTargets_Params
	{
	public:
		float                                                      TargetEngagedAlpha;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetOffTargetAlpha;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutTargetEngagedAlpha;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutTargetOffTargetAlpha;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutOffTargetInterpSpeed;                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetParentItem
	 */
	struct AGBItem_GetParentItem_Params
	{
	public:
		class AGBItem*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetItemWeight
	 */
	struct AGBItem_GetItemWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetItemMID
	 */
	struct AGBItem_GetItemMID_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetItemAssetType
	 */
	struct AGBItem_GetItemAssetType_Params
	{
	public:
		struct FPrimaryAssetType                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetInventorySlotWidget
	 */
	struct AGBItem_GetInventorySlotWidget_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetInventorySlotPosition
	 */
	struct AGBItem_GetInventorySlotPosition_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetInventorySlot
	 */
	struct AGBItem_GetInventorySlot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetIcon
	 */
	struct AGBItem_GetIcon_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.GetHiddenComponents
	 */
	struct AGBItem_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetHandEnum
	 */
	struct AGBItem_GetHandEnum_Params
	{
	public:
		EHand                                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetGBInstigator
	 */
	struct AGBItem_GetGBInstigator_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetEquipTags
	 */
	struct AGBItem_GetEquipTags_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_20ME[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetEquippedTags
	 */
	struct AGBItem_GetEquippedTags_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U5AZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetEquipInfo
	 */
	struct AGBItem_GetEquipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJ5Z[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutEquipInfo;                                            // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetDragDropOperation
	 */
	struct AGBItem_GetDragDropOperation_Params
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetDisplayName
	 */
	struct AGBItem_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetDefaultPouchType
	 */
	struct AGBItem_GetDefaultPouchType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetCustomisationWidget
	 */
	struct AGBItem_GetCustomisationWidget_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetCurrentSight
	 */
	struct AGBItem_GetCurrentSight_Params
	{
	public:
		class UGBSightComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetChildren
	 */
	struct AGBItem_GetChildren_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetChildItemAttachedTo
	 */
	struct AGBItem_GetChildItemAttachedTo_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetCachedPrimaryAssetId
	 */
	struct AGBItem_GetCachedPrimaryAssetId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetBaseItem
	 */
	struct AGBItem_GetBaseItem_Params
	{
	public:
		class AGBItem*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GetAllChildren
	 */
	struct AGBItem_GetAllChildren_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.GatherAssets
	 */
	struct AGBItem_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ForceLODZero
	 */
	struct AGBItem_ForceLODZero_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.FindParentItems
	 */
	struct AGBItem_FindParentItems_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.EncodeKit
	 */
	struct AGBItem_EncodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.EditItemSetup
	 */
	struct AGBItem_EditItemSetup_Params
	{
	public:
		class AGBCharacter*                                        UICharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.DoDropFrom
	 */
	struct AGBItem_DoDropFrom_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InVelocity;                                              // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InAngularVelocity;                                       // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBDroppedItem*                                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.DenyUnequip
	 */
	struct AGBItem_DenyUnequip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.DenyDrop
	 */
	struct AGBItem_DenyDrop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.DefaultSetup
	 */
	struct AGBItem_DefaultSetup_Params
	{
	public:
		class AActor*                                              ActorOwner;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                KitProfileName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.DecreaseSightMagnificationPressed
	 */
	struct AGBItem_DecreaseSightMagnificationPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.DecreaseReticleBrightnessLevel
	 */
	struct AGBItem_DecreaseReticleBrightnessLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.DecodeKit
	 */
	struct AGBItem_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.CycleReticleColour
	 */
	struct AGBItem_CycleReticleColour_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.ClientRemoveFromInventory
	 */
	struct AGBItem_ClientRemoveFromInventory_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ClientForceDestroy
	 */
	struct AGBItem_ClientForceDestroy_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.ClientAddToInventory
	 */
	struct AGBItem_ClientAddToInventory_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.CharacterDestroyed
	 */
	struct AGBItem_CharacterDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ChangeOwnerOnlyRelevancy
	 */
	struct AGBItem_ChangeOwnerOnlyRelevancy_Params
	{
	public:
		bool                                                       bOnlyOwner;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.ChangeFiringModeReleased
	 */
	struct AGBItem_ChangeFiringModeReleased_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.ChangeFiringModePressed
	 */
	struct AGBItem_ChangeFiringModePressed_Params
	{	};

	/**
	 * Function GroundBranch.GBItem.CanPassOnSkin
	 */
	struct AGBItem_CanPassOnSkin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.CanBeAddedAsChild
	 */
	struct AGBItem_CanBeAddedAsChild_Params
	{
	public:
		class AGBItem*                                             PotentialParent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.CanAddToCharacter
	 */
	struct AGBItem_CanAddToCharacter_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.CanAddChild
	 */
	struct AGBItem_CanAddChild_Params
	{
	public:
		class AGBItem*                                             PotentialChild;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.BP_DetachItemFrom
	 */
	struct AGBItem_BP_DetachItemFrom_Params
	{
	public:
		EDetachmentRule                                            LocationRule;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDetachmentRule                                            RotationRule;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.BP_AttachItemTo
	 */
	struct AGBItem_BP_AttachItemTo_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachmentRule                                            LocationRule;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachmentRule                                            RotationRule;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.BindSyncCharAnim
	 */
	struct AGBItem_BindSyncCharAnim_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.AllowUsageWhileAttached
	 */
	struct AGBItem_AllowUsageWhileAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.AddToInventory
	 */
	struct AGBItem_AddToInventory_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.AddedToItem
	 */
	struct AGBItem_AddedToItem_Params
	{
	public:
		class AGBItem*                                             NewParentItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.AddedToCharacter
	 */
	struct AGBItem_AddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItem.AddAttachedUseMenuEntries
	 */
	struct AGBItem_AddAttachedUseMenuEntries_Params
	{
	public:
		class UUserWidget*                                         UsageMenu;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.UseRound
	 */
	struct UGBAmmunitionFeedComponent_UseRound_Params
	{	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.SetBulletItemClass
	 */
	struct UGBAmmunitionFeedComponent_SetBulletItemClass_Params
	{
	public:
		class UClass*                                              NewBulletItemClass;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.IsEmpty
	 */
	struct UGBAmmunitionFeedComponent_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.GetTotalAvailableCount
	 */
	struct UGBAmmunitionFeedComponent_GetTotalAvailableCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.GetBulletProjectileClass
	 */
	struct UGBAmmunitionFeedComponent_GetBulletProjectileClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.GetBaseBulletProjectileClasses
	 */
	struct UGBAmmunitionFeedComponent_GetBaseBulletProjectileClasses_Params
	{
	public:
		TArray<class UClass*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.GetBaseBulletItemClass
	 */
	struct UGBAmmunitionFeedComponent_GetBaseBulletItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAmmunitionFeedComponent.Fill
	 */
	struct UGBAmmunitionFeedComponent_Fill_Params
	{	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.TransformToBoneSpace
	 */
	struct UGBAnimFunctionLibrary_TransformToBoneSpace_Params
	{
	public:
		class UAnimInstance*                                       Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             position;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutPosition;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutRotation;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.TransformFromBoneSpace
	 */
	struct UGBAnimFunctionLibrary_TransformFromBoneSpace_Params
	{
	public:
		class UAnimInstance*                                       Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             position;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutPosition;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutRotation;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.GetSequenceLength
	 */
	struct UGBAnimFunctionLibrary_GetSequenceLength_Params
	{
	public:
		class UAnimSequenceBase*                                   TargetSeq;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.GetRateForPlayTime
	 */
	struct UGBAnimFunctionLibrary_GetRateForPlayTime_Params
	{
	public:
		class UAnimSequenceBase*                                   TargetSeq;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayTime;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.GetBoneTransformAtTime
	 */
	struct UGBAnimFunctionLibrary_GetBoneTransformAtTime_Params
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AnimTime;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseRawDataOnly;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4JKQ[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimFunctionLibrary.FindPositionFromDistanceCurve
	 */
	struct UGBAnimFunctionLibrary_FindPositionFromDistanceCurve_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JM0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequenceBase*                                   InAnimSequence;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateTickName
	 */
	struct UGBAnimNotifyInterface_NotifyStateTickName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FrameDeltaTime;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateTickEnum
	 */
	struct UGBAnimNotifyInterface_NotifyStateTickEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5RAS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FrameDeltaTime;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateEndName
	 */
	struct UGBAnimNotifyInterface_NotifyStateEndName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateEndEnum
	 */
	struct UGBAnimNotifyInterface_NotifyStateEndEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateBeginName
	 */
	struct UGBAnimNotifyInterface_NotifyStateBeginName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyStateBeginEnum
	 */
	struct UGBAnimNotifyInterface_NotifyStateBeginEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyName
	 */
	struct UGBAnimNotifyInterface_NotifyName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAnimNotifyInterface.NotifyEnum
	 */
	struct UGBAnimNotifyInterface_NotifyEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManager.BlueprintAsyncLoadAssets
	 */
	struct UGBAssetManager_BlueprintAsyncLoadAssets_Params
	{
	public:
		unsigned char                                              UnknownData_4QHO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnAsyncLoadAssetsComplete;                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManager.BlueprintAsyncLoadAssetPaths
	 */
	struct UGBAssetManager_BlueprintAsyncLoadAssetPaths_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             SoftObjectPaths;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnAsyncLoadAssetsComplete;                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManager.BlueprintAsyncLoadAssetPath
	 */
	struct UGBAssetManager_BlueprintAsyncLoadAssetPath_Params
	{
	public:
		struct FSoftObjectPath                                     SoftObjectPath;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnAsyncLoadAssetComplete;                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManager.BlueprintAsyncLoadAsset
	 */
	struct UGBAssetManager_BlueprintAsyncLoadAsset_Params
	{
	public:
		unsigned char                                              UnknownData_1XZ4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnAsyncLoadAssetComplete;                                // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.SortPrimaryAssetIdList
	 */
	struct UGBAssetManagerFunctionLibrary_SortPrimaryAssetIdList_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             InPrimaryAssetIdList;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SortTag;                                                 // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             OutPrimaryAssetIdList;                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.RestrictedPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_RestrictedPrimaryAsset_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.RestrictedAssetPtr
	 */
	struct UGBAssetManagerFunctionLibrary_RestrictedAssetPtr_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssetTypeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NE5L[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.RestrictedAsset
	 */
	struct UGBAssetManagerFunctionLibrary_RestrictedAsset_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssetTypeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     ObjectPath;                                              // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.HasRestrictedAssets
	 */
	struct UGBAssetManagerFunctionLibrary_HasRestrictedAssets_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssetTypeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetValidSkinNames
	 */
	struct UGBAssetManagerFunctionLibrary_GetValidSkinNames_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssetTypeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SkinMaterialPrefix;                                      // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetValidSkinDataAssets
	 */
	struct UGBAssetManagerFunctionLibrary_GetValidSkinDataAssets_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AssetTypeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SkinMaterialPrefix;                                      // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetSortedPrimaryAssetIdList
	 */
	struct UGBAssetManagerFunctionLibrary_GetSortedPrimaryAssetIdList_Params
	{
	public:
		struct FPrimaryAssetType                                   PrimaryAssetType;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SortTag;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             OutPrimaryAssetIdList;                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetSkinNames
	 */
	struct UGBAssetManagerFunctionLibrary_GetSkinNames_Params
	{
	public:
		class FName                                                SkinMaterialPrefix;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetSkinMaterial
	 */
	struct UGBAssetManagerFunctionLibrary_GetSkinMaterial_Params
	{
	public:
		class FName                                                SkinMaterialPrefix;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SkinName;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetSimilarSkinNames
	 */
	struct UGBAssetManagerFunctionLibrary_GetSimilarSkinNames_Params
	{
	public:
		class FName                                                SkinName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetPrimaryAssetIdsForPaths
	 */
	struct UGBAssetManagerFunctionLibrary_GetPrimaryAssetIdsForPaths_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             ObjectPaths;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetId>                             ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetPrimaryAssetIdFromString
	 */
	struct UGBAssetManagerFunctionLibrary_GetPrimaryAssetIdFromString_Params
	{
	public:
		class FString                                              PrimaryAssetIdString;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetPrimaryAssetIdFromNames
	 */
	struct UGBAssetManagerFunctionLibrary_GetPrimaryAssetIdFromNames_Params
	{
	public:
		class FName                                                InPrimaryAssetType;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InPrimarAssetName;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetPrimaryAssetIdFromName
	 */
	struct UGBAssetManagerFunctionLibrary_GetPrimaryAssetIdFromName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetPrimaryAssetIdForPath
	 */
	struct UGBAssetManagerFunctionLibrary_GetPrimaryAssetIdForPath_Params
	{
	public:
		struct FSoftObjectPath                                     ObjectPath;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSTextFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSTextFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutText;                                                 // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSStructFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSStructFromPrimaryAsset_Params
	{
	public:
		struct FGBDummyStruct                                      Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NPW9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSStringFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSStringFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSSoftObjectPtrFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSSoftObjectPtrFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QUTO[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSNameFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSNameFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OutName;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSIntFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSIntFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutInt;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSFloatFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSFloatFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutFloat;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSEnumAsByteFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSEnumAsByteFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EnumName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              OutByte;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.GetARSBoolFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_GetARSBoolFromPrimaryAsset_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutBool;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBAssetManagerFunctionLibrary.Array_GetARSFromPrimaryAsset
	 */
	struct UGBAssetManagerFunctionLibrary_Array_GetARSFromPrimaryAsset_Params
	{
	public:
		TArray<int32_t>                                            TargetArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     PrimaryAssetId;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagKey;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.SpawnBulletProjectile
	 */
	struct UGBBarrelComponent_SpawnBulletProjectile_Params
	{
	public:
		class UClass*                                              BulletProjectileClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBBulletProjectile*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.SetMuzzleDevice
	 */
	struct UGBBarrelComponent_SetMuzzleDevice_Params
	{
	public:
		class AGBMuzzleDevice*                                     NewMuzzleDevice;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.GetVelocityModifier
	 */
	struct UGBBarrelComponent_GetVelocityModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.GetMuzzleDeviceThread
	 */
	struct UGBBarrelComponent_GetMuzzleDeviceThread_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.GetMuzzleDevice
	 */
	struct UGBBarrelComponent_GetMuzzleDevice_Params
	{
	public:
		class AGBMuzzleDevice*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBarrelComponent.DeActivateFlash
	 */
	struct UGBBarrelComponent_DeActivateFlash_Params
	{	};

	/**
	 * Function GroundBranch.GBBarrelComponent.ActivateFlash
	 */
	struct UGBBarrelComponent_ActivateFlash_Params
	{	};

	/**
	 * Function GroundBranch.GBBulletItem.GetRoundType
	 */
	struct AGBBulletItem_GetRoundType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletItem.GetBulletProjectileClass
	 */
	struct AGBBulletItem_GetBulletProjectileClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.SpawnBullet
	 */
	struct AGBBulletProjectile_SpawnBullet_Params
	{
	public:
		class AActor*                                              BulletOwner;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              BulletClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShotDirection;                                           // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VelocityModifier;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulated;                                              // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6JAB[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGBBulletProjectile*                                 ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.SimulateTrajectory
	 */
	struct AGBBulletProjectile_SimulateTrajectory_Params
	{
	public:
		struct FTransform                                          SimTM;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      SimTime;                                                 // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SimTimeStep;                                             // 0x0034(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0038(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J7IV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     OutTrajectoryPoints;                                     // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bOutSimulatedImpact;                                     // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.SetStatKey
	 */
	struct AGBBulletProjectile_SetStatKey_Params
	{
	public:
		class FString                                              NewStatKey;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.SetParentBullet
	 */
	struct AGBBulletProjectile_SetParentBullet_Params
	{
	public:
		class AGBBulletProjectile*                                 NewParentBullet;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.SetBulletIndex
	 */
	struct AGBBulletProjectile_SetBulletIndex_Params
	{
	public:
		unsigned char                                              NewBulletIndex;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnStopEvent
	 */
	struct AGBBulletProjectile_OnStopEvent_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnStop
	 */
	struct AGBBulletProjectile_OnStop_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnRep_BulletReplicatedMovement
	 */
	struct AGBBulletProjectile_OnRep_BulletReplicatedMovement_Params
	{	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnImpact
	 */
	struct AGBBulletProjectile_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnExitEvent
	 */
	struct AGBBulletProjectile_OnExitEvent_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnExit
	 */
	struct AGBBulletProjectile_OnExit_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.OnBulletWarnSphereEndOverlap
	 */
	struct AGBBulletProjectile_OnBulletWarnSphereEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.IsSimulatedOnly
	 */
	struct AGBBulletProjectile_IsSimulatedOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.IsDebuggingBullets
	 */
	struct AGBBulletProjectile_IsDebuggingBullets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.InitForSimulatedTrajectory
	 */
	struct AGBBulletProjectile_InitForSimulatedTrajectory_Params
	{	};

	/**
	 * Function GroundBranch.GBBulletProjectile.ImpactEffect
	 */
	struct AGBBulletProjectile_ImpactEffect_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bExiting;                                                // 0x008C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.ImpactDamage
	 */
	struct AGBBulletProjectile_ImpactDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetStatKey
	 */
	struct AGBBulletProjectile_GetStatKey_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetMinDamageDistance
	 */
	struct AGBBulletProjectile_GetMinDamageDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetMaxDamageDistance
	 */
	struct AGBBulletProjectile_GetMaxDamageDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetImpactComp
	 */
	struct AGBBulletProjectile_GetImpactComp_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetBulletMovementComp
	 */
	struct AGBBulletProjectile_GetBulletMovementComp_Params
	{
	public:
		class UGBBulletMovementComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.GetBulletIndex
	 */
	struct AGBBulletProjectile_GetBulletIndex_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBBulletProjectile.CharacterImpact
	 */
	struct AGBBulletProjectile_CharacterImpact_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.WantsToSprint
	 */
	struct AGBCharacter_WantsToSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.WantsToRun
	 */
	struct AGBCharacter_WantsToRun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.WantsToLeanRight
	 */
	struct AGBCharacter_WantsToLeanRight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.WantsToLeanLeft
	 */
	struct AGBCharacter_WantsToLeanLeft_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.WantsToLean
	 */
	struct AGBCharacter_WantsToLean_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateWetness
	 */
	struct AGBCharacter_UpdateWetness_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateWaterLevel
	 */
	struct AGBCharacter_UpdateWaterLevel_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateSway
	 */
	struct AGBCharacter_UpdateSway_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateStamina
	 */
	struct AGBCharacter_UpdateStamina_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateLean
	 */
	struct AGBCharacter_UpdateLean_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UpdateBleeding
	 */
	struct AGBCharacter_UpdateBleeding_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.UnProne
	 */
	struct AGBCharacter_UnProne_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.TriggerRagdoll
	 */
	struct AGBCharacter_TriggerRagdoll_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.TakeFallingDamage
	 */
	struct AGBCharacter_TakeFallingDamage_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      FallingSpeed;                                            // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SwitchToPrevItems
	 */
	struct AGBCharacter_SwitchToPrevItems_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.SwitchItems
	 */
	struct AGBCharacter_SwitchItems_Params
	{
	public:
		class AGBItem*                                             TargetEquippedLeft;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             TargetEquippedRight;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.StopVoice
	 */
	struct AGBCharacter_StopVoice_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.StopNetworkedMontage
	 */
	struct AGBCharacter_StopNetworkedMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetWantsToSprint
	 */
	struct AGBCharacter_SetWantsToSprint_Params
	{
	public:
		bool                                                       bNewWantsToSprint;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetWantsToRun
	 */
	struct AGBCharacter_SetWantsToRun_Params
	{
	public:
		bool                                                       bNewWantsToRun;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetUnequipInfo
	 */
	struct AGBCharacter_SetUnequipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D106[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   NewInfo;                                                 // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetSpawnProtectionTime
	 */
	struct AGBCharacter_SetSpawnProtectionTime_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetRemoteHeadOffset
	 */
	struct AGBCharacter_SetRemoteHeadOffset_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.SetRecoilCount
	 */
	struct AGBCharacter_SetRecoilCount_Params
	{
	public:
		unsigned char                                              NewRecoilCount;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetRagdollPhysics
	 */
	struct AGBCharacter_SetRagdollPhysics_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.SetOffHandIKTarget
	 */
	struct AGBCharacter_SetOffHandIKTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TargetSocketName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNoTargetMode
	 */
	struct AGBCharacter_SetNoTargetMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNoSway
	 */
	struct AGBCharacter_SetNoSway_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNoRecoil
	 */
	struct AGBCharacter_SetNoRecoil_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNightVisionEquipmentOverride
	 */
	struct AGBCharacter_SetNightVisionEquipmentOverride_Params
	{
	public:
		bool                                                       bNewNightVisionEquipmentOverride;                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNightVisionEnabled
	 */
	struct AGBCharacter_SetNightVisionEnabled_Params
	{
	public:
		bool                                                       bNewNightVisionEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetNetworkedMontageNextSection
	 */
	struct AGBCharacter_SetNetworkedMontageNextSection_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionNameToChange;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NextSection;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetMainHandIKTarget
	 */
	struct AGBCharacter_SetMainHandIKTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TargetSocketName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetLoadoutInfo
	 */
	struct AGBCharacter_SetLoadoutInfo_Params
	{
	public:
		class AGBKitInfo*                                          NewLoadoutInfo;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetLadderComponent
	 */
	struct AGBCharacter_SetLadderComponent_Params
	{
	public:
		class UGBLadderComponent*                                  NewLadderComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetItemAnimationType
	 */
	struct AGBCharacter_SetItemAnimationType_Params
	{
	public:
		unsigned char                                              NewItemAnimationType;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetGodMode
	 */
	struct AGBCharacter_SetGodMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetEquipped
	 */
	struct AGBCharacter_SetEquipped_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AXQD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGBItem*                                             NewEquipped;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             LastEquipped;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetDesiredOffTargetAlpha
	 */
	struct AGBCharacter_SetDesiredOffTargetAlpha_Params
	{
	public:
		float                                                      NewDesiredOffTargetAlpha;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetDesiredLeanAlpha
	 */
	struct AGBCharacter_SetDesiredLeanAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetDesiredEngagedAlpha
	 */
	struct AGBCharacter_SetDesiredEngagedAlpha_Params
	{
	public:
		float                                                      NewDesiredEngagedAlpha;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetCurrentHand
	 */
	struct AGBCharacter_SetCurrentHand_Params
	{
	public:
		EHand                                                      NewHand;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetCharVoiceDataId
	 */
	struct AGBCharacter_SetCharVoiceDataId_Params
	{
	public:
		struct FPrimaryAssetId                                     NewCharVoiceDataId;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SetAnimActionPlan
	 */
	struct AGBCharacter_SetAnimActionPlan_Params
	{
	public:
		TArray<class FName>                                        NewAnimActionPlan;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerStopNetworkedMontage
	 */
	struct AGBCharacter_ServerStopNetworkedMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetWantsToSprint
	 */
	struct AGBCharacter_ServerSetWantsToSprint_Params
	{
	public:
		bool                                                       bNewWantsToSprint;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetWantsToRun
	 */
	struct AGBCharacter_ServerSetWantsToRun_Params
	{
	public:
		bool                                                       bNewWantsToRun;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetRemoteHeadOffset
	 */
	struct AGBCharacter_ServerSetRemoteHeadOffset_Params
	{
	public:
		unsigned char                                              NewRemoteHeadPitchDif;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewRemoteHeadYawDif;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetNightVisionEquipmentOverride
	 */
	struct AGBCharacter_ServerSetNightVisionEquipmentOverride_Params
	{
	public:
		bool                                                       bNewNightVisionEquipmentOverride;                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetNightVisionEnabled
	 */
	struct AGBCharacter_ServerSetNightVisionEnabled_Params
	{
	public:
		bool                                                       bNewNightVisionEnabled;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetDesiredOffTargetAlpha
	 */
	struct AGBCharacter_ServerSetDesiredOffTargetAlpha_Params
	{
	public:
		unsigned char                                              AlphaAsByte;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetDesiredLeanAlpha
	 */
	struct AGBCharacter_ServerSetDesiredLeanAlpha_Params
	{
	public:
		unsigned char                                              AlphaAsByte;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerSetDesiredEngagedAlpha
	 */
	struct AGBCharacter_ServerSetDesiredEngagedAlpha_Params
	{
	public:
		unsigned char                                              AlphaAsByte;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerRemoveGameplayTag
	 */
	struct AGBCharacter_ServerRemoveGameplayTag_Params
	{
	public:
		class FName                                                GameplayTag;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerPlayNetworkedMontage
	 */
	struct AGBCharacter_ServerPlayNetworkedMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SyncName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayRate;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSectionName;                                        // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerPickupItem
	 */
	struct AGBCharacter_ServerPickupItem_Params
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerInternalSwitchItems
	 */
	struct AGBCharacter_ServerInternalSwitchItems_Params
	{
	public:
		class AGBItem*                                             TargetLeftHandItem;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             TargetRightHandItem;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerDropItems
	 */
	struct AGBCharacter_ServerDropItems_Params
	{
	public:
		bool                                                       bDropLeftHand;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDropRightHand;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ServerAddGameplayTag
	 */
	struct AGBCharacter_ServerAddGameplayTag_Params
	{
	public:
		class FName                                                GameplayTag;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.SeededFRandRange
	 */
	struct AGBCharacter_SeededFRandRange_Params
	{
	public:
		float                                                      InMin;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMax;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RemoveInventoryModifierWithPrefix
	 */
	struct AGBCharacter_RemoveInventoryModifierWithPrefix_Params
	{
	public:
		class FString                                              ModifierPrefix;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RemoveInventoryModifier
	 */
	struct AGBCharacter_RemoveInventoryModifier_Params
	{
	public:
		class FName                                                ModifierName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RemoveGameplayTag
	 */
	struct AGBCharacter_RemoveGameplayTag_Params
	{
	public:
		class FName                                                GameplayTag;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RemoveAnimActions
	 */
	struct AGBCharacter_RemoveAnimActions_Params
	{
	public:
		TArray<class UClass*>                                      RemoveAnimActionClasses;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RemoveAnimAction
	 */
	struct AGBCharacter_RemoveAnimAction_Params
	{
	public:
		class UClass*                                              RemoveAnimActionClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.RecoilCountUpdated
	 */
	struct AGBCharacter_RecoilCountUpdated_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.Prone
	 */
	struct AGBCharacter_Prone_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PlayWaterSound
	 */
	struct AGBCharacter_PlayWaterSound_Params
	{
	public:
		class USoundCue*                                           WaterSound;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PlayVoice
	 */
	struct AGBCharacter_PlayVoice_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadioMessage;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PlayTakeHitEffects
	 */
	struct AGBCharacter_PlayTakeHitEffects_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.PlayNetworkedMontage
	 */
	struct AGBCharacter_PlayNetworkedMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SyncName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayRate;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSectionName;                                        // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PlayDying
	 */
	struct AGBCharacter_PlayDying_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.PlayDamageEffects
	 */
	struct AGBCharacter_PlayDamageEffects_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.PickupItem
	 */
	struct AGBCharacter_PickupItem_Params
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PhysicsVolumeChanged
	 */
	struct AGBCharacter_PhysicsVolumeChanged_Params
	{
	public:
		class APhysicsVolume*                                      NewVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.PauseSprinting
	 */
	struct AGBCharacter_PauseSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OptOut
	 */
	struct AGBCharacter_OptOut_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnStopVoiceEvent
	 */
	struct AGBCharacter_OnStopVoiceEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnStartProneEvent
	 */
	struct AGBCharacter_OnStartProneEvent_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_RNGSeed
	 */
	struct AGBCharacter_OnRep_RNGSeed_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_RemoteMontageInfo
	 */
	struct AGBCharacter_OnRep_RemoteMontageInfo_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_RemoteDesiredOffTargetAlpha
	 */
	struct AGBCharacter_OnRep_RemoteDesiredOffTargetAlpha_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_RemoteDesiredLeanAlpha
	 */
	struct AGBCharacter_OnRep_RemoteDesiredLeanAlpha_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_RemoteDesiredEngagedAlpha
	 */
	struct AGBCharacter_OnRep_RemoteDesiredEngagedAlpha_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_NightVisionEquipmentOverride
	 */
	struct AGBCharacter_OnRep_NightVisionEquipmentOverride_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_NightVisionEnabled
	 */
	struct AGBCharacter_OnRep_NightVisionEnabled_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_LoadoutInfo
	 */
	struct AGBCharacter_OnRep_LoadoutInfo_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_LadderComponent
	 */
	struct AGBCharacter_OnRep_LadderComponent_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_IsProne
	 */
	struct AGBCharacter_OnRep_IsProne_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_EquippedRight
	 */
	struct AGBCharacter_OnRep_EquippedRight_Params
	{
	public:
		class AGBItem*                                             LastRightEquipped;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_EquippedLeft
	 */
	struct AGBCharacter_OnRep_EquippedLeft_Params
	{
	public:
		class AGBItem*                                             LastLeftEquipped;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnRep_CharVoiceDataId
	 */
	struct AGBCharacter_OnRep_CharVoiceDataId_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnPlayVoiceEvent
	 */
	struct AGBCharacter_OnPlayVoiceEvent_Params
	{
	public:
		class UAkAudioEvent*                                       VoiceAudioEvent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocalPlayer;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnPhysicsCollision
	 */
	struct AGBCharacter_OnPhysicsCollision_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnLoadAssetsComplete
	 */
	struct AGBCharacter_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnLandedEffects
	 */
	struct AGBCharacter_OnLandedEffects_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      FallingSpeed;                                            // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnHopped
	 */
	struct AGBCharacter_OnHopped_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.OnEquippedItemsUpdatedEvent
	 */
	struct AGBCharacter_OnEquippedItemsUpdatedEvent_Params
	{
	public:
		bool                                                       bLeftUpdated;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRightUpdated;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.OnEndProneEvent
	 */
	struct AGBCharacter_OnEndProneEvent_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.NetworkedMontageJumpToSection
	 */
	struct AGBCharacter_NetworkedMontageJumpToSection_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.NetMulticastPlayVoice
	 */
	struct AGBCharacter_NetMulticastPlayVoice_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadioMessage;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ModifyDamageTaken
	 */
	struct AGBCharacter_ModifyDamageTaken_Params
	{
	public:
		int32_t                                                    AppliedDamage;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Damage;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Momentum;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitInfo;                                                 // 0x0014(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AController*                                         EventInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageType;                                              // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ModifyDamageCaused
	 */
	struct AGBCharacter_ModifyDamageCaused_Params
	{
	public:
		int32_t                                                    AppliedDamage;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Damage;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Momentum;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitInfo;                                                 // 0x0014(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Victim;                                                  // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         EventInstigator;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageType;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsUICharacter
	 */
	struct AGBCharacter_IsUICharacter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsSprinting
	 */
	struct AGBCharacter_IsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsRunning
	 */
	struct AGBCharacter_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsRagdoll
	 */
	struct AGBCharacter_IsRagdoll_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsProne
	 */
	struct AGBCharacter_IsProne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsLocallyViewed
	 */
	struct AGBCharacter_IsLocallyViewed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsEngaged
	 */
	struct AGBCharacter_IsEngaged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsCrouched
	 */
	struct AGBCharacter_IsCrouched_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IsAlive
	 */
	struct AGBCharacter_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.Is3DMovementMode
	 */
	struct AGBCharacter_Is3DMovementMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.InternalOnLoadoutApplied
	 */
	struct AGBCharacter_InternalOnLoadoutApplied_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.InstantBloodLoss
	 */
	struct AGBCharacter_InstantBloodLoss_Params
	{
	public:
		float                                                      BloodLoss;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.IncrementBulletIndex
	 */
	struct AGBCharacter_IncrementBulletIndex_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.HasInventoryModifier
	 */
	struct AGBCharacter_HasInventoryModifier_Params
	{
	public:
		class FName                                                ModifierName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.HasGameplayTag
	 */
	struct AGBCharacter_HasGameplayTag_Params
	{
	public:
		class FName                                                GameplayTag;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetWantsToControlBreath
	 */
	struct AGBCharacter_GetWantsToControlBreath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetVoiceComp
	 */
	struct AGBCharacter_GetVoiceComp_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetUnequipInfo
	 */
	struct AGBCharacter_GetUnequipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KZ2P[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   ReturnValue;                                             // 0x0010(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetTracedCollisionOffset
	 */
	struct AGBCharacter_GetTracedCollisionOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetTotalItemWeight
	 */
	struct AGBCharacter_GetTotalItemWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetSwayOffset
	 */
	struct AGBCharacter_GetSwayOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetSlingUnequipTag
	 */
	struct AGBCharacter_GetSlingUnequipTag_Params
	{
	public:
		class FName                                                SlingPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetSlingEquipTag
	 */
	struct AGBCharacter_GetSlingEquipTag_Params
	{
	public:
		class FName                                                SlingPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetSightLineTransform
	 */
	struct AGBCharacter_GetSightLineTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetShoulderSlingPoint
	 */
	struct AGBCharacter_GetShoulderSlingPoint_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BHYQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetRemoteHeadOffset
	 */
	struct AGBCharacter_GetRemoteHeadOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetRecoilOffset
	 */
	struct AGBCharacter_GetRecoilOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetRecoilCount
	 */
	struct AGBCharacter_GetRecoilCount_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetRecoilAlpha
	 */
	struct AGBCharacter_GetRecoilAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetPickupTarget
	 */
	struct AGBCharacter_GetPickupTarget_Params
	{
	public:
		class AGBItem*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetPelvisBone
	 */
	struct AGBCharacter_GetPelvisBone_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetOppositeHandEnum
	 */
	struct AGBCharacter_GetOppositeHandEnum_Params
	{
	public:
		EHand                                                      EquippedType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetOnLadder
	 */
	struct AGBCharacter_GetOnLadder_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetOffTargetAlpha
	 */
	struct AGBCharacter_GetOffTargetAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNoTargetMode
	 */
	struct AGBCharacter_GetNoTargetMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNoSway
	 */
	struct AGBCharacter_GetNoSway_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNoRecoil
	 */
	struct AGBCharacter_GetNoRecoil_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNightVisionEquipmentOverride
	 */
	struct AGBCharacter_GetNightVisionEquipmentOverride_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNightVisionEnabled
	 */
	struct AGBCharacter_GetNightVisionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNetworkedMontageSyncName
	 */
	struct AGBCharacter_GetNetworkedMontageSyncName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNetworkedMontageSection
	 */
	struct AGBCharacter_GetNetworkedMontageSection_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNetworkedMontage
	 */
	struct AGBCharacter_GetNetworkedMontage_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNeckDamageScale
	 */
	struct AGBCharacter_GetNeckDamageScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetNeckBone
	 */
	struct AGBCharacter_GetNeckBone_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetMovementSpeed
	 */
	struct AGBCharacter_GetMovementSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetMovementDirection
	 */
	struct AGBCharacter_GetMovementDirection_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetLocalViewer
	 */
	struct AGBCharacter_GetLocalViewer_Params
	{
	public:
		class AGBPlayerController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetLeanAlpha
	 */
	struct AGBCharacter_GetLeanAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetLastTakeHitTime
	 */
	struct AGBCharacter_GetLastTakeHitTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetLadderComponent
	 */
	struct AGBCharacter_GetLadderComponent_Params
	{
	public:
		class UGBLadderComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemsByItemAssetType
	 */
	struct AGBCharacter_GetItemsByItemAssetType_Params
	{
	public:
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     OutItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemsByItemAssetId
	 */
	struct AGBCharacter_GetItemsByItemAssetId_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     OutItems;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemsByClass
	 */
	struct AGBCharacter_GetItemsByClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     OutItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemHandSocket
	 */
	struct AGBCharacter_GetItemHandSocket_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T1FK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemAttachedToSocket
	 */
	struct AGBCharacter_GetItemAttachedToSocket_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetItemAnimationType
	 */
	struct AGBCharacter_GetItemAnimationType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetInventoryModifierWithPrefix
	 */
	struct AGBCharacter_GetInventoryModifierWithPrefix_Params
	{
	public:
		class FString                                              ModifierPrefix;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OutModifierName;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     OutModifierObject;                                       // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetInventoryModifier
	 */
	struct AGBCharacter_GetInventoryModifier_Params
	{
	public:
		class FName                                                ModifierName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     OutModifierObject;                                       // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetInventoryList
	 */
	struct AGBCharacter_GetInventoryList_Params
	{
	public:
		TArray<class AGBItem*>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetHeadDamageScale
	 */
	struct AGBCharacter_GetHeadDamageScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetHeadBone
	 */
	struct AGBCharacter_GetHeadBone_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetHandEnumFromSocket
	 */
	struct AGBCharacter_GetHandEnumFromSocket_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetHandEnum
	 */
	struct AGBCharacter_GetHandEnum_Params
	{
	public:
		EHand                                                      EquippedType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetGodMode
	 */
	struct AGBCharacter_GetGodMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFootstepComp
	 */
	struct AGBCharacter_GetFootstepComp_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFlattenSwayTime
	 */
	struct AGBCharacter_GetFlattenSwayTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFirstItemByItemAssetType
	 */
	struct AGBCharacter_GetFirstItemByItemAssetType_Params
	{
	public:
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              CastToItemClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFirstItemByItemAssetId
	 */
	struct AGBCharacter_GetFirstItemByItemAssetId_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              CastToItemClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFirstItemByClass
	 */
	struct AGBCharacter_GetFirstItemByClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetFirearmEquipped
	 */
	struct AGBCharacter_GetFirearmEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetEyesSocket
	 */
	struct AGBCharacter_GetEyesSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetEquippedWorldStateFlags
	 */
	struct AGBCharacter_GetEquippedWorldStateFlags_Params
	{
	public:
		TMap<struct FGameplayTag, unsigned char>                   ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetEquipped
	 */
	struct AGBCharacter_GetEquipped_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4U5N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGBItem*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetEquipInfo
	 */
	struct AGBCharacter_GetEquipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZUSZ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   ReturnValue;                                             // 0x0010(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetEngagedAlpha
	 */
	struct AGBCharacter_GetEngagedAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetDesiredOffTargetAlpha
	 */
	struct AGBCharacter_GetDesiredOffTargetAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetDesiredLeanAlpha
	 */
	struct AGBCharacter_GetDesiredLeanAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetDesiredEngagedAlpha
	 */
	struct AGBCharacter_GetDesiredEngagedAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetCurrentHand
	 */
	struct AGBCharacter_GetCurrentHand_Params
	{
	public:
		EHand                                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetCrouchAlpha
	 */
	struct AGBCharacter_GetCrouchAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetChestSlingPoint
	 */
	struct AGBCharacter_GetChestSlingPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetCharVoiceAudioEvent
	 */
	struct AGBCharacter_GetCharVoiceAudioEvent_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetBreathingSinValue
	 */
	struct AGBCharacter_GetBreathingSinValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetAnimWorldState
	 */
	struct AGBCharacter_GetAnimWorldState_Params
	{
	public:
		class UGoapWorldComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetAnimSelector
	 */
	struct AGBCharacter_GetAnimSelector_Params
	{
	public:
		class UGoapPlannerComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetAnimInstance
	 */
	struct AGBCharacter_GetAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetAnimActionPlan
	 */
	struct AGBCharacter_GetAnimActionPlan_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GetAimCenterOffset
	 */
	struct AGBCharacter_GetAimCenterOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GenerateAnimActionPlan
	 */
	struct AGBCharacter_GenerateAnimActionPlan_Params
	{
	public:
		struct FGoapWorldState                                     WorldState;                                              // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FGoapWorldState                                     GoalState;                                               // 0x0050(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GatherAssets
	 */
	struct AGBCharacter_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.GameplayTagsUpdated
	 */
	struct AGBCharacter_GameplayTagsUpdated_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.ForceClientEquippedSync
	 */
	struct AGBCharacter_ForceClientEquippedSync_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.DropItemsEvent
	 */
	struct AGBCharacter_DropItemsEvent_Params
	{
	public:
		bool                                                       bLeftHand;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRightHand;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.DropItems
	 */
	struct AGBCharacter_DropItems_Params
	{
	public:
		bool                                                       bDropLeftHand;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDropRightHand;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.DestroyInventory
	 */
	struct AGBCharacter_DestroyInventory_Params
	{
	public:
		bool                                                       bForceClient;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.DamageOrgan
	 */
	struct AGBCharacter_DamageOrgan_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ClientSyncEquipped
	 */
	struct AGBCharacter_ClientSyncEquipped_Params
	{
	public:
		class AGBItem*                                             ServerEquippedLeft;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             ServerEquippedRight;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ClientSwitchToPrevItems
	 */
	struct AGBCharacter_ClientSwitchToPrevItems_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.ClientSwitchItems
	 */
	struct AGBCharacter_ClientSwitchItems_Params
	{
	public:
		class AGBItem*                                             TargetEquippedLeft;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             TargetEquippedRight;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ClearUnequipInfo
	 */
	struct AGBCharacter_ClearUnequipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ClearSimilarItems
	 */
	struct AGBCharacter_ClearSimilarItems_Params
	{
	public:
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             Exclude;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.ClearPickupTarget
	 */
	struct AGBCharacter_ClearPickupTarget_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.ClearEquipInfo
	 */
	struct AGBCharacter_ClearEquipInfo_Params
	{
	public:
		EHand                                                      TargetHand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.CleanUpLocalInventory
	 */
	struct AGBCharacter_CleanUpLocalInventory_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.CanDamageRadial
	 */
	struct AGBCharacter_CanDamageRadial_Params
	{
	public:
		struct FVector                                             DamageOrigin;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F2IQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CXWQ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHit;                                                  // 0x0038(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.BlueprintAddDefaultItems
	 */
	struct AGBCharacter_BlueprintAddDefaultItems_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.ApplyProperties
	 */
	struct AGBCharacter_ApplyProperties_Params
	{
	public:
		TArray<class FString>                                      PropertyNames;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      PropertyValues;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AnimNotifyFootstep
	 */
	struct AGBCharacter_AnimNotifyFootstep_Params
	{
	public:
		bool                                                       bInLeftFoot;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AdvanceAnimActionPlan
	 */
	struct AGBCharacter_AdvanceAnimActionPlan_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacter.AddInventoryModifierAsTag
	 */
	struct AGBCharacter_AddInventoryModifierAsTag_Params
	{
	public:
		class FName                                                ModifierName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddInventoryModifier
	 */
	struct AGBCharacter_AddInventoryModifier_Params
	{
	public:
		class FName                                                ModifierName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     ModifierObject;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddInternalBleeding
	 */
	struct AGBCharacter_AddInternalBleeding_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddGameplayTag
	 */
	struct AGBCharacter_AddGameplayTag_Params
	{
	public:
		class FName                                                GameplayTag;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddExternalBleeding
	 */
	struct AGBCharacter_AddExternalBleeding_Params
	{
	public:
		class FName                                                AttachBoneName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RelativeLocation;                                        // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            RelativeRotation;                                        // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddDefaultItems
	 */
	struct AGBCharacter_AddDefaultItems_Params
	{
	public:
		bool                                                       bSkipLocalClient;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddAnimActions
	 */
	struct AGBCharacter_AddAnimActions_Params
	{
	public:
		TArray<class UClass*>                                      AddAnimActionClasses;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AddAnimAction
	 */
	struct AGBCharacter_AddAnimAction_Params
	{
	public:
		class UClass*                                              AddAnimActionClass;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacter.AbortAnimActionPlan
	 */
	struct AGBCharacter_AbortAnimActionPlan_Params
	{	};

	/**
	 * Function GroundBranch.GBCharacterMovement.WantsToSprint
	 */
	struct UGBCharacterMovement_WantsToSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.WantsToRun
	 */
	struct UGBCharacterMovement_WantsToRun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.WantsToLean
	 */
	struct UGBCharacterMovement_WantsToLean_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.SetLadderComponent
	 */
	struct UGBCharacterMovement_SetLadderComponent_Params
	{
	public:
		class UGBLadderComponent*                                  NewLadderComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.PauseSprinting
	 */
	struct UGBCharacterMovement_PauseSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.IsProne
	 */
	struct UGBCharacterMovement_IsProne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetOnLadder
	 */
	struct UGBCharacterMovement_GetOnLadder_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetOffTargetAlpha
	 */
	struct UGBCharacterMovement_GetOffTargetAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetMovementDirection
	 */
	struct UGBCharacterMovement_GetMovementDirection_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetMaxWalkingSpeed
	 */
	struct UGBCharacterMovement_GetMaxWalkingSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetMaxRunningSpeed
	 */
	struct UGBCharacterMovement_GetMaxRunningSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetLadderComponent
	 */
	struct UGBCharacterMovement_GetLadderComponent_Params
	{
	public:
		class UGBLadderComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetFirearmEquipped
	 */
	struct UGBCharacterMovement_GetFirearmEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.GetEngagedAlpha
	 */
	struct UGBCharacterMovement_GetEngagedAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.FallingDamageReduction
	 */
	struct UGBCharacterMovement_FallingDamageReduction_Params
	{
	public:
		float                                                      FallingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0004(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharacterMovement.CanGrabLadder
	 */
	struct UGBCharacterMovement_CanGrabLadder_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.TriggerAction
	 */
	struct UGBCharAnimAction_TriggerAction_Params
	{	};

	/**
	 * Function GroundBranch.GBCharAnimAction.PlayAnim
	 */
	struct UGBCharAnimAction_PlayAnim_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.OnMontageEndedEvent
	 */
	struct UGBCharAnimAction_OnMontageEndedEvent_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.OnMontageEnded
	 */
	struct UGBCharAnimAction_OnMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        EndedMontage;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.OnLoadAssetsComplete
	 */
	struct UGBCharAnimAction_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function GroundBranch.GBCharAnimAction.OnInitEvent
	 */
	struct UGBCharAnimAction_OnInitEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBCharAnimAction.Init
	 */
	struct UGBCharAnimAction_Init_Params
	{
	public:
		class AGBCharacter*                                        InGBCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.GetGoapAction
	 */
	struct UGBCharAnimAction_GetGoapAction_Params
	{
	public:
		struct FGoapAction                                         ReturnValue;                                             // 0x0000(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.GetGBCharacter
	 */
	struct UGBCharAnimAction_GetGBCharacter_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCharAnimAction.GatherAssets
	 */
	struct UGBCharAnimAction_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerControllerBase.RemoveFullScreenWidget
	 */
	struct AGBPlayerControllerBase_RemoveFullScreenWidget_Params
	{
	public:
		class UUserWidget*                                         FullScreenWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerControllerBase.ListFullScreenWidgets
	 */
	struct AGBPlayerControllerBase_ListFullScreenWidgets_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerControllerBase.AddFullScreenWidget
	 */
	struct AGBPlayerControllerBase_AddFullScreenWidget_Params
	{
	public:
		class UUserWidget*                                         FullScreenWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Vote
	 */
	struct AGBPlayerController_Vote_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.UseActorWithParams
	 */
	struct AGBPlayerController_UseActorWithParams_Params
	{
	public:
		class AActor*                                              UseTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.UseActor
	 */
	struct AGBPlayerController_UseActor_Params
	{
	public:
		class AActor*                                              UseTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.UpdateSpectatorNightVisionPPEvent
	 */
	struct AGBPlayerController_UpdateSpectatorNightVisionPPEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.UpdatePPSharpenPercentageEvent
	 */
	struct AGBPlayerController_UpdatePPSharpenPercentageEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.UnMuteAll
	 */
	struct AGBPlayerController_UnMuteAll_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.UnMute
	 */
	struct AGBPlayerController_UnMute_Params
	{
	public:
		class APlayerState*                                        TargetPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ToggleInGameMenu
	 */
	struct AGBPlayerController_ToggleInGameMenu_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.TimerDelayedSaveConfig
	 */
	struct AGBPlayerController_TimerDelayedSaveConfig_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.TeamChat
	 */
	struct AGBPlayerController_TeamChat_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SyncLoadoutToTeam
	 */
	struct AGBPlayerController_SyncLoadoutToTeam_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.StopUsingRadio
	 */
	struct AGBPlayerController_StopUsingRadio_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.StopTalking
	 */
	struct AGBPlayerController_StopTalking_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.StartUsingRadio
	 */
	struct AGBPlayerController_StartUsingRadio_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.StartTalking
	 */
	struct AGBPlayerController_StartTalking_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorViewPrevPlayer
	 */
	struct AGBPlayerController_SpectatorViewPrevPlayer_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorViewNextPlayer
	 */
	struct AGBPlayerController_SpectatorViewNextPlayer_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorViewActor
	 */
	struct AGBPlayerController_SpectatorViewActor_Params
	{
	public:
		class AActor*                                              ActorTarget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorToggleHUD
	 */
	struct AGBPlayerController_SpectatorToggleHUD_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorStopFollowing
	 */
	struct AGBPlayerController_SpectatorStopFollowing_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorSetCamera
	 */
	struct AGBPlayerController_SpectatorSetCamera_Params
	{
	public:
		class FName                                                NewCameraStyle;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorIsFollowing
	 */
	struct AGBPlayerController_SpectatorIsFollowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorChangeSpeed
	 */
	struct AGBPlayerController_SpectatorChangeSpeed_Params
	{
	public:
		float                                                      Change;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SpectatorChangeDistance
	 */
	struct AGBPlayerController_SpectatorChangeDistance_Params
	{
	public:
		float                                                      Change;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Spectate
	 */
	struct AGBPlayerController_Spectate_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ShowTransitionScreenEvent
	 */
	struct AGBPlayerController_ShowTransitionScreenEvent_Params
	{
	public:
		class FName                                                TransitionType;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ShowAdminMenuEvent
	 */
	struct AGBPlayerController_ShowAdminMenuEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.SetViewRotation
	 */
	struct AGBPlayerController_SetViewRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetTeamElement
	 */
	struct AGBPlayerController_SetTeamElement_Params
	{
	public:
		ETeamElement                                               NewTeamElement;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetTargetInputSensitivityScale
	 */
	struct AGBPlayerController_SetTargetInputSensitivityScale_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetSwitchGrenadeCheck
	 */
	struct AGBPlayerController_SetSwitchGrenadeCheck_Params
	{
	public:
		float                                                      SwitchDelay;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetSpectatorNightVision
	 */
	struct AGBPlayerController_SetSpectatorNightVision_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetReadyStatus
	 */
	struct AGBPlayerController_SetReadyStatus_Params
	{
	public:
		EReadyStatus                                               NewReadyStatus;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetPlayerPatch
	 */
	struct AGBPlayerController_SetPlayerPatch_Params
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShortPath;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetPlayerNightVisionRequested
	 */
	struct AGBPlayerController_SetPlayerNightVisionRequested_Params
	{
	public:
		bool                                                       bNewPlayerNightVisionRequested;                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetOverrideInputWidget
	 */
	struct AGBPlayerController_SetOverrideInputWidget_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetNoTargetMode
	 */
	struct AGBPlayerController_SetNoTargetMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetNoSway
	 */
	struct AGBPlayerController_SetNoSway_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetNoRecoil
	 */
	struct AGBPlayerController_SetNoRecoil_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetLoadout
	 */
	struct AGBPlayerController_SetLoadout_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetLastGrenadeClass
	 */
	struct AGBPlayerController_SetLastGrenadeClass_Params
	{
	public:
		class UClass*                                              GrenadeClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetLastDesiredOffTargetAlphaValue
	 */
	struct AGBPlayerController_SetLastDesiredOffTargetAlphaValue_Params
	{
	public:
		float                                                      NewLastDesiredOffTargetAlphaValue;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetInsertionPoint
	 */
	struct AGBPlayerController_SetInsertionPoint_Params
	{
	public:
		class AGBInsertionPoint*                                   NewInsertionPoint;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetIgnoreUseInput
	 */
	struct AGBPlayerController_SetIgnoreUseInput_Params
	{
	public:
		bool                                                       bIgnore;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SetGodMode
	 */
	struct AGBPlayerController_SetGodMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerVote
	 */
	struct AGBPlayerController_ServerVote_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerUseActorWithParams
	 */
	struct AGBPlayerController_ServerUseActorWithParams_Params
	{
	public:
		class AActor*                                              UseTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerUseActor
	 */
	struct AGBPlayerController_ServerUseActor_Params
	{
	public:
		class AActor*                                              UseTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSpectatorViewActor
	 */
	struct AGBPlayerController_ServerSpectatorViewActor_Params
	{
	public:
		class AActor*                                              ActorTarget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSpectate
	 */
	struct AGBPlayerController_ServerSpectate_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSetTeamElement
	 */
	struct AGBPlayerController_ServerSetTeamElement_Params
	{
	public:
		ETeamElement                                               NewTeamElement;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSetReadyStatus
	 */
	struct AGBPlayerController_ServerSetReadyStatus_Params
	{
	public:
		EReadyStatus                                               NewReadyStatus;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSetPlayerPatch
	 */
	struct AGBPlayerController_ServerSetPlayerPatch_Params
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShortPath;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSetInsertionPoint
	 */
	struct AGBPlayerController_ServerSetInsertionPoint_Params
	{
	public:
		class AGBInsertionPoint*                                   NewInsertionPoint;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSetCharacterVoiceSet
	 */
	struct AGBPlayerController_ServerSetCharacterVoiceSet_Params
	{
	public:
		struct FPrimaryAssetId                                     NewCharVoiceDataId;                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSendAFKReponse
	 */
	struct AGBPlayerController_ServerSendAFKReponse_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSayTeam
	 */
	struct AGBPlayerController_ServerSayTeam_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerSay
	 */
	struct AGBPlayerController_ServerSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerReport
	 */
	struct AGBPlayerController_ServerReport_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerReapplyCharLoadout
	 */
	struct AGBPlayerController_ServerReapplyCharLoadout_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerPlayVoice
	 */
	struct AGBPlayerController_ServerPlayVoice_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadioMessage;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerPlayerGameModeRequest
	 */
	struct AGBPlayerController_ServerPlayerGameModeRequest_Params
	{
	public:
		class FString                                              Request;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerPlayEmote
	 */
	struct AGBPlayerController_ServerPlayEmote_Params
	{
	public:
		struct FPrimaryAssetId                                     CharEmoteId;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerOptOut
	 */
	struct AGBPlayerController_ServerOptOut_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerInitialSync
	 */
	struct AGBPlayerController_ServerInitialSync_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerForgive
	 */
	struct AGBPlayerController_ServerForgive_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerEnterReadyRoom
	 */
	struct AGBPlayerController_ServerEnterReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerEnterPlayArea
	 */
	struct AGBPlayerController_ServerEnterPlayArea_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerCreateLoadoutInfo
	 */
	struct AGBPlayerController_ServerCreateLoadoutInfo_Params
	{
	public:
		struct FReplicatedString                                   ReplicatedLoadout;                                       // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerConfirmBulletCharacterImpact
	 */
	struct AGBPlayerController_ServerConfirmBulletCharacterImpact_Params
	{
	public:
		class AGBCharacter*                                        HitCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGBOrganDamageEvent                                 OrganDamageEvent;                                        // 0x0008(0x0098)  (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerChooseSpectatorViewTarget
	 */
	struct AGBPlayerController_ServerChooseSpectatorViewTarget_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerCheat
	 */
	struct AGBPlayerController_ServerCheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerAdminSet
	 */
	struct AGBPlayerController_ServerAdminSet_Params
	{
	public:
		struct FZKReplicatedContent                                Content;                                                 // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerAdminRequest
	 */
	struct AGBPlayerController_ServerAdminRequest_Params
	{
	public:
		class FName                                                RequestType;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ServerAdmin
	 */
	struct AGBPlayerController_ServerAdmin_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.SayTeam
	 */
	struct AGBPlayerController_SayTeam_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Say
	 */
	struct AGBPlayerController_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.RestartPlayer
	 */
	struct AGBPlayerController_RestartPlayer_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.Report
	 */
	struct AGBPlayerController_Report_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.RemoveLocalPlayerTag
	 */
	struct AGBPlayerController_RemoveLocalPlayerTag_Params
	{
	public:
		class FName                                                LocalPlayerTag;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.RemoveIgnoreUseInputReason
	 */
	struct AGBPlayerController_RemoveIgnoreUseInputReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ReapplyCharLoadout
	 */
	struct AGBPlayerController_ReapplyCharLoadout_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ReadyRoom
	 */
	struct AGBPlayerController_ReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.PlayVoice
	 */
	struct AGBPlayerController_PlayVoice_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadioMessage;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.PlayerGameModeRequest
	 */
	struct AGBPlayerController_PlayerGameModeRequest_Params
	{
	public:
		class FString                                              Request;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.PlayEmote
	 */
	struct AGBPlayerController_PlayEmote_Params
	{
	public:
		class FString                                              CharEmoteString;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.OptOutTimer
	 */
	struct AGBPlayerController_OptOutTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OptOut
	 */
	struct AGBPlayerController_OptOut_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OpenMissionEditorEvent
	 */
	struct AGBPlayerController_OpenMissionEditorEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OnShowWorldPromptEvent
	 */
	struct AGBPlayerController_OnShowWorldPromptEvent_Params
	{
	public:
		struct FVector                                             PromptLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.OnShowSpawnProtectionWarningEvent
	 */
	struct AGBPlayerController_OnShowSpawnProtectionWarningEvent_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.OnRestartPlayerEvent
	 */
	struct AGBPlayerController_OnRestartPlayerEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OnPreSeamlessTravelEvent
	 */
	struct AGBPlayerController_OnPreSeamlessTravelEvent_Params
	{
	public:
		class FString                                              MissionTitle;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapTitle;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapAuthor;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.OnHoveredWidgetChanged
	 */
	struct AGBPlayerController_OnHoveredWidgetChanged_Params
	{
	public:
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidgetComponent*                                    PreviousWidgetComponent;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.OnGrenadeThrowEnd
	 */
	struct AGBPlayerController_OnGrenadeThrowEnd_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OnClientOnLoadoutAppliedEvent
	 */
	struct AGBPlayerController_OnClientOnLoadoutAppliedEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.OnAFKPromptEvent
	 */
	struct AGBPlayerController_OnAFKPromptEvent_Params
	{
	public:
		float                                                      ReponseTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.NotAFK
	 */
	struct AGBPlayerController_NotAFK_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.MuteTalking
	 */
	struct AGBPlayerController_MuteTalking_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.MuteAll
	 */
	struct AGBPlayerController_MuteAll_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.Mute
	 */
	struct AGBPlayerController_Mute_Params
	{
	public:
		class APlayerState*                                        TargetPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.MissionIntel_Released
	 */
	struct AGBPlayerController_MissionIntel_Released_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.MissionIntel_Pressed
	 */
	struct AGBPlayerController_MissionIntel_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.IsUsingRadio
	 */
	struct AGBPlayerController_IsUsingRadio_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsUseInputIgnored
	 */
	struct AGBPlayerController_IsUseInputIgnored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsTalking
	 */
	struct AGBPlayerController_IsTalking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsMuted
	 */
	struct AGBPlayerController_IsMuted_Params
	{
	public:
		class APlayerState*                                        TargetPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsFreeLooking
	 */
	struct AGBPlayerController_IsFreeLooking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsFirstPerson
	 */
	struct AGBPlayerController_IsFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.IsAlive
	 */
	struct AGBPlayerController_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot4_Pressed
	 */
	struct AGBPlayerController_InventorySlot4_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot3_Pressed
	 */
	struct AGBPlayerController_InventorySlot3_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot2_Repeat
	 */
	struct AGBPlayerController_InventorySlot2_Repeat_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot2_Released
	 */
	struct AGBPlayerController_InventorySlot2_Released_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot2_Pressed
	 */
	struct AGBPlayerController_InventorySlot2_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot1_Repeat
	 */
	struct AGBPlayerController_InventorySlot1_Repeat_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot1_Released
	 */
	struct AGBPlayerController_InventorySlot1_Released_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.InventorySlot1_Pressed
	 */
	struct AGBPlayerController_InventorySlot1_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.IncreaseSightMagnificationPressed
	 */
	struct AGBPlayerController_IncreaseSightMagnificationPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.IncreaseReticleBrightnessLevel
	 */
	struct AGBPlayerController_IncreaseReticleBrightnessLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.HideTransitionScreens
	 */
	struct AGBPlayerController_HideTransitionScreens_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.HideTransitionScreenEvent
	 */
	struct AGBPlayerController_HideTransitionScreenEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.HasLocalPlayerTag
	 */
	struct AGBPlayerController_HasLocalPlayerTag_Params
	{
	public:
		class FName                                                LocalPlayerTag;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.HandleCommunicationKey
	 */
	struct AGBPlayerController_HandleCommunicationKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GlobalChat
	 */
	struct AGBPlayerController_GlobalChat_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.GetWidgetInteractionComponent
	 */
	struct AGBPlayerController_GetWidgetInteractionComponent_Params
	{
	public:
		class UWidgetInteractionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetViewRotation
	 */
	struct AGBPlayerController_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetSpectatorNightVision
	 */
	struct AGBPlayerController_GetSpectatorNightVision_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetPredictionTime
	 */
	struct AGBPlayerController_GetPredictionTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetPlayerSettings
	 */
	struct AGBPlayerController_GetPlayerSettings_Params
	{
	public:
		class UGBPlayerSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetPlayerNightVisionRequested
	 */
	struct AGBPlayerController_GetPlayerNightVisionRequested_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetPlayerFOV
	 */
	struct AGBPlayerController_GetPlayerFOV_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetOverrideInputWidget
	 */
	struct AGBPlayerController_GetOverrideInputWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetNoTargetMode
	 */
	struct AGBPlayerController_GetNoTargetMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetNoSway
	 */
	struct AGBPlayerController_GetNoSway_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetNoRecoil
	 */
	struct AGBPlayerController_GetNoRecoil_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetNetInfo
	 */
	struct AGBPlayerController_GetNetInfo_Params
	{
	public:
		int32_t                                                    Ping;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InKiloBytesPerSecond;                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InPacketsPerSecond;                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InLossPercentage;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutKiloBytesPerSecond;                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPacketsPerSecond;                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutLossPercentage;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetLastTeamKillVictimPlayerState
	 */
	struct AGBPlayerController_GetLastTeamKillVictimPlayerState_Params
	{
	public:
		class APlayerState*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetLastDesiredOffTargetAlphaValue
	 */
	struct AGBPlayerController_GetLastDesiredOffTargetAlphaValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetGodMode
	 */
	struct AGBPlayerController_GetGodMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetGBHUD
	 */
	struct AGBPlayerController_GetGBHUD_Params
	{
	public:
		class AGBHUD*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetGBCharacter
	 */
	struct AGBPlayerController_GetGBCharacter_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetFPS
	 */
	struct AGBPlayerController_GetFPS_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetFluidStance
	 */
	struct AGBPlayerController_GetFluidStance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetEyeBias
	 */
	struct AGBPlayerController_GetEyeBias_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.GetCameraStyle
	 */
	struct AGBPlayerController_GetCameraStyle_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.FrozenTimeLeft
	 */
	struct AGBPlayerController_FrozenTimeLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Freeze
	 */
	struct AGBPlayerController_Freeze_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Forgive
	 */
	struct AGBPlayerController_Forgive_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ForceHideTransitionScreens
	 */
	struct AGBPlayerController_ForceHideTransitionScreens_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.FlushActions
	 */
	struct AGBPlayerController_FlushActions_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.FirearmAttachment_Released
	 */
	struct AGBPlayerController_FirearmAttachment_Released_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.FirearmAttachment_Pressed
	 */
	struct AGBPlayerController_FirearmAttachment_Pressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.EditMission
	 */
	struct AGBPlayerController_EditMission_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.DropEquipped
	 */
	struct AGBPlayerController_DropEquipped_Params
	{
	public:
		bool                                                       bDropLeftHand;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDropRightHand;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.DelayedSaveConfig
	 */
	struct AGBPlayerController_DelayedSaveConfig_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.DecreaseSightMagnificationPressed
	 */
	struct AGBPlayerController_DecreaseSightMagnificationPressed_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.DecreaseReticleBrightnessLevel
	 */
	struct AGBPlayerController_DecreaseReticleBrightnessLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.CycleReticleColour
	 */
	struct AGBPlayerController_CycleReticleColour_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientTeamKillWarn
	 */
	struct AGBPlayerController_ClientTeamKillWarn_Params
	{
	public:
		class APlayerState*                                        VictimPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientTeamKilledNotify
	 */
	struct AGBPlayerController_ClientTeamKilledNotify_Params
	{
	public:
		class APlayerState*                                        TeamKillerPlayerState;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PrevKills;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientShowWorldPrompt
	 */
	struct AGBPlayerController_ClientShowWorldPrompt_Params
	{
	public:
		struct FVector                                             PromptLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientShowSpawnProtectionWarning
	 */
	struct AGBPlayerController_ClientShowSpawnProtectionWarning_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientShowMenu
	 */
	struct AGBPlayerController_ClientShowMenu_Params
	{
	public:
		struct FSoftClassPath                                      MenuClassName;                                           // 0x0000(0x0018)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientShowAdminMenu
	 */
	struct AGBPlayerController_ClientShowAdminMenu_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientSetIgnoreUseInput
	 */
	struct AGBPlayerController_ClientSetIgnoreUseInput_Params
	{
	public:
		bool                                                       bIgnore;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientSendPlayerCharVoice
	 */
	struct AGBPlayerController_ClientSendPlayerCharVoice_Params
	{
	public:
		class AGBPlayerState*                                      SenderPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetId                                     SenderCharVoiceDataId;                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadio;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientOnLoadoutApplied
	 */
	struct AGBPlayerController_ClientOnLoadoutApplied_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientInitialSync
	 */
	struct AGBPlayerController_ClientInitialSync_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientGameMessage
	 */
	struct AGBPlayerController_ClientGameMessage_Params
	{
	public:
		class FName                                                GameMessageId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Type;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientFreeze
	 */
	struct AGBPlayerController_ClientFreeze_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientEnterReadyRoom
	 */
	struct AGBPlayerController_ClientEnterReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientEnterPlayArea
	 */
	struct AGBPlayerController_ClientEnterPlayArea_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientBecameSpectator
	 */
	struct AGBPlayerController_ClientBecameSpectator_Params
	{
	public:
		struct FVector                                             NewSpectatorLocation;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewSpectatorRotation;                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientAFKPrompt
	 */
	struct AGBPlayerController_ClientAFKPrompt_Params
	{
	public:
		float                                                      ReponseTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClientAdminReply
	 */
	struct AGBPlayerController_ClientAdminReply_Params
	{
	public:
		struct FZKReplicatedContent                                Content;                                                 // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.ClearOverrideWidget
	 */
	struct AGBPlayerController_ClearOverrideWidget_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClearCurrentInteractivePrimitive
	 */
	struct AGBPlayerController_ClearCurrentInteractivePrimitive_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClearAutoSwitchTimer
	 */
	struct AGBPlayerController_ClearAutoSwitchTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.ClearAllIgnoreUseInputReasons
	 */
	struct AGBPlayerController_ClearAllIgnoreUseInputReasons_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerController.BulletWarn
	 */
	struct AGBPlayerController_BulletWarn_Params
	{
	public:
		class AActor*                                              Bullet;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSubSonic;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.AdminSet
	 */
	struct AGBPlayerController_AdminSet_Params
	{
	public:
		struct FZKReplicatedContent                                Content;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.AdminRequest
	 */
	struct AGBPlayerController_AdminRequest_Params
	{
	public:
		class FName                                                RequestType;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnAdminRequestFilled;                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.Admin
	 */
	struct AGBPlayerController_Admin_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.AddLocalPlayerTag
	 */
	struct AGBPlayerController_AddLocalPlayerTag_Params
	{
	public:
		class FName                                                LocalPlayerTag;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerController.AddIgnoreUseInputReason
	 */
	struct AGBPlayerController_AddIgnoreUseInputReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCheatManager.ZeroSightTo
	 */
	struct UGBCheatManager_ZeroSightTo_Params
	{
	public:
		int32_t                                                    NewZeroDistance;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCheatManager.ValidateKitAssetIds
	 */
	struct UGBCheatManager_ValidateKitAssetIds_Params
	{	};

	/**
	 * Function GroundBranch.GBCheatManager.SetWaterLevel
	 */
	struct UGBCheatManager_SetWaterLevel_Params
	{
	public:
		int32_t                                                    InWaterLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBCheatManager.NoTarget
	 */
	struct UGBCheatManager_NoTarget_Params
	{	};

	/**
	 * Function GroundBranch.GBCheatManager.NoSway
	 */
	struct UGBCheatManager_NoSway_Params
	{	};

	/**
	 * Function GroundBranch.GBCheatManager.NoRecoil
	 */
	struct UGBCheatManager_NoRecoil_Params
	{	};

	/**
	 * Function GroundBranch.GBCheatManager.DebugGameCommand
	 */
	struct UGBCheatManager_DebugGameCommand_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBClothing.OnTakeHit
	 */
	struct AGBClothing_OnTakeHit_Params
	{
	public:
		class FName                                                RefBoneName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RefPosPosition;                                          // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBClothing.GetCustomAssetRef
	 */
	struct AGBClothing_GetCustomAssetRef_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBClothing.GetCustomAsset
	 */
	struct AGBClothing_GetCustomAsset_Params
	{
	public:
		struct FSoftObjectPath                                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBClothing.Apply
	 */
	struct AGBClothing_Apply_Params
	{	};

	/**
	 * Function GroundBranch.GBDirectSight.GetType
	 */
	struct AGBDirectSight_GetType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBDroppedItem.SetAssociatedItem
	 */
	struct AGBDroppedItem_SetAssociatedItem_Params
	{
	public:
		class AGBItem*                                             NewAssociatedItem;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBDroppedItem.RescueImportant
	 */
	struct AGBDroppedItem_RescueImportant_Params
	{	};

	/**
	 * Function GroundBranch.GBDroppedItem.OnRep_AssociatedItem
	 */
	struct AGBDroppedItem_OnRep_AssociatedItem_Params
	{	};

	/**
	 * Function GroundBranch.GBDroppedItem.OnPhysicsCollision
	 */
	struct AGBDroppedItem_OnPhysicsCollision_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBDroppedItem.MakeInteractiveEvent
	 */
	struct AGBDroppedItem_MakeInteractiveEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBDroppedItem.IsImportant
	 */
	struct AGBDroppedItem_IsImportant_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBDroppedItem.GetAssociatedItem
	 */
	struct AGBDroppedItem_GetAssociatedItem_Params
	{
	public:
		class AGBItem*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBEjectComponent.IsManuallyEjected
	 */
	struct UGBEjectComponent_IsManuallyEjected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBEjectComponent.DeActivateSmoke
	 */
	struct UGBEjectComponent_DeActivateSmoke_Params
	{	};

	/**
	 * Function GroundBranch.GBEjectComponent.DeActivateShell
	 */
	struct UGBEjectComponent_DeActivateShell_Params
	{	};

	/**
	 * Function GroundBranch.GBEjectComponent.ActivateSmoke
	 */
	struct UGBEjectComponent_ActivateSmoke_Params
	{	};

	/**
	 * Function GroundBranch.GBEjectComponent.ActivateShell
	 */
	struct UGBEjectComponent_ActivateShell_Params
	{	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.SetIsFiringFromOpenBolt
	 */
	struct UGBExternalMagazineComponent_SetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       bNewIsFiringFromOpenBolt;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.SetChamberedRound
	 */
	struct UGBExternalMagazineComponent_SetChamberedRound_Params
	{
	public:
		class UClass*                                              NewChamberedRound;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.SetBoltHeldOpen
	 */
	struct UGBExternalMagazineComponent_SetBoltHeldOpen_Params
	{
	public:
		bool                                                       bNewBoltIsHeldOpen;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetMagazineType
	 */
	struct UGBExternalMagazineComponent_GetMagazineType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetMagazineClass
	 */
	struct UGBExternalMagazineComponent_GetMagazineClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetMagazine
	 */
	struct UGBExternalMagazineComponent_GetMagazine_Params
	{
	public:
		class AGBMagazine*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetIsFiringFromOpenBolt
	 */
	struct UGBExternalMagazineComponent_GetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetDefaultMagazineClass
	 */
	struct UGBExternalMagazineComponent_GetDefaultMagazineClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetChamberedRound
	 */
	struct UGBExternalMagazineComponent_GetChamberedRound_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.GetBoltHeldOpen
	 */
	struct UGBExternalMagazineComponent_GetBoltHeldOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBExternalMagazineComponent.FindCompatibleMagazine
	 */
	struct UGBExternalMagazineComponent_FindCompatibleMagazine_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBMagazine*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ZeroCurrentSightComp
	 */
	struct AGBFirearm_ZeroCurrentSightComp_Params
	{
	public:
		class UGBSightComponent*                                   SightComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.UseRound
	 */
	struct AGBFirearm_UseRound_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.TriggerPullDelay
	 */
	struct AGBFirearm_TriggerPullDelay_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.SpatialSoundSphereEndOverlap
	 */
	struct AGBFirearm_SpatialSoundSphereEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.SpatialSoundSphereBeginOverlap
	 */
	struct AGBFirearm_SpatialSoundSphereBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D88Y[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.SetupCollisionTraceEndOffset
	 */
	struct AGBFirearm_SetupCollisionTraceEndOffset_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.SetFiringModeIndex
	 */
	struct AGBFirearm_SetFiringModeIndex_Params
	{
	public:
		unsigned char                                              NewFiringModeIndex;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.SetFiringModeByString
	 */
	struct AGBFirearm_SetFiringModeByString_Params
	{
	public:
		class FString                                              FiringModeString;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.SetCurrentSight
	 */
	struct AGBFirearm_SetCurrentSight_Params
	{
	public:
		class UGBSightComponent*                                   NewSight;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ServerSetFiringModeIndex
	 */
	struct AGBFirearm_ServerSetFiringModeIndex_Params
	{
	public:
		unsigned char                                              NewFiringMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ServerSetCurrentSight
	 */
	struct AGBFirearm_ServerSetCurrentSight_Params
	{
	public:
		class UGBSightComponent*                                   NewSight;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ServerReloadBegin
	 */
	struct AGBFirearm_ServerReloadBegin_Params
	{
	public:
		TArray<class FName>                                        ReloadPlan;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ServerReleaseTrigger
	 */
	struct AGBFirearm_ServerReleaseTrigger_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.ServerPullTrigger
	 */
	struct AGBFirearm_ServerPullTrigger_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.ReloadInputDelay
	 */
	struct AGBFirearm_ReloadInputDelay_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.ReloadBegin
	 */
	struct AGBFirearm_ReloadBegin_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReloadStateFlags;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.ReleaseTrigger
	 */
	struct AGBFirearm_ReleaseTrigger_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.PullTrigger
	 */
	struct AGBFirearm_PullTrigger_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnStoppedFiringEvent
	 */
	struct AGBFirearm_OnStoppedFiringEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnSpatialSoundTagChangedEvent
	 */
	struct AGBFirearm_OnSpatialSoundTagChangedEvent_Params
	{
	public:
		class FName                                                OldSpatialSoundTag;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewSpatialSoundTag;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.OnSetFiringModeIndexEvent
	 */
	struct AGBFirearm_OnSetFiringModeIndexEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnRep_CurrentSight
	 */
	struct AGBFirearm_OnRep_CurrentSight_Params
	{
	public:
		class UGBSightComponent*                                   LastActiveSightComponent;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.OnReloadTappedEvent
	 */
	struct AGBFirearm_OnReloadTappedEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnReloadDoubleTappedEvent
	 */
	struct AGBFirearm_OnReloadDoubleTappedEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnFiringEvent
	 */
	struct AGBFirearm_OnFiringEvent_Params
	{
	public:
		int32_t                                                    RecoilCount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.OnEmptyShotEvent
	 */
	struct AGBFirearm_OnEmptyShotEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.OnChangeFiringModeEvent
	 */
	struct AGBFirearm_OnChangeFiringModeEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.NextShot
	 */
	struct AGBFirearm_NextShot_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.IsReloading
	 */
	struct AGBFirearm_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.IsFingerOnTrigger
	 */
	struct AGBFirearm_IsFingerOnTrigger_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.IsEngaged
	 */
	struct AGBFirearm_IsEngaged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.IsEmpty
	 */
	struct AGBFirearm_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetTotalAvailableCount
	 */
	struct AGBFirearm_GetTotalAvailableCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetShotCount
	 */
	struct AGBFirearm_GetShotCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetRateOfFire
	 */
	struct AGBFirearm_GetRateOfFire_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetNumSightLines
	 */
	struct AGBFirearm_GetNumSightLines_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetMuzzleOffset
	 */
	struct AGBFirearm_GetMuzzleOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetMinSightRelativeX
	 */
	struct AGBFirearm_GetMinSightRelativeX_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetMaxGripRelativeX
	 */
	struct AGBFirearm_GetMaxGripRelativeX_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetInteractComp
	 */
	struct AGBFirearm_GetInteractComp_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetGunshotComp
	 */
	struct AGBFirearm_GetGunshotComp_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetFiringModes
	 */
	struct AGBFirearm_GetFiringModes_Params
	{
	public:
		TArray<struct FFiringModeData>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetFiringModeIndex
	 */
	struct AGBFirearm_GetFiringModeIndex_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetFiringModeByString
	 */
	struct AGBFirearm_GetFiringModeByString_Params
	{
	public:
		class FString                                              FiringModeString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetFirearmTransform
	 */
	struct AGBFirearm_GetFirearmTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetEmptySlingPoint
	 */
	struct AGBFirearm_GetEmptySlingPoint_Params
	{
	public:
		class AGBCharacter*                                        GBCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetEmptyHolster
	 */
	struct AGBFirearm_GetEmptyHolster_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBHolster*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetCollisionTraceEndOffset
	 */
	struct AGBFirearm_GetCollisionTraceEndOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetBurstCount
	 */
	struct AGBFirearm_GetBurstCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetBulletProjectileClass
	 */
	struct AGBFirearm_GetBulletProjectileClass_Params
	{
	public:
		class UGBBarrelComponent*                                  Barrel;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.GetBaseBulletProjectileClass
	 */
	struct AGBFirearm_GetBaseBulletProjectileClass_Params
	{
	public:
		class UGBBarrelComponent*                                  Barrel;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.FireShot
	 */
	struct AGBFirearm_FireShot_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.EndShot
	 */
	struct AGBFirearm_EndShot_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.DisplayReloadMenuEvent
	 */
	struct AGBFirearm_DisplayReloadMenuEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.DisplayFiringModeMenuEvent
	 */
	struct AGBFirearm_DisplayFiringModeMenuEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.DisplayFiringModeMenu
	 */
	struct AGBFirearm_DisplayFiringModeMenu_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.CheckWantsToPullTrigger
	 */
	struct AGBFirearm_CheckWantsToPullTrigger_Params
	{	};

	/**
	 * Function GroundBranch.GBFirearm.ChangeFiringModeIndex
	 */
	struct AGBFirearm_ChangeFiringModeIndex_Params
	{
	public:
		int32_t                                                    Dir;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFirearm.AIReload
	 */
	struct AGBFirearm_AIReload_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReloadType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ViewportPositionDeproject
	 */
	struct UGBFunctionLibrary_ViewportPositionDeproject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldOrigin;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldDirection;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.VerticalFOV
	 */
	struct UGBFunctionLibrary_VerticalFOV_Params
	{
	public:
		float                                                      HorizontalFOV;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AspectRatio;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.TrimDigitsFromString
	 */
	struct UGBFunctionLibrary_TrimDigitsFromString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Time_GetOSTime
	 */
	struct UGBFunctionLibrary_Time_GetOSTime_Params
	{
	public:
		int32_t                                                    MilliSeconds;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Seconds;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minutes;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Hours12;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Hours24;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Day;                                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Month;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Year;                                                    // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.StringToDisplayString
	 */
	struct UGBFunctionLibrary_StringToDisplayString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBool;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LP35[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SortStringArray
	 */
	struct UGBFunctionLibrary_SortStringArray_Params
	{
	public:
		TArray<class FString>                                      StringArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      StringArrayRef;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SortIntArray
	 */
	struct UGBFunctionLibrary_SortIntArray_Params
	{
	public:
		TArray<int32_t>                                            IntArray;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            IntArrayRef;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SortFloatArray
	 */
	struct UGBFunctionLibrary_SortFloatArray_Params
	{
	public:
		TArray<float>                                              FloatArray;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              FloatArrayRef;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SortActorArray
	 */
	struct UGBFunctionLibrary_SortActorArray_Params
	{
	public:
		TArray<class AActor*>                                      ActorArray;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ActorArrayRef;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SocketNameMatches
	 */
	struct UGBFunctionLibrary_SocketNameMatches_Params
	{
	public:
		TArray<class FName>                                        SocketNamesToCheck;                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                SocketNameToFind;                                        // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESearchFix                                                 SearchFix;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SignedAlphaToByte
	 */
	struct UGBFunctionLibrary_SignedAlphaToByte_Params
	{
	public:
		float                                                      AlphaValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetSkyLightSourceType
	 */
	struct UGBFunctionLibrary_SetSkyLightSourceType_Params
	{
	public:
		class USkyLightComponent*                                  SkyLightComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkyLightSourceType                                        SourceType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetSkyLightRealTimeCapture
	 */
	struct UGBFunctionLibrary_SetSkyLightRealTimeCapture_Params
	{
	public:
		class USkyLightComponent*                                  SkyLightComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetGenericTeamId
	 */
	struct UGBFunctionLibrary_SetGenericTeamId_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamId;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetConsoleString
	 */
	struct UGBFunctionLibrary_SetConsoleString_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetConsoleInt
	 */
	struct UGBFunctionLibrary_SetConsoleInt_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IntValue;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetConsoleFloat
	 */
	struct UGBFunctionLibrary_SetConsoleFloat_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FloatValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetConsoleBool
	 */
	struct UGBFunctionLibrary_SetConsoleBool_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BoolValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SetComponentUseSimpleCharacterShadows
	 */
	struct UGBFunctionLibrary_SetComponentUseSimpleCharacterShadows_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseSimpleShadows;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.SaveStringToFile
	 */
	struct UGBFunctionLibrary_SaveStringToFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverWrite;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.RenameActor
	 */
	struct UGBFunctionLibrary_RenameActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewActorName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.RemoveCharacter
	 */
	struct UGBFunctionLibrary_RemoveCharacter_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InCharacter;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.RemoveBadCharacters
	 */
	struct UGBFunctionLibrary_RemoveBadCharacters_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Project
	 */
	struct UGBFunctionLibrary_Project_Params
	{
	public:
		struct FTransform                                          ViewTM;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      FOV;                                                     // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenSize;                                              // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutScreenPosition;                                       // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.PrettifyJsonString
	 */
	struct UGBFunctionLibrary_PrettifyJsonString_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutPrettyKitString;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ParseValue_String
	 */
	struct UGBFunctionLibrary_ParseValue_String_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Match;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ParseValue_Name
	 */
	struct UGBFunctionLibrary_ParseValue_Name_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Match;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Value;                                                   // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ParseValue_Integer
	 */
	struct UGBFunctionLibrary_ParseValue_Integer_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Match;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ParseValue_Float
	 */
	struct UGBFunctionLibrary_ParseValue_Float_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Match;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ParseValue_Bool
	 */
	struct UGBFunctionLibrary_ParseValue_Bool_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Match;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.OnSameTeam
	 */
	struct UGBFunctionLibrary_OnSameTeam_Params
	{
	public:
		class AActor*                                              ActorA;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorB;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.NameArraysMatch
	 */
	struct UGBFunctionLibrary_NameArraysMatch_Params
	{
	public:
		TArray<class FName>                                        SourceNames;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        TargetNames;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.LoadStringFromFile
	 */
	struct UGBFunctionLibrary_LoadStringFromFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLogWarnings;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.LoadStringArrayFromFile
	 */
	struct UGBFunctionLibrary_LoadStringArrayFromFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutStringArray;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bLogWarnings;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.LoadExternalImage
	 */
	struct UGBFunctionLibrary_LoadExternalImage_Params
	{
	public:
		class FString                                              ImagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          OutImage;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutWidth;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutHeight;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsValidSoftObjectPath
	 */
	struct UGBFunctionLibrary_IsValidSoftObjectPath_Params
	{
	public:
		struct FSoftObjectPath                                     SoftObjectPath;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsSimulatingInEditor
	 */
	struct UGBFunctionLibrary_IsSimulatingInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsKeyBoundToActionDown
	 */
	struct UGBFunctionLibrary_IsKeyBoundToActionDown_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsInState
	 */
	struct UGBFunctionLibrary_IsInState_Params
	{
	public:
		class AController*                                         Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InStateName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsGameWorld
	 */
	struct UGBFunctionLibrary_IsGameWorld_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsFriendly
	 */
	struct UGBFunctionLibrary_IsFriendly_Params
	{
	public:
		class AActor*                                              ActorA;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorB;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsFacing
	 */
	struct UGBFunctionLibrary_IsFacing_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinForwardDot;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreVerticalFacing;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsEditorWorld
	 */
	struct UGBFunctionLibrary_IsEditorWorld_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsEditor
	 */
	struct UGBFunctionLibrary_IsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.IsDebugDisplayOn
	 */
	struct UGBFunctionLibrary_IsDebugDisplayOn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                DebugType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.HorizontalFOV
	 */
	struct UGBFunctionLibrary_HorizontalFOV_Params
	{
	public:
		float                                                      VerticalFOV;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AspectRatio;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetViewportPositionHitResultByChannel
	 */
	struct UGBFunctionLibrary_GetViewportPositionHitResultByChannel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTraceComplex;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WNKL[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHitResult;                                            // 0x0028(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetViewportPosition
	 */
	struct UGBFunctionLibrary_GetViewportPosition_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutViewportPosition;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetUseSimpleCharacterShadows
	 */
	struct UGBFunctionLibrary_GetUseSimpleCharacterShadows_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetUnixTimestamp
	 */
	struct UGBFunctionLibrary_GetUnixTimestamp_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetTimeAlive
	 */
	struct UGBFunctionLibrary_GetTimeAlive_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetStateName
	 */
	struct UGBFunctionLibrary_GetStateName_Params
	{
	public:
		class AController*                                         Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetScreenShotDir
	 */
	struct UGBFunctionLibrary_GetScreenShotDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetSavedDir
	 */
	struct UGBFunctionLibrary_GetSavedDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetSavedConfigDir
	 */
	struct UGBFunctionLibrary_GetSavedConfigDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetRefPoseBoneTransform
	 */
	struct UGBFunctionLibrary_GetRefPoseBoneTransform_Params
	{
	public:
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetProjectVersion
	 */
	struct UGBFunctionLibrary_GetProjectVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetOptionsFromCommandLine
	 */
	struct UGBFunctionLibrary_GetOptionsFromCommandLine_Params
	{
	public:
		class FString                                              CommandLine;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetNetworkVersion
	 */
	struct UGBFunctionLibrary_GetNetworkVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetMaterialInstanceStaticSwitchParameterValue
	 */
	struct UGBFunctionLibrary_GetMaterialInstanceStaticSwitchParameterValue_Params
	{
	public:
		class UMaterialInstance*                                   Instance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ParameterName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckParent;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetMatchingSocketNames
	 */
	struct UGBFunctionLibrary_GetMatchingSocketNames_Params
	{
	public:
		TArray<class FName>                                        CheckSocketNames;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SceneComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        OutSocketNames;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		ESearchFix                                                 SearchFix;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetMapPath
	 */
	struct UGBFunctionLibrary_GetMapPath_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrimGame;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CL90[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetMapFromCommandLine
	 */
	struct UGBFunctionLibrary_GetMapFromCommandLine_Params
	{
	public:
		class FString                                              CommandLine;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemovePath;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7AQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetMapAssetPackageName
	 */
	struct UGBFunctionLibrary_GetMapAssetPackageName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrimGame;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6ALC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetLocalPlayer
	 */
	struct UGBFunctionLibrary_GetLocalPlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetLastDigitsFromString
	 */
	struct UGBFunctionLibrary_GetLastDigitsFromString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetKeyText
	 */
	struct UGBFunctionLibrary_GetKeyText_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetKeysBoundToAction
	 */
	struct UGBFunctionLibrary_GetKeysBoundToAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetGenericTeamId
	 */
	struct UGBFunctionLibrary_GetGenericTeamId_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetGBLocalPlayer
	 */
	struct UGBFunctionLibrary_GetGBLocalPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGBLocalPlayer*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetGameLogDir
	 */
	struct UGBFunctionLibrary_GetGameLogDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetGameDir
	 */
	struct UGBFunctionLibrary_GetGameDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetGameContentDir
	 */
	struct UGBFunctionLibrary_GetGameContentDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetFirstActorOfClass
	 */
	struct UGBFunctionLibrary_GetFirstActorOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetFileList
	 */
	struct UGBFunctionLibrary_GetFileList_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extension;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrimPathAndExt;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UWHL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      FileList;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetDistanceAlongSplineAtSplineInputKey
	 */
	struct UGBFunctionLibrary_GetDistanceAlongSplineAtSplineInputKey_Params
	{
	public:
		class USplineComponent*                                    SplineComp;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InKey;                                                   // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetCreationTime
	 */
	struct UGBFunctionLibrary_GetCreationTime_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConsoleString
	 */
	struct UGBFunctionLibrary_GetConsoleString_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConsoleInt
	 */
	struct UGBFunctionLibrary_GetConsoleInt_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutInt;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConsoleHelp
	 */
	struct UGBFunctionLibrary_GetConsoleHelp_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutHelp;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConsoleFloat
	 */
	struct UGBFunctionLibrary_GetConsoleFloat_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutFloat;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConsoleBool
	 */
	struct UGBFunctionLibrary_GetConsoleBool_Params
	{
	public:
		class FString                                              ConsoleVar;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutBool;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetConfigFilename
	 */
	struct UGBFunctionLibrary_GetConfigFilename_Params
	{
	public:
		class FString                                              ConfigFile;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetComponentByName
	 */
	struct UGBFunctionLibrary_GetComponentByName_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetClassDefaultObject
	 */
	struct UGBFunctionLibrary_GetClassDefaultObject_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetBuildType
	 */
	struct UGBFunctionLibrary_GetBuildType_Params
	{
	public:
		bool                                                       bIncludeEditor;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_05DU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetBuildNumber
	 */
	struct UGBFunctionLibrary_GetBuildNumber_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetBaseFilename
	 */
	struct UGBFunctionLibrary_GetBaseFilename_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetAssetSoftObjPtrs
	 */
	struct UGBFunctionLibrary_GetAssetSoftObjPtrs_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ITL[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetActorCameraComponent
	 */
	struct UGBFunctionLibrary_GetActorCameraComponent_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraComponent*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GetActor2DBoundingBox
	 */
	struct UGBFunctionLibrary_GetActor2DBoundingBox_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNonColliding;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9M22[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           OutMins;                                                 // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutMaxs;                                                 // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Get_PhysicalMaterial
	 */
	struct UGBFunctionLibrary_Get_PhysicalMaterial_Params
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.GenerateMissionDisplayName
	 */
	struct UGBFunctionLibrary_GenerateMissionDisplayName_Params
	{
	public:
		class FString                                              InMapName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InVariantName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.FlushPressedKeys
	 */
	struct UGBFunctionLibrary_FlushPressedKeys_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.FlushPressedActions
	 */
	struct UGBFunctionLibrary_FlushPressedActions_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ActionNames;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.FlushPressedAction
	 */
	struct UGBFunctionLibrary_FlushPressedAction_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.FileExists
	 */
	struct UGBFunctionLibrary_FileExists_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.EvalBool
	 */
	struct UGBFunctionLibrary_EvalBool_Params
	{
	public:
		class FString                                              InOpt;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Default;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.DrawDebugWideArrow
	 */
	struct UGBFunctionLibrary_DrawDebugWideArrow_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineStart;                                               // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineEnd;                                                 // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Width;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        LineColor;                                               // 0x0024(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.DeProject
	 */
	struct UGBFunctionLibrary_DeProject_Params
	{
	public:
		struct FTransform                                          ViewTM;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      FOV;                                                     // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenSize;                                              // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x003C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldLocation;                                        // 0x0044(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldDirection;                                       // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.DeleteFile
	 */
	struct UGBFunctionLibrary_DeleteFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLogWarnings;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CreateVolume
	 */
	struct UGBFunctionLibrary_CreateVolume_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T3WK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTM;                                                 // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Size;                                                    // 0x0040(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9AYI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              VolumeClass;                                             // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AVolume*                                             ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CreateMeshComponentCopy
	 */
	struct UGBFunctionLibrary_CreateMeshComponentCopy_Params
	{
	public:
		class AActor*                                              NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      Source;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CopyMeshComponents
	 */
	struct UGBFunctionLibrary_CopyMeshComponents_Params
	{
	public:
		class AActor*                                              NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      ParentComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CopyInstanceVertexColorsIfCompatible
	 */
	struct UGBFunctionLibrary_CopyInstanceVertexColorsIfCompatible_Params
	{
	public:
		class UStaticMeshComponent*                                SourceComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMeshComponent*                                TargetComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ConvertMinutesTo24Hours
	 */
	struct UGBFunctionLibrary_ConvertMinutesTo24Hours_Params
	{
	public:
		int32_t                                                    MinutesOfDay;                                            // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZXPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Convert24HoursToMinutes
	 */
	struct UGBFunctionLibrary_Convert24HoursToMinutes_Params
	{
	public:
		class FString                                              TimeString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_SetString
	 */
	struct UGBFunctionLibrary_Config_SetString_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_SetInt
	 */
	struct UGBFunctionLibrary_Config_SetInt_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0030(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_SetFloat
	 */
	struct UGBFunctionLibrary_Config_SetFloat_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0030(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_SetBool
	 */
	struct UGBFunctionLibrary_Config_SetBool_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0030(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_SetArray
	 */
	struct UGBFunctionLibrary_Config_SetArray_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Values;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_Save
	 */
	struct UGBFunctionLibrary_Config_Save_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_RemoveFromArray
	 */
	struct UGBFunctionLibrary_Config_RemoveFromArray_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_GetString
	 */
	struct UGBFunctionLibrary_Config_GetString_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y6HM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_GetInt
	 */
	struct UGBFunctionLibrary_Config_GetInt_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1YFG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_GetFloat
	 */
	struct UGBFunctionLibrary_Config_GetFloat_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W1IG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_GetBool
	 */
	struct UGBFunctionLibrary_Config_GetBool_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_GetArray
	 */
	struct UGBFunctionLibrary_Config_GetArray_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QEB6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Config_AddToArray
	 */
	struct UGBFunctionLibrary_Config_AddToArray_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CondenseJsonString
	 */
	struct UGBFunctionLibrary_CondenseJsonString_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutCondensedString;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Component_SetCastHiddenShadow
	 */
	struct UGBFunctionLibrary_Component_SetCastHiddenShadow_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewCastHiddenShadow;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CaptureComponent2D_SaveImage
	 */
	struct UGBFunctionLibrary_CaptureComponent2D_SaveImage_Params
	{
	public:
		class USceneCaptureComponent2D*                            Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ImagePath;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ClearColour;                                             // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CaptureComponent2D_Project
	 */
	struct UGBFunctionLibrary_CaptureComponent2D_Project_Params
	{
	public:
		class USceneCaptureComponent2D*                            Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutPixelLocation;                                        // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.CaptureComponent2D_DeProject
	 */
	struct UGBFunctionLibrary_CaptureComponent2D_DeProject_Params
	{
	public:
		class USceneCaptureComponent2D*                            Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPos;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldOrigin;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldDirection;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Capture2D_SaveImage
	 */
	struct UGBFunctionLibrary_Capture2D_SaveImage_Params
	{
	public:
		class ASceneCapture2D*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ImagePath;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ClearColour;                                             // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Capture2D_Project
	 */
	struct UGBFunctionLibrary_Capture2D_Project_Params
	{
	public:
		class ASceneCapture2D*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutPixelLocation;                                        // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Capture2D_DeProject
	 */
	struct UGBFunctionLibrary_Capture2D_DeProject_Params
	{
	public:
		class ASceneCapture2D*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPos;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldOrigin;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldDirection;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ByteToSignedAlpha
	 */
	struct UGBFunctionLibrary_ByteToSignedAlpha_Params
	{
	public:
		unsigned char                                              ByteValue;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LK3W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.ByteToAlpha
	 */
	struct UGBFunctionLibrary_ByteToAlpha_Params
	{
	public:
		unsigned char                                              ByteValue;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2JQY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.BlueprintSyncLoadClass
	 */
	struct UGBFunctionLibrary_BlueprintSyncLoadClass_Params
	{
	public:
		unsigned char                                              UnknownData_663P[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.BlueprintSyncLoadAsset
	 */
	struct UGBFunctionLibrary_BlueprintSyncLoadAsset_Params
	{
	public:
		unsigned char                                              UnknownData_0Z37[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.Array_Sort
	 */
	struct UGBFunctionLibrary_Array_Sort_Params
	{
	public:
		TArray<int32_t>                                            TargetArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAscendingOrder;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4PNQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                VariableName;                                            // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.AngleWithin
	 */
	struct UGBFunctionLibrary_AngleWithin_Params
	{
	public:
		float                                                      AngleDegrees;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinAngleDegrees;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAngleDegrees;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInclusive;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBFunctionLibrary.AlphaToByte
	 */
	struct UGBFunctionLibrary_AlphaToByte_Params
	{
	public:
		float                                                      AlphaValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.TerminateDedicatedServer
	 */
	struct UGBGameInstance_TerminateDedicatedServer_Params
	{	};

	/**
	 * Function GroundBranch.GBGameInstance.ShowLoadingScreen
	 */
	struct UGBGameInstance_ShowLoadingScreen_Params
	{	};

	/**
	 * Function GroundBranch.GBGameInstance.SetLoadingScreenWidget
	 */
	struct UGBGameInstance_SetLoadingScreenWidget_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.HideLoadingScreen
	 */
	struct UGBGameInstance_HideLoadingScreen_Params
	{	};

	/**
	 * Function GroundBranch.GBGameInstance.GetLoadingScreenWidget
	 */
	struct UGBGameInstance_GetLoadingScreenWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.DefaultControlsShown
	 */
	struct UGBGameInstance_DefaultControlsShown_Params
	{	};

	/**
	 * Function GroundBranch.GBGameInstance.CreateInviteLoadingScreenWidget
	 */
	struct UGBGameInstance_CreateInviteLoadingScreenWidget_Params
	{
	public:
		class FString                                              ConnectCommand;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapName;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.CreateDefaultLoadingScreenWidget
	 */
	struct UGBGameInstance_CreateDefaultLoadingScreenWidget_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.CreateDedicatedServer
	 */
	struct UGBGameInstance_CreateDedicatedServer_Params
	{
	public:
		class FString                                              CommandLine;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowLog;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameInstance.BroadcastOnLoadingScreenEvent
	 */
	struct UGBGameInstance_BroadcastOnLoadingScreenEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.UpdateGameRules
	 */
	struct AGBGameMode_UpdateGameRules_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.UnFreezeBots
	 */
	struct AGBGameMode_UnFreezeBots_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.TimeLimitTimer
	 */
	struct AGBGameMode_TimeLimitTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.TimeLimitReached
	 */
	struct AGBGameMode_TimeLimitReached_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.StandAloneCommand
	 */
	struct AGBGameMode_StandAloneCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.ShouldCheckForTeamKills
	 */
	struct AGBGameMode_ShouldCheckForTeamKills_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetTimeOfDay
	 */
	struct AGBGameMode_SetTimeOfDay_Params
	{
	public:
		int32_t                                                    NewTimeOfDay;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetRoundTime
	 */
	struct AGBGameMode_SetRoundTime_Params
	{
	public:
		int32_t                                                    NewRoundTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetRoundStageTime
	 */
	struct AGBGameMode_SetRoundStageTime_Params
	{
	public:
		int32_t                                                    NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetRoundStage
	 */
	struct AGBGameMode_SetRoundStage_Params
	{
	public:
		class FName                                                NewRoundStage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetMissionFileName
	 */
	struct AGBGameMode_SetMissionFileName_Params
	{
	public:
		class FString                                              NewMissionFileName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetMissionData
	 */
	struct AGBGameMode_SetMissionData_Params
	{
	public:
		class UGBMissionData*                                      NewMissionData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSpawnActors;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRunScript;                                              // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetDifficulty
	 */
	struct AGBGameMode_SetDifficulty_Params
	{
	public:
		int32_t                                                    NewDifficulty;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SetDefaultRoundStageTime
	 */
	struct AGBGameMode_SetDefaultRoundStageTime_Params
	{
	public:
		class FName                                                RoundStageName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewTimeLimit;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.SendEveryoneToReadyRoom
	 */
	struct AGBGameMode_SendEveryoneToReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.SendEveryoneToPlayArea
	 */
	struct AGBGameMode_SendEveryoneToPlayArea_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.RunMissionScript
	 */
	struct AGBGameMode_RunMissionScript_Params
	{
	public:
		class FString                                              ScriptName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.RetryStandalone
	 */
	struct AGBGameMode_RetryStandalone_Params
	{
	public:
		class AGBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.RemoveBots
	 */
	struct AGBGameMode_RemoveBots_Params
	{
	public:
		unsigned char                                              Count;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamId;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.RefreshDroppedItemList
	 */
	struct AGBGameMode_RefreshDroppedItemList_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.RefreshDeadBodyList
	 */
	struct AGBGameMode_RefreshDeadBodyList_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.PrepLatecomer
	 */
	struct AGBGameMode_PrepLatecomer_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerReadyStatusChanged
	 */
	struct AGBGameMode_PlayerReadyStatusChanged_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EReadyStatus                                               ReadyStatus;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerInsertionPointChanged
	 */
	struct AGBGameMode_PlayerInsertionPointChanged_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBInsertionPoint*                                   InsertionPoint;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerGameModeRequest
	 */
	struct AGBGameMode_PlayerGameModeRequest_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Request;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerEnteredReadyRoom
	 */
	struct AGBGameMode_PlayerEnteredReadyRoom_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerEnteredPlayArea
	 */
	struct AGBGameMode_PlayerEnteredPlayArea_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.PlayerCanEnterPlayArea
	 */
	struct AGBGameMode_PlayerCanEnterPlayArea_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnVoteCommandEvent
	 */
	struct AGBGameMode_OnVoteCommandEvent_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Command;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnVoteCommand
	 */
	struct AGBGameMode_OnVoteCommand_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Command;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnRoundStageTimeElapsed
	 */
	struct AGBGameMode_OnRoundStageTimeElapsed_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.OnRoundStageSet
	 */
	struct AGBGameMode_OnRoundStageSet_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.OnRoundStageAborted
	 */
	struct AGBGameMode_OnRoundStageAborted_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnRetryStandalone
	 */
	struct AGBGameMode_OnRetryStandalone_Params
	{
	public:
		class AGBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnProcessCommandEvent
	 */
	struct AGBGameMode_OnProcessCommandEvent_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnProcessCommand
	 */
	struct AGBGameMode_OnProcessCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnLuaError
	 */
	struct AGBGameMode_OnLuaError_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnInitGameStateEvent
	 */
	struct AGBGameMode_OnInitGameStateEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.OnInitGameEvent
	 */
	struct AGBGameMode_OnInitGameEvent_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.OnCharacterDiedEvent
	 */
	struct AGBGameMode_OnCharacterDiedEvent_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         CharacterController;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         KillerController;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.MakeEveryoneSpectate
	 */
	struct AGBGameMode_MakeEveryoneSpectate_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.KillBots
	 */
	struct AGBGameMode_KillBots_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.HasReachedTimeLimit
	 */
	struct AGBGameMode_HasReachedTimeLimit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.HasBots
	 */
	struct AGBGameMode_HasBots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.HandleStartRoundCommand
	 */
	struct AGBGameMode_HandleStartRoundCommand_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.HandleRestartRoundCommand
	 */
	struct AGBGameMode_HandleRestartRoundCommand_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.HandleEndRoundCommand
	 */
	struct AGBGameMode_HandleEndRoundCommand_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.GetTableGameMode
	 */
	struct AGBGameMode_GetTableGameMode_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetSpawnInfo
	 */
	struct AGBGameMode_GetSpawnInfo_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            SpawnRotation;                                           // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetRoundStageTimeRemaining
	 */
	struct AGBGameMode_GetRoundStageTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetRoundStage
	 */
	struct AGBGameMode_GetRoundStage_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetReadyRoomStart
	 */
	struct AGBGameMode_GetReadyRoomStart_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetReadyPlayerTeamCounts
	 */
	struct AGBGameMode_GetReadyPlayerTeamCounts_Params
	{
	public:
		bool                                                       bExcludeBots;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YHU2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetRandomInsertionPoint
	 */
	struct AGBGameMode_GetRandomInsertionPoint_Params
	{
	public:
		class AGBInsertionPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetPlayerLoadoutInfo
	 */
	struct AGBGameMode_GetPlayerLoadoutInfo_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LoadoutName;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBKitInfo*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetMissionFileName
	 */
	struct AGBGameMode_GetMissionFileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetMissionData
	 */
	struct AGBGameMode_GetMissionData_Params
	{
	public:
		class UGBMissionData*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetDisplayName
	 */
	struct AGBGameMode_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetDefaultRoundStageTime
	 */
	struct AGBGameMode_GetDefaultRoundStageTime_Params
	{
	public:
		class FName                                                RoundStageName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetBriefingRoomWidget
	 */
	struct AGBGameMode_GetBriefingRoomWidget_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetBotControllers
	 */
	struct AGBGameMode_GetBotControllers_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J7H5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBAIController*>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetBestLateComerInsertionPoint
	 */
	struct AGBGameMode_GetBestLateComerInsertionPoint_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBInsertionPoint*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetAISpawnManagerClass
	 */
	struct AGBGameMode_GetAISpawnManagerClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetAISpawnManager
	 */
	struct AGBGameMode_GetAISpawnManager_Params
	{
	public:
		class AGBAISpawnManager*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.GetAIBarkManager
	 */
	struct AGBGameMode_GetAIBarkManager_Params
	{
	public:
		class AGBAIBarkManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.FreezeBots
	 */
	struct AGBGameMode_FreezeBots_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.EnterReadyRoom
	 */
	struct AGBGameMode_EnterReadyRoom_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.EnterPlayArea
	 */
	struct AGBGameMode_EnterPlayArea_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.ClearRoundStageTime
	 */
	struct AGBGameMode_ClearRoundStageTime_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.CharacterDied
	 */
	struct AGBGameMode_CharacterDied_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         CharacterController;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         KillerController;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.BroadcastLocalized
	 */
	struct AGBGameMode_BroadcastLocalized_Params
	{
	public:
		class AActor*                                              Sender;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Message;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Switch;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WH7G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        RelatedPlayerState_2;                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        RelatedPlayerState_3;                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OptionalObject;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.BroadcastGameMessage
	 */
	struct AGBGameMode_BroadcastGameMessage_Params
	{
	public:
		class FName                                                GameMessageId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Type;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.Broadcast
	 */
	struct AGBGameMode_Broadcast_Params
	{
	public:
		class AGBPlayerState*                                      SenderPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                MessageType;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.BeginScheduledShutdown
	 */
	struct AGBGameMode_BeginScheduledShutdown_Params
	{	};

	/**
	 * Function GroundBranch.GBGameMode.BecomeSpectator
	 */
	struct AGBGameMode_BecomeSpectator_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.ApplyLoadout
	 */
	struct AGBGameMode_ApplyLoadout_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.AFKDetected
	 */
	struct AGBGameMode_AFKDetected_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.AddDefaultLoadout
	 */
	struct AGBGameMode_AddDefaultLoadout_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.AddBots
	 */
	struct AGBGameMode_AddBots_Params
	{
	public:
		unsigned char                                              Count;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamId;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameMode.AbortRoundStage
	 */
	struct AGBGameMode_AbortRoundStage_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeActorInterface.SetActive
	 */
	struct UGBGameModeActorInterface_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeActorInterface.IsActive
	 */
	struct UGBGameModeActorInterface_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeFunctionLibrary.GetMissionVersion
	 */
	struct UGBGameModeFunctionLibrary_GetMissionVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeFunctionLibrary.GetMissionScriptFileName
	 */
	struct UGBGameModeFunctionLibrary_GetMissionScriptFileName_Params
	{
	public:
		class FString                                              ScriptName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeFunctionLibrary.GetMissionFileName
	 */
	struct UGBGameModeFunctionLibrary_GetMissionFileName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MissionName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeFunctionLibrary.GetMissionExtension
	 */
	struct UGBGameModeFunctionLibrary_GetMissionExtension_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeFunctionLibrary.GetGameModeOptions
	 */
	struct UGBGameModeFunctionLibrary_GetGameModeOptions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeLuaState.GetTimeSeconds
	 */
	struct UGBGameModeLuaState_GetTimeSeconds_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeLuaState.GetScript
	 */
	struct UGBGameModeLuaState_GetScript_Params
	{
	public:
		struct FLuaValue                                           Self;                                                    // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeLuaState.GetComp
	 */
	struct UGBGameModeLuaState_GetComp_Params
	{
	public:
		struct FLuaValue                                           Self;                                                    // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameModeLuaState.DebugPrint
	 */
	struct UGBGameModeLuaState_DebugPrint_Params
	{
	public:
		struct FLuaValue                                           Message;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.SphereOverlapDamageableComponentsSorted
	 */
	struct UGBGameplayStatics_SphereOverlapDamageableComponentsSorted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UPrimitiveComponent*>                         OutComponents;                                           // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.SetReplicatedAlphaValues
	 */
	struct UGBGameplayStatics_SetReplicatedAlphaValues_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FReplicatedAlpha                                    ReplicatedAlpha;                                         // 0x0008(0x000C)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      CurrentAlpha;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetAlpha;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.ResetEncompassedActors
	 */
	struct UGBGameplayStatics_ResetEncompassedActors_Params
	{
	public:
		class AVolume*                                             Volume;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.ResetActors
	 */
	struct UGBGameplayStatics_ResetActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.ResetActor
	 */
	struct UGBGameplayStatics_ResetActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.PositionIsInWater
	 */
	struct UGBGameplayStatics_PositionIsInWater_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             position;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          CollisionChannel;                                        // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.NukeActor
	 */
	struct UGBGameplayStatics_NukeActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.IsSpawnLocationValid
	 */
	struct UGBGameplayStatics_IsSpawnLocationValid_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleHalfHeight;                                       // 0x0014(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleRadius;                                           // 0x0018(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.IsNetReady
	 */
	struct UGBGameplayStatics_IsNetReady_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.IsLocallyViewed
	 */
	struct UGBGameplayStatics_IsLocallyViewed_Params
	{
	public:
		class AActor*                                              Viewed;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GrabAllOptions
	 */
	struct UGBGameplayStatics_GrabAllOptions_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutKeys;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutValues;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GetValidatedSpawnLocation
	 */
	struct UGBGameplayStatics_GetValidatedSpawnLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleHalfHeight;                                       // 0x0014(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleRadius;                                           // 0x0018(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutValidatedSpawnLocation;                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GetUniqueIdAsString
	 */
	struct UGBGameplayStatics_GetUniqueIdAsString_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GetReplicatedAlphaValues
	 */
	struct UGBGameplayStatics_GetReplicatedAlphaValues_Params
	{
	public:
		struct FReplicatedAlpha                                    ReplicatedAlpha;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      CurrentAlpha;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetAlpha;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timestamp;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GetPredictionTime
	 */
	struct UGBGameplayStatics_GetPredictionTime_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.GetLocallyViewingPlayerController
	 */
	struct UGBGameplayStatics_GetLocallyViewingPlayerController_Params
	{
	public:
		class AActor*                                              Viewed;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBPlayerController*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.FindPlayerStateByPlayerNameOrUniqueId
	 */
	struct UGBGameplayStatics_FindPlayerStateByPlayerNameOrUniqueId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerNameOrUniqueId;                                    // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBPlayerState*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.FindPlayerControllerByPlayerNameOrUniqueId
	 */
	struct UGBGameplayStatics_FindPlayerControllerByPlayerNameOrUniqueId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerNameOrUniqueId;                                    // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBPlayerController*                                 ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.EncompassesPoint
	 */
	struct UGBGameplayStatics_EncompassesPoint_Params
	{
	public:
		class AVolume*                                             Volume;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutDistanceToPoint;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.ConeOverlapDamageableComponentsSorted
	 */
	struct UGBGameplayStatics_ConeOverlapDamageableComponentsSorted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Dir;                                                     // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ConeHalfAngle;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UPrimitiveComponent*>                         OutComponents;                                           // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.CanDamageStaticMesh
	 */
	struct UGBGameplayStatics_CanDamageStaticMesh_Params
	{
	public:
		class UStaticMeshComponent*                                StaticComp;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DamageOrigin;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxTraceChecks;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R9QI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0030(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHit;                                                  // 0x0040(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00CC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.CanDamageSkeletalMesh
	 */
	struct UGBGameplayStatics_CanDamageSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DamageOrigin;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2IMZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        Bones;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RP3P[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHit;                                                  // 0x0050(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00DC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameplayStatics.ApplyRadialDamageDirect
	 */
	struct UGBGameplayStatics_ApplyRadialDamageDirect_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDamage;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDamage;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDamageRadius;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDamageRadius;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DamageFalloff;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AController*                                         EventInstigator;                                         // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageTypeClass;                                         // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameSession.UpdateServerDetailsTimer
	 */
	struct AGBGameSession_UpdateServerDetailsTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBGameSession.UpdateServerDetails
	 */
	struct AGBGameSession_UpdateServerDetails_Params
	{	};

	/**
	 * Function GroundBranch.GBGameSession.MutePlayer
	 */
	struct AGBGameSession_MutePlayer_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.UsesReadyRoom
	 */
	struct AGBGameState_UsesReadyRoom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.UpdateMatchStatsAfterRoundEnd
	 */
	struct AGBGameState_UpdateMatchStatsAfterRoundEnd_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.UpdatedTeamAttitudes
	 */
	struct AGBGameState_UpdatedTeamAttitudes_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.UpdatedGameStats
	 */
	struct AGBGameState_UpdatedGameStats_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.UpdatedGameRules
	 */
	struct AGBGameState_UpdatedGameRules_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.SyncTeamScoreLists
	 */
	struct AGBGameState_SyncTeamScoreLists_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.SetWatchMode
	 */
	struct AGBGameState_SetWatchMode_Params
	{
	public:
		EWatchMode                                                 InWatchMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetWatchConfig
	 */
	struct AGBGameState_SetWatchConfig_Params
	{
	public:
		unsigned char                                              InWatchConfig;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetTeamAttitude
	 */
	struct AGBGameState_SetTeamAttitude_Params
	{
	public:
		struct FGenericTeamId                                      Team;                                                    // 0x0000(0x0001)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGenericTeamId                                      OtherTeam;                                               // 0x0001(0x0001)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeamAttitude                                              Attitude;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetServerName
	 */
	struct AGBGameState_SetServerName_Params
	{
	public:
		class FString                                              NewServerName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetServerMOTD
	 */
	struct AGBGameState_SetServerMOTD_Params
	{
	public:
		class FString                                              NewServerMOTD;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetRoundIsTemporaryGameMode
	 */
	struct AGBGameState_SetRoundIsTemporaryGameMode_Params
	{
	public:
		bool                                                       IsTemporary;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetPlayerTeamRole
	 */
	struct AGBGameState_SetPlayerTeamRole_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RZ7Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InRole;                                                  // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetPlayAreaOpen
	 */
	struct AGBGameState_SetPlayAreaOpen_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetObjectiveLocation
	 */
	struct AGBGameState_SetObjectiveLocation_Params
	{
	public:
		struct FVector                                             InObjectiveLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetMissionSettingValue
	 */
	struct AGBGameState_SetMissionSettingValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetLastMissionFileName
	 */
	struct AGBGameState_SetLastMissionFileName_Params
	{
	public:
		class FString                                              InLastMissionFileName;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetIsCapturing
	 */
	struct AGBGameState_SetIsCapturing_Params
	{
	public:
		bool                                                       InIsCapturing;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetGameModeName
	 */
	struct AGBGameState_SetGameModeName_Params
	{
	public:
		class FName                                                InGameModeName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.SetCaptureZone
	 */
	struct AGBGameState_SetCaptureZone_Params
	{
	public:
		float                                                      InCaptureRadius;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InCaptureHeight;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DefenderTeamId;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InZoneIsSpherical;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.ServerPrepMissionSummaryEvent
	 */
	struct AGBGameState_ServerPrepMissionSummaryEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.SendTimeRemainingAlertToWatches
	 */
	struct AGBGameState_SendTimeRemainingAlertToWatches_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.RoundStageSet
	 */
	struct AGBGameState_RoundStageSet_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ResetTeamScores
	 */
	struct AGBGameState_ResetTeamScores_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ResetPlayerScores
	 */
	struct AGBGameState_ResetPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ResetMatchStats
	 */
	struct AGBGameState_ResetMatchStats_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ReportClientMissingAsset
	 */
	struct AGBGameState_ReportClientMissingAsset_Params
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.PlayAreaOpen
	 */
	struct AGBGameState_PlayAreaOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteStartedEvent
	 */
	struct AGBGameState_OnVoteStartedEvent_Params
	{
	public:
		class APlayerState*                                        VoteStarter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Command;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VoteTime;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteStarted
	 */
	struct AGBGameState_OnVoteStarted_Params
	{
	public:
		class APlayerState*                                        VoteStarter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Command;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VoteTime;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteEndedEvent
	 */
	struct AGBGameState_OnVoteEndedEvent_Params
	{
	public:
		bool                                                       bPassed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0U7N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NextVoteDelay;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteEnded
	 */
	struct AGBGameState_OnVoteEnded_Params
	{
	public:
		bool                                                       bPassed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_01BZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NextVoteDelay;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteCountUpdatedEvent
	 */
	struct AGBGameState_OnVoteCountUpdatedEvent_Params
	{
	public:
		int32_t                                                    YesVotes;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NoVotes;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnVoteCountUpdated
	 */
	struct AGBGameState_OnVoteCountUpdated_Params
	{
	public:
		int32_t                                                    YesVotes;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NoVotes;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_WatchMode
	 */
	struct AGBGameState_OnRep_WatchMode_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_WatchConfig
	 */
	struct AGBGameState_OnRep_WatchConfig_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_UsesReadyRoom
	 */
	struct AGBGameState_OnRep_UsesReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_TeamScoreLists
	 */
	struct AGBGameState_OnRep_TeamScoreLists_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_TeamAttitudes
	 */
	struct AGBGameState_OnRep_TeamAttitudes_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_SearchLocations
	 */
	struct AGBGameState_OnRep_SearchLocations_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_RoundTime
	 */
	struct AGBGameState_OnRep_RoundTime_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_RoundStage
	 */
	struct AGBGameState_OnRep_RoundStage_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_PlayerLoadouts
	 */
	struct AGBGameState_OnRep_PlayerLoadouts_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_ObjectiveLocation
	 */
	struct AGBGameState_OnRep_ObjectiveLocation_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_MissionSettings
	 */
	struct AGBGameState_OnRep_MissionSettings_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_MissionName
	 */
	struct AGBGameState_OnRep_MissionName_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_MatchStats
	 */
	struct AGBGameState_OnRep_MatchStats_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_IsRoundBased
	 */
	struct AGBGameState_OnRep_IsRoundBased_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_GameStringTables
	 */
	struct AGBGameState_OnRep_GameStringTables_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_GameStats
	 */
	struct AGBGameState_OnRep_GameStats_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_GameRules
	 */
	struct AGBGameState_OnRep_GameRules_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_GameObjectives
	 */
	struct AGBGameState_OnRep_GameObjectives_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_GameModeName
	 */
	struct AGBGameState_OnRep_GameModeName_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_Difficulty
	 */
	struct AGBGameState_OnRep_Difficulty_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_CaptureZone
	 */
	struct AGBGameState_OnRep_CaptureZone_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_CaptureState
	 */
	struct AGBGameState_OnRep_CaptureState_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnRep_AllowLateJoiners
	 */
	struct AGBGameState_OnRep_AllowLateJoiners_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.OnGameMessageEvent
	 */
	struct AGBGameState_OnGameMessageEvent_Params
	{
	public:
		class FName                                                GameMessageId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Type;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.MulticastTimeRemainingAlertToWatches
	 */
	struct AGBGameState_MulticastTimeRemainingAlertToWatches_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.IsRoundBased
	 */
	struct AGBGameState_IsRoundBased_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.IsGameRuleEnabled
	 */
	struct AGBGameState_IsGameRuleEnabled_Params
	{
	public:
		class FName                                                RuleName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.InitMissionName
	 */
	struct AGBGameState_InitMissionName_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.IncrementRoundNumber
	 */
	struct AGBGameState_IncrementRoundNumber_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.HasMissionSetting
	 */
	struct AGBGameState_HasMissionSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetWinningTeamForRound
	 */
	struct AGBGameState_GetWinningTeamForRound_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetWatchMode
	 */
	struct AGBGameState_GetWatchMode_Params
	{
	public:
		EWatchMode                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetWatchConfig
	 */
	struct AGBGameState_GetWatchConfig_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetVotingCommands
	 */
	struct AGBGameState_GetVotingCommands_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetTimeLimit
	 */
	struct AGBGameState_GetTimeLimit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetTeamElementCount
	 */
	struct AGBGameState_GetTeamElementCount_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInPlayOnly;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WCA4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetServerName
	 */
	struct AGBGameState_GetServerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetServerMOTD
	 */
	struct AGBGameState_GetServerMOTD_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetSearchLocations
	 */
	struct AGBGameState_GetSearchLocations_Params
	{
	public:
		TArray<struct FGBGameObjective>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetScoreListForTeam
	 */
	struct AGBGameState_GetScoreListForTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NIOY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGBScoreLine>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetRoundTime
	 */
	struct AGBGameState_GetRoundTime_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetRoundStageTime
	 */
	struct AGBGameState_GetRoundStageTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetRoundStage
	 */
	struct AGBGameState_GetRoundStage_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetRoundNumber
	 */
	struct AGBGameState_GetRoundNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetRoundIsTemporaryGameMode
	 */
	struct AGBGameState_GetRoundIsTemporaryGameMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerTeamInfos
	 */
	struct AGBGameState_GetPlayerTeamInfos_Params
	{
	public:
		TArray<struct FGBTeamInfo>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerTeamInfo
	 */
	struct AGBGameState_GetPlayerTeamInfo_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H6K9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBTeamInfo                                         ReturnValue;                                             // 0x0004(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerTeamCount
	 */
	struct AGBGameState_GetPlayerTeamCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerScoreTemplate
	 */
	struct AGBGameState_GetPlayerScoreTemplate_Params
	{
	public:
		struct FGBScoreCollection                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerRichPresenceStatus
	 */
	struct AGBGameState_GetPlayerRichPresenceStatus_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerLoadoutNames
	 */
	struct AGBGameState_GetPlayerLoadoutNames_Params
	{
	public:
		bool                                                       bRestrictionMappedOnly;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VL00[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPlayerList
	 */
	struct AGBGameState_GetPlayerList_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeBots;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JNIH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBPlayerState*>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPermittedMissionList
	 */
	struct AGBGameState_GetPermittedMissionList_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetPermittedGameModes
	 */
	struct AGBGameState_GetPermittedGameModes_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetObjectiveLocation
	 */
	struct AGBGameState_GetObjectiveLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetMissionSettings
	 */
	struct AGBGameState_GetMissionSettings_Params
	{
	public:
		TArray<struct FGBMissionSetting>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetMissionSetting
	 */
	struct AGBGameState_GetMissionSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGBMissionSetting                                   ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetMissionName
	 */
	struct AGBGameState_GetMissionName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetMatchStats
	 */
	struct AGBGameState_GetMatchStats_Params
	{
	public:
		struct FGBMatchStats                                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetLocalisedGameText
	 */
	struct AGBGameState_GetLocalisedGameText_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DefaultValue;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrettifyDefault;                                        // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q5NV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetLastMissionFileName
	 */
	struct AGBGameState_GetLastMissionFileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetIsCapturing
	 */
	struct AGBGameState_GetIsCapturing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetGameStatValue
	 */
	struct AGBGameState_GetGameStatValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetGameStats
	 */
	struct AGBGameState_GetGameStats_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetGameRules
	 */
	struct AGBGameState_GetGameRules_Params
	{
	public:
		TMap<class FName, bool>                                    ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetGameObjectives
	 */
	struct AGBGameState_GetGameObjectives_Params
	{
	public:
		TArray<struct FGBGameObjective>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetGameModeName
	 */
	struct AGBGameState_GetGameModeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetDifficulty
	 */
	struct AGBGameState_GetDifficulty_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetCumulativeScoreForTeam
	 */
	struct AGBGameState_GetCumulativeScoreForTeam_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8J8P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetCaptureZone
	 */
	struct AGBGameState_GetCaptureZone_Params
	{
	public:
		struct FGBCaptureZone                                      ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.GetBriefingRoomWidget
	 */
	struct AGBGameState_GetBriefingRoomWidget_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.ForceResetActors
	 */
	struct AGBGameState_ForceResetActors_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.FindPlayerStateByPlayerNameOrUniqueId
	 */
	struct AGBGameState_FindPlayerStateByPlayerNameOrUniqueId_Params
	{
	public:
		class FString                                              PlayerNameOrUniqueId;                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBPlayerState*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.FindPlayerControllerByPlayerNameOrUniqueId
	 */
	struct AGBGameState_FindPlayerControllerByPlayerNameOrUniqueId_Params
	{
	public:
		class FString                                              PlayerNameOrUniqueId;                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.DecrementRoundNumber
	 */
	struct AGBGameState_DecrementRoundNumber_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.CreateTeamScores
	 */
	struct AGBGameState_CreateTeamScores_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.ClearTeamScores
	 */
	struct AGBGameState_ClearTeamScores_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ClearSearchLocations
	 */
	struct AGBGameState_ClearSearchLocations_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ClearPlayerScoresTemplate
	 */
	struct AGBGameState_ClearPlayerScoresTemplate_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ClearPlayerScores
	 */
	struct AGBGameState_ClearPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ClearGameStats
	 */
	struct AGBGameState_ClearGameStats_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.ClearGameObjectives
	 */
	struct AGBGameState_ClearGameObjectives_Params
	{	};

	/**
	 * Function GroundBranch.GBGameState.BroadcastGameMessage
	 */
	struct AGBGameState_BroadcastGameMessage_Params
	{
	public:
		class FName                                                GameMessageId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Type;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AwardTeamScore
	 */
	struct AGBGameState_AwardTeamScore_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C6R8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ScoreName;                                               // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ScoreMultiple;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AreTeamScoresInitialised
	 */
	struct AGBGameState_AreTeamScoresInitialised_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.ArePlayerScoresInitialised
	 */
	struct AGBGameState_ArePlayerScoresInitialised_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AllowLateJoiners
	 */
	struct AGBGameState_AllowLateJoiners_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddTeamScoreType
	 */
	struct AGBGameState_AddTeamScoreType_Params
	{
	public:
		class FName                                                ScoreName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ScoreDescription;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ScoreToAdd;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OneOff;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddSearchLocation
	 */
	struct AGBGameState_AddSearchLocation_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AZVF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Name;                                                    // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGBGameObjectiveType                                       ObjectiveType;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddScoreToCumulativeScore
	 */
	struct AGBGameState_AddScoreToCumulativeScore_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H0D3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ScoreToAdd;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddPlayerTeamInfo
	 */
	struct AGBGameState_AddPlayerTeamInfo_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RD95[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBTeamInfo                                         NewPlayerTeam;                                           // 0x0004(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddPlayerScoreType
	 */
	struct AGBGameState_AddPlayerScoreType_Params
	{
	public:
		class FName                                                ScoreName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ScoreDescription;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ScoreToAdd;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OneOff;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddMissionSetting
	 */
	struct AGBGameState_AddMissionSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxValue;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CurrentValue;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddGameStat
	 */
	struct AGBGameState_AddGameStat_Params
	{
	public:
		class FString                                              StatString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameState.AddGameObjective
	 */
	struct AGBGameState_AddGameObjective_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3OV7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Name;                                                    // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGBGameObjectiveType                                       ObjectiveType;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameTrigger.GetOverlaps
	 */
	struct AGBGameTrigger_GetOverlaps_Params
	{
	public:
		TArray<class AGBCharacter*>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.SetUnfocusedVolumeMultiplier
	 */
	struct UGBGameUserSettings_SetUnfocusedVolumeMultiplier_Params
	{
	public:
		float                                                      InVolumeMultiplier;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.SetAudioVolume
	 */
	struct UGBGameUserSettings_SetAudioVolume_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVolume;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.GetUnfocusedVolumeMultiplier
	 */
	struct UGBGameUserSettings_GetUnfocusedVolumeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.GetQualityLevelCVarSettingsFromIni
	 */
	struct UGBGameUserSettings_GetQualityLevelCVarSettingsFromIni_Params
	{
	public:
		class FString                                              QualitySection;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QualityLevel;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IM1D[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutCVarKeys;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutCVarValues;                                           // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.GetGBGameUserSettings
	 */
	struct UGBGameUserSettings_GetGBGameUserSettings_Params
	{
	public:
		class UGBGameUserSettings*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.GetAudioVolume
	 */
	struct UGBGameUserSettings_GetAudioVolume_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameUserSettings.AreQualityLevelsDirty
	 */
	struct UGBGameUserSettings_AreQualityLevelsDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameViewportClient.ScreenshotRequested
	 */
	struct UGBGameViewportClient_ScreenshotRequested_Params
	{	};

	/**
	 * Function GroundBranch.GBGameViewportClient.GetTravelFailureInfo
	 */
	struct UGBGameViewportClient_GetTravelFailureInfo_Params
	{
	public:
		class FString                                              OutLastAttemptedURL;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETravelFailure                                             OutLastTravelFailureType;                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHBK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutLastTravelErrorString;                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameViewportClient.GetNetworkFailureInfo
	 */
	struct UGBGameViewportClient_GetNetworkFailureInfo_Params
	{
	public:
		class FString                                              OutLastAttemptedURL;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENetworkFailure                                            OutLastNetworkFailureType;                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5E6C[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutLastNetworkErrorString;                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameViewportClient.GetGameViewportClient
	 */
	struct UGBGameViewportClient_GetGameViewportClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGBGameViewportClient*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameViewportClient.GetDisconnectReason
	 */
	struct UGBGameViewportClient_GetDisconnectReason_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGameViewportClient.ClearTravelFailureInfo
	 */
	struct UGBGameViewportClient_ClearTravelFailureInfo_Params
	{	};

	/**
	 * Function GroundBranch.GBGameViewportClient.ClearNetworkFailure
	 */
	struct UGBGameViewportClient_ClearNetworkFailure_Params
	{	};

	/**
	 * Function GroundBranch.GBGameViewportClient.ClearDisconnectReason
	 */
	struct UGBGameViewportClient_ClearDisconnectReason_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.WindupTimer
	 */
	struct AGBGrenade_WindupTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.WantsToThrow
	 */
	struct AGBGrenade_WantsToThrow_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.SyncCurrentSpeed
	 */
	struct AGBGrenade_SyncCurrentSpeed_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.SpawnGrenadeTimer
	 */
	struct AGBGrenade_SpawnGrenadeTimer_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.ServerWantsToThrow
	 */
	struct AGBGrenade_ServerWantsToThrow_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.ServerSetCurrentSpeed
	 */
	struct AGBGrenade_ServerSetCurrentSpeed_Params
	{
	public:
		int32_t                                                    NewCurrentSpeed;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.ServerReplacePin
	 */
	struct AGBGrenade_ServerReplacePin_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.ServerPrepareToThrow
	 */
	struct AGBGrenade_ServerPrepareToThrow_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.ReplacePin
	 */
	struct AGBGrenade_ReplacePin_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.PrepareToThrow
	 */
	struct AGBGrenade_PrepareToThrow_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.OnSpeedChangedEvent
	 */
	struct AGBGrenade_OnSpeedChangedEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBGrenade.IsReadyToThrow
	 */
	struct AGBGrenade_IsReadyToThrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.IsGrenadeMontagePlaying
	 */
	struct AGBGrenade_IsGrenadeMontagePlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.GetLaunchVelocity
	 */
	struct AGBGrenade_GetLaunchVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBGrenade.GetLaunchLocation
	 */
	struct AGBGrenade_GetLaunchLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHolster.HolsterItem
	 */
	struct AGBHolster_HolsterItem_Params
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHolster.GetHolsterUnequipInfo
	 */
	struct AGBHolster_GetHolsterUnequipInfo_Params
	{
	public:
		class AGBItem*                                             HolsterItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EXWG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutUnequipInfo;                                          // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHolster.GetHolsterEquipInfo
	 */
	struct AGBHolster_GetHolsterEquipInfo_Params
	{
	public:
		class AGBItem*                                             HolsterItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJFT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutEquipInfo;                                            // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHolster.GetHolsteredItem
	 */
	struct AGBHolster_GetHolsteredItem_Params
	{
	public:
		class AGBItem*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.SuggestHint
	 */
	struct AGBHUD_SuggestHint_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.ShowReadyRoomPlayerNameEvent
	 */
	struct AGBHUD_ShowReadyRoomPlayerNameEvent_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeamElement                                               PlayerTeamElement;                                       // 0x0010(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.ShowRadialItemsMenuEvent
	 */
	struct AGBHUD_ShowRadialItemsMenuEvent_Params
	{
	public:
		TArray<class AGBItem*>                                     Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.ShowMenuEvent
	 */
	struct AGBHUD_ShowMenuEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.ShowHint
	 */
	struct AGBHUD_ShowHint_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OpenUserMenu
	 */
	struct AGBHUD_OpenUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OpenRadialUserMenu
	 */
	struct AGBHUD_OpenRadialUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OpenLinearUserMenu
	 */
	struct AGBHUD_OpenLinearUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OnSuggestHintEvent
	 */
	struct AGBHUD_OnSuggestHintEvent_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OnShowHUDEvent
	 */
	struct AGBHUD_OnShowHUDEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBHUD.OnShowHintEvent
	 */
	struct AGBHUD_OnShowHintEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBHUD.OnInventorySlotEvent
	 */
	struct AGBHUD_OnInventorySlotEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.OnChatLineAddedEvent
	 */
	struct AGBHUD_OnChatLineAddedEvent_Params
	{
	public:
		class AGBPlayerState*                                      SenderGBPlayerState;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Type;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.IsMenuVisibleEvent
	 */
	struct AGBHUD_IsMenuVisibleEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.InventorySlot
	 */
	struct AGBHUD_InventorySlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.HintValid
	 */
	struct AGBHUD_HintValid_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.HideReadyRoomPlayerNameEvent
	 */
	struct AGBHUD_HideReadyRoomPlayerNameEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBHUD.HideRadialItemsMenuEvent
	 */
	struct AGBHUD_HideRadialItemsMenuEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBHUD.HideMenuEvent
	 */
	struct AGBHUD_HideMenuEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.GetViewTarget
	 */
	struct AGBHUD_GetViewTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBHUD.GetUserMenu
	 */
	struct AGBHUD_GetUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutMenuContent;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInputOverrideInterface.OverrideInputKey
	 */
	struct UGBInputOverrideInterface_OverrideInputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPInputEvent                                              EventType;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_83PS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AmountDepressed;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGamepad;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInputOverrideInterface.OverrideInputAxis
	 */
	struct UGBInputOverrideInterface_OverrideInputAxis_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delta;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumSamples;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGamepad;                                                // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.SetInsertionPointName
	 */
	struct AGBInsertionPoint_SetInsertionPointName_Params
	{
	public:
		class FName                                                NewInsertionPointName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.InsertionPointUpdated
	 */
	struct AGBInsertionPoint_InsertionPointUpdated_Params
	{	};

	/**
	 * Function GroundBranch.GBInsertionPoint.GetTopDownView
	 */
	struct AGBInsertionPoint_GetTopDownView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.GetSpawnInfo
	 */
	struct AGBInsertionPoint_GetSpawnInfo_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.GetSideView
	 */
	struct AGBInsertionPoint_GetSideView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.GetPlayers
	 */
	struct AGBInsertionPoint_GetPlayers_Params
	{
	public:
		TArray<class AGBPlayerState*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.GetMaxSupportedPlayers
	 */
	struct AGBInsertionPoint_GetMaxSupportedPlayers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInsertionPoint.CreateAssociatedPlayerStarts
	 */
	struct AGBInsertionPoint_CreateAssociatedPlayerStarts_Params
	{	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.SyncCount
	 */
	struct UGBInternalMagazineComponent_SyncCount_Params
	{	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.StartPlusOne
	 */
	struct UGBInternalMagazineComponent_StartPlusOne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.SetIsFiringFromOpenBolt
	 */
	struct UGBInternalMagazineComponent_SetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       bNewIsFiringFromOpenBolt;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.SetChamberedRound
	 */
	struct UGBInternalMagazineComponent_SetChamberedRound_Params
	{
	public:
		class UClass*                                              NewChamberedRound;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.SetBoltHeldOpen
	 */
	struct UGBInternalMagazineComponent_SetBoltHeldOpen_Params
	{
	public:
		bool                                                       bNewBoltIsHeldOpen;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.OnRep_Count
	 */
	struct UGBInternalMagazineComponent_OnRep_Count_Params
	{	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.IsLiveRoundChambered
	 */
	struct UGBInternalMagazineComponent_IsLiveRoundChambered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetRoundType
	 */
	struct UGBInternalMagazineComponent_GetRoundType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetIsFiringFromOpenBolt
	 */
	struct UGBInternalMagazineComponent_GetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetCount
	 */
	struct UGBInternalMagazineComponent_GetCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetChamberedRound
	 */
	struct UGBInternalMagazineComponent_GetChamberedRound_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetCapacity
	 */
	struct UGBInternalMagazineComponent_GetCapacity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetBulletItemClass
	 */
	struct UGBInternalMagazineComponent_GetBulletItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.GetBoltHeldOpen
	 */
	struct UGBInternalMagazineComponent_GetBoltHeldOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.FindCompatibleRound
	 */
	struct UGBInternalMagazineComponent_FindCompatibleRound_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBBulletItem*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBInternalMagazineComponent.AddRoundToMagazine
	 */
	struct UGBInternalMagazineComponent_AddRoundToMagazine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.MakeItemInteractive
	 */
	struct UGBItemDragDropOperation_MakeItemInteractive_Params
	{
	public:
		class AGBItem*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.Init
	 */
	struct UGBItemDragDropOperation_Init_Params
	{	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.EndDragCleanup
	 */
	struct UGBItemDragDropOperation_EndDragCleanup_Params
	{	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.DraggedItemDestroyed
	 */
	struct UGBItemDragDropOperation_DraggedItemDestroyed_Params
	{	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.DraggedItemAttached
	 */
	struct UGBItemDragDropOperation_DraggedItemAttached_Params
	{
	public:
		class USceneComponent*                                     TargetComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetRelativeLoc;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.DelayedInit
	 */
	struct UGBItemDragDropOperation_DelayedInit_Params
	{	};

	/**
	 * Function GroundBranch.GBItemDragDropOperation.CreateFloatingWidget
	 */
	struct UGBItemDragDropOperation_CreateFloatingWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItemProjectile.UpdateAssociatedItem
	 */
	struct AGBItemProjectile_UpdateAssociatedItem_Params
	{	};

	/**
	 * Function GroundBranch.GBItemProjectile.OnStop
	 */
	struct AGBItemProjectile_OnStop_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBItemProjectile.OnBounce
	 */
	struct AGBItemProjectile_OnBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.LoadKitFile
	 */
	struct UGBKitFunctionLibrary_LoadKitFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   OutKitJsonObj;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.KitDump
	 */
	struct UGBKitFunctionLibrary_KitDump_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.HasRequired
	 */
	struct UGBKitFunctionLibrary_HasRequired_Params
	{
	public:
		TArray<struct FPrimaryAssetId>                             PrimaryAssets;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPrimaryAssetType>                           RequiredTypes;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserPresetsPath
	 */
	struct UGBKitFunctionLibrary_GetUserPresetsPath_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserPresetFileName
	 */
	struct UGBKitFunctionLibrary_GetUserPresetFileName_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Preset;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserPatchesPath
	 */
	struct UGBKitFunctionLibrary_GetUserPatchesPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserLoadoutFileName
	 */
	struct UGBKitFunctionLibrary_GetUserLoadoutFileName_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserItemBuildPath
	 */
	struct UGBKitFunctionLibrary_GetUserItemBuildPath_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetUserItemBuildFileName
	 */
	struct UGBKitFunctionLibrary_GetUserItemBuildFileName_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemBuild;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetTypeField
	 */
	struct UGBKitFunctionLibrary_GetTypeField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetSkinMaterialPrefix
	 */
	struct UGBKitFunctionLibrary_GetSkinMaterialPrefix_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetSkinField
	 */
	struct UGBKitFunctionLibrary_GetSkinField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetPresetField
	 */
	struct UGBKitFunctionLibrary_GetPresetField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetPlayerLoadoutName
	 */
	struct UGBKitFunctionLibrary_GetPlayerLoadoutName_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetKitVersion
	 */
	struct UGBKitFunctionLibrary_GetKitVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetKitItemList
	 */
	struct UGBKitFunctionLibrary_GetKitItemList_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipAuth;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceSynchronousLoad;                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K2GE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBItem*>                                     OutItems;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetKitExtension
	 */
	struct UGBKitFunctionLibrary_GetKitExtension_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetKitAssetListOfType
	 */
	struct UGBKitFunctionLibrary_GetKitAssetListOfType_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPrimaryAssetType                                   AssetType;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>                             ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetKitAssetList
	 */
	struct UGBKitFunctionLibrary_GetKitAssetList_Params
	{
	public:
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetItemField
	 */
	struct UGBKitFunctionLibrary_GetItemField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetItemBuildField
	 */
	struct UGBKitFunctionLibrary_GetItemBuildField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetFullPatchPath
	 */
	struct UGBKitFunctionLibrary_GetFullPatchPath_Params
	{
	public:
		class FString                                              PatchName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetDefaultPatchesPath
	 */
	struct UGBKitFunctionLibrary_GetDefaultPatchesPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetDefaultLoadoutFileName
	 */
	struct UGBKitFunctionLibrary_GetDefaultLoadoutFileName_Params
	{
	public:
		class FName                                                LoadoutName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetDefaultItemBuildPath
	 */
	struct UGBKitFunctionLibrary_GetDefaultItemBuildPath_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetDefaultItemBuildFileName
	 */
	struct UGBKitFunctionLibrary_GetDefaultItemBuildFileName_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemBuild;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetDataField
	 */
	struct UGBKitFunctionLibrary_GetDataField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetChildrenField
	 */
	struct UGBKitFunctionLibrary_GetChildrenField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.GetBuildNameField
	 */
	struct UGBKitFunctionLibrary_GetBuildNameField_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.CreateKitInfo
	 */
	struct UGBKitFunctionLibrary_CreateKitInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                KitName;                                                 // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   KitJsonObj;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBKitInfo*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitFunctionLibrary.CreateKitFromItem
	 */
	struct UGBKitFunctionLibrary_CreateKitFromItem_Params
	{
	public:
		class FString                                              BuildName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBItem*                                             Item;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   OutKitJsonObj;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBKitInfo.OnRep_ReplicatedLoadout
	 */
	struct AGBKitInfo_OnRep_ReplicatedLoadout_Params
	{	};

	/**
	 * Function GroundBranch.GBKitInfo.OnLoadAssetsComplete
	 */
	struct AGBKitInfo_OnLoadAssetsComplete_Params
	{	};

	/**
	 * Function GroundBranch.GBKitInfo.ApplyToCharacter
	 */
	struct AGBKitInfo_ApplyToCharacter_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLadderComponent.GetLadderTop
	 */
	struct UGBLadderComponent_GetLadderTop_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLadderComponent.GetLadderBottom
	 */
	struct UGBLadderComponent_GetLadderBottom_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLocalPlayer.GetPlayerSettings
	 */
	struct UGBLocalPlayer_GetPlayerSettings_Params
	{
	public:
		class UGBPlayerSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.ToString
	 */
	struct UGBLuaActorPackage_ToString_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.SetTeamId
	 */
	struct UGBLuaActorPackage_SetTeamId_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           TeamId;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.SetHidden
	 */
	struct UGBLuaActorPackage_SetHidden_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Hidden;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.SetEnableCollision
	 */
	struct UGBLuaActorPackage_SetEnableCollision_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Enabled;                                                 // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.SetActive
	 */
	struct UGBLuaActorPackage_SetActive_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewActive;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.RemoveTag
	 */
	struct UGBLuaActorPackage_RemoveTag_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.IsOverlapping
	 */
	struct UGBLuaActorPackage_IsOverlapping_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           OtherActor;                                              // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.IsActive
	 */
	struct UGBLuaActorPackage_IsActive_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.HasTag
	 */
	struct UGBLuaActorPackage_HasTag_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetTeamId
	 */
	struct UGBLuaActorPackage_GetTeamId_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetTags
	 */
	struct UGBLuaActorPackage_GetTags_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetTag
	 */
	struct UGBLuaActorPackage_GetTag_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Index;                                                   // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetRotation
	 */
	struct UGBLuaActorPackage_GetRotation_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetOverlaps
	 */
	struct UGBLuaActorPackage_GetOverlaps_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Class;                                                   // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetName
	 */
	struct UGBLuaActorPackage_GetName_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.GetLocation
	 */
	struct UGBLuaActorPackage_GetLocation_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaActorPackage.AddTag
	 */
	struct UGBLuaActorPackage_AddTag_Params
	{
	public:
		struct FLuaValue                                           Actor;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.ProjectPointToNavigation
	 */
	struct UGBLuaAIPackage_ProjectPointToNavigation_Params
	{
	public:
		struct FLuaValue                                           Point;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           QueryExtent;                                             // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.KillAI
	 */
	struct UGBLuaAIPackage_KillAI_Params
	{
	public:
		struct FLuaValue                                           AIController;                                            // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.GetSpawnPointInfo
	 */
	struct UGBLuaAIPackage_GetSpawnPointInfo_Params
	{
	public:
		struct FLuaValue                                           SpawnPoint;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.GetRandomReachablePointInRadius
	 */
	struct UGBLuaAIPackage_GetRandomReachablePointInRadius_Params
	{
	public:
		struct FLuaValue                                           Origin;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Radius;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.GetMaxCount
	 */
	struct UGBLuaAIPackage_GetMaxCount_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.GetGuardPointName
	 */
	struct UGBLuaAIPackage_GetGuardPointName_Params
	{
	public:
		struct FLuaValue                                           GuardPoint;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.GetControllers
	 */
	struct UGBLuaAIPackage_GetControllers_Params
	{
	public:
		struct FLuaValue                                           Class;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           TeamId;                                                  // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           SquadId;                                                 // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0100(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.CreateWithTransform
	 */
	struct UGBLuaAIPackage_CreateWithTransform_Params
	{
	public:
		struct FLuaValue                                           VirtualSpawnPoint;                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           SpawnTransform;                                          // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           AIControllerTag;                                         // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           FreezeTime;                                              // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.CreateOverDuration
	 */
	struct UGBLuaAIPackage_CreateOverDuration_Params
	{
	public:
		struct FLuaValue                                           Duration;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Count;                                                   // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           OrderedSpawnPoints;                                      // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           AIControllerTag;                                         // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.Create
	 */
	struct UGBLuaAIPackage_Create_Params
	{
	public:
		struct FLuaValue                                           SpawnPoint;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           AIControllerTag;                                         // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           FreezeTime;                                              // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.CleanUp
	 */
	struct UGBLuaAIPackage_CleanUp_Params
	{
	public:
		struct FLuaValue                                           AIControllerTag;                                         // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaAIPackage.CheckLocationReachable
	 */
	struct UGBLuaAIPackage_CheckLocationReachable_Params
	{
	public:
		struct FLuaValue                                           StartLocation;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           EndLocation;                                             // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           PartialOk;                                               // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x00C0(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetWatchMode
	 */
	struct UGBLuaGameModePackage_SetWatchMode_Params
	{
	public:
		struct FLuaValue                                           WatchMode;                                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           DisplayBearing;                                          // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           DisplayDistance;                                         // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           DisplayUpDown;                                           // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Measure2D;                                               // 0x0100(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetTeamScoreTypes
	 */
	struct UGBLuaGameModePackage_SetTeamScoreTypes_Params
	{
	public:
		struct FLuaValue                                           ScoreTypeTable;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetTeamAttitude
	 */
	struct UGBLuaGameModePackage_SetTeamAttitude_Params
	{
	public:
		struct FLuaValue                                           Team;                                                    // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           OtherTeam;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Attitude;                                                // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetRoundStageTime
	 */
	struct UGBLuaGameModePackage_SetRoundStageTime_Params
	{
	public:
		struct FLuaValue                                           RoundStageTime;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetRoundStage
	 */
	struct UGBLuaGameModePackage_SetRoundStage_Params
	{
	public:
		struct FLuaValue                                           RoundStageName;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetRoundIsTemporaryGameMode
	 */
	struct UGBLuaGameModePackage_SetRoundIsTemporaryGameMode_Params
	{
	public:
		struct FLuaValue                                           IsTemporary;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetPlayerTeamRole
	 */
	struct UGBLuaGameModePackage_SetPlayerTeamRole_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewRole;                                                 // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetPlayerScoreTypes
	 */
	struct UGBLuaGameModePackage_SetPlayerScoreTypes_Params
	{
	public:
		struct FLuaValue                                           ScoreTypeTable;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetObjectiveLocation
	 */
	struct UGBLuaGameModePackage_SetObjectiveLocation_Params
	{
	public:
		struct FLuaValue                                           ObjectiveLocation;                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetGameModeName
	 */
	struct UGBLuaGameModePackage_SetGameModeName_Params
	{
	public:
		struct FLuaValue                                           GameModeName;                                            // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetDefaultRoundStageTime
	 */
	struct UGBLuaGameModePackage_SetDefaultRoundStageTime_Params
	{
	public:
		struct FLuaValue                                           RoundStageName;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewTimeLimit;                                            // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetCaptureZone
	 */
	struct UGBLuaGameModePackage_SetCaptureZone_Params
	{
	public:
		struct FLuaValue                                           CaptureRadius;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           CaptureHeight;                                           // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           DefenderTeamId;                                          // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ZoneIsSpherical;                                         // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SetCaptureState
	 */
	struct UGBLuaGameModePackage_SetCaptureState_Params
	{
	public:
		struct FLuaValue                                           IsCapturing;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SendEveryoneToReadyRoom
	 */
	struct UGBLuaGameModePackage_SendEveryoneToReadyRoom_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.SendEveryoneToPlayArea
	 */
	struct UGBLuaGameModePackage_SendEveryoneToPlayArea_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ResetWatch
	 */
	struct UGBLuaGameModePackage_ResetWatch_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ResetTeamScores
	 */
	struct UGBLuaGameModePackage_ResetTeamScores_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ResetPlayerScores
	 */
	struct UGBLuaGameModePackage_ResetPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ResetMatchStats
	 */
	struct UGBLuaGameModePackage_ResetMatchStats_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.PrepLatecomer
	 */
	struct UGBLuaGameModePackage_PrepLatecomer_Params
	{
	public:
		struct FLuaValue                                           Target;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.MakeEveryoneSpectate
	 */
	struct UGBLuaGameModePackage_MakeEveryoneSpectate_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetScript
	 */
	struct UGBLuaGameModePackage_GetScript_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetRoundStageTime
	 */
	struct UGBLuaGameModePackage_GetRoundStageTime_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetRoundStage
	 */
	struct UGBLuaGameModePackage_GetRoundStage_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetReadyPlayerTeamCounts
	 */
	struct UGBLuaGameModePackage_GetReadyPlayerTeamCounts_Params
	{
	public:
		struct FLuaValue                                           ExcludeBots;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetPlayerListByLives
	 */
	struct UGBLuaGameModePackage_GetPlayerListByLives_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           MinLives;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ExcludeBots;                                             // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x00C0(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetPlayerList
	 */
	struct UGBLuaGameModePackage_GetPlayerList_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ExcludeBots;                                             // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetPlayerCount
	 */
	struct UGBLuaGameModePackage_GetPlayerCount_Params
	{
	public:
		struct FLuaValue                                           ExcludeBots;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetInsertionPointName
	 */
	struct UGBLuaGameModePackage_GetInsertionPointName_Params
	{
	public:
		struct FLuaValue                                           InsertionPoint;                                          // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.GetBestLateComerInsertionPoint
	 */
	struct UGBLuaGameModePackage_GetBestLateComerInsertionPoint_Params
	{
	public:
		struct FLuaValue                                           Target;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.EnterReadyRoom
	 */
	struct UGBLuaGameModePackage_EnterReadyRoom_Params
	{
	public:
		struct FLuaValue                                           Target;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.EnterPlayArea
	 */
	struct UGBLuaGameModePackage_EnterPlayArea_Params
	{
	public:
		struct FLuaValue                                           Target;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ClearSearchLocations
	 */
	struct UGBLuaGameModePackage_ClearSearchLocations_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ClearRoundStageTime
	 */
	struct UGBLuaGameModePackage_ClearRoundStageTime_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ClearGameStats
	 */
	struct UGBLuaGameModePackage_ClearGameStats_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.ClearGameObjectives
	 */
	struct UGBLuaGameModePackage_ClearGameObjectives_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.BroadcastGameMessage
	 */
	struct UGBLuaGameModePackage_BroadcastGameMessage_Params
	{
	public:
		struct FLuaValue                                           GameMessageId;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Type;                                                    // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Duration;                                                // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AwardTeamScore
	 */
	struct UGBLuaGameModePackage_AwardTeamScore_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ScoreName;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ScoreMultiple;                                           // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AddSearchLocation
	 */
	struct UGBLuaGameModePackage_AddSearchLocation_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Name;                                                    // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Type;                                                    // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AddPlayerTeam
	 */
	struct UGBLuaGameModePackage_AddPlayerTeam_Params
	{
	public:
		struct FLuaValue                                           Team;                                                    // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Name;                                                    // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ProfileName;                                             // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AddObjectiveMarker
	 */
	struct UGBLuaGameModePackage_AddObjectiveMarker_Params
	{
	public:
		struct FLuaValue                                           Location;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           TeamId;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Name;                                                    // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           MarkerType;                                              // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Active;                                                  // 0x0100(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0140(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AddGameStat
	 */
	struct UGBLuaGameModePackage_AddGameStat_Params
	{
	public:
		struct FLuaValue                                           GameStat;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameModePackage.AddGameObjective
	 */
	struct UGBLuaGameModePackage_AddGameObjective_Params
	{
	public:
		struct FLuaValue                                           TeamId;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Name;                                                    // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Type;                                                    // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameplayStaticsPackage.PlaceItemAt
	 */
	struct UGBLuaGameplayStaticsPackage_PlaceItemAt_Params
	{
	public:
		struct FLuaValue                                           ItemClass;                                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Location;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Rotation;                                                // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x00C0(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameplayStaticsPackage.GetValidatedSpawnLocation
	 */
	struct UGBLuaGameplayStaticsPackage_GetValidatedSpawnLocation_Params
	{
	public:
		struct FLuaValue                                           SpawnLocation;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           CapsuleHalfHeight;                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           CapsuleRadius;                                           // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x00C0(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameplayStaticsPackage.GetAllActorsWithTag
	 */
	struct UGBLuaGameplayStaticsPackage_GetAllActorsWithTag_Params
	{
	public:
		struct FLuaValue                                           Tag;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameplayStaticsPackage.GetAllActorsOfClassWithTag
	 */
	struct UGBLuaGameplayStaticsPackage_GetAllActorsOfClassWithTag_Params
	{
	public:
		struct FLuaValue                                           Class;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaGameplayStaticsPackage.GetAllActorsOfClass
	 */
	struct UGBLuaGameplayStaticsPackage_GetAllActorsOfClass_Params
	{
	public:
		struct FLuaValue                                           Class;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaInterface.GetLuaTable
	 */
	struct UGBLuaInterface_GetLuaTable_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaMathPackage.GetRandomRange
	 */
	struct UGBLuaMathPackage_GetRandomRange_Params
	{
	public:
		struct FLuaValue                                           Min;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Max;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaMathPackage.GetRandom
	 */
	struct UGBLuaMathPackage_GetRandom_Params
	{
	public:
		struct FLuaValue                                           Max;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.ShowWorldPrompt
	 */
	struct UGBLuaPlayerPackage_ShowWorldPrompt_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Location;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Duration;                                                // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.ShowHint
	 */
	struct UGBLuaPlayerPackage_ShowHint_Params
	{
	public:
		struct FLuaValue                                           PlayerState;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           HintName;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           WidgetName;                                              // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.ShowGameMessage
	 */
	struct UGBLuaPlayerPackage_ShowGameMessage_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Message;                                                 // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Type;                                                    // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Duration;                                                // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.SetReadyStatus
	 */
	struct UGBLuaPlayerPackage_SetReadyStatus_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewStatus;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.SetLives
	 */
	struct UGBLuaPlayerPackage_SetLives_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewLives;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.SetInsertionPoint
	 */
	struct UGBLuaPlayerPackage_SetInsertionPoint_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           NewInsertionPoint;                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.SetAllowedToRestart
	 */
	struct UGBLuaPlayerPackage_SetAllowedToRestart_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Allowed;                                                 // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.ResetPlayerScores
	 */
	struct UGBLuaPlayerPackage_ResetPlayerScores_Params
	{
	public:
		struct FLuaValue                                           PlayerState;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.RemoveIgnoreUseInputReason
	 */
	struct UGBLuaPlayerPackage_RemoveIgnoreUseInputReason_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Reason;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.IsAlive
	 */
	struct UGBLuaPlayerPackage_IsAlive_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.HasItemWithTag
	 */
	struct UGBLuaPlayerPackage_HasItemWithTag_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Tag;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GiveItem
	 */
	struct UGBLuaPlayerPackage_GiveItem_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ItemClass;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           bEquip;                                                  // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x00C0(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetReadyStatus
	 */
	struct UGBLuaPlayerPackage_GetReadyStatus_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetPlayerState
	 */
	struct UGBLuaPlayerPackage_GetPlayerState_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetPlayerStat
	 */
	struct UGBLuaPlayerPackage_GetPlayerStat_Params
	{
	public:
		struct FLuaValue                                           PlayerState;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Key;                                                     // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetName
	 */
	struct UGBLuaPlayerPackage_GetName_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetLives
	 */
	struct UGBLuaPlayerPackage_GetLives_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetInventory
	 */
	struct UGBLuaPlayerPackage_GetInventory_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetInsertionPoint
	 */
	struct UGBLuaPlayerPackage_GetInsertionPoint_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.GetCharacter
	 */
	struct UGBLuaPlayerPackage_GetCharacter_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.FreezePlayer
	 */
	struct UGBLuaPlayerPackage_FreezePlayer_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Duration;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.ClearAllIgnoreUseInputReasons
	 */
	struct UGBLuaPlayerPackage_ClearAllIgnoreUseInputReasons_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.AwardPlayerScore
	 */
	struct UGBLuaPlayerPackage_AwardPlayerScore_Params
	{
	public:
		struct FLuaValue                                           PlayerState;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ScoreName;                                               // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ScoreMultiple;                                           // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaPlayerPackage.AddIgnoreUseInputReason
	 */
	struct UGBLuaPlayerPackage_AddIgnoreUseInputReason_Params
	{
	public:
		struct FLuaValue                                           Player;                                                  // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Reason;                                                  // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaStaticsLibrary.LuaValueToScript
	 */
	struct UGBLuaStaticsLibrary_LuaValueToScript_Params
	{
	public:
		struct FLuaValue                                           LuaValue;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaStaticsLibrary.LuaValueToPlayerState
	 */
	struct UGBLuaStaticsLibrary_LuaValueToPlayerState_Params
	{
	public:
		struct FLuaValue                                           LuaValue;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class AGBPlayerState*                                      ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaStaticsLibrary.LuaValueToCharacter
	 */
	struct UGBLuaStaticsLibrary_LuaValueToCharacter_Params
	{
	public:
		struct FLuaValue                                           LuaValue;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class AGBCharacter*                                        ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaStaticsLibrary.LuaTableToRotator
	 */
	struct UGBLuaStaticsLibrary_LuaTableToRotator_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaStaticsLibrary.ActorsToLuaTable
	 */
	struct UGBLuaStaticsLibrary_ActorsToLuaTable_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              LuaStateClass;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaTimerPackage.SetTimer
	 */
	struct UGBLuaTimerPackage_SetTimer_Params
	{
	public:
		struct FLuaValue                                           InTimerHandle;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InTable;                                                 // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InFunction;                                              // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InRate;                                                  // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InLoop;                                                  // 0x0100(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaTimerPackage.ClearTimer
	 */
	struct UGBLuaTimerPackage_ClearTimer_Params
	{
	public:
		struct FLuaValue                                           InTimerHandle;                                           // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaTimerPackage.ClearAll
	 */
	struct UGBLuaTimerPackage_ClearAll_Params
	{	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorSubtract
	 */
	struct UGBLuaVectorPackage_VectorSubtract_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           B;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorStr
	 */
	struct UGBLuaVectorPackage_VectorStr_Params
	{
	public:
		struct FLuaValue                                           LuaVector;                                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorSizeSquared2D
	 */
	struct UGBLuaVectorPackage_VectorSizeSquared2D_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorSizeSquared
	 */
	struct UGBLuaVectorPackage_VectorSizeSquared_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorSize2D
	 */
	struct UGBLuaVectorPackage_VectorSize2D_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorSize
	 */
	struct UGBLuaVectorPackage_VectorSize_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorNew
	 */
	struct UGBLuaVectorPackage_VectorNew_Params
	{
	public:
		struct FLuaValue                                           SelfPackage;                                             // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           X;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Y;                                                       // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Z;                                                       // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0100(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorMultiply
	 */
	struct UGBLuaVectorPackage_VectorMultiply_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           B;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorEquals
	 */
	struct UGBLuaVectorPackage_VectorEquals_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           B;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorDivide
	 */
	struct UGBLuaVectorPackage_VectorDivide_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           B;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.VectorAdd
	 */
	struct UGBLuaVectorPackage_VectorAdd_Params
	{
	public:
		struct FLuaValue                                           A;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           B;                                                       // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBLuaVectorPackage.BuildVector
	 */
	struct UGBLuaVectorPackage_BuildVector_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WBUT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.VerifyBulletItemClass
	 */
	struct AGBMagazine_VerifyBulletItemClass_Params
	{
	public:
		class UClass*                                              CheckBulletItemClass;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.SetTracerItemClass
	 */
	struct AGBMagazine_SetTracerItemClass_Params
	{
	public:
		class UClass*                                              NewTracerItemClass;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.SetTracerFrequency
	 */
	struct AGBMagazine_SetTracerFrequency_Params
	{
	public:
		int32_t                                                    NewTracerFrequency;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.SetStartTracerCount
	 */
	struct AGBMagazine_SetStartTracerCount_Params
	{
	public:
		int32_t                                                    NewStartTracerCount;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.SetBulletItemClass
	 */
	struct AGBMagazine_SetBulletItemClass_Params
	{	};

	/**
	 * Function GroundBranch.GBMagazine.OnCountUpdatedEvent
	 */
	struct AGBMagazine_OnCountUpdatedEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBMagazine.OnAdjustCountEvent
	 */
	struct AGBMagazine_OnAdjustCountEvent_Params
	{
	public:
		bool                                                       bAdjusted;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetTracerItemClass
	 */
	struct AGBMagazine_GetTracerItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetMagazineType
	 */
	struct AGBMagazine_GetMagazineType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetExactCountText
	 */
	struct AGBMagazine_GetExactCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetEstimatedCountText
	 */
	struct AGBMagazine_GetEstimatedCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetCount
	 */
	struct AGBMagazine_GetCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetCapacity
	 */
	struct AGBMagazine_GetCapacity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetBulletProjectileClass
	 */
	struct AGBMagazine_GetBulletProjectileClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetBulletItemClass
	 */
	struct AGBMagazine_GetBulletItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetBaseBulletProjectileClass
	 */
	struct AGBMagazine_GetBaseBulletProjectileClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.GetBaseBulletItemClass
	 */
	struct AGBMagazine_GetBaseBulletItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMagazine.AdjustCount
	 */
	struct AGBMagazine_AdjustCount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMuzzleDevice.GetVolumeMultiplier
	 */
	struct AGBMuzzleDevice_GetVolumeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMuzzleDevice.GetMuzzleDeviceThread
	 */
	struct AGBMuzzleDevice_GetMuzzleDeviceThread_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBMuzzleDevice.GetClassMuzzleDeviceThread
	 */
	struct AGBMuzzleDevice_GetClassMuzzleDeviceThread_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBNavLinkProxy.SmartLinkReached
	 */
	struct AGBNavLinkProxy_SmartLinkReached_Params
	{
	public:
		class AActor*                                              Agent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Destination;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBNavLinkProxy.OnNavigationGenerationFinished
	 */
	struct AGBNavLinkProxy_OnNavigationGenerationFinished_Params
	{
	public:
		class ANavigationData*                                     NavData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBNavLinkProxy_Door.GetDoorRef
	 */
	struct AGBNavLinkProxy_Door_GetDoorRef_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBNavLinkProxy_Ladder.GetLadderRef
	 */
	struct AGBNavLinkProxy_Ladder_GetLadderRef_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.UpdateObjectiveSprite
	 */
	struct AGBObjectiveMarker_UpdateObjectiveSprite_Params
	{	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.SetObjectiveName
	 */
	struct AGBObjectiveMarker_SetObjectiveName_Params
	{
	public:
		class FName                                                Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.SetObjectiveMarkerType
	 */
	struct AGBObjectiveMarker_SetObjectiveMarkerType_Params
	{
	public:
		class FName                                                NewObjectiveMarkerType;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.ObjectiveUpdated
	 */
	struct AGBObjectiveMarker_ObjectiveUpdated_Params
	{	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.GetObjectiveSprite
	 */
	struct AGBObjectiveMarker_GetObjectiveSprite_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.GetObjectiveName
	 */
	struct AGBObjectiveMarker_GetObjectiveName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBObjectiveMarker.GetObjectiveMarkerType
	 */
	struct AGBObjectiveMarker_GetObjectiveMarkerType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlatform.UpdateNameTag
	 */
	struct AGBPlatform_UpdateNameTag_Params
	{	};

	/**
	 * Function GroundBranch.GBPlatform.OnTakeHit
	 */
	struct AGBPlatform_OnTakeHit_Params
	{
	public:
		class FName                                                RefBoneName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RefPosPosition;                                          // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlatform.OnReceivePlayerState
	 */
	struct AGBPlatform_OnReceivePlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerCameraManager.GetCameraStyle
	 */
	struct AGBPlayerCameraManager_GetCameraStyle_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerInput.ValidateInputSettings
	 */
	struct UGBPlayerInput_ValidateInputSettings_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerSettings.UpdateFOVDefault
	 */
	struct UGBPlayerSettings_UpdateFOVDefault_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerSettings.SetUseSimpleShadowsForCharacter
	 */
	struct UGBPlayerSettings_SetUseSimpleShadowsForCharacter_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.SetPlayerPatch
	 */
	struct UGBPlayerSettings_SetPlayerPatch_Params
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShortPath;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.SetPlayerName
	 */
	struct UGBPlayerSettings_SetPlayerName_Params
	{
	public:
		class FString                                              NewPlayerName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.SceneViewportResized
	 */
	struct UGBPlayerSettings_SceneViewportResized_Params
	{
	public:
		struct FVector2D                                           ViewportSize;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.LoadSettings
	 */
	struct UGBPlayerSettings_LoadSettings_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerSettings.HintValid
	 */
	struct UGBPlayerSettings_HintValid_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.GetPlayerPatchString
	 */
	struct UGBPlayerSettings_GetPlayerPatchString_Params
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.GetCharVoiceDataId
	 */
	struct UGBPlayerSettings_GetCharVoiceDataId_Params
	{
	public:
		struct FPrimaryAssetId                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerSettings.BindSceneViewportResized
	 */
	struct UGBPlayerSettings_BindSceneViewportResized_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerSettings.ApplySettings
	 */
	struct UGBPlayerSettings_ApplySettings_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerStart.UpdateCollisionStatus
	 */
	struct AGBPlayerStart_UpdateCollisionStatus_Params
	{
	public:
		class AActor*                                              TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerStart.SetGroup
	 */
	struct AGBPlayerStart_SetGroup_Params
	{
	public:
		class FName                                                NewGroupName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerStart.SetCollisionStatus
	 */
	struct AGBPlayerStart_SetCollisionStatus_Params
	{
	public:
		EPlayerStartCollisionStatus                                NewCollisionStatus;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerStart.IsValidFor
	 */
	struct AGBPlayerStart_IsValidFor_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerStart.GetGroup
	 */
	struct AGBPlayerStart_GetGroup_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerStart.GetCollisionStatus
	 */
	struct AGBPlayerStart_GetCollisionStatus_Params
	{
	public:
		EPlayerStartCollisionStatus                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.WasInPlay
	 */
	struct AGBPlayerState_WasInPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.UpdateRichPresence
	 */
	struct AGBPlayerState_UpdateRichPresence_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.SyncPlayerScores
	 */
	struct AGBPlayerState_SyncPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.SetWasInPlay
	 */
	struct AGBPlayerState_SetWasInPlay_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetTeamElement
	 */
	struct AGBPlayerState_SetTeamElement_Params
	{
	public:
		ETeamElement                                               NewTeamElement;                                          // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetServerConnectString
	 */
	struct AGBPlayerState_SetServerConnectString_Params
	{
	public:
		class FString                                              NewServerConnectString;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetReadyStatus
	 */
	struct AGBPlayerState_SetReadyStatus_Params
	{
	public:
		EReadyStatus                                               NewStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetReadyRoomStatus
	 */
	struct AGBPlayerState_SetReadyRoomStatus_Params
	{
	public:
		EReadyRoomStatus                                           NewStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetOnDuty
	 */
	struct AGBPlayerState_SetOnDuty_Params
	{
	public:
		bool                                                       bNewOnDuty;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetLives
	 */
	struct AGBPlayerState_SetLives_Params
	{
	public:
		unsigned char                                              NewLives;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetInsertionPoint
	 */
	struct AGBPlayerState_SetInsertionPoint_Params
	{
	public:
		class AGBInsertionPoint*                                   NewInsertionPoint;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetAllowedToRestart
	 */
	struct AGBPlayerState_SetAllowedToRestart_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.SetAlertLevel
	 */
	struct AGBPlayerState_SetAlertLevel_Params
	{
	public:
		EAlertLevel                                                InAlertLevel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ServerSyncPlayerScores
	 */
	struct AGBPlayerState_ServerSyncPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.ServerReportClientMissingAsset
	 */
	struct AGBPlayerState_ServerReportClientMissingAsset_Params
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ServerRegisterPlayerWithSession
	 */
	struct AGBPlayerState_ServerRegisterPlayerWithSession_Params
	{
	public:
		TArray<unsigned char>                                      AuthSessionTicket;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ResetStats
	 */
	struct AGBPlayerState_ResetStats_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.ResetPlayerScores
	 */
	struct AGBPlayerState_ResetPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.ReportClientMissingAsset
	 */
	struct AGBPlayerState_ReportClientMissingAsset_Params
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRepPlayerNameEvent
	 */
	struct AGBPlayerState_OnRepPlayerNameEvent_Params
	{
	public:
		bool                                                       bBeenWelcomed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_TeamId
	 */
	struct AGBPlayerState_OnRep_TeamId_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_TeamElement
	 */
	struct AGBPlayerState_OnRep_TeamElement_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_ReplicatedPlayerStats
	 */
	struct AGBPlayerState_OnRep_ReplicatedPlayerStats_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_ReadyStatus
	 */
	struct AGBPlayerState_OnRep_ReadyStatus_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_ReadyRoomStatus
	 */
	struct AGBPlayerState_OnRep_ReadyRoomStatus_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_PlayerScores
	 */
	struct AGBPlayerState_OnRep_PlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_PlayerPatchList
	 */
	struct AGBPlayerState_OnRep_PlayerPatchList_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_ClientAssetIsMissing
	 */
	struct AGBPlayerState_OnRep_ClientAssetIsMissing_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.OnRep_AlertLevel
	 */
	struct AGBPlayerState_OnRep_AlertLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.IsOnlyASpectatorBP
	 */
	struct AGBPlayerState_IsOnlyASpectatorBP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.IsLocal
	 */
	struct AGBPlayerState_IsLocal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.IncrementStat
	 */
	struct AGBPlayerState_IncrementStat_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatKey;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetTotalStatValue
	 */
	struct AGBPlayerState_GetTotalStatValue_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetTeamElement
	 */
	struct AGBPlayerState_GetTeamElement_Params
	{
	public:
		ETeamElement                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetStatValue
	 */
	struct AGBPlayerState_GetStatValue_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatKey;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetStatKeys
	 */
	struct AGBPlayerState_GetStatKeys_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetServerConnectString
	 */
	struct AGBPlayerState_GetServerConnectString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetReplicatedPlayerStats
	 */
	struct AGBPlayerState_GetReplicatedPlayerStats_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetReadyStatus
	 */
	struct AGBPlayerState_GetReadyStatus_Params
	{
	public:
		EReadyStatus                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetReadyRoomStatus
	 */
	struct AGBPlayerState_GetReadyRoomStatus_Params
	{
	public:
		EReadyRoomStatus                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetQuickAdminCommands
	 */
	struct AGBPlayerState_GetQuickAdminCommands_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPlayerScoreTemplateFromGameState
	 */
	struct AGBPlayerState_GetPlayerScoreTemplateFromGameState_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPlayerScores
	 */
	struct AGBPlayerState_GetPlayerScores_Params
	{
	public:
		TArray<struct FGBScoreLine>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPlayerRotation
	 */
	struct AGBPlayerState_GetPlayerRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPlayerPatchString
	 */
	struct AGBPlayerState_GetPlayerPatchString_Params
	{
	public:
		class FName                                                TargetSocket;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPlayerLocation
	 */
	struct AGBPlayerState_GetPlayerLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetPing
	 */
	struct AGBPlayerState_GetPing_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetOnDuty
	 */
	struct AGBPlayerState_GetOnDuty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetOldName
	 */
	struct AGBPlayerState_GetOldName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetLives
	 */
	struct AGBPlayerState_GetLives_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetInsertionPoint
	 */
	struct AGBPlayerState_GetInsertionPoint_Params
	{
	public:
		class AGBInsertionPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetCharacter
	 */
	struct AGBPlayerState_GetCharacter_Params
	{
	public:
		class AGBCharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.GetAlertLevel
	 */
	struct AGBPlayerState_GetAlertLevel_Params
	{
	public:
		EAlertLevel                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ClearStat
	 */
	struct AGBPlayerState_ClearStat_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatKey;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ClearReplicatedPlayerStats
	 */
	struct AGBPlayerState_ClearReplicatedPlayerStats_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.ClearPlayerScores
	 */
	struct AGBPlayerState_ClearPlayerScores_Params
	{	};

	/**
	 * Function GroundBranch.GBPlayerState.AwardPlayerScore
	 */
	struct AGBPlayerState_AwardPlayerScore_Params
	{
	public:
		class FName                                                ScoreName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ScoreMultiple;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.ArePlayerScoresInitialised
	 */
	struct AGBPlayerState_ArePlayerScoresInitialised_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.AllowedToRestart
	 */
	struct AGBPlayerState_AllowedToRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.AllowedToChangeKit
	 */
	struct AGBPlayerState_AllowedToChangeKit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPlayerState.AddReplicatedPlayerStat
	 */
	struct AGBPlayerState_AddReplicatedPlayerStat_Params
	{
	public:
		class FString                                              StatString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPortalSystemManager.RemoveLight
	 */
	struct AGBPortalSystemManager_RemoveLight_Params
	{
	public:
		class ULightComponent*                                     LightComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.SetLastFilledWith
	 */
	struct AGBPouch_SetLastFilledWith_Params
	{
	public:
		class UClass*                                              NewLastFilledWith;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewLastFilledWithSkinName;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.GetPouchType
	 */
	struct AGBPouch_GetPouchType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.GetFillCount
	 */
	struct AGBPouch_GetFillCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.GetChildUnequipInfo
	 */
	struct AGBPouch_GetChildUnequipInfo_Params
	{
	public:
		class AGBItem*                                             ChildItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6C9J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutUnequipInfo;                                          // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.GetChildEquipInfo
	 */
	struct AGBPouch_GetChildEquipInfo_Params
	{
	public:
		class AGBItem*                                             ChildItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHand                                                      TargetHand;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2YN1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGBSwitchItemInfo                                   OutEquipInfo;                                            // 0x0010(0x0070)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBPouch.FillWith
	 */
	struct AGBPouch_FillWith_Params
	{
	public:
		class UClass*                                              FillItemClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FillSkinName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.SingleInstanceOnly
	 */
	struct AGBRailAttachment_SingleInstanceOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.SetRecoilSlot
	 */
	struct AGBRailAttachment_SetRecoilSlot_Params
	{
	public:
		int32_t                                                    NewRecoilSlot;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.OnRep_RailAttachmentReplication
	 */
	struct AGBRailAttachment_OnRep_RailAttachmentReplication_Params
	{	};

	/**
	 * Function GroundBranch.GBRailAttachment.IsValidRail
	 */
	struct AGBRailAttachment_IsValidRail_Params
	{
	public:
		class UGBRailComponent*                                    RailComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.IsNotTooFarForward
	 */
	struct AGBRailAttachment_IsNotTooFarForward_Params
	{
	public:
		class AGBFirearm*                                          ParentFirearm;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.IsNotTooFarBack
	 */
	struct AGBRailAttachment_IsNotTooFarBack_Params
	{
	public:
		class AGBFirearm*                                          ParentFirearm;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetValidRailOffsetsFor
	 */
	struct AGBRailAttachment_GetValidRailOffsetsFor_Params
	{
	public:
		class AGBFirearm*                                          ParentFirearm;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FValidatedRecoilSlots>                       OutValidatedRecoilSlots;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetValidMountPointOffsets
	 */
	struct AGBRailAttachment_GetValidMountPointOffsets_Params
	{
	public:
		class AGBItem*                                             BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetRecoilSlot
	 */
	struct AGBRailAttachment_GetRecoilSlot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetRailMountValidation
	 */
	struct AGBRailAttachment_GetRailMountValidation_Params
	{
	public:
		ERailMountValidation                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetParentFirearm
	 */
	struct AGBRailAttachment_GetParentFirearm_Params
	{
	public:
		class AActor*                                              RootItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBFirearm*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetMountPoints
	 */
	struct AGBRailAttachment_GetMountPoints_Params
	{
	public:
		TArray<class UGBRailMountComponent*>                       ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetFirearmType
	 */
	struct AGBRailAttachment_GetFirearmType_Params
	{
	public:
		ERailFirearmType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetBackOffset
	 */
	struct AGBRailAttachment_GetBackOffset_Params
	{
	public:
		struct FVector                                             OutBackOffset;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.GetAttachmentOverlaps
	 */
	struct AGBRailAttachment_GetAttachmentOverlaps_Params
	{
	public:
		bool                                                       bForceCollision;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FOU9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AGBRailAttachment*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailAttachment.AutoAttach
	 */
	struct AGBRailAttachment_AutoAttach_Params
	{
	public:
		class AGBItem*                                             ParentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailComponent.GetRecoilSlots
	 */
	struct UGBRailComponent_GetRecoilSlots_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBRailComponent.GetRailFace
	 */
	struct UGBRailComponent_GetRailFace_Params
	{
	public:
		ERailFace                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.SetSightLineRelativeRotation
	 */
	struct UGBSightComponent_SetSightLineRelativeRotation_Params
	{
	public:
		struct FRotator                                            NewRelativeRotation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.SetSightLineRelativeLocation
	 */
	struct UGBSightComponent_SetSightLineRelativeLocation_Params
	{
	public:
		struct FVector                                             NewRelativeLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.SetSceneCaptureComponent
	 */
	struct UGBSightComponent_SetSceneCaptureComponent_Params
	{
	public:
		class USceneCaptureComponent2D*                            NewSceneCaptureComp;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.SetMagnificationLevel
	 */
	struct UGBSightComponent_SetMagnificationLevel_Params
	{
	public:
		float                                                      NewMagnificationLevel;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.ServerSetZeroDistance
	 */
	struct UGBSightComponent_ServerSetZeroDistance_Params
	{
	public:
		int32_t                                                    NewZeroDistance;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.ServerSetReticleColourIndex
	 */
	struct UGBSightComponent_ServerSetReticleColourIndex_Params
	{
	public:
		unsigned char                                              NewReticleColourIndex;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.ServerSetReticleBrightnessLevel
	 */
	struct UGBSightComponent_ServerSetReticleBrightnessLevel_Params
	{
	public:
		unsigned char                                              NewReticleBrightnessLevel;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.ServerSetMagnificationLevel
	 */
	struct UGBSightComponent_ServerSetMagnificationLevel_Params
	{
	public:
		float                                                      NewMagnificationLevel;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.OnRep_ReticleColourIndex
	 */
	struct UGBSightComponent_OnRep_ReticleColourIndex_Params
	{	};

	/**
	 * Function GroundBranch.GBSightComponent.OnRep_ReticleBrightness
	 */
	struct UGBSightComponent_OnRep_ReticleBrightness_Params
	{	};

	/**
	 * Function GroundBranch.GBSightComponent.OnRep_MagnificationLevel
	 */
	struct UGBSightComponent_OnRep_MagnificationLevel_Params
	{	};

	/**
	 * Function GroundBranch.GBSightComponent.OnEndViewTarget
	 */
	struct UGBSightComponent_OnEndViewTarget_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.HasValidSightLine
	 */
	struct UGBSightComponent_HasValidSightLine_Params
	{
	public:
		class AGBFirearm*                                          RelativeFirearm;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AGBItem*>                                     OtherAttachments;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class AGBItem*                                             OutBlockedBy;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetZeroDistance
	 */
	struct UGBSightComponent_GetZeroDistance_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetStatKey
	 */
	struct UGBSightComponent_GetStatKey_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetSightLineRelativeRotation
	 */
	struct UGBSightComponent_GetSightLineRelativeRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetSightLineRelativeLocation
	 */
	struct UGBSightComponent_GetSightLineRelativeLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetSightLineFocus
	 */
	struct UGBSightComponent_GetSightLineFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetReticleColourIndex
	 */
	struct UGBSightComponent_GetReticleColourIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetOpticRadius
	 */
	struct UGBSightComponent_GetOpticRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetMinMagnificationLevel
	 */
	struct UGBSightComponent_GetMinMagnificationLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetMaxMagnificationLevel
	 */
	struct UGBSightComponent_GetMaxMagnificationLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetMatchingFrontSightPost
	 */
	struct UGBSightComponent_GetMatchingFrontSightPost_Params
	{
	public:
		class AGBFirearm*                                          RelativeFirearm;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGBFrontSightPostComponent*                          OutFrontSightPostComponent;                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetMagnificationLevel
	 */
	struct UGBSightComponent_GetMagnificationLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetLevelAngle
	 */
	struct UGBSightComponent_GetLevelAngle_Params
	{
	public:
		class AGBFirearm*                                          RelativeFirearm;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldBoneLocation;                                       // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             RelativeLocationOffset;                                  // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetFocus
	 */
	struct UGBSightComponent_GetFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetDefaultMagnificationLevel
	 */
	struct UGBSightComponent_GetDefaultMagnificationLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetAnimRotOffset
	 */
	struct UGBSightComponent_GetAnimRotOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSightComponent.GetAnimLocOffset
	 */
	struct UGBSightComponent_GetAnimLocOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSky.StartCycle
	 */
	struct AGBSky_StartCycle_Params
	{	};

	/**
	 * Function GroundBranch.GBSky.SetInitialTimeOfDay
	 */
	struct AGBSky_SetInitialTimeOfDay_Params
	{
	public:
		int32_t                                                    NewInitialTimeOfDay;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSky.OnTimeSpanChangeEvent
	 */
	struct AGBSky_OnTimeSpanChangeEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBSky.OnRep_InitialTimeOfDay
	 */
	struct AGBSky_OnRep_InitialTimeOfDay_Params
	{	};

	/**
	 * Function GroundBranch.GBSky.OnRep_CycleStartTime
	 */
	struct AGBSky_OnRep_CycleStartTime_Params
	{	};

	/**
	 * Function GroundBranch.GBSky.GetTimeSpanTag
	 */
	struct AGBSky_GetTimeSpanTag_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSky.GetInitialTimeOfDay
	 */
	struct AGBSky_GetInitialTimeOfDay_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSky.GetHoursMinutesSeconds
	 */
	struct AGBSky_GetHoursMinutesSeconds_Params
	{
	public:
		int32_t                                                    OutHours;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutMinutes;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutSeconds;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBSky.EndCycle
	 */
	struct AGBSky_EndCycle_Params
	{	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.SyncTubeContents
	 */
	struct UGBTubeMagComponent_SyncTubeContents_Params
	{	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.StartPlusOne
	 */
	struct UGBTubeMagComponent_StartPlusOne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.SetIsFiringFromOpenBolt
	 */
	struct UGBTubeMagComponent_SetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       bNewIsFiringFromOpenBolt;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.SetChamberedRound
	 */
	struct UGBTubeMagComponent_SetChamberedRound_Params
	{
	public:
		class UClass*                                              NewChamberedRound;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.SetBoltHeldOpen
	 */
	struct UGBTubeMagComponent_SetBoltHeldOpen_Params
	{
	public:
		bool                                                       bNewBoltIsHeldOpen;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.OnRep_TubeContents
	 */
	struct UGBTubeMagComponent_OnRep_TubeContents_Params
	{	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.IsLiveRoundChambered
	 */
	struct UGBTubeMagComponent_IsLiveRoundChambered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetTubeContents
	 */
	struct UGBTubeMagComponent_GetTubeContents_Params
	{
	public:
		TArray<class UClass*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetRoundType
	 */
	struct UGBTubeMagComponent_GetRoundType_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetIsFiringFromOpenBolt
	 */
	struct UGBTubeMagComponent_GetIsFiringFromOpenBolt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetCount
	 */
	struct UGBTubeMagComponent_GetCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetChamberedRound
	 */
	struct UGBTubeMagComponent_GetChamberedRound_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetCapacity
	 */
	struct UGBTubeMagComponent_GetCapacity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetBulletItemClass
	 */
	struct UGBTubeMagComponent_GetBulletItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.GetBoltHeldOpen
	 */
	struct UGBTubeMagComponent_GetBoltHeldOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.FindCompatibleRound
	 */
	struct UGBTubeMagComponent_FindCompatibleRound_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBBulletItem*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBTubeMagComponent.AddRoundToTube
	 */
	struct UGBTubeMagComponent_AddRoundToTube_Params
	{
	public:
		class UClass*                                              NewRound;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.UnbindKey
	 */
	struct UGBUIFunctionLibrary_UnbindKey_Params
	{
	public:
		struct FInputBoundKey                                      TargetKey;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.UnBindCommand
	 */
	struct UGBUIFunctionLibrary_UnBindCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.SetMouseSmoothing
	 */
	struct UGBUIFunctionLibrary_SetMouseSmoothing_Params
	{
	public:
		bool                                                       NewMouseSmoothing;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.SetMousePosition
	 */
	struct UGBUIFunctionLibrary_SetMousePosition_Params
	{
	public:
		struct FVector2D                                           MousePosition;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.SetInvertMouse
	 */
	struct UGBUIFunctionLibrary_SetInvertMouse_Params
	{
	public:
		bool                                                       NewInvertMouse;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.SetDoubleClickTime
	 */
	struct UGBUIFunctionLibrary_SetDoubleClickTime_Params
	{
	public:
		float                                                      NewDoubleClickTime;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.SaveBinds
	 */
	struct UGBUIFunctionLibrary_SaveBinds_Params
	{	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.ResetBindsToDefault
	 */
	struct UGBUIFunctionLibrary_ResetBindsToDefault_Params
	{	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.RemoveAllWidgetsOfClass
	 */
	struct UGBUIFunctionLibrary_RemoveAllWidgetsOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.MoviePlayerStopPlaying
	 */
	struct UGBUIFunctionLibrary_MoviePlayerStopPlaying_Params
	{	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.IsMoviePlayerFinishedLoading
	 */
	struct UGBUIFunctionLibrary_IsMoviePlayerFinishedLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.IsMoviePlayerCurrentlyPlaying
	 */
	struct UGBUIFunctionLibrary_IsMoviePlayerCurrentlyPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.IsChildOf
	 */
	struct UGBUIFunctionLibrary_IsChildOf_Params
	{
	public:
		class UWidget*                                             ChildWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             PossibleParent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.InsertChildAt
	 */
	struct UGBUIFunctionLibrary_InsertChildAt_Params
	{
	public:
		class UWidget*                                             Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FMTL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Content;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.InitStringTable
	 */
	struct UGBUIFunctionLibrary_InitStringTable_Params
	{
	public:
		class FName                                                StringTableId;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringNameSpace;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetWidgetFromName
	 */
	struct UGBUIFunctionLibrary_GetWidgetFromName_Params
	{
	public:
		class UUserWidget*                                         ParentUserWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetParentOfClass
	 */
	struct UGBUIFunctionLibrary_GetParentOfClass_Params
	{
	public:
		class UWidget*                                             ChildWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetMouseSmoothing
	 */
	struct UGBUIFunctionLibrary_GetMouseSmoothing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetMonitorNativeResolutions
	 */
	struct UGBUIFunctionLibrary_GetMonitorNativeResolutions_Params
	{
	public:
		TArray<struct FVector2D>                                   OutMonitorResolutions;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetMapScreenshots
	 */
	struct UGBUIFunctionLibrary_GetMapScreenshots_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapName;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JHNT[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetMapList
	 */
	struct UGBUIFunctionLibrary_GetMapList_Params
	{
	public:
		class FString                                              GameModePrefix;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMapListItem>                                OutMapList;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetMapInfo
	 */
	struct UGBUIFunctionLibrary_GetMapInfo_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutTitle;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutAuthor;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutDescription;                                          // 0x0030(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetInvertMouse
	 */
	struct UGBUIFunctionLibrary_GetInvertMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetInputBoundKeyDisplayName
	 */
	struct UGBUIFunctionLibrary_GetInputBoundKeyDisplayName_Params
	{
	public:
		struct FInputBoundKey                                      TargetKey;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetGameModeList
	 */
	struct UGBUIFunctionLibrary_GetGameModeList_Params
	{
	public:
		unsigned char                                              UnknownData_M5BE[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutGameModeDisplayNames;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetFirstWidgetOfClass
	 */
	struct UGBUIFunctionLibrary_GetFirstWidgetOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J92M[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetFirstChildOfClass
	 */
	struct UGBUIFunctionLibrary_GetFirstChildOfClass_Params
	{
	public:
		class UWidget*                                             ParentWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediateOnly;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EI57[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetDoubleClickTime
	 */
	struct UGBUIFunctionLibrary_GetDoubleClickTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetCommandBoundKeys
	 */
	struct UGBUIFunctionLibrary_GetCommandBoundKeys_Params
	{
	public:
		class FName                                                Command;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInputBoundKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetCommandBoundKey
	 */
	struct UGBUIFunctionLibrary_GetCommandBoundKey_Params
	{
	public:
		class FName                                                Command;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputBoundKey                                      ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetChildrenOfClass
	 */
	struct UGBUIFunctionLibrary_GetChildrenOfClass_Params
	{
	public:
		class UWidget*                                             ParentWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UUserWidget*>                                 ChildWidgets;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediateOnly;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.GetBoundKeyFromKeyEvent
	 */
	struct UGBUIFunctionLibrary_GetBoundKeyFromKeyEvent_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputBoundKey                                      ReturnValue;                                             // 0x0038(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.ForcePlayerInputUpdate
	 */
	struct UGBUIFunctionLibrary_ForcePlayerInputUpdate_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.FindScreenEdgeLocationForWorldLocationAlt
	 */
	struct UGBUIFunctionLibrary_FindScreenEdgeLocationForWorldLocationAlt_Params
	{
	public:
		struct FTransform                                          ViewTM;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      FOV;                                                     // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenSize;                                              // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EdgePercent;                                             // 0x0048(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutScreenPosition;                                       // 0x004C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutRotationAngleDegrees;                                 // 0x0054(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsOnScreen;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.FindScreenEdgeLocationForWorldLocation
	 */
	struct UGBUIFunctionLibrary_FindScreenEdgeLocationForWorldLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EdgePercent;                                             // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutScreenPosition;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutRotationAngleDegrees;                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsOnScreen;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.BreakGeometry
	 */
	struct UGBUIFunctionLibrary_BreakGeometry_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutPosition;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutAbsolutePosition;                                     // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutSize;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutScale;                                                // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.BindExecToKey
	 */
	struct UGBUIFunctionLibrary_BindExecToKey_Params
	{
	public:
		class FString                                              ExecCommand;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputBoundKey                                      TargetKey;                                               // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.BindAxisToKey
	 */
	struct UGBUIFunctionLibrary_BindAxisToKey_Params
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputBoundKey                                      TargetKey;                                               // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUIFunctionLibrary.BindActionToKey
	 */
	struct UGBUIFunctionLibrary_BindActionToKey_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputBoundKey                                      TargetKey;                                               // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.ServerUseWithParams
	 */
	struct UGBUseInterface_ServerUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.ServerUse
	 */
	struct UGBUseInterface_ServerUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.ClientUseWithParams
	 */
	struct UGBUseInterface_ClientUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.ClientUse
	 */
	struct UGBUseInterface_ClientUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.AIUseWithParams
	 */
	struct UGBUseInterface_AIUseWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.AIUse
	 */
	struct UGBUseInterface_AIUse_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.AIQuestionWithParams
	 */
	struct UGBUseInterface_AIQuestionWithParams_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBUseInterface.AIQuestion
	 */
	struct UGBUseInterface_AIQuestion_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UseType;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBVOIPManager.SetVOIPSwitchEvent
	 */
	struct UGBVOIPManager_SetVOIPSwitchEvent_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVOIPType                                                  VOIPType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBVOIPManager.SetCharVoiceSwitchEvent
	 */
	struct UGBVOIPManager_SetCharVoiceSwitchEvent_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRadio;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocal;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBVOIPManager.OnPlayerCharVoicePostEventCallback
	 */
	struct UGBVOIPManager_OnPlayerCharVoicePostEventCallback_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y7LO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBVOIPManager.GetPlayerController
	 */
	struct UGBVOIPManager_GetPlayerController_Params
	{
	public:
		class AGBPlayerController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBWeatherInfo.OnUpdateTransformEvent
	 */
	struct AGBWeatherInfo_OnUpdateTransformEvent_Params
	{	};

	/**
	 * Function GroundBranch.GBWorldSettings.GetWorldSettings
	 */
	struct AGBWorldSettings_GetWorldSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGBWorldSettings*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBWorldSettings.GetLevelSummary
	 */
	struct AGBWorldSettings_GetLevelSummary_Params
	{
	public:
		class UGBLevelSummary*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.GBWorldSettings.GetDefaultSpatialSoundTag
	 */
	struct AGBWorldSettings_GetDefaultSpatialSoundTag_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.JoyColorWheel.SetColor
	 */
	struct UJoyColorWheel_SetColor_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SkipAnimation;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.JoyColorWheel.GetColor
	 */
	struct UJoyColorWheel_GetColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.VectorRadiansToDegrees
	 */
	struct UTKMathFunctionLibrary_VectorRadiansToDegrees_Params
	{
	public:
		struct FVector                                             RadVector;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.VectorDegreesToRadians
	 */
	struct UTKMathFunctionLibrary_VectorDegreesToRadians_Params
	{
	public:
		struct FVector                                             DegVector;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.SphereBoxIntersection
	 */
	struct UTKMathFunctionLibrary_SphereBoxIntersection_Params
	{
	public:
		struct FVector                                             SphereOrigin;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoxOrigin;                                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtent;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.SignedDistancePlanePoint
	 */
	struct UTKMathFunctionLibrary_SignedDistancePlanePoint_Params
	{
	public:
		struct FVector                                             PlaneNormal;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PlanePoint;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.SetVectorLength
	 */
	struct UTKMathFunctionLibrary_SetVectorLength_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Size;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.SetCenterOfMassOffset
	 */
	struct UTKMathFunctionLibrary_SetCenterOfMassOffset_Params
	{
	public:
		class UPrimitiveComponent*                                 Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.RoundToUpperMultiple
	 */
	struct UTKMathFunctionLibrary_RoundToUpperMultiple_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Multiple;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       skipSelf;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PJTR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.RoundToNearestMultiple
	 */
	struct UTKMathFunctionLibrary_RoundToNearestMultiple_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Multiple;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.RoundToLowerMultiple
	 */
	struct UTKMathFunctionLibrary_RoundToLowerMultiple_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Multiple;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       skipSelf;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_83US[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ProjectPointOnLine
	 */
	struct UTKMathFunctionLibrary_ProjectPointOnLine_Params
	{
	public:
		struct FVector                                             LineOrigin;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineDirection;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	 */
	struct UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params
	{
	public:
		struct FVector                                             LinePoint1;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint2;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.NegateVector2D
	 */
	struct UTKMathFunctionLibrary_NegateVector2D_Params
	{
	public:
		struct FVector2D                                           A;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.NegateInt
	 */
	struct UTKMathFunctionLibrary_NegateInt_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.NegateFloat
	 */
	struct UTKMathFunctionLibrary_NegateFloat_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.LineToLineIntersection
	 */
	struct UTKMathFunctionLibrary_LineToLineIntersection_Params
	{
	public:
		struct FVector                                             IntersectionPoint;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint1;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineDir1;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint2;                                              // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineDir2;                                                // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.LineExtentBoxIntersection
	 */
	struct UTKMathFunctionLibrary_LineExtentBoxIntersection_Params
	{
	public:
		struct FBox                                                InBox;                                                   // 0x0000(0x001C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Extent;                                                  // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x004C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HitTime;                                                 // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x005C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.IsPowerOfTwo
	 */
	struct UTKMathFunctionLibrary_IsPowerOfTwo_Params
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.IsPointInsideBox
	 */
	struct UTKMathFunctionLibrary_IsPointInsideBox_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoxOrigin;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtent;                                               // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.IsMultipleOf
	 */
	struct UTKMathFunctionLibrary_IsMultipleOf_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Multiple;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.IsLineInsideSphere
	 */
	struct UTKMathFunctionLibrary_IsLineInsideSphere_Params
	{
	public:
		struct FVector                                             LineStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineDir;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LineLength;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SphereOrigin;                                            // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.IsEvenNumber
	 */
	struct UTKMathFunctionLibrary_IsEvenNumber_Params
	{
	public:
		float                                                      A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.GridSnap
	 */
	struct UTKMathFunctionLibrary_GridSnap_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Grid;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.GetVelocityAtPoint
	 */
	struct UTKMathFunctionLibrary_GetVelocityAtPoint_Params
	{
	public:
		class UPrimitiveComponent*                                 Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DrawDebugInfo;                                           // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G0QZ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	 */
	struct UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpeedUnit                                                 SpeedUnit;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9S8V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ConvertAnchorToAnchor
	 */
	struct UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAnchors                                            CurrentAnchor;                                           // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMargin                                             Offsets;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAnchors                                            TargetAnchor;                                            // 0x0028(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMargin                                             ConvertedOffsets;                                        // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	 */
	struct UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params
	{
	public:
		struct FVector                                             closestPointLine1;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             closestPointLine2;                                       // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint1;                                              // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             lineVec1;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint2;                                              // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             lineVec2;                                                // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	 */
	struct UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params
	{
	public:
		struct FVector                                             Line1Start;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Line1End;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Line2Start;                                              // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Line2End;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint1;                                              // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinePoint2;                                              // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	 */
	struct UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params
	{
	public:
		struct FVector                                             SphereOrigin;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineOrigin;                                              // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineDir;                                                 // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	 */
	struct UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineStart;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineEnd;                                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GroundBranch.TKMathFunctionLibrary.AreLineSegmentsCrossing
	 */
	struct UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params
	{
	public:
		struct FVector                                             pointA1;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             pointA2;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             pointB1;                                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             pointB2;                                                 // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
